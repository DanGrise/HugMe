//===========================================================================
/*
    This file is part of the CHAI 3D visualization and haptics libraries.
    Copyright (C) 2003-2004 by CHAI 3D. All rights reserved.

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License("GPL") version 2
    as published by the Free Software Foundation.

    For using the CHAI 3D libraries with software that can not be combined
    with the GNU GPL, and for taking advantage of the additional benefits
    of our support services, please contact CHAI 3D about acquiring a
    Professional Edition License.

    \author:    <http://www.chai3d.org>
    \author:    Chris Sewell
    \version    1.0
    \date       05/2006
*/
//===========================================================================

#ifndef _implicit_functions_GLOBALS_H_
#define _implicit_functions_GLOBALS_H_

class Cimplicit_functionsDlg;
class Cimplicit_functionsApp;

// This makes sure that only the one file who defines
// ALLOCATE_SCOPED_GLOBALS actually creates space for
// all the global variables in the binary; everyone else
// externs them...
#ifdef ALLOCATE_SCOPED_GLOBALS
#define SCOPE
#else 
#define SCOPE extern
#endif

SCOPE Cimplicit_functionsDlg* g_main_dlg;
SCOPE Cimplicit_functionsApp* g_main_app;
#endif
 
