// FalconPenManager.h: interface for the FalconPenManager class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FALCONPENMANAGER_H__AFCF2776_E117_47EC_94C7_97838C3AFB59__INCLUDED_)
#define AFX_FALCONPENMANAGER_H__AFCF2776_E117_47EC_94C7_97838C3AFB59__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Controller.h"

// forward declarations (files include each other)
class Controller;

// TODO implement these classes (in other files)
class FalconPosition
{
public:
	// TODO implement (with an appropriate return type, probably Vector3D from chai3d)
	int getPosition() const { return 1; }
	int getOrientation() const { return 1; }
};

class Projectile
{
public:
	// TODO implement (with an appropriate return type, probably Vector3D from chai3d)
	int getPosition() const { return 1; }
	int getVelocity() const { return 1; }
};

class FalconPenManager  
{
public:
	FalconPenManager(Controller* pController);
	virtual ~FalconPenManager();

	// TODO implement
	// get the latest slingshot position
	FalconPosition getSlingshotPosition() const {return FalconPosition(); }

	// TODO implement
	bool hasNewProjectile() const { return true; }
	Projectile getNewProjectile() const { return Projectile(); }

	// TODO implement
	// start managing the falcon pen (polling it for information)
	// create a thread to poll it
	void start() {}

	// TODO implement
	// stop managing the falcon pen
	// stop the thread that's polling it
	void stop() {}

private:
	FalconPenManager(const FalconPenManager& falconPenManager); // intentionally not implemented
	FalconPenManager& operator=(const FalconPenManager& falconPenManager); // intentionally not implemented

	Controller* m_pController;
};

#endif // !defined(AFX_FALCONPENMANAGER_H__AFCF2776_E117_47EC_94C7_97838C3AFB59__INCLUDED_)
