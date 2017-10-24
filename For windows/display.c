// *********************************** GLOBAL  DECLARATION OF VARIBLES ************************************
int dice,player_num;
int pre[4]={0,0,0,0};
char pwd[30];
// *********************************** NODE CREATION FOR PLAYERS LIST *************************************
struct node
{
	int dice;
	char p_name[30];
	struct node *next;
};
struct node *start=NULL;
struct node *pyr=NULL;
// ****************** CREATING STRUCTURS TO DISPLAY FIRST LETTER OF PLAYER NAME IN BOXES *************
struct players
{
	char p1;
	char p2;
	char p3;
	char p4;
};
struct players playing[100];
// ******************* INITIALING SPACE CHARECTORS FOR ALL MEMBERS OF STRUCTURE ARRAY ******************
void assan()
{
	int i=0;
	while(i<100){
	playing[i].p1=' ';
	playing[i].p2=' ';
	playing[i].p3=' ';
	playing[i++].p4=' ';}
}
// ********************************************** DISPLAYS ALL OUTPUT ************************************
void display()
{
	pyr=start;
	int i=0;
printf("\t+-----------------------------------------------------------+\n");
printf("\t| 100 | 99  | 98  | 97  | 96  | 95  | 94  | 93  | 92  | 91  |\n");
printf("\t|%c%c %c%c| -78 |%c%c %c%c|%c%c %c%c|%c%c %c%c| -75 |%c%c %c%c| -73 |%c%c %c%c|%c%c %c%c|\n",playing[99].p1,playing[99].p2,playing[99].p3,playing[99].p4,playing[97].p1,playing[97].p2,playing[97].p3,playing[97].p4,playing[96].p1,playing[96].p2,playing[96].p3,playing[96].p4,playing[95].p1,playing[95].p2,playing[95].p3,playing[95].p4,playing[93].p1,playing[93].p2,playing[93].p3,playing[93].p4,playing[91].p1,playing[91].p2,playing[91].p3,playing[91].p4,playing[90].p1,playing[90].p2,playing[90].p3,playing[90].p4);
printf("\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+");
printf("\t***************** POSITIONS ******************");
printf("\n\t| 81  | 82  | 83  | 84  |  85 | 86  | 87  | 88  |  89 | 90  |");
if(i<player_num)
 printf("\t %s\t==> Previou:: %d && Present:: %d\n",pyr->p_name,pre[i],pyr->dice); i++; pyr=pyr->next;
printf("\t|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c| -24 |%c%c %c%c|%c%c %c%c|%c%c %c%c|",playing[80].p1,playing[80].p2,playing[80].p3,playing[80].p4,playing[81].p1,playing[81].p2,playing[81].p3,playing[81].p4,playing[82].p1,playing[82].p2,playing[82].p3,playing[82].p4,playing[83].p1,playing[83].p2,playing[83].p3,playing[83].p4,playing[84].p1,playing[84].p2,playing[84].p3,playing[84].p4,playing[85].p1,playing[85].p2,playing[85].p3,playing[85].p4,playing[87].p1,playing[87].p2,playing[87].p3,playing[87].p4,playing[88].p1,playing[88].p2,playing[88].p3,playing[88].p4,playing[89].p1,playing[89].p2,playing[89].p3,playing[89].p4);
if(i<player_num)
 printf("\t %s\t==> Previou:: %d && Present:: %d\n",pyr->p_name,pre[i],pyr->dice); i++; pyr=pyr->next;
printf("\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+");
if(i<player_num)
 printf("\t %s\t==> Previou:: %d && Present:: %d",pyr->p_name,pre[i],pyr->dice); 
else if(i==player_num)
printf("\t*********************************************");  i++; pyr=pyr->next;
printf("\n\t| 80  | 79  | 78  | 77  | 76  | 75  | 74  | 73  | 72  | 71  |");
if(i<player_num)
 printf("\t %s\t==> Previou:: %d && Present:: %d",pyr->p_name,pre[i],pyr->dice); 
else if(i==player_num)
 printf("\t*********************************************"); i++; pyr=pyr->next;
printf("\n\t|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c| H91 |",playing[79].p1,playing[79].p2,playing[79].p3,playing[79].p4,playing[78].p1,playing[78].p2,playing[78].p3,playing[78].p4,playing[77].p1,playing[77].p2,playing[77].p3,playing[77].p4,playing[76].p1,playing[76].p2,playing[76].p3,playing[76].p4,playing[75].p1,playing[75].p2,playing[75].p3,playing[75].p4,playing[74].p1,playing[74].p2,playing[74].p3,playing[74].p4,playing[73].p1,playing[73].p2,playing[73].p3,playing[73].p4,playing[72].p1,playing[72].p2,playing[72].p3,playing[72].p4,playing[71].p1,playing[71].p2,playing[71].p3,playing[71].p4);
if(i==player_num)
 printf("\t*********************************************");
printf("\n\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
printf("\t| 61  | 62  | 63  | 64  | 65  | 66  | 67  | 68  | 69  | 70  |\n");
printf("\t|%c%c %c%c| -19 | H81 | -60 |%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|\n",playing[60].p1,playing[60].p2,playing[60].p3,playing[60].p4,playing[64].p1,playing[64].p2,playing[64].p3,playing[64].p4,playing[65].p1,playing[65].p2,playing[65].p3,playing[65].p4,playing[66].p1,playing[66].p2,playing[66].p3,playing[66].p4,playing[67].p1,playing[67].p2,playing[67].p3,playing[67].p4,playing[68].p1,playing[68].p2,playing[68].p3,playing[68].p4,playing[69].p1,playing[69].p2,playing[69].p3,playing[69].p4);
printf("\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
printf("\t| 60  | 59  | 58  | 57  | 56  | 55  | 54  | 53  | 52  | 51  |\n");
printf("\t|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c| -34 |%c%c %c%c|%c%c %c%c| H67 |\n",playing[59].p1,playing[59].p2,playing[59].p3,playing[59].p4,playing[58].p1,playing[58].p2,playing[58].p3,playing[58].p4,playing[57].p1,playing[57].p2,playing[57].p3,playing[57].p4,playing[56].p1,playing[56].p2,playing[56].p3,playing[56].p4,playing[55].p1,playing[55].p2,playing[55].p3,playing[55].p4,playing[54].p1,playing[54].p2,playing[54].p3,playing[54].p4,playing[52].p1,playing[52].p2,playing[52].p3,playing[52].p4,playing[51].p1,playing[51].p2,playing[51].p3,playing[51].p4);
printf("\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
printf("\t| 41  | 42  | 43  | 44  | 45  | 46  | 47  | 48  | 49  | 50  |\n");
printf("\t|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|\n",playing[40].p1,playing[40].p2,playing[40].p3,playing[40].p4,playing[41].p1,playing[41].p2,playing[41].p3,playing[41].p4,playing[42].p1,playing[42].p2,playing[42].p3,playing[42].p4,playing[43].p1,playing[43].p2,playing[43].p3,playing[43].p4,playing[44].p1,playing[44].p2,playing[44].p3,playing[44].p4,playing[45].p1,playing[45].p2,playing[45].p3,playing[45].p4,playing[46].p1,playing[46].p2,playing[46].p3,playing[46].p4,playing[47].p1,playing[47].p2,playing[47].p3,playing[47].p4,playing[48].p1,playing[48].p2,playing[48].p3,playing[48].p4,playing[49].p1,playing[49].p2,playing[49].p3,playing[49].p4);
printf("\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
printf("\t| 40  | 39  | 38  | 37  | 36  | 35  | 34  | 33  | 32  | 31  |\n");
printf("\t| H59 |%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|\n",playing[38].p1,playing[38].p2,playing[38].p3,playing[38].p4,playing[37].p1,playing[37].p2,playing[37].p3,playing[37].p4,playing[36].p1,playing[36].p2,playing[36].p3,playing[36].p4,playing[35].p1,playing[35].p2,playing[35].p3,playing[35].p4,playing[34].p1,playing[34].p2,playing[34].p3,playing[34].p4,playing[33].p1,playing[33].p2,playing[33].p3,playing[33].p4,playing[32].p1,playing[32].p2,playing[32].p3,playing[32].p4,playing[31].p1,playing[31].p2,playing[31].p3,playing[31].p4,playing[30].p1,playing[30].p2,playing[30].p3,playing[30].p4);
printf("\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
printf("\t| 21  | 22  | 23  | 24  | 25  | 26  | 27  | 28  | 29  | 30  |\n");
printf("\t|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c| H84 |%c%c %c%c|%c%c %c%c|\n",playing[20].p1,playing[20].p2,playing[20].p3,playing[20].p4,playing[21].p1,playing[21].p2,playing[21].p3,playing[21].p4,playing[22].p1,playing[22].p2,playing[22].p3,playing[22].p4,playing[23].p1,playing[23].p2,playing[23].p3,playing[23].p4,playing[24].p1,playing[24].p2,playing[24].p3,playing[24].p4,playing[25].p1,playing[25].p2,playing[25].p3,playing[25].p4,playing[26].p1,playing[26].p2,playing[26].p3,playing[26].p4,playing[28].p1,playing[28].p2,playing[28].p3,playing[28].p4,playing[29].p1,playing[29].p2,playing[29].p3,playing[29].p4);
printf("\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
printf("\t| 20  | 19  | 18  | 17  | 16  | 15  | 14  | 13  | 12  | 11  |\n");
printf("\t| H38 |%c%c %c%c|%c%c %c%c| -7  |%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c|\n",playing[18].p1,playing[18].p2,playing[18].p3,playing[18].p4,playing[17].p1,playing[17].p2,playing[17].p3,playing[17].p4,playing[15].p1,playing[15].p2,playing[15].p3,playing[15].p4,playing[14].p1,playing[14].p2,playing[14].p3,playing[14].p4,playing[13].p1,playing[13].p2,playing[13].p3,playing[13].p4,playing[12].p1,playing[12].p2,playing[12].p3,playing[12].p4,playing[11].p1,playing[11].p2,playing[11].p3,playing[11].p4,playing[10].p1,playing[10].p2,playing[10].p3,playing[10].p4);
printf("\t+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
printf("\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  | 10  |\n");
printf("\t|%c%c %c%c|%c%c %c%c|%c%c %c%c| H14 |%c%c %c%c|%c%c %c%c|%c%c %c%c|%c%c %c%c| H31 |%c%c %c%c|\n",playing[0].p1,playing[0].p2,playing[0].p3,playing[0].p4,playing[1].p1,playing[1].p2,playing[1].p3,playing[1].p4,playing[2].p1,playing[2].p2,playing[2].p3,playing[2].p4,playing[4].p1,playing[4].p2,playing[4].p3,playing[4].p4,playing[5].p1,playing[5].p2,playing[5].p3,playing[5].p4,playing[6].p1,playing[6].p2,playing[6].p3,playing[6].p4,playing[7].p1,playing[7].p2,playing[7].p3,playing[7].p4,playing[9].p1,playing[9].p2,playing[9].p3,playing[9].p4);
printf("\t+-----------------------------------------------------------+\n");
}
//*************************** FILE CREATING ***********************************************************
save_game()
{
	int i=0;
	struct node *temp=start;
	FILE *fp;
	fp=fopen("passwords.dat","w");
	while(i<player_num)
	{
		fprintf(fp,"%s %s %d %d ",pwd,temp->p_name,pre[i++],temp->dice);
		temp=temp->next;
	}
	fclose(fp);
}
// ************************************ END OF THE FILE ***************************************************
