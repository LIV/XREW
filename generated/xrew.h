// This file is autogenertaed by XREW, the OpenXR Extension Wrangler. Do not modify!
// Timestamp : 2021-04-15T09:59:47.157292

/*
MIT License

Copyright (c) 2021 LIV Inc.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/


#ifndef __xrew_h
#define __xrew_h

#include <openxr/openxr.h>

#ifdef __cplusplus
extern "C"
{
#endif

static PFN_xrPerfSettingsSetPerformanceLevelEXT __xrew_xrPerfSettingsSetPerformanceLevelEXT = NULL;
static PFN_xrThermalGetTemperatureTrendEXT __xrew_xrThermalGetTemperatureTrendEXT = NULL;
static PFN_xrSetDebugUtilsObjectNameEXT __xrew_xrSetDebugUtilsObjectNameEXT = NULL;
static PFN_xrCreateDebugUtilsMessengerEXT __xrew_xrCreateDebugUtilsMessengerEXT = NULL;
static PFN_xrDestroyDebugUtilsMessengerEXT __xrew_xrDestroyDebugUtilsMessengerEXT = NULL;
static PFN_xrSubmitDebugUtilsMessageEXT __xrew_xrSubmitDebugUtilsMessageEXT = NULL;
static PFN_xrSessionBeginDebugUtilsLabelRegionEXT __xrew_xrSessionBeginDebugUtilsLabelRegionEXT = NULL;
static PFN_xrSessionEndDebugUtilsLabelRegionEXT __xrew_xrSessionEndDebugUtilsLabelRegionEXT = NULL;
static PFN_xrSessionInsertDebugUtilsLabelEXT __xrew_xrSessionInsertDebugUtilsLabelEXT = NULL;
static PFN_xrGetVisibilityMaskKHR __xrew_xrGetVisibilityMaskKHR = NULL;
static PFN_xrCreateSpatialAnchorMSFT __xrew_xrCreateSpatialAnchorMSFT = NULL;
static PFN_xrCreateSpatialAnchorSpaceMSFT __xrew_xrCreateSpatialAnchorSpaceMSFT = NULL;
static PFN_xrDestroySpatialAnchorMSFT __xrew_xrDestroySpatialAnchorMSFT = NULL;
static PFN_xrSetInputDeviceActiveEXT __xrew_xrSetInputDeviceActiveEXT = NULL;
static PFN_xrSetInputDeviceStateBoolEXT __xrew_xrSetInputDeviceStateBoolEXT = NULL;
static PFN_xrSetInputDeviceStateFloatEXT __xrew_xrSetInputDeviceStateFloatEXT = NULL;
static PFN_xrSetInputDeviceStateVector2fEXT __xrew_xrSetInputDeviceStateVector2fEXT = NULL;
static PFN_xrSetInputDeviceLocationEXT __xrew_xrSetInputDeviceLocationEXT = NULL;
static PFN_xrCreateSpatialGraphNodeSpaceMSFT __xrew_xrCreateSpatialGraphNodeSpaceMSFT = NULL;
static PFN_xrCreateHandTrackerEXT __xrew_xrCreateHandTrackerEXT = NULL;
static PFN_xrDestroyHandTrackerEXT __xrew_xrDestroyHandTrackerEXT = NULL;
static PFN_xrLocateHandJointsEXT __xrew_xrLocateHandJointsEXT = NULL;
static PFN_xrCreateHandMeshSpaceMSFT __xrew_xrCreateHandMeshSpaceMSFT = NULL;
static PFN_xrUpdateHandMeshMSFT __xrew_xrUpdateHandMeshMSFT = NULL;
static PFN_xrGetControllerModelKeyMSFT __xrew_xrGetControllerModelKeyMSFT = NULL;
static PFN_xrLoadControllerModelMSFT __xrew_xrLoadControllerModelMSFT = NULL;
static PFN_xrGetControllerModelPropertiesMSFT __xrew_xrGetControllerModelPropertiesMSFT = NULL;
static PFN_xrGetControllerModelStateMSFT __xrew_xrGetControllerModelStateMSFT = NULL;
static PFN_xrInitializeLoaderKHR __xrew_xrInitializeLoaderKHR = NULL;
static PFN_xrEnumerateDisplayRefreshRatesFB __xrew_xrEnumerateDisplayRefreshRatesFB = NULL;
static PFN_xrGetDisplayRefreshRateFB __xrew_xrGetDisplayRefreshRateFB = NULL;
static PFN_xrRequestDisplayRefreshRateFB __xrew_xrRequestDisplayRefreshRateFB = NULL;
static PFN_xrEnumerateColorSpacesFB __xrew_xrEnumerateColorSpacesFB = NULL;
static PFN_xrSetColorSpaceFB __xrew_xrSetColorSpaceFB = NULL;
static PFN_xrSetEnvironmentDepthEstimationVARJO __xrew_xrSetEnvironmentDepthEstimationVARJO = NULL;
#ifdef XR_USE_PLATFORM_ANDROID
static PFN_xrSetAndroidApplicationThreadKHR __xrew_xrSetAndroidApplicationThreadKHR = NULL;
static PFN_xrCreateSwapchainAndroidSurfaceKHR __xrew_xrCreateSwapchainAndroidSurfaceKHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_OPENGL
static PFN_xrGetOpenGLGraphicsRequirementsKHR __xrew_xrGetOpenGLGraphicsRequirementsKHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_OPENGL_ES
static PFN_xrGetOpenGLESGraphicsRequirementsKHR __xrew_xrGetOpenGLESGraphicsRequirementsKHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_VULKAN
static PFN_xrGetVulkanInstanceExtensionsKHR __xrew_xrGetVulkanInstanceExtensionsKHR = NULL;
static PFN_xrGetVulkanDeviceExtensionsKHR __xrew_xrGetVulkanDeviceExtensionsKHR = NULL;
static PFN_xrGetVulkanGraphicsDeviceKHR __xrew_xrGetVulkanGraphicsDeviceKHR = NULL;
static PFN_xrGetVulkanGraphicsRequirementsKHR __xrew_xrGetVulkanGraphicsRequirementsKHR = NULL;
static PFN_xrCreateVulkanInstanceKHR __xrew_xrCreateVulkanInstanceKHR = NULL;
static PFN_xrCreateVulkanDeviceKHR __xrew_xrCreateVulkanDeviceKHR = NULL;
static PFN_xrGetVulkanGraphicsDevice2KHR __xrew_xrGetVulkanGraphicsDevice2KHR = NULL;
static PFN_xrGetVulkanGraphicsRequirements2KHR __xrew_xrGetVulkanGraphicsRequirements2KHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_D3D11
static PFN_xrGetD3D11GraphicsRequirementsKHR __xrew_xrGetD3D11GraphicsRequirementsKHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_D3D12
static PFN_xrGetD3D12GraphicsRequirementsKHR __xrew_xrGetD3D12GraphicsRequirementsKHR = NULL;
#endif
#ifdef XR_USE_PLATFORM_WIN32
static PFN_xrConvertWin32PerformanceCounterToTimeKHR __xrew_xrConvertWin32PerformanceCounterToTimeKHR = NULL;
static PFN_xrConvertTimeToWin32PerformanceCounterKHR __xrew_xrConvertTimeToWin32PerformanceCounterKHR = NULL;
static PFN_xrCreateSpatialAnchorFromPerceptionAnchorMSFT __xrew_xrCreateSpatialAnchorFromPerceptionAnchorMSFT = NULL;
static PFN_xrTryGetPerceptionAnchorFromSpatialAnchorMSFT __xrew_xrTryGetPerceptionAnchorFromSpatialAnchorMSFT = NULL;
#endif
#ifdef XR_USE_TIMESPEC
static PFN_xrConvertTimespecTimeToTimeKHR __xrew_xrConvertTimespecTimeToTimeKHR = NULL;
static PFN_xrConvertTimeToTimespecTimeKHR __xrew_xrConvertTimeToTimespecTimeKHR = NULL;
#endif


static XrBool32 xrewInit(XrInstance instance)
{
	xrGetInstanceProcAddr(instance, "xrPerfSettingsSetPerformanceLevelEXT", (PFN_xrVoidFunction *) &__xrew_xrPerfSettingsSetPerformanceLevelEXT);
	xrGetInstanceProcAddr(instance, "xrThermalGetTemperatureTrendEXT", (PFN_xrVoidFunction *) &__xrew_xrThermalGetTemperatureTrendEXT);
	xrGetInstanceProcAddr(instance, "xrSetDebugUtilsObjectNameEXT", (PFN_xrVoidFunction *) &__xrew_xrSetDebugUtilsObjectNameEXT);
	xrGetInstanceProcAddr(instance, "xrCreateDebugUtilsMessengerEXT", (PFN_xrVoidFunction *) &__xrew_xrCreateDebugUtilsMessengerEXT);
	xrGetInstanceProcAddr(instance, "xrDestroyDebugUtilsMessengerEXT", (PFN_xrVoidFunction *) &__xrew_xrDestroyDebugUtilsMessengerEXT);
	xrGetInstanceProcAddr(instance, "xrSubmitDebugUtilsMessageEXT", (PFN_xrVoidFunction *) &__xrew_xrSubmitDebugUtilsMessageEXT);
	xrGetInstanceProcAddr(instance, "xrSessionBeginDebugUtilsLabelRegionEXT", (PFN_xrVoidFunction *) &__xrew_xrSessionBeginDebugUtilsLabelRegionEXT);
	xrGetInstanceProcAddr(instance, "xrSessionEndDebugUtilsLabelRegionEXT", (PFN_xrVoidFunction *) &__xrew_xrSessionEndDebugUtilsLabelRegionEXT);
	xrGetInstanceProcAddr(instance, "xrSessionInsertDebugUtilsLabelEXT", (PFN_xrVoidFunction *) &__xrew_xrSessionInsertDebugUtilsLabelEXT);
	xrGetInstanceProcAddr(instance, "xrGetVisibilityMaskKHR", (PFN_xrVoidFunction *) &__xrew_xrGetVisibilityMaskKHR);
	xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorMSFT", (PFN_xrVoidFunction *) &__xrew_xrCreateSpatialAnchorMSFT);
	xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorSpaceMSFT", (PFN_xrVoidFunction *) &__xrew_xrCreateSpatialAnchorSpaceMSFT);
	xrGetInstanceProcAddr(instance, "xrDestroySpatialAnchorMSFT", (PFN_xrVoidFunction *) &__xrew_xrDestroySpatialAnchorMSFT);
	xrGetInstanceProcAddr(instance, "xrSetInputDeviceActiveEXT", (PFN_xrVoidFunction *) &__xrew_xrSetInputDeviceActiveEXT);
	xrGetInstanceProcAddr(instance, "xrSetInputDeviceStateBoolEXT", (PFN_xrVoidFunction *) &__xrew_xrSetInputDeviceStateBoolEXT);
	xrGetInstanceProcAddr(instance, "xrSetInputDeviceStateFloatEXT", (PFN_xrVoidFunction *) &__xrew_xrSetInputDeviceStateFloatEXT);
	xrGetInstanceProcAddr(instance, "xrSetInputDeviceStateVector2fEXT", (PFN_xrVoidFunction *) &__xrew_xrSetInputDeviceStateVector2fEXT);
	xrGetInstanceProcAddr(instance, "xrSetInputDeviceLocationEXT", (PFN_xrVoidFunction *) &__xrew_xrSetInputDeviceLocationEXT);
	xrGetInstanceProcAddr(instance, "xrCreateSpatialGraphNodeSpaceMSFT", (PFN_xrVoidFunction *) &__xrew_xrCreateSpatialGraphNodeSpaceMSFT);
	xrGetInstanceProcAddr(instance, "xrCreateHandTrackerEXT", (PFN_xrVoidFunction *) &__xrew_xrCreateHandTrackerEXT);
	xrGetInstanceProcAddr(instance, "xrDestroyHandTrackerEXT", (PFN_xrVoidFunction *) &__xrew_xrDestroyHandTrackerEXT);
	xrGetInstanceProcAddr(instance, "xrLocateHandJointsEXT", (PFN_xrVoidFunction *) &__xrew_xrLocateHandJointsEXT);
	xrGetInstanceProcAddr(instance, "xrCreateHandMeshSpaceMSFT", (PFN_xrVoidFunction *) &__xrew_xrCreateHandMeshSpaceMSFT);
	xrGetInstanceProcAddr(instance, "xrUpdateHandMeshMSFT", (PFN_xrVoidFunction *) &__xrew_xrUpdateHandMeshMSFT);
	xrGetInstanceProcAddr(instance, "xrGetControllerModelKeyMSFT", (PFN_xrVoidFunction *) &__xrew_xrGetControllerModelKeyMSFT);
	xrGetInstanceProcAddr(instance, "xrLoadControllerModelMSFT", (PFN_xrVoidFunction *) &__xrew_xrLoadControllerModelMSFT);
	xrGetInstanceProcAddr(instance, "xrGetControllerModelPropertiesMSFT", (PFN_xrVoidFunction *) &__xrew_xrGetControllerModelPropertiesMSFT);
	xrGetInstanceProcAddr(instance, "xrGetControllerModelStateMSFT", (PFN_xrVoidFunction *) &__xrew_xrGetControllerModelStateMSFT);
	xrGetInstanceProcAddr(instance, "xrInitializeLoaderKHR", (PFN_xrVoidFunction *) &__xrew_xrInitializeLoaderKHR);
	xrGetInstanceProcAddr(instance, "xrEnumerateDisplayRefreshRatesFB", (PFN_xrVoidFunction *) &__xrew_xrEnumerateDisplayRefreshRatesFB);
	xrGetInstanceProcAddr(instance, "xrGetDisplayRefreshRateFB", (PFN_xrVoidFunction *) &__xrew_xrGetDisplayRefreshRateFB);
	xrGetInstanceProcAddr(instance, "xrRequestDisplayRefreshRateFB", (PFN_xrVoidFunction *) &__xrew_xrRequestDisplayRefreshRateFB);
	xrGetInstanceProcAddr(instance, "xrEnumerateColorSpacesFB", (PFN_xrVoidFunction *) &__xrew_xrEnumerateColorSpacesFB);
	xrGetInstanceProcAddr(instance, "xrSetColorSpaceFB", (PFN_xrVoidFunction *) &__xrew_xrSetColorSpaceFB);
	xrGetInstanceProcAddr(instance, "xrSetEnvironmentDepthEstimationVARJO", (PFN_xrVoidFunction *) &__xrew_xrSetEnvironmentDepthEstimationVARJO);
#ifdef XR_USE_PLATFORM_ANDROID
	xrGetInstanceProcAddr(instance, "xrSetAndroidApplicationThreadKHR", (PFN_xrVoidFunction *) &__xrew_xrSetAndroidApplicationThreadKHR);
	xrGetInstanceProcAddr(instance, "xrCreateSwapchainAndroidSurfaceKHR", (PFN_xrVoidFunction *) &__xrew_xrCreateSwapchainAndroidSurfaceKHR);
#endif
#ifdef XR_USE_GRAPHICS_API_OPENGL
	xrGetInstanceProcAddr(instance, "xrGetOpenGLGraphicsRequirementsKHR", (PFN_xrVoidFunction *) &__xrew_xrGetOpenGLGraphicsRequirementsKHR);
#endif
#ifdef XR_USE_GRAPHICS_API_OPENGL_ES
	xrGetInstanceProcAddr(instance, "xrGetOpenGLESGraphicsRequirementsKHR", (PFN_xrVoidFunction *) &__xrew_xrGetOpenGLESGraphicsRequirementsKHR);
#endif
#ifdef XR_USE_GRAPHICS_API_VULKAN
	xrGetInstanceProcAddr(instance, "xrGetVulkanInstanceExtensionsKHR", (PFN_xrVoidFunction *) &__xrew_xrGetVulkanInstanceExtensionsKHR);
	xrGetInstanceProcAddr(instance, "xrGetVulkanDeviceExtensionsKHR", (PFN_xrVoidFunction *) &__xrew_xrGetVulkanDeviceExtensionsKHR);
	xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsDeviceKHR", (PFN_xrVoidFunction *) &__xrew_xrGetVulkanGraphicsDeviceKHR);
	xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsRequirementsKHR", (PFN_xrVoidFunction *) &__xrew_xrGetVulkanGraphicsRequirementsKHR);
	xrGetInstanceProcAddr(instance, "xrCreateVulkanInstanceKHR", (PFN_xrVoidFunction *) &__xrew_xrCreateVulkanInstanceKHR);
	xrGetInstanceProcAddr(instance, "xrCreateVulkanDeviceKHR", (PFN_xrVoidFunction *) &__xrew_xrCreateVulkanDeviceKHR);
	xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsDevice2KHR", (PFN_xrVoidFunction *) &__xrew_xrGetVulkanGraphicsDevice2KHR);
	xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsRequirements2KHR", (PFN_xrVoidFunction *) &__xrew_xrGetVulkanGraphicsRequirements2KHR);
#endif
#ifdef XR_USE_GRAPHICS_API_D3D11
	xrGetInstanceProcAddr(instance, "xrGetD3D11GraphicsRequirementsKHR", (PFN_xrVoidFunction *) &__xrew_xrGetD3D11GraphicsRequirementsKHR);
#endif
#ifdef XR_USE_GRAPHICS_API_D3D12
	xrGetInstanceProcAddr(instance, "xrGetD3D12GraphicsRequirementsKHR", (PFN_xrVoidFunction *) &__xrew_xrGetD3D12GraphicsRequirementsKHR);
#endif
#ifdef XR_USE_PLATFORM_WIN32
	xrGetInstanceProcAddr(instance, "xrConvertWin32PerformanceCounterToTimeKHR", (PFN_xrVoidFunction *) &__xrew_xrConvertWin32PerformanceCounterToTimeKHR);
	xrGetInstanceProcAddr(instance, "xrConvertTimeToWin32PerformanceCounterKHR", (PFN_xrVoidFunction *) &__xrew_xrConvertTimeToWin32PerformanceCounterKHR);
	xrGetInstanceProcAddr(instance, "xrCreateSpatialAnchorFromPerceptionAnchorMSFT", (PFN_xrVoidFunction *) &__xrew_xrCreateSpatialAnchorFromPerceptionAnchorMSFT);
	xrGetInstanceProcAddr(instance, "xrTryGetPerceptionAnchorFromSpatialAnchorMSFT", (PFN_xrVoidFunction *) &__xrew_xrTryGetPerceptionAnchorFromSpatialAnchorMSFT);
#endif
#ifdef XR_USE_TIMESPEC
	xrGetInstanceProcAddr(instance, "xrConvertTimespecTimeToTimeKHR", (PFN_xrVoidFunction *) &__xrew_xrConvertTimespecTimeToTimeKHR);
	xrGetInstanceProcAddr(instance, "xrConvertTimeToTimespecTimeKHR", (PFN_xrVoidFunction *) &__xrew_xrConvertTimeToTimespecTimeKHR);
#endif
	return XR_TRUE; //TODO error checking
}
static void xrewQuit()
{
	__xrew_xrPerfSettingsSetPerformanceLevelEXT = NULL;
	__xrew_xrThermalGetTemperatureTrendEXT = NULL;
	__xrew_xrSetDebugUtilsObjectNameEXT = NULL;
	__xrew_xrCreateDebugUtilsMessengerEXT = NULL;
	__xrew_xrDestroyDebugUtilsMessengerEXT = NULL;
	__xrew_xrSubmitDebugUtilsMessageEXT = NULL;
	__xrew_xrSessionBeginDebugUtilsLabelRegionEXT = NULL;
	__xrew_xrSessionEndDebugUtilsLabelRegionEXT = NULL;
	__xrew_xrSessionInsertDebugUtilsLabelEXT = NULL;
	__xrew_xrGetVisibilityMaskKHR = NULL;
	__xrew_xrCreateSpatialAnchorMSFT = NULL;
	__xrew_xrCreateSpatialAnchorSpaceMSFT = NULL;
	__xrew_xrDestroySpatialAnchorMSFT = NULL;
	__xrew_xrSetInputDeviceActiveEXT = NULL;
	__xrew_xrSetInputDeviceStateBoolEXT = NULL;
	__xrew_xrSetInputDeviceStateFloatEXT = NULL;
	__xrew_xrSetInputDeviceStateVector2fEXT = NULL;
	__xrew_xrSetInputDeviceLocationEXT = NULL;
	__xrew_xrCreateSpatialGraphNodeSpaceMSFT = NULL;
	__xrew_xrCreateHandTrackerEXT = NULL;
	__xrew_xrDestroyHandTrackerEXT = NULL;
	__xrew_xrLocateHandJointsEXT = NULL;
	__xrew_xrCreateHandMeshSpaceMSFT = NULL;
	__xrew_xrUpdateHandMeshMSFT = NULL;
	__xrew_xrGetControllerModelKeyMSFT = NULL;
	__xrew_xrLoadControllerModelMSFT = NULL;
	__xrew_xrGetControllerModelPropertiesMSFT = NULL;
	__xrew_xrGetControllerModelStateMSFT = NULL;
	__xrew_xrInitializeLoaderKHR = NULL;
	__xrew_xrEnumerateDisplayRefreshRatesFB = NULL;
	__xrew_xrGetDisplayRefreshRateFB = NULL;
	__xrew_xrRequestDisplayRefreshRateFB = NULL;
	__xrew_xrEnumerateColorSpacesFB = NULL;
	__xrew_xrSetColorSpaceFB = NULL;
	__xrew_xrSetEnvironmentDepthEstimationVARJO = NULL;
#ifdef XR_USE_PLATFORM_ANDROID
	__xrew_xrSetAndroidApplicationThreadKHR = NULL;
	__xrew_xrCreateSwapchainAndroidSurfaceKHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_OPENGL
	__xrew_xrGetOpenGLGraphicsRequirementsKHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_OPENGL_ES
	__xrew_xrGetOpenGLESGraphicsRequirementsKHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_VULKAN
	__xrew_xrGetVulkanInstanceExtensionsKHR = NULL;
	__xrew_xrGetVulkanDeviceExtensionsKHR = NULL;
	__xrew_xrGetVulkanGraphicsDeviceKHR = NULL;
	__xrew_xrGetVulkanGraphicsRequirementsKHR = NULL;
	__xrew_xrCreateVulkanInstanceKHR = NULL;
	__xrew_xrCreateVulkanDeviceKHR = NULL;
	__xrew_xrGetVulkanGraphicsDevice2KHR = NULL;
	__xrew_xrGetVulkanGraphicsRequirements2KHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_D3D11
	__xrew_xrGetD3D11GraphicsRequirementsKHR = NULL;
#endif
#ifdef XR_USE_GRAPHICS_API_D3D12
	__xrew_xrGetD3D12GraphicsRequirementsKHR = NULL;
#endif
#ifdef XR_USE_PLATFORM_WIN32
	__xrew_xrConvertWin32PerformanceCounterToTimeKHR = NULL;
	__xrew_xrConvertTimeToWin32PerformanceCounterKHR = NULL;
	__xrew_xrCreateSpatialAnchorFromPerceptionAnchorMSFT = NULL;
	__xrew_xrTryGetPerceptionAnchorFromSpatialAnchorMSFT = NULL;
#endif
#ifdef XR_USE_TIMESPEC
	__xrew_xrConvertTimespecTimeToTimeKHR = NULL;
	__xrew_xrConvertTimeToTimespecTimeKHR = NULL;
#endif
}


#define xrPerfSettingsSetPerformanceLevelEXT	__xrew_xrPerfSettingsSetPerformanceLevelEXT
#define xrThermalGetTemperatureTrendEXT	__xrew_xrThermalGetTemperatureTrendEXT
#define xrSetDebugUtilsObjectNameEXT	__xrew_xrSetDebugUtilsObjectNameEXT
#define xrCreateDebugUtilsMessengerEXT	__xrew_xrCreateDebugUtilsMessengerEXT
#define xrDestroyDebugUtilsMessengerEXT	__xrew_xrDestroyDebugUtilsMessengerEXT
#define xrSubmitDebugUtilsMessageEXT	__xrew_xrSubmitDebugUtilsMessageEXT
#define xrSessionBeginDebugUtilsLabelRegionEXT	__xrew_xrSessionBeginDebugUtilsLabelRegionEXT
#define xrSessionEndDebugUtilsLabelRegionEXT	__xrew_xrSessionEndDebugUtilsLabelRegionEXT
#define xrSessionInsertDebugUtilsLabelEXT	__xrew_xrSessionInsertDebugUtilsLabelEXT
#define xrGetVisibilityMaskKHR	__xrew_xrGetVisibilityMaskKHR
#define xrCreateSpatialAnchorMSFT	__xrew_xrCreateSpatialAnchorMSFT
#define xrCreateSpatialAnchorSpaceMSFT	__xrew_xrCreateSpatialAnchorSpaceMSFT
#define xrDestroySpatialAnchorMSFT	__xrew_xrDestroySpatialAnchorMSFT
#define xrSetInputDeviceActiveEXT	__xrew_xrSetInputDeviceActiveEXT
#define xrSetInputDeviceStateBoolEXT	__xrew_xrSetInputDeviceStateBoolEXT
#define xrSetInputDeviceStateFloatEXT	__xrew_xrSetInputDeviceStateFloatEXT
#define xrSetInputDeviceStateVector2fEXT	__xrew_xrSetInputDeviceStateVector2fEXT
#define xrSetInputDeviceLocationEXT	__xrew_xrSetInputDeviceLocationEXT
#define xrCreateSpatialGraphNodeSpaceMSFT	__xrew_xrCreateSpatialGraphNodeSpaceMSFT
#define xrCreateHandTrackerEXT	__xrew_xrCreateHandTrackerEXT
#define xrDestroyHandTrackerEXT	__xrew_xrDestroyHandTrackerEXT
#define xrLocateHandJointsEXT	__xrew_xrLocateHandJointsEXT
#define xrCreateHandMeshSpaceMSFT	__xrew_xrCreateHandMeshSpaceMSFT
#define xrUpdateHandMeshMSFT	__xrew_xrUpdateHandMeshMSFT
#define xrGetControllerModelKeyMSFT	__xrew_xrGetControllerModelKeyMSFT
#define xrLoadControllerModelMSFT	__xrew_xrLoadControllerModelMSFT
#define xrGetControllerModelPropertiesMSFT	__xrew_xrGetControllerModelPropertiesMSFT
#define xrGetControllerModelStateMSFT	__xrew_xrGetControllerModelStateMSFT
#define xrInitializeLoaderKHR	__xrew_xrInitializeLoaderKHR
#define xrEnumerateDisplayRefreshRatesFB	__xrew_xrEnumerateDisplayRefreshRatesFB
#define xrGetDisplayRefreshRateFB	__xrew_xrGetDisplayRefreshRateFB
#define xrRequestDisplayRefreshRateFB	__xrew_xrRequestDisplayRefreshRateFB
#define xrEnumerateColorSpacesFB	__xrew_xrEnumerateColorSpacesFB
#define xrSetColorSpaceFB	__xrew_xrSetColorSpaceFB
#define xrSetEnvironmentDepthEstimationVARJO	__xrew_xrSetEnvironmentDepthEstimationVARJO
#ifdef XR_USE_PLATFORM_ANDROID
#define xrSetAndroidApplicationThreadKHR	__xrew_xrSetAndroidApplicationThreadKHR
#define xrCreateSwapchainAndroidSurfaceKHR	__xrew_xrCreateSwapchainAndroidSurfaceKHR
#endif
#ifdef XR_USE_GRAPHICS_API_OPENGL
#define xrGetOpenGLGraphicsRequirementsKHR	__xrew_xrGetOpenGLGraphicsRequirementsKHR
#endif
#ifdef XR_USE_GRAPHICS_API_OPENGL_ES
#define xrGetOpenGLESGraphicsRequirementsKHR	__xrew_xrGetOpenGLESGraphicsRequirementsKHR
#endif
#ifdef XR_USE_GRAPHICS_API_VULKAN
#define xrGetVulkanInstanceExtensionsKHR	__xrew_xrGetVulkanInstanceExtensionsKHR
#define xrGetVulkanDeviceExtensionsKHR	__xrew_xrGetVulkanDeviceExtensionsKHR
#define xrGetVulkanGraphicsDeviceKHR	__xrew_xrGetVulkanGraphicsDeviceKHR
#define xrGetVulkanGraphicsRequirementsKHR	__xrew_xrGetVulkanGraphicsRequirementsKHR
#define xrCreateVulkanInstanceKHR	__xrew_xrCreateVulkanInstanceKHR
#define xrCreateVulkanDeviceKHR	__xrew_xrCreateVulkanDeviceKHR
#define xrGetVulkanGraphicsDevice2KHR	__xrew_xrGetVulkanGraphicsDevice2KHR
#define xrGetVulkanGraphicsRequirements2KHR	__xrew_xrGetVulkanGraphicsRequirements2KHR
#endif
#ifdef XR_USE_GRAPHICS_API_D3D11
#define xrGetD3D11GraphicsRequirementsKHR	__xrew_xrGetD3D11GraphicsRequirementsKHR
#endif
#ifdef XR_USE_GRAPHICS_API_D3D12
#define xrGetD3D12GraphicsRequirementsKHR	__xrew_xrGetD3D12GraphicsRequirementsKHR
#endif
#ifdef XR_USE_PLATFORM_WIN32
#define xrConvertWin32PerformanceCounterToTimeKHR	__xrew_xrConvertWin32PerformanceCounterToTimeKHR
#define xrConvertTimeToWin32PerformanceCounterKHR	__xrew_xrConvertTimeToWin32PerformanceCounterKHR
#define xrCreateSpatialAnchorFromPerceptionAnchorMSFT	__xrew_xrCreateSpatialAnchorFromPerceptionAnchorMSFT
#define xrTryGetPerceptionAnchorFromSpatialAnchorMSFT	__xrew_xrTryGetPerceptionAnchorFromSpatialAnchorMSFT
#endif
#ifdef XR_USE_TIMESPEC
#define xrConvertTimespecTimeToTimeKHR	__xrew_xrConvertTimespecTimeToTimeKHR
#define xrConvertTimeToTimespecTimeKHR	__xrew_xrConvertTimeToTimespecTimeKHR
#endif


#ifdef __cplusplus
}
#endif

#endif // __xrew_h
