#include <ncurses.h>
void graphic (int c)
{
	if (c == 10)
	{
		move (10, 75);
		addstr (" ________");
		move (11, 75);		
		addstr ("|        |");
		move (12, 75);
		addstr ("|        0");
		move (13, 75);
		addstr ("|");
		move (14, 75);
		addstr ("|");
		move (15, 75);
		addstr ("|");
		move (16, 75);
		addstr ("|");
		move (17, 75);
		addstr ("|");
		move (23, 20);

	}
	if (c == 9)
	{
		move (12, 83);
		addstr ("-");
		move (23, 20);

	}

	if (c == 8)
	{
		move (12, 82);
		addstr ("-");
		move (23, 20);

	}

	if (c == 7)
	{
		move (12, 85);
		addstr ("-");

	}
	if (c == 6)
	{
		move (12, 86);
		addstr ("-");
		move (16, 20);
	}

	if (c == 5)
	{
		move (13, 84);
		addstr ("|");
		move (14, 84);
		addstr("|");		
		move (16, 20);
	
	}
	if (c == 4)
	{
		move (15, 83);
		addstr ("/");
		move (23, 20);
	
	}
	if (c == 3)
	{
		move (15, 85);
		addstr ("\\");
		move (23, 20);
	
	}
	if (c == 2)
	{
		move (15, 82);
		addstr ("_");
		move (23, 20);
	
	}
	if (c == 1)
	{
		move (15, 86);
		addstr ("_");
		move (23, 20);
	
	}

}	
