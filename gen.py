#!/usr/bin/env python3

# MIT License

# Copyright (c) 2021 LIV Inc.

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

import xml.etree.ElementTree as ET
from datetime import datetime

def write_indent(file, x):
	for i in range(x):
		file.write("\t")

def get_pfn_name(name):
	return "PFN_" + name

def get_xrew_name(name):
	return "__xrew_" + name

def get_pointer_define(name):
	return "static " + get_pfn_name(name) + " " + get_xrew_name(name) + " = NULL;\n"

def write_static_ptr_def(file, command):
	file.write(get_pointer_define(command))

def write_static_ptr_load(file, command):
	file.write("xrGetInstanceProcAddr(instance, \"" + command + "\", (PFN_xrVoidFunction *) &" + get_xrew_name(command) + ");\n")

def write_static_ptr_forget(file, command):
	file.write(get_xrew_name(command) + " = NULL;\n")

def wirte_macro_function_stub_call(file, command):
	file.write("#define " + command + "\t"+ get_xrew_name(command) + "\n")

def write_whitespace(file):
	file.write("\n\n")

xrew = open("./xrew.h", "w+")

xrew.write("// This file is autogenertaed by XREW, the OpenXR Extension Wrangler. Do not modify!\n")

xrew.write("// Timestamp : ")
xrew.write(datetime.utcnow().isoformat())
write_whitespace(xrew)

xrew.write("/*\n")
mit = open("./LICENSE", "r")
xrew.write(mit.read())
mit.close()
xrew.write("*/\n")

write_whitespace(xrew)

xrew.write("#ifndef __xrew_h\n")
xrew.write("#define __xrew_h\n\n")
xrew.write("#include <openxr/openxr.h>\n\n")

xrew.write("#ifdef __cplusplus\nextern \"C\"\n{\n#endif\n\n")

print("XREW generator")
xr_registry = ET.parse("./OpenXR-SDK-Source/specification/registry/xr.xml")
xr_root = xr_registry.getroot()

xr_commands_to_load = []
xr_protected_commands_to_load = {}

xr_extensions = xr_root.findall("extensions")
for ext in xr_extensions[0]:
	if ext.attrib["supported"] == "openxr":
		commands = ext[0].findall("command")
		for ext_command in commands:
			if "protect" in ext.attrib:
				protect = ext.attrib["protect"]
				if protect not in xr_protected_commands_to_load:
					xr_protected_commands_to_load[protect] = []
				xr_protected_commands_to_load[protect].append(ext_command.attrib["name"])
			else:
				xr_commands_to_load.append(ext_command.attrib["name"])


print("list of all non-core (extensions) commands in this version of openxr:")
print(xr_commands_to_load)
print(xr_protected_commands_to_load)


for command in xr_commands_to_load:
	write_static_ptr_def(xrew, command)

for protect in xr_protected_commands_to_load:
	xrew.write("#ifdef " + protect + "\n")
	for command in xr_protected_commands_to_load[protect]:
		write_static_ptr_def(xrew, command)
	xrew.write("#endif\n")


write_whitespace(xrew)

xrew.write("static XrBool32 xrewInit(XrInstance instance)\n")
xrew.write("{\n")
for command in xr_commands_to_load:
	write_indent(xrew, 1)
	write_static_ptr_load(xrew, command)
for protect in xr_protected_commands_to_load:
	xrew.write("#ifdef " + protect + "\n")
	for command in xr_protected_commands_to_load[protect]:
		write_indent(xrew, 1)
		write_static_ptr_load(xrew, command)
	xrew.write("#endif\n")
xrew.write("	return XR_TRUE; //TODO error checking\n")
xrew.write("}\n")

xrew.write("static void xrewQuit()\n")
xrew.write("{\n")
for command in xr_commands_to_load:
	write_indent(xrew, 1)
	write_static_ptr_forget(xrew, command)
for protect in xr_protected_commands_to_load:
	xrew.write("#ifdef " + protect + "\n")
	for command in xr_protected_commands_to_load[protect]:
		write_indent(xrew, 1)
		write_static_ptr_forget(xrew, command)
	xrew.write("#endif\n")

xrew.write("}\n")

write_whitespace(xrew)

for command in xr_commands_to_load:
	wirte_macro_function_stub_call(xrew, command)
for protect in xr_protected_commands_to_load:
	xrew.write("#ifdef " + protect + "\n")
	for command in xr_protected_commands_to_load[protect]:
		wirte_macro_function_stub_call(xrew, command)
	xrew.write("#endif\n")


write_whitespace(xrew)

xrew.write("#ifdef __cplusplus\n}\n#endif\n\n")
xrew.write("#endif // __xrew_h\n")

xrew.close()

print("done!")
