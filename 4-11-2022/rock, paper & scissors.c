/*
Create Rock, Paper & scissors Game
Player1: rock
Player2(Computer): scissors --->player 1 gets 1 point

rock vs scissors- rock wins
paper vs scissors- scissors wins
paper vs rock- paper wins

Write a cprogram to allow user to play this game three times with computer. Log the scores of computer
and the player. Display the name of the winner at the end.
Notes: You have to display name of the player during the game. Take users name as an input from the user. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomNumber(int n)
{
	srand(time(NULL)); //srand takes seed as an input and is defined inside stdio.h
	return rand()% n;
}

int greater(char char1 ,char char2)
{
	//For Rock, Paper, and Scissor- returns 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1.
	if(char1==char2)
	{
		return -1;
	}
	if((char2=='r') && (char2=='s'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	if((char1=='p') && (char2=='r'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	if((char1=='s') && (char2=='p'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int playerScore=0, compScore=0, temp,i;
	char playerChar, compChar;
	char dict[]={'r','p','s'};

	printf("Welcome to the Rock, Paper And Scissor Game!!...\n");
	for(i=0;i<3;i++)
	{
		//Take Player's input
		printf("Player's Turn-> \n"); //press alt to drag the statement in the {Brackets} 
		printf("Choose 1 for Rock,2 for Paper and 3 for Scissor\n");
		scanf("%d",&temp);
		getchar();
		playerChar=dict[temp-1];
		printf("You Chose: %d\n\n",playerChar);
		
		//Generate Computer's input	
		printf("Computer's Turn-> \n"); //press alt to drag the statement in the {Brackets} 
		printf("Choose 1 for Rock,2 for Paper and 3 for Scissor\n");
		temp = generateRandomNumber(3)+1;
		compChar = dict[temp-1];
		printf("CPU Chose: %d\n\n",compChar);

		
		//Compare the Scores
		if(greater(compChar, playerChar)==1)
		{
			compScore+=1;
			printf("CPU Got it.\n\n");
		}
		else if(greater(compChar, playerChar)==-1)
		{
			compScore+=1;
			playerScore+=1;
			printf("its a draw match.\n\n");
		}
		else
		{
			playerScore+=1;
			printf("you Got it.\n\n");	
		}
		printf("You: %d\n CPU: %d\n",playerScore,compScore);
	}
	//printf("the random number between 0 to 5 is %d\n",generateRandomNumber(2));
	if(playerScore > compScore)
	{
		printf("You win the game\n");
	}
	else if(playerScore < compScore)
	{
		printf("CPU win the game\n");
	}
	else
	{
		printf("its a draw\n");
	}
	return 0;
}
/*
Welcome to the Rock, Paper And Scissor Game!!...
Player's Turn->
Choose 1 for Rock,2 for Paper and 3 for Scissor
2
You Chose: 112

Computer's Turn->
Choose 1 for Rock,2 for Paper and 3 for Scissor
CPU Chose: 114

you Got it.

You: 1
 CPU: 0
Player's Turn->
Choose 1 for Rock,2 for Paper and 3 for Scissor
3
You Chose: 115

Computer's Turn->
Choose 1 for Rock,2 for Paper and 3 for Scissor
CPU Chose: 115

its a draw match.

You: 2
 CPU: 1
Player's Turn->
Choose 1 for Rock,2 for Paper and 3 for Scissor
1
You Chose: 114

Computer's Turn->
Choose 1 for Rock,2 for Paper and 3 for Scissor
CPU Chose: 112

you Got it.

You: 3
 CPU: 1
You win the game
*/
