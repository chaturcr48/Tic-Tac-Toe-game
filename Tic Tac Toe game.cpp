#include<stdio.h>
#include<windows.h>
int check_win();
void board();
char matrix[10]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
	char choice1,c,ch;
	char mark; int i;
	int player=1; int position;
	label1:
		do
		{
			board();
			player=(player%2)?1:2;
			if(player==1)
			mark='X';
			else
			mark='O';
			printf("Player %d turn\n",player);
			printf("Enter the position\n");
			scanf("%d",&position);
			if(position==1 && matrix[position]=='1')
			matrix[position]=mark;
			else if(position==2 && matrix[position]=='2')
			matrix[position]=mark;
			else if(position==3 && matrix[position]=='3')
			matrix[position]=mark;
			else if(position==4 && matrix[position]=='4')
			matrix[position]=mark;
			else if(position==5 && matrix[position]=='5')
			matrix[position]=mark;
			else if(position==6 && matrix[position]=='6')
			matrix[position]=mark;
			else if(position==7 && matrix[position]=='7')
			matrix[position]=mark;
			else if(position==8 && matrix[position]=='8')
			matrix[position]=mark;
			else if(position==9 && matrix[position]=='9')
			matrix[position]=mark;
			else
			{
				printf("Wrong move\n");
				player--;
			}
			i=check_win();
			player++;
			}while(i==-1);
		board();
		if(i==1)
		printf("Player %d win\n",--player);
		else
		printf("Match Draw\n");
}
void board()
{
	system("cls");
	printf("Welcome to the TIC TAC TOE game !!\n");
	printf("Player 1 = X and Player 2 = O\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",matrix[1],matrix[2],matrix[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",matrix[4],matrix[5],matrix[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",matrix[7],matrix[8],matrix[9]);
	printf("     |     |     \n");
}
int check_win()
{
	if(matrix[1]==matrix[2] && matrix[2]==matrix[3])
	return 1;
	else if(matrix[4]==matrix[5] && matrix[5]==matrix[6])
	return 1;
	else if(matrix[7]==matrix[8] && matrix[8]==matrix[9])
	return 1;
	else if(matrix[1]==matrix[4] && matrix[4]==matrix[7])
	return 1;
	else if(matrix[2]==matrix[5] && matrix[5]==matrix[8])
	return 1;
	else if(matrix[3]==matrix[6] && matrix[6]==matrix[9])
	return 1;
	else if(matrix[1]==matrix[5] && matrix[5]==matrix[9])
	return 1;
	else if(matrix[3]==matrix[5] && matrix[5]==matrix[7])
	return 1;
	else if(matrix[1]!='1' && matrix[2]!='2' && matrix[3]!='3' && matrix[4]!='4' && matrix[5]!='5' && matrix[6]!='6' && matrix[7]!='7' && matrix[8]!='8' && matrix[9]!='9')
	return 0;
	else
	return -1;
}
