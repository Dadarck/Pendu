#include<stdlib.h>
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
	int nbr_coups, i, flag, flag2, cpt, j, k;
	char  *let = malloc(sizeof(char) * 25);
	char  lettres;
	nbr_coups = 10;
	char *mot = dico();
	char etoile[strlen(mot)];
	i  = 0,	j = 0, k = 0, flag = 0,	flag2 = 0, cpt = 0;
	while (i < strlen(mot))
	{
		etoile[i] = '*';
		i++;	
	}
	etoile[i] = '\0';
	i = 0;
	cadre();
	while (nbr_coups != 0)
	{
		graphic(nbr_coups);
		move (24,75);
		addstr("Quel est le mot secret");
		move (25,76);
		af_etoile(etoile);
		lettres = getch();
		move (28,76);
		addstr("                      ");
		flag2 = 0;

		while (let[j])
		{
			if(let[j] == lettres)
			{
				flag2 = 1;
				move (28,76);
				addstr("CARACTERE DEJA ESSAYE!");
			}
			j++;
		}
		j = 0;
		if (flag2 != 1)
		{
			let[k] = lettres;
			k++;
			while (mot[i])
			{
				if(mot[i] == lettres)
				{
					etoile[i] = lettres;
					flag = 1;
					cpt++;
				}
				if (cpt == strlen(mot))
					flag = 2;
				i++;
			}
		}
		move (8, 44);
		addstr("Lettre deja tappee");
		move (9, 44);
		af_etoile(let);
		i = 0;
		if (flag != 1 && flag2 != 1)
			nbr_coups--;
		if (flag == 2)
		{		
			clear();
			bravo();
			move (35, 65);
			addstr("LE MOT ETAIT BIEN : ");
			af_etoile(mot);
			break;
		}
		flag = 0;
		flag2 = 1;
	}
	if (nbr_coups == 0 && my_strcmp(mot, etoile) != 0)
	{
		clear();
		move (15, 65);
		addstr("LE MOT ETAIT : ");
		af_etoile(mot);
		mort();
	}
	getch();



	endwin ();
}
