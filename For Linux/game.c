#include"p_list.c"
// ******************************************* NEW GAME FUNCTION ******************************************
int new_game()
{
	
	int opt,num,i=0;
	char user[50];
	printf("\t\t*********************************************************************\n");
	printf("\n\t\t\t\t1.Multi Player\n");
	printf("\t\t\t\t2.Play with  CPU\n");
	printf("\n\t\t*********************************************************************\n");
	printf("\n\t\t\n\nPlease Enter Your option:: ");
	scanf("%d",&opt);
	if(opt==1)
	{	int f=0;
		while(f==0)
		{
			printf("\nHow many no.of Players:: ");
			scanf("%d",&player_num);
			if(player_num>4)
				printf("===>  Maximum no.of players should be 4 or less than 4  <===\n");
			else if(player_num<=1)
				printf("===>  Minimum Players should be 2  <===\n");
			else
				f=1;
		}
		players_list(player_num);
		return;
	}
	if(opt==2);
	  cpuplay();
}
// ************************************* MAIN FUNCTION ***************************************************
int main()
{

	int opt=0;
	while(opt!=5)
	{
		
	printf("\t\t**********************SNAKES AND LADDERS*****************************\n");
	printf("\n\t\t\t\t1.New Game\n");
	printf("\t\t\t\t2.Reload game\n");
	printf("\t\t\t\t3.Save Game\n");
	printf("\t\t\t\t4.Tutorial\n");
	printf("\n\t\t*********************************************************************\n");
	printf("\n\t\t\n\nPlease Enter Your option:: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: new_game();
					break;
			case 2:reload_game();
					break;
			case 3: printf("\nPlease hit spacebar while playing to save game\n\n");
					break;
			case 4: show();
					break;
			default: printf("\nChoose correct Option...");
		}
	}
}
// *************************************** END OF THE FILE ***********************************************
