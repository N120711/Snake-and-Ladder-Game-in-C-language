tutorial_file()
{
	FILE *tut;
	char ch;
	tut=fopen("tutorial.txt","r");
	ch=fgetc(tut);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(tut);
	} fclose(tut);
}
