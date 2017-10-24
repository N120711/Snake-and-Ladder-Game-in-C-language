// **************************** INCLUDING OTHER CODE FILES ************************************
#include<stdio.h>
#include<stdlib.h>
#include"display.c"
#include"random.c"
#include<string.h>
#include"password.h"
int cp=0;
// ***************************** CIRCULAR PLAYER LIST *****************************************
void players_list(int player_num)
{
	int i=0;
	struct node *newnode,*str;
	while(i<player_num)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Player %d name:: ",i+1);
		scanf("%s",newnode->p_name);
		newnode->dice=0;
		newnode->next=NULL;
		if(start==NULL)
		{
			start=newnode;
			newnode->next=start;
		}
		else
		{
			str=start;
			while(str->next!=start)
				str=str->next;
		    str->next=newnode;
		    newnode->next=start;
		} i++;
		if(i==player_num)
			break;
	}
	password();
	sandl_setting();
}
// ******************** FUNCTION OF SNAKES AND LADDERS *************************************
int sandl_setting()
{
   	assan();   
	struct node *temp=start;
	int i=0,t,pt[4]={4,4,4,4},spt;;
	char ch;
	while(1)
	{
		printf("\nHello, %s...! Please Hit Enter key to through dice:: ",temp->p_name);
		if(i==0&&cp==1)
		 ch=13;
		else
	  	 ch=getch();
	  	if(ch==32)
	  	{	save_game(); return; }
		if(ch!=13)
			continue;
		else
		{
			
			dice=random();
			pre[i]=temp->dice;
			spt=pt[i];
			pt[i]=pre[i];	system("cls");
			temp->dice=temp->dice+dice;
			t=temp->dice;
// ****************************** DECLARE WINNER *******************************************************
			if(t==100)
			{
				 printf("\n\n\n\n\n\t\t()()()()()()()()()()()()()()()()()()()()()()()()()\n");
				 printf("\t\t()                                              ()\n");
				 printf("\t\t()  Congratulaions...%s\t\t\t()\n",temp->p_name);
				 printf("\t\t()                                              ()\n");
				 printf("\t\t()()()()()()()()()()()()()()()()()()()()()()()()()\n\n\n\n\n\n\n");
				 
				 break; 
			}
			else if(t>100)
				{	temp->dice=temp->dice-dice; }
			else if(t==17||t==54||t==62||t==64||t==87||t==93||t==99||t==95||t==4||t==9||t==20||t==28||t==51||t==40||t==63||t==71)
			{
				pt[i]=pre[i];
// ******************************** SNAKES JUMPING ******************************************************
				if(t==17)
				{
					pre[i]=t; temp->dice=7;
				}
				else if(t==54)
				{
					pre[i]=t; temp->dice=34;
				}
				else if(t==62)
				{
					pre[i]=t; temp->dice=19;
				}
				else if(t==64)
				{
					pre[i]=t; temp->dice=60;
				}
				else if(t==87)
				{
					pre[i]=t; temp->dice=24;
				}
				else if(t==99)
				{
					pre[i]=t; temp->dice=78;
				}
				else if(t==93)
				{
					pre[i]=t; temp->dice=73;
				}
				else if(t==95)
				{
					pre[i]=t; temp->dice=75;
				}
// ******************* LADDERS JUMPING ******************************************************************
				else if(t==20)	
				{
					pre[i]=t; temp->dice=38;
				}
				else if(t==28)
				{
					pre[i]=t; temp->dice=84;
				}
				else if(t==40)
				{
					pre[i]=t; temp->dice=59;
				}
				else if(t==51)
				{
					pre[i]=t; temp->dice=67;
				}
				else if(t==63)
				{
					pre[i]=t; temp->dice=81;
				}
				else if(t==9)
				{
					pre[i]=t; temp->dice=31;
				}
				else if(t==71)
				{
					pre[i]=t; temp->dice=91;
				}
				else if(t==4)
				{
					pre[i]=t; temp->dice=14;
				}				
			}	
// ******************************* PRINTING CONTROL ****************************************************
			if((i+1)==1)
				{
				playing[spt-1].p1=' ';
				playing[pt[i]-1].p1='*';
				playing[temp->dice-1].p1=temp->p_name[0];
				}
			else if((i+1)==2)
			{
				playing[spt-1].p3=' ';
				playing[pt[i]-1].p3='*';
				playing[temp->dice-1].p3=temp->p_name[0];
			}
			else if((i+1)==3)
			{	
				playing[spt-1].p2=' ';
				playing[pt[i]-1].p2='*';
				playing[temp->dice-1].p2=temp->p_name[0];
			}
			else if((i+1)==4)	
			{	
				playing[spt-1].p4=' ';
				playing[pt[i]-1].p4='*';
				playing[temp->dice-1].p4=temp->p_name[0];
			} 
			display();
			printf("\n\nDice == %d\n",dice);
			printf("%s Moved from %d to %d\n\n",temp->p_name,pre[i],temp->dice);

			
		}
		if(t!=4&&t!=9&&t!=20&&t!=28&&t!=51&&t!=40&&t!=63&&t!=71)
		{	
			i=i+1;
			temp=temp->next; 
		}
		if(i==player_num)
				i=0;
	}
	cp=0;free(start); start=NULL;
}
// ************************** CPU PLAYER INITIALIZATION *********************************************
void cpuplay()
{
	player_num=2;
	
	struct node *newnode;
	
		newnode=(struct node*)malloc(sizeof(struct node));
		strcpy(newnode->p_name,"CPU");
		newnode->dice=0;
		newnode->next=start;
		start=newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Your name:: ");
		scanf("%s",newnode->p_name);
		newnode->dice=0;
		start->next=newnode;
		newnode->next=start;
		password();
		cp=1; sandl_setting();
}
// ************************** TUTORIAL FUNCTION ********************************************************
display_file( char name[])
{
	FILE *tut;
	char ch;
	tut=fopen(name,"r");
	ch=fgetc(tut);
	while(ch!=EOF)
	{
		usleep(3000);
		printf("%c",ch);
		ch=fgetc(tut);
	} fclose(tut);
}
// 
reload_game()
{
	int i=0;
	struct node *newnode,*pt;
	char tpwd[30],user[30];
	FILE *fp;
	fp=fopen("passwords.dat","r");
	if(fp==NULL)
	{	printf("\nPrevious Game data Doesnot Exists\n"); return; }
	else
		{	
				printf("Enter Your name:: ");
				scanf("%s",user);
	 			password();
				strcpy(tpwd,pwd);
			while(1)
		   {	
			newnode=(struct node*)malloc(sizeof(struct node));
			fscanf(fp,"%s %s %d %d",pwd,newnode->p_name,&pre[i++],&newnode->dice);
			printf(" %s %s %d %d",pwd,newnode->p_name,pre[i-1],newnode->dice);
			if(strcmp(pwd,tpwd)==0)
			{
				if(start==NULL)
				{
					newnode->next=start;
					start=newnode;
				}
				else
				{	
					pt=start;
					while(pt->next!=start)
						pt=pt->next;
		   			 pt->next=newnode;
		   			 newnode->next=start;
				}
			}
			else
			 { printf("\n%s Wrong Password\n",pwd);fclose(fp); return; }
		    
		}}
		fclose(fp);
		sandl_setting();
}

// ****************************** END OF THE FILE ***************************************************
