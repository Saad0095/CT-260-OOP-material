#include <ctime>
#include <iostream>
using namespace std;

class Game {
private:
  int teamMembers; // Random players (1–5)
  int win = 0;
  int lost = 0;

public:
  void setPlayers() {
    srand(time(0));
    teamMembers = rand() % 5 + 1;
  }
  void play() {
    int i, num1, num2;
    cout << "Total Number Of Team Members: " << teamMembers << endl << endl;
    for (i = 0; i < teamMembers; i++) {
      int fireTeam = rand() % 5 + 1;
      int fireOpponent = rand() % 5 + 1;

      cout << "Number 1: " << fireTeam << endl;
      cout << "Number 2: " << fireOpponent << endl;

      if (fireTeam == fireOpponent) {
        cout << "Enemy got hit by your team!" << endl;
        win++;
      } else {
        cout << "You got hit by the enemy team!" << endl;
        lost++;
      }
    }
    result();
  }

  void result() {
    if (win > lost) {
      cout << "Game Over! You Won";
    } else if (lost == win) {
      cout << "Game Over! Its a Tie!";
    } else {
      cout << "Game Over! You Lost";
    }
  }
};

int main() {
  Game game;
  game.setPlayers();
  game.play();
}