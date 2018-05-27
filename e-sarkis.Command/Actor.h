#pragma once
#include "GridVector2.h"

class Actor
{
public:
	Actor(char, GridVector2);
	~Actor();

	void move(GridVector2);
	
	char getIcon();
	void setIcon(char);

	GridVector2 getPosition();

private:
	char _icon;
	GridVector2 _position;
};

