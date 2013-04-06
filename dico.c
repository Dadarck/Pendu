#include <time.h>
char 	*dico()
{
	int i = 0, cpt = 0;
	char *mots[] = {"robot","geek", "anonymous", "firewall", "debian", "programmation", "tourbillons", "fedora","google" , "constitution", "pigeon", ""};
	srand(time(NULL));
	while (mots[i][0] != 0)
	{
		i++;
	}
	i = rand() %i;
	return (mots[i]);
}
