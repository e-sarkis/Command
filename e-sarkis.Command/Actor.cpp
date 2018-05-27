#include "Actor.h"

Actor::Actor(char p_icon, GridVector2 p_position)
{
	_position = p_position;
}

Actor::~Actor()
{ }

void Actor::move(GridVector2 p_translation)
{
	_position += p_translation;
}

char Actor::getIcon()
{
	return _icon;
}

void Actor::setIcon(char p_icon)
{
	_icon = p_icon;
}

GridVector2 Actor::getPosition()
{
	return _position;
}
