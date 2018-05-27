#pragma once

#include <Windows.h>
#include <stdio.h>

#include "Command.h"

class InputHandler
{
public:
	InputHandler();
	
	bool update(Actor*);

private:
	Command* _keyUp;
	Command* _keyRight;
	Command* _keyDown;
	Command* _keyLeft;
	Command* _keySpace;
};

