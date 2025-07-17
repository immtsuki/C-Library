//1. Display - Nepal V/s India ( Cricket Match )
//2. Team members ( team 1 / 11 players name ) ( team 2 / 11 players name )
//3. Toss ( Head/ Tail ) in random function
//4. Toss winner ( bating ) 
//5. 5 over game  
//6. 1st over = 6 ball / run = 0,1,2,3,4,6, w ( wicket )
//7. 2nd over = 6 ball / run = 0,1,2,3,4,6, w ( wicket )
//8. result Win/ Lose/ Draw
#include <stdio.h>
#include <time.h>
#include <string.h>

char team_name[2][20],team1_player_name[11][20], team2_player_name[11][20];
int i,j, over, ball, toss_result, n;
int team1_over_ball[5][6], team2_over_ball[5][6];
int team1_total_run=0, team2_total_run=0;
char guess;

int main()
{
    team_playing_data();
    printf("\n");
    toss();
    printf("\n");
    toss_winner();
    printf("\n");
    bating();
    printf("\n");
    winner();
    printf("\n");
    
    return 0;
}

//Input Team Names / Team Player Names
team_playing_data() {
    printf("\n\tCricket Match");
	for(i=0; i<=0; i++) {
		printf("\nTeam %d Name : ", i+1);
		scanf(" %20s", &team_name[i]);
		printf("\nEnter player names from Team %s\n",team_name[i]);
		
		for(j=0; j<=10; j++) {
			printf("Player %d : ", j+1);
			scanf("%20s", team1_player_name[j]);
		}
	}
		for(i=0; i<=0; i++) {
		printf("\nTeam %d Name : ", i+1+1);
		scanf(" %20s", &team_name[i+1]);
		printf("\nEnter player names from Team %s\n",team_name[i]);
		
		for(j=0; j<=10; j++) {
			printf("Player %d : ", j+1);
			scanf("%20s", team2_player_name[j]);
		}
	}
	
    system("cls");   
    printf("\nCricket match between \n%s V/s %s", team_name[0], team_name[1]);
    for(i=0;i<=10; i++) {
    	printf("\n%s     %s", team1_player_name[i], team2_player_name[i]);
	}
}

toss() {
	srand(time(0));
	printf("Do you want to guess the toss for %s ? \nH/t for Head and Tail \n :", team_name[0]);
	scanf(" %c", &guess);
    toss_result = rand() % 2;     
    printf("Toss result: %d\n", toss_result);
}

