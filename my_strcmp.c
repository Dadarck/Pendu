int	 my_strcmp(char *s1, char *s2)
{

    int n,i, flag;
    
    i = 0;
    n = 0;
    flag = 1;
while (s1[i] != '\0' && s2[i] != '\0' && flag != 0)
{
	if (s1[i] < s2[i])
	{
		flag = 0;
		n = -1;
	}
	if (s1[i] > s2[i])
	{
		flag= 0;
		n = 1;	
	}
	i++;
}

    	return(n);
}
/*
int main()
{

printf("%d\n",my_strcmp("apa", "papa"));
printf("%d\n",my_strcmp("apa", "papa"));

printf("%d\n",my_strcmp("papaz", "papza"));
printf("%d\n",strcmp("papaz", "papza"));

printf("%d\n",my_strcmp("ppppapa", "papa"));
printf("%d\n",strcmp("ppppapa", "papa"));

}
*/
