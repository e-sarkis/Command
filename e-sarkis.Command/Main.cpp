#include <time.h>

#include "Command.h"
#include "InputHandler.h"

void Draw(Actor* player)
{
	system("CLS");
	// Controls
	printf("CONTROLS\nSpacebar:\tChange Icon\nArrow Keys:\tChange Position\n\n", player->getIcon());
	// Status Display
	printf("\t%c's turn!\n", player->getIcon());
	printf("Position of %c:\t(%d, %d)\n", player->getIcon(),
		player->getPosition().x,
		player->getPosition().y);
}

int Demo()
{
	Actor player('@', GridVector2(0, 0));
	InputHandler input;

	Draw(&player);
	while (true)
	{
		if (input.update(&player))
		{
			Draw(&player);
		}
	}

	return 0;
}

int main()
{
	srand(time(NULL));
	return Demo();
}
