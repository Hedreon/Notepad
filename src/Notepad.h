#pragma once

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers.
#define FEEDBACK_URL "https://github.com/Hedreon/Notepad/issues" // FEEDBACK_URL specifies the URL it should open when the Send Feedback menu item is clicked.
bool STATUS_BAR_STATE = true;

// Windows Header Files
#include <windows.h>

// C++ Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <shellapi.h>

// Other Header Files
#include "resource.h"