#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

char player = 'o';
  char ai = 'x';
  bool result = false;
  
  char gameboard[3][3]= 
	{
		{'0','0','0'},
		{'0','0','0'},
        {'0','0','0'}		
	};

void player_turn() { //telling the players whos turn it is, having them input an x and y number to select the square on the board to place there letter
  cout << "player 1 turn" << endl;
  int x_input;
  int y_input;
  cout << "please enter x number" << endl;
  cin >> x_input;
  cout << "please enter y number" << endl;
  cin >> y_input;

  gameboard[x_input][y_input] = player;
}

void ai_turn() {
  //Same as player turn but for player 2
  cout << "player 2 turn" << endl;
  int x_input;
  int y_input;
  cout << "please enter x number" << endl;
  cin >> x_input;
  cout << "please enter y number" << endl;
  cin >> y_input;

  gameboard[x_input][y_input] = ai;
}

bool win() {
  //check win for horizontal
  if (gameboard[0][0] == gameboard[0][1] && gameboard[0][1] == gameboard[0][2]) {
    if (gameboard[0][0] == player) {
      cout << "Player 1 wins" << endl;
	  return true;
    } else if (gameboard[0][0] == ai) {
      cout << "Player 2 wins" << endl;
	  return true;
    }
	else
	{
		return false;
	}
  }

  if (gameboard[1][0] == gameboard[1][1] && gameboard[1][1] == gameboard[1][2]) {
    if (gameboard[1][0] == player) {
      cout << "Player 1 wins" << endl;
	  return true;
    } else if (gameboard[1][0] == ai) {
      cout << "Player 2 wins" << endl;
	  return true;
    }
	else
	{
		return false;
	}
  }
  if (gameboard[2][0] == gameboard[2][1] && gameboard[2][1] == gameboard[2][2]) {
    if (gameboard[2][0] == player) {
      cout << "Player 1 wins" << endl;
	  return true;
    } else if (gameboard[2][0] == ai) {
      cout << "Player 2 wins" << endl;
	  return true;
    }
	else
	{
		return false;
	}
  }

  //check win for verticel

  if (gameboard[0][0] == gameboard[0][1] && gameboard[0][1] == gameboard[0][2]) {
    if (gameboard[0][0] == player) {
      cout << "Player 1 wins" << endl;
	  return true;
    } else if (gameboard[0][0] == ai) {
      cout << "Player 2 wins" << endl;
	  return true;
    }
	else
	{
		return false;
	}
  }

  if (gameboard[0][1] == gameboard[1][1] && gameboard[1][1] == gameboard[1][2]) {
    if (gameboard[0][1] == player) {
      cout << "Player 1 wins" << endl;
	  return true;
    } else if (gameboard[0][1] == ai) {
      cout << "Player 2 wins" << endl;
	  return true;
    }
	else
	{
		return false;
	}
  }
  if (gameboard[0][2] == gameboard[1][2] && gameboard[1][2] == gameboard[2][2]) {
    if (gameboard[0][2] == player) {
      cout << "Player 1 wins" << endl;
	  return true;
    } else if (gameboard[0][2] == ai) {
      cout << "Player 2 wins" << endl;
	  return true;
    }
	else
	{
		return false;
	}
  }

  //check win for diagnol
  if (gameboard[0][0] == gameboard[1][1] && gameboard[1][1] == gameboard[2][2]) {
    if (gameboard[0][0] == player) {
      cout << "Player 1 wins" << endl;
	  return true;
    } else if (gameboard[0][0] == ai) {
      cout << "Player 2 wins" << endl;
	  return true;
    }
	else
	{
		return false;
	}
  }

  if (gameboard[0][2] == gameboard[1][1] && gameboard[1][1] == gameboard[2][0]) {
    if (gameboard[0][2] == player) {
      cout << "Player 1 wins" << endl;
	  return true;
    } else if (gameboard[0][2] == ai) {
      cout << "Player 2 wins" << endl;
	  return true;
    }
	else
	{
		return false;
	}
  }

}


int main() {

  while (result != true) {
	  for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++ )
		{
			cout << "| " << gameboard[i][j] << " |";
			
		}
		cout << endl;
	}
	
	
    //player 1 takes their turn
    player_turn();
	result = win();
	if(result == true)
	{
		break;
	}
	system("clear");
	  for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++ )
		{
			cout << "| " << gameboard[i][j] << " |";
			
		}
		cout << endl;
	}
	
	
    //ai takes their turn	
    ai_turn();
	result = win();	
	
	system("clear");
	
  }
  return 0;
}