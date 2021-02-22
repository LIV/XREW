# XREW

*generated version commited under /generated/xrew.h : OpenXR 1.0.14*

XREW is a single-header OpenXR Extension Wrangler, generated from the [OpenXR registry](https://github.com/KhronosGroup/OpenXR-SDK-Source/blob/master/specification/registry/xr.xml)

## How to use XREW

```C
//Include the header only library:
#include "xrew.h"

//Init xrew
xrewInit(instance); //instance is a previously created OpenXR instance

/*
NOTE! Validation layer may implemnet extension functions that do not exist. 
A function being there doesn't mean that you have the right to call it. 
You must check for the extension to be available, and you must before trying to call 
any command that is solly defined in said extension.
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
