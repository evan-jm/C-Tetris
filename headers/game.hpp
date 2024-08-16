#ifndef GAME_HPP
#define GAME_HPP

class Game {
  private:
    int score;
    int difficulty;
  public:
    int getScore();
    void setDifficulty(int diff);
    int getDifficulty();
    void run();
};

#endif
