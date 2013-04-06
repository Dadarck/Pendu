#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<ncurses.h>
int main ()
{
initscr ();
	cbreak ();
	noecho ();
	clear ();
	refresh ();
char message[]= "Sommes de tout coeur avec vous,\navec toute notre sympathie ! \nAvec toute notre sympathie dans cette pénible épreuve \nRecevez nos sincères condoleances, \nsommes présents avec vous par la pensée en ce triste jour.\nVous embrassons bien fort \nDans cette douloureuse épreuve nous sommes de tout coeur avec vous \nNous partageons votre peine. Nos plus amicales pensées vous accompagnent en ce si douloureux moment \nNos sincères condoléances. \nAvec toute notre amitié";

int i = 0, j = 0, x = 10;
while (message[i] != '\0')
{
//sleep(1);
mvprintw(x, 30, "%s",message);
/*if (message[i] == '\n')
x += 10;
while (j < 10000000)
j++;
j = 0;
*/i++;
}
move(8, 40);
addstr(" est arrivé");
getch();
endwin ();
}
