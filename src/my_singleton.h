#pragma once

#include <gdextension_interface.h>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

#include <godot_cpp/classes/node.hpp>

using namespace godot;

class MySingleton : public Node {
	GDCLASS(MySingleton, Node);

protected:
	static void _bind_methods();

public:
	static MySingleton *get_singleton();

	String say_cheese() const;
};
