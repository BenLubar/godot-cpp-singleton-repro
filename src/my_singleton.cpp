#include "my_singleton.h"

#include <godot_cpp/classes/engine.hpp>

void MySingleton::_bind_methods() {
	ClassDB::bind_static_method("MySingleton", D_METHOD("get_singleton"), &MySingleton::get_singleton);
	ClassDB::bind_method(D_METHOD("say_cheese"), &MySingleton::say_cheese);
}

MySingleton *MySingleton::get_singleton() {
	static MySingleton *const singleton = Object::cast_to<MySingleton>(Engine::get_singleton()->get_singleton(get_class_static()));
	return singleton;
}

String MySingleton::say_cheese() const {
	return "Cheddar!";
}
