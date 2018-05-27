#pragma once
#include "Command.h"

class InputHandler
{
public:
	InputHandler();
	
	void update();

private:
	Command* _keyUp;
	Command* _keyRight;
	Command* _keyDown;
	Command* _keyLeft;
	Command* _keySpace;
};

