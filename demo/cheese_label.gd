extends Label

func _ready() -> void:
	text = MySingleton.get_singleton().say_cheese()
