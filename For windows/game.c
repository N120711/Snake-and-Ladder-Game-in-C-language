#include"p_list.c"
// ******************************************* NEW GAME FUNCTION ******************************************
int new_game()
{
	int opt,num,i=0;
	char user[50];
		display_file("multi.txt");
	printf("\nPlease Enter Your option:: ");
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
	display_file("welcome.txt");
	int opt=0;
	while(opt!=5)
	{
		display_file("menu.txt");
		printf("\n\nPlease Enter Your Choice:: ");
		scanf("%d",&opt);
		system("cls");
		switch(opt)
		{
			case 1: new_game();
					break;
			case 2:reload_game();
					break;
			case 3: printf("\n While playing hit space bar to save game\n");
					break;
			case 4: display_file("tutorial.txt");
					break;
			default: printf("\nChoose correct Option...");
		}
	}
}
// *************************************** END OF THE FILE ***********************************************
