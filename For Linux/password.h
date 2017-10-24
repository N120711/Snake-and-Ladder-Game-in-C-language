
char password()
{
	char ch;
	int i=-1;
	getch();
	printf("Enter Password::");
	while(1)
	{
		  ch=getch();
		  if(ch==10) 
		  	break;
		  if(ch==127&&i<0)
		  {
		   continue;
		  }
		  if(i<0)   
		  {	printf(" ");
		  	 i=0;
		  }
		  if(ch==127) 
		  {
				printf("\b"); 
				printf(" "); 
				printf("\b"); 
				--i;
				 continue; 
		  }
		pwd[i++]=ch;
		ch='*';
		printf("%c",ch);
	}
	pwd[i]='\0';
	printf("%s",pwd);
}
