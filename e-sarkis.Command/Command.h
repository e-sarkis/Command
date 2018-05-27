#pragma once
#include <stdlib.h>

#include "Actor.h"

class Command
{
public:
	virtual ~Command();
	virtual void execute(Actor& p_actor) = 0;
};

class MoveCommand : public Command
{
public:
	MoveCommand(GridVector2);

	virtual void execute(Actor&);
private:
	GridVector2 _actorTranslation;
};

class ChangeIconCommand : public Command
{
public:
	ChangeIconCommand();

	virtual void execute(Actor&);
private:
	char _newIcon;
};