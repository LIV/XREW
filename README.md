# XREW  [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

*generated version commited under /generated/xrew.h : OpenXR 1.0.14*

XREW is a single-header OpenXR Extension Wrangler, generated from the [OpenXR registry](https://github.com/KhronosGroup/OpenXR-SDK-Source/blob/master/specification/registry/xr.xml)

## How to use XREW

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

Make sure to have `python3` and `git` installed on your system

```bash
git clone <this repo URL>
cd xrew
python3 gen.py
```

will create `xrew.h` in the repository root directory.

## How to upgrade XREW to newer OpenXR release

Just pull the OpenXR-SDK-Source submodule to a newer version, and call `gen.py` again.
For convinience, copy and commit the output in `/generated/xrew.h`.
