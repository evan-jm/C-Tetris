#import "../headers/game.hpp"

int Game::getScore() {
  return this->score;
}

int Game::getDifficulty() {
  return this->difficulty;
}

void Game::setDifficulty(int diff) {
  this->difficulty = diff;
}

void Game::run() {

}
