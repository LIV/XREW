#include "xrew.h"
#include <cstdio>
#include <cstring>
#include <cstdint>
#include <vector>

int main()
{
	int statusVal = 0;
	XrInstance instance = XR_NULL_HANDLE;
	XrBool32 hasDebugExt = XR_FALSE;
	XrDebugUtilsMessengerEXT debugMessenger = XR_NULL_HANDLE;

	//Enable the debug extension, if possible 
	std::vector<const char*> enabledExtensions;
	uint32_t nbExtesnsions = 0;
	xrEnumerateInstanceExtensionProperties(nullptr, nbExtesnsions, &nbExtesnsions, nullptr);
	std::vector<XrExtensionProperties> availExts(nbExtesnsions, {XR_TYPE_EXTENSION_PROPERTIES});
	xrEnumerateInstanceExtensionProperties(nullptr, availExts.size(), &nbExtesnsions, availExts.data());
	if(const auto dbgUtilsIt = std::ranges::find_if(availExts, [&](const XrExtensionProperties& extProp) {return 0 == strcmp(XR_EXT_DEBUG_UTILS_EXTENSION_NAME, extProp.extensionName);}); 
		dbgUtilsIt != std::end(availExts))
		hasDebugExt=XR_TRUE, enabledExtensions.push_back(XR_EXT_DEBUG_UTILS_EXTENSION_NAME);

	XrInstanceCreateInfo instanceCreateInfo{};
	instanceCreateInfo.type = XR_TYPE_INSTANCE_CREATE_INFO;
	instanceCreateInfo.applicationInfo.apiVersion = XR_CURRENT_API_VERSION;
	strcpy(instanceCreateInfo.applicationInfo.applicationName, "XREW TEST PROGRAM");
	instanceCreateInfo.enabledExtensionCount = enabledExtensions.size();
	instanceCreateInfo.enabledExtensionNames = enabledExtensions.data();

	if (XR_FAILED(xrCreateInstance(&instanceCreateInfo, &instance)))
		return -1337;

	const XrBool32 initResult = xrewInit(instance);
	if (initResult != XR_TRUE)
		statusVal = -1;

	//If we have the debug utils extension, show how we can just call the xrCreateDebugUtilsMessengerEXT function 
	if(initResult && hasDebugExt)
	{
		XrDebugUtilsMessengerCreateInfoEXT debugUtilsMessengerCreateInfo{ XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT };
		debugUtilsMessengerCreateInfo.userCallback = [](
			XrDebugUtilsMessageSeverityFlagsEXT              /*messageSeverity*/,
			XrDebugUtilsMessageTypeFlagsEXT                  /*messageTypes*/,
			const XrDebugUtilsMessengerCallbackDataEXT* callbackData,
			void* /*userData*/) ->XrBool32
		{
			std::fprintf(stderr, "%s\n", callbackData->message);
			return XR_TRUE;
		};

		xrCreateDebugUtilsMessengerEXT(instance, &debugUtilsMessengerCreateInfo, &debugMessenger);
	}

	/* ... do something with OpenXR here ... */

	if (XR_NULL_HANDLE != debugMessenger)
		xrDestroyDebugUtilsMessengerEXT(debugMessenger);

	xrewQuit();

	if(XR_FAILED(xrDestroyInstance(instance)))
		return -2000+statusVal;

	return statusVal;
}
