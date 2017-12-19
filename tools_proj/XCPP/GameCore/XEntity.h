#ifndef  __XEntity__
#define  __XEntity__

#include "XObject.h"
#include "XEntityMgr.h"
#include "GameObject.h"
#include "Transform.h"
#include "Vector3.h"
#include "XStateDefine.h"

class XEntity:public XObject
{
public:
	
	virtual void Update(float delta);
	virtual void LateUpdate();
	virtual void AttachToHost();
	virtual void DetachFromHost();

	bool IsPlayer();
	bool IsRole();
	bool IsBoss();
	bool IsNpc();

	void MoveForward(Vector3 forward);
	void StopMove();
	void OnDied();

	uint EntityID;

protected:
	EntityType _eEntity_Type = Entity;
	GameObject* _object;
	Transform* _transf;
	int _layer = 0;
	float _speed = 0.03f;
	bool _force_move = false;
	bool _freeze = false;
	Vector3 _forward = Vector3::zero;
	XStateDefine _state = XState_Idle;

};

#endif