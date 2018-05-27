#include "InputHandler.h"



InputHandler::InputHandler()
{
	_keyUp		= new MoveCommand(GridVector2(0,	1));
	_keyLeft	= new MoveCommand(GridVector2(0,	-1));
	_keyRight	= new MoveCommand(GridVector2(1,	0));
	_keyDown	= new MoveCommand(GridVector2(-1,	0));

	_keySpace	= new ChangeIconCommand();
}

void InputHandler::update()
{

}
