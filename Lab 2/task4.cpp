#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Team {
private:
  int noOfPlayers;
  int noOfHits = 0;

public:
  int getNumberOfPlayers() { return noOfPlayers; }
  void setNumberOfPlayers(int n) { noOfPlayers = n; }
  int getNumberOfHits() { return noOfHits; }
  void incrementNumberOfHits() { noOfHits++; }
};

class Game {
private:
  Team myTeam;
  Team enemyTeam;

public:
  void start() {
    srand(time(0));

    int n = rand() % 5 + 3;
    myTeam.setNumberOfPlayers(n);
    cout << "Total number of players in your team: "
         << myTeam.getNumberOfPlayers() << endl;

    for (int i = 0; i < n; i++) {
      int num1 = (rand() % 10) + 1;
      cout << "Number1: " << num1 << endl;
      int num2 = (rand() % 10) + 1;
      cout << "Number2: " << num2 << endl;

      if (num1 == num2) {
        cout << "Enemy got hit by your team!" << endl;
        myTeam.incrementNumberOfHits();
      } else {
        cout << "You got hit by the enemy team!" << endl;
        enemyTeam.incrementNumberOfHits();
      }
    }
    displayResult();
  }
  void displayResult() {
    cout << "Game Over! ";
    if (myTeam.getNumberOfHits() > enemyTeam.getNumberOfHits()) {
      cout << "You won" << endl;
    } else if (myTeam.getNumberOfHits() < enemyTeam.getNumberOfHits()) {
      cout << "You loose" << endl;
    } else {
      cout << "Draw" << endl;
    }
  }
};

int main() {
  Game game;
  game.start();
  return 0;
}