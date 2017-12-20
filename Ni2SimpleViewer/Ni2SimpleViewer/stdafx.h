// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define OPENNI_VER    2

#include <stdio.h>
#include <tchar.h>


#if OPENNI_VER==1
#include <XnOpenNI.h>
#include <XnCppWrapper.h>
#include <XnFPSCalculator.h>
#else
#include <OpenNI.h>
#endif
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iomanip>
#include <sstream>
#define FPG_AVG_COUNT 120


// TODO: reference additional headers your program requires here
