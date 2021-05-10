# ![XR purple cowboy emoji](./resources/XR_wranglerx40.png) XREW [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

*generated version commited under /generated/xrew.h : OpenXR 1.0.15 Grab the raw header file here : [xrew.h](https://raw.githubusercontent.com/LIV/XREW/master/generated/xrew.h)*

XREW is a single-header OpenXR Extension Wrangler, generated from the [OpenXR registry](https://github.com/KhronosGroup/OpenXR-SDK-Source/blob/master/specification/registry/xr.xml)

This automate the task of calling `xrGetInstanceProcAddr()` for every non-core function you may need. This do not replace, but intead complement, the OpenXR loader present in the SDK.

Naming and general "way of working" is inspired by [GLEW](http://glew.sourceforge.net/). However, XREW is a really small header only library and do not interfere with the linking process.

## How to use XREW

Obain a copy of `xrew.h` by downloading it here, cloning this repository, or by generating it yourself from the python script and the registry.

```C
//Include the header only library:
#include "xrew.h"

//Init xrew
xrewInit(instance); //instance is a previously created OpenXR instance

/*
NOTE! The Validation layer may implement extension functions that do not exist for your runtime.
A function pointer being loaded here do not mean that the function is avaialable to you, 
just that you will not immediately crash if you try to call it.

You must check for the extension to be available before instance creattion,
and you must enable it before trying to call any command that is solly defined in said 
extension.
*/

//Check for extension command to be loaded
if(xrGetOpenGLGraphicsRequirementKHR != NULL)
{
    //The xrGetOpenGLGraphicsRequirementKHR OpenXR command is callable
}


//If you want to unload all loaded pointers
xrewQuit();
```

## How to generate `xrew.h`

Make sure to have `python3` and `git` installed on your system, running the following:

```bash
git clone https://github.com/LIV/XREW.git --recursive
cd xrew
python3 gen.py
```

will create `xrew.h` in the repository root directory.


> Note that you need to clone the OpenXR SDK submodule to have access to the machine-readable API registry (`xr.xml`).


## How to upgrade XREW to newer OpenXR release

Just pull the OpenXR-SDK-Source submodule to a newer version, and call `gen.py` again.
For convinience, copy and commit the output in `/generated/xrew.h`.

## Legal

`xrew.h` and the generator script
Copyright (c) 2021 LIV Inc.
Licensed under the MIT Licence Agreement

XREW logo based on "Face with Cowboy Hat" Twemoji v2 from the Twitter Emoji Project. Original work under Creative Commons Attribution 4.0 International License

*OpenXR™ is a trademark owned by The Khronos Group Inc. and is registered as a trademark in China, the European Union, Japan and the United Kingdom.*
