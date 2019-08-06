/*Tic Tac Toe Game*/

#include <stdio>

/*
0=true
1=false
*/

main () {
	char board[3][3];
	int nowinner=0;
	int turn = 1;
	int x;
	int y
	int empty;
	while (nowinner==0){
		printf("Player 1 enter the coordinates for your play:")
		scanf("%d %d", &x, &y);
		empty=isempty(x,y);
		if (empty==0) {
			if (turn%2==1){
				board[x][y]="X";
			} else {
				board[x][y]="O";
			}
		}
		else {
			printf("Spot already filled pick again.");
			continue;
		}
		nowinner = nowin(); //need to do this
		if (nowinner = 0){
			turn++;
			continue;
		} else {
			break;
		}
	}
	if (turn%2==1) {
		printf("Player 1 wins!");
	}
	else {
		printf("Player 2 wins!");
	}
	
	return 0;
}

int isempty(int a, int b){
	if (board[a][b]=="O" || board[a][b]=="X"){
		return 1;
	} else {
		return 0;
	}
}

int nowin(){ //need to do this
	
}