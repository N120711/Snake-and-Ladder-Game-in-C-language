// ****************************** PASSWORD IMPLEMENTATION USING STACK *************************************
char password()
{
	char password[25],ch;
	int i=-1;
	printf("Enter Password::");
	while(1)
	{
		  ch=getch();
		  if(ch==13) 
		  	break;
		  if(ch==8&&i<0) 
		    continue;
		  if(i<0)   
		  {
				printf(" ");
		  		 i=0;
		  }
		  if(ch==8)
		  {
				putch('\b'); 
				putch(' '); 
				putch('\b'); 
				i--;
				continue; 
		  }
		
		password[i++]=ch;
		ch='*';
		putch(ch);
	}
	password[i]='\0';
	strcpy(pwd,password);
	
}
