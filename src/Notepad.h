#pragma once

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers.
#define FEEDBACK_URL "https://github.com/Hedreon/Notepad/issues" // FEEDBACK_URL specifies the URL it should open when the Send Feedback menu item is pressed.
#define HELP_URL "https://go.microsoft.com/fwlink/?LinkId=834783" // HELP_URL specifies the URL it should open when the View Help menu item is pressed.

bool STATUS_BAR_STATE = true;
bool WORD_WRAP_STATE = true;

// Windows Header Files
#include <windows.h>
#include <CommCtrl.h>

// C++ Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <shellapi.h>

// Other Header Files
#include "resource.h"