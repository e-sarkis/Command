#include "InputHandler.h"

InputHandler::InputHandler()
{
	_keyUp		= new MoveCommand(GridVector2(0,	1));
	_keyDown	= new MoveCommand(GridVector2(0,	-1));
	_keyRight	= new MoveCommand(GridVector2(1,	0));
	_keyLeft	= new MoveCommand(GridVector2(-1,	0));

	_keySpace	= new ChangeIconCommand();
}

bool InputHandler::update(Actor* p_actor)
{
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		_keyUp->execute(*p_actor);
		return true;
	}

	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		_keyDown->execute(*p_actor);
		return true;
	}

	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		_keyRight->execute(*p_actor);
		return true;
	}

	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		_keyLeft->execute(*p_actor);
		return true;
	}

	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
	{
		_keySpace->execute(*p_actor);
		return true;
	}

	return false;
}
