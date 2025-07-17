//1. Display - Team V/s Team ( Cricket Match )
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

// Team structure
struct Team {
    char name[20];
    char player_name[11][20];
    int over_ball[5][6];
    int total_run, batter;
};

// structre for both teams / TEAM 1 and TEAM 2
struct Team team_data[2];

// other necessary variables
char guess, input;
int i, j, over, ball, toss_result;

// FUnction declaration 
void team_playing_data();
void toss();
void toss_winner();
void bating();
void current_batting(struct Team *team);
void winner();

int main() {
    team_playing_data(); // Includes Team Name, Player Names for each team
    printf("\n");
    toss(); // Toss system / assuming 0 always goes for bating ( guess system as a viewer pov )
    printf("\n");
    toss_winner(); // toss winner 1 goes for bating first / guess check
    printf("\n");
    bating(); // includes run count for each ball and over / for each player / wickets
    printf("\n");
    winner(); // decides winner or tie with margin if wins
    printf("\n");
    return 0;
}

void team_playing_data() { // input team name and team player names
    printf("\n\tCricket Match");
    for (i = 0; i < 2; i++) {
        printf("\nTeam %d Name : ", i + 1);
        scanf(" %19s", team_data[i].name);
        printf("\nEnter player names from Team %s\n", team_data[i].name);
        for (j = 0; j < 11; j++) {
            printf("Player %d : ", j + 1);
            scanf(" %19s", team_data[i].player_name[j]);
        }
        team_data[i].total_run = 0;  // initialize total runs
        team_data[i].batter = 0;     // initialize batter index
        // Optional: initialize over_ball with zeros if you want
        memset(team_data[i].over_ball, 0, sizeof(team_data[i].over_ball));
    }
    system("cls");
    printf("\nCricket match between \n%s V/s %s", team_data[0].name, team_data[1].name); // print team and team player names
    for (i = 0; i < 11; i++)
        printf("\n%s     %s", team_data[0].player_name[i], team_data[1].player_name[i]);
}

void toss() { // guess input for the toss
    srand(time(0));
    printf("Do you want to guess the toss for %s ? \nH/t for Head and Tail \n: ", team_data[0].name);
    scanf(" %c", &guess);
    toss_result = rand() % 2;
    printf("Toss result: %d\n", toss_result);
}

void toss_winner() {
    if (toss_result == 0) { // toss 0 always go fpr the bat assuming 0 is head
        if (guess == 'h' || guess == 'H') printf("\nYou guessed it ;]");
        else printf("\nOOPS !! %s didn't win the toss", team_data[1].name);
        printf("\n%s wins the toss (HEAD) and chooses for batting while %s will bowl\n", team_data[0].name, team_data[1].name);
    } else { // toss 1 always go for the bat assuming 1 is tail
        if (guess == 't' || guess == 'T') printf("\nYou guessed it ;]");
        else printf("\nOOPS !! %s didn't win the toss", team_data[0].name);
        printf("\n%s wins the toss (TAIL) and chooses for batting while %s will bowl\n", team_data[1].name, team_data[0].name);
    }
    system("pause");
    system("cls");
}

void bating() {
    if (toss_result == 0) {
        printf("\nTeam %s goes for batting !!", team_data[0].name);
        current_batting(&team_data[0]); // toss winner team 1 input
        printf("\n\tTurn over for %s", team_data[0].name);
        printf("\n%s scored total of %d runs giving target of %d to %s\n", team_data[0].name, team_data[0].total_run, team_data[0].total_run + 1, team_data[1].name);
        system("pause");
        system("cls");

        printf("\nTeam %s goes for batting !!", team_data[1].name);
        current_batting(&team_data[1]);  // toss loser team 2 input
        printf("\n%s scored total of %d runs", team_data[1].name, team_data[1].total_run);
    } else if (toss_result == 1) {
        printf("\nTeam %s goes for batting !!", team_data[1].name);
        current_batting(&team_data[1]); // toss winner team 2 input
        printf("\n\tTurn over for %s", team_data[1].name);
        printf("\n%s scored total of %d runs giving target of %d to %s\n", team_data[1].name, team_data[1].total_run, team_data[1].total_run + 1, team_data[0].name);
        system("pause");
        system("cls");

        printf("\nTeam %s goes for batting !!", team_data[0].name);
        current_batting(&team_data[0]); // toss loser team 1 input
        printf("\n%s scored total of %d runs", team_data[0].name, team_data[0].total_run);
    } else {
        printf("\n\t Error during toss");
    }
}

void current_batting(struct Team *team) {
    char input;
    int batter_index = 0, over, ball;

    printf("\n%s and %s for Bating", team->player_name[batter_index], team->player_name[batter_index + 1]);

    for (over = 0; over < 5; over++) {
        printf("\n");
        for (ball = 0; ball < 6; ball++) {
            if (batter_index >= 11) {  // all players out
                printf("All players out from Team %s\n", team->name);
                return;
            }

            printf("Over %d Ball %d Run ('w' for wicket) :  ", over + 1, ball + 1);
            scanf(" %c", &input);

            if (isdigit(input)) {
                int run = input - '0';
                if (run >= 0 && run <= 6) {
                    team->over_ball[over][ball] = run;
                    team->total_run += run;
                } else {
                    printf("Invalid run. Enter between 0 and 6.\n");
                    ball--;  // retry ball
                }
            }
            else if (input == 'w' || input == 'W') {
                printf("\tWicket for %s\n", team->player_name[batter_index]);
                batter_index++;  // next batter

                if (batter_index <= 9) {
                    printf("%s and %s for Bating\n", team->player_name[batter_index], team->player_name[batter_index + 1]);
                } else if (batter_index == 10) {
                    printf("Last batter %s for Bating\n", team->player_name[batter_index]);
                } else {
                    printf("All players out from Team %s\n", team->name);
                    return;
                }
            }
            else {
                printf("Invalid input\n");
                ball--;  // retry ball
            }
        }
    }
}

void winner() {
    printf("\n\t Game is over\n\t PRESS ENTER FOR RESULT\n");
    system("pause");
    system("cls");
    if (team_data[0].total_run > team_data[1].total_run) {
        printf("\n\tTeam %s = %d / Team %s = %d", team_data[0].name, team_data[0].total_run, team_data[1].name, team_data[1].total_run);
        printf("\nTeam %s WON with the margin of %d", team_data[0].name, team_data[0].total_run - team_data[1].total_run);
    } else if (team_data[1].total_run > team_data[0].total_run) {
        printf("\n\tTeam %s = %d / Team %s = %d", team_data[1].name, team_data[1].total_run, team_data[0].name, team_data[0].total_run);
        printf("\nTeam %s WON with the margin of %d", team_data[1].name, team_data[1].total_run - team_data[0].total_run);
    } else {
        printf("\n\tTeam %s = %d / Team %s = %d", team_data[0].name, team_data[0].total_run, team_data[1].name, team_data[1].total_run);
        printf("\n%s and %s got in TIES", team_data[0].name, team_data[1].name);
    }
}