toss_winner() {
	if(toss_result == 0) { 
	    if (guess == 'h' || guess == 'H') {
	    	printf("\nYou guessed it ;]");
		}
		else {
			printf("\nOOPS !! %s did't win the toss", team_name[1]);
	}
    	printf("\n%s wins the toss ( HEAD ) and chooses for batting while %s will bowl\n",team_name[0], team_name[1]);
	}
	else {
	    if (guess == 'T' || guess == 't') {
	    	printf("\nYou guessed it ;]");
		}
		else {
			printf("\nOOPS !! %s did't win the toss", team_name[0]);
		}
		printf("\n%s wins the toss ( HEAD ) and chooses for batting while %s will bowl\n",team_name[1], team_name[0]);	
    }
    system("pause"); 
    system("cls"); 
}
    
    
bating() {
    //char team_name[2][20],team1_player_name[11][20], team2_player_name[11][20]
	//int team1_over_ball[5][6], team2_over_ball[5][6]
	//int team1_total_run=0, team2_total_run=0
	//char i, j
    char input;
	if (toss_result == 0) { // TURN FOR TEAM SECOND ( Toss result HEAD )
		printf("\nTeam %s goes for bating !!", team_name[0]);
		for(i=0 ; i<=11; i++) {
			printf("\n%s and %s for Bating",team1_player_name[i], team1_player_name[i+1]);
			for(over=0;over<=4; over++) { 
				printf("\n");
				for(ball=0; ball<=5; ball++) {
		    	printf("Over %d Ball %d Run ('w' for wicket) :  ", over+1, ball+1);
		    	scanf(" %c", &input);
		        if (isdigit(input)) { // Total run counting
		        	team1_over_ball[over][ball] = input - '0';
		        	if(team1_over_ball[over][ball] >=0 && team1_over_ball[over][ball]  <=6) {
		    	        team1_total_run += team1_over_ball[over][ball];
					}
				}
				else if (input == 'w' || 'W') {
					printf("\tWicket for %s\n", team1_player_name[i]);
					i++;
					if (i <= 9 ) {
						printf("%s and %s for Bating\n",team1_player_name[i], team1_player_name[i+1]);
					}
					else if (i == 10) {
						printf("Last batter %s for Bating\n", team1_player_name[i+1]);
					}
					else {
						printf("All players out from Team %s\n", team_name[0]);
						over=5;
						ball=7;
					}
				}
				else{
					printf("Invalid input");
				}
				
				}
			}
		}
		printf("\n\tTurn over for %s", team_name[0]);
		printf("\n%s scored total of %d runs giving target of %d to %s", team_name[0], team1_total_run, team1_total_run +1, team_name[0+1]);
		system("pause");
		system("cls");
				
		printf("\nTeam %s goes for batting !!", team_name[0+1]); // TURN FOR NEXT TEAM
		for(i=0 ; i<=11; i++) {
			printf("\n%s and %s for Bating",team2_player_name[i], team2_player_name[i+1]);
			for(over=0;over<=4; over++) { 
				printf("\n");
				for(ball=0; ball<=5; ball++) {
		    	printf("Over %d Ball %d Run ('w' for wicket) :  ", over+1, ball+1);
		    	scanf(" %c", &input);
		        if (isdigit(input)) { // Total run counting
		        	team2_over_ball[over][ball] = input - '0';
		        	if(team2_over_ball[over][ball] >=0 && team2_over_ball[over][ball]  <=6) {
		    	        team2_total_run += team2_over_ball[over][ball];
					}
				}
				else if (input == 'w' || 'W') {
					printf("\tWicket for %s\n", team2_player_name[i]);
					i++;
					if (i <= 9 ) {
						printf("%s and %s for Bating\n",team2_player_name[i], team2_player_name[i+1]);
					}
					else if (i == 10) {
						printf("Last batter %s for Bating\n", team1_player_name[i+1]);
					}
					else {
						printf("All players out from Team %s\n", team_name[0+1]);
						over=5;
						ball=7;
					}
				}
				else{
					printf("Invalid input");
				}
				
				}
			}
		}

	}

	else if (toss_result == 1) { // TURN FOR TEAM SECOND ( Toss result TAIL )
		printf("\nTeam %s goes for bating !!", team_name[0]);
		for(i=0 ; i<=11; i++) {
			printf("\n%s and %s for Bating",team1_player_name[i], team1_player_name[i+1]);
			for(over=0;over<=4; over++) { 
				printf("\n");
				for(ball=0; ball<=5; ball++) {
		    	printf("Over %d Ball %d Run ('w' for wicket) :  ", over+1, ball+1);
		    	scanf(" %c", &input);
		        if (isdigit(input)) { // Total run counting
		        	team2_over_ball[over][ball] = input - '0';
		        	if(team2_over_ball[over][ball] >=0 && team2_over_ball[over][ball]  <=6) {
		    	        team2_total_run += team2_over_ball[over][ball];
					}
				}
				else if (input == 'w' || 'W') {
					printf("\tWicket for %s\n", team1_player_name[i]);
					i++;
					if (i <= 9 ) {
						printf("%s and %s for Bating\n",team1_player_name[i], team1_player_name[i+1]);
					}
					else if (i == 10) {
						printf("Last batter %s for Bating\n", team1_player_name[i+1]);
					}
					else {
						printf("All players out from Team %s\n", team_name[0]);
						over=5;
						ball=7;
					}
				}
				else{
					printf("Invalid input");
				}
				
				}
			}
		}
		printf("\n\tTurn over for %s", team_name[0+1]);
		printf("\n%s scored total of %d runs giving target of %d to %s", team_name[0+1], team2_total_run, team2_total_run +1, team_name[0]);
		system("pause");
		system("cls");
				
		printf("\nTeam %s goes for batting !!", team_name[0+1]); // TURN FOR NEXT TEAM
		for(i=0 ; i<=11; i++) {
			printf("\n%s and %s for Bating",team2_player_name[i], team2_player_name[i+1]);
			for(over=0;over<=4; over++) { 
				printf("\n");
				for(ball=0; ball<=5; ball++) {
		    	printf("Over %d Ball %d Run ('w' for wicket) :  ", over+1, ball+1);
		    	scanf(" %c", &input);
		        	if(team1_over_ball[over][ball] >=0 && team1_over_ball[over][ball]  <=6) {
		    	        team1_total_run += team1_over_ball[over][ball];
					}
				else if (input == 'w' || 'W') {
					printf("\tWicket for %s\n", team2_player_name[i]);
					i++;
					if (i <= 9 ) {
						printf("%s and %s for Bating\n",team2_player_name[i], team2_player_name[i+1]);
					}
					else if (i == 10) {
						printf("Last batter %s for Bating\n", team1_player_name[i+1]);
					}
					else {
						printf("All players out from Team %s\n", team_name[0+1]);
						over=5;
						ball=7;
					}
				}
				else{
					printf("Invalid input");
				}
				
				}
			}
		}

	}
	else {
		printf("Error During Toss");
	}

}


winner() {
	printf("\n\t Game is over\n\t PRESS ENTER FOR RESULT\n");
	system("pause");
	system("cls");
	if (team1_total_run > team2_total_run) {
		printf("Team %s WON with the total run of %d", team_name[0], team1_total_run);
	} 
	else if (team2_total_run > team1_total_run) {
		printf("\n \tTeam %s WON with the total run of %d", team_name[1], team2_total_run);
	}
	else {
		printf("%s and %s got in TIES");
	}
}

