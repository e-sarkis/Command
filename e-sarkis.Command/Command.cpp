#include "Command.h"

MoveCommand::MoveCommand(GridVector2 p_actorTranslation)
	: _actorTranslation(p_actorTranslation)
{ }

void MoveCommand::execute(Actor& p_actor)
{
	p_actor.move(_actorTranslation);
}

ChangeIconCommand::ChangeIconCommand()
{ }

void ChangeIconCommand::execute(Actor &p_actor)
{
	// Icons: ! " # $ % & ` ( ) * + - . /
	_newIcon = '!' + rand() % 13;
	p_actor.setIcon(_newIcon);
}

Command::~Command()
{ }