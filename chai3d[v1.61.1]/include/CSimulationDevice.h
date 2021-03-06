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
    \author:    Francois Conti
    \version    1.1
    \date       01/2004
*/
//===========================================================================
/*!
    \file CSimulationDevice.h
*/
//---------------------------------------------------------------------------
#ifndef CSimulationDeviceH
#define CSimulationDeviceH
//---------------------------------------------------------------------------
#include "CGenericDevice.h"
#include "windows.h"
//---------------------------------------------------------------------------

struct cSimulationDeviceData
{
    double       ForceX;   // Force component X.
    double       ForceY;   // Force component Y.
    double       ForceZ;   // Force component Z.
    double       TorqueA;  // Torque alpha.
    double       TorqueB;  // Torque beta.
    double       TorqueG;  // Torque gamma.
    double       PosX;     // Position X.
    double       PosY;     // Position Y.
    double       PosZ;     // Position Z.
    double       AngleA;   // Angle alpha.
    double       AngleB;   // Angle beta.
    double       AngleG;   // Angle gamma.
    bool         Button0;  // Button 0 status.
    bool         AckMsg;   // Acknowledge Message
    bool         CmdReset; // Command Reset
};

/*!
    \class cSimulationDevice
    \brief
    Class which interfaces with the virtual device
*/
class cSimulationDevice : public cGenericDevice
{
  public:
    // CONSTRUCTOR & DESTRUCTOR:
    //! Constructor of cSimulationDevices.
    cSimulationDevice();
    //! Destructor of cGenericDevice.
    virtual ~cSimulationDevice();

    // METHODS:
    //! Open connection to virtual device.
    virtual int open();
    //! Close connection to virtual device
    virtual int close();
    //! Calibrate virtual device.
    virtual int initialize(const bool a_resetEncoders=false);
    //! Set a command to the virtual device
    virtual int command(int a_command, void* a_data);

    //! pointer to shared memory data structure
    cSimulationDeviceData* m_pDevice;

  private:
};

//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------
