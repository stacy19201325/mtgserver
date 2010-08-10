/*
 *	server/zone/objects/tangible/pharmaceutical/EnhancePack.h generated by engine3 IDL compiler 0.60
 */

#ifndef ENHANCEPACK_H_
#define ENHANCEPACK_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class EnhancePack : public PharmaceuticalObject {
public:
	EnhancePack();

	float getEffectiveness();

	byte getAttribute();

	float getDuration();

protected:
	EnhancePack(DummyConstructorParameter* param);

	virtual ~EnhancePack();

	friend class EnhancePackHelper;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class EnhancePackImplementation : public PharmaceuticalObjectImplementation {
protected:
	float effectiveness;

	float duration;

	byte attribute;

public:
	EnhancePackImplementation();

	EnhancePackImplementation(DummyConstructorParameter* param);

	float getEffectiveness();

	byte getAttribute();

	float getDuration();

	EnhancePack* _this;

	operator const EnhancePack*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~EnhancePackImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class EnhancePack;
};

class EnhancePackAdapter : public PharmaceuticalObjectAdapter {
public:
	EnhancePackAdapter(EnhancePackImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	float getEffectiveness();

	byte getAttribute();

	float getDuration();

};

class EnhancePackHelper : public DistributedObjectClassHelper, public Singleton<EnhancePackHelper> {
	static EnhancePackHelper* staticInitializer;

public:
	EnhancePackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<EnhancePackHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*ENHANCEPACK_H_*/
