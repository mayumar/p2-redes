#ifndef CLIENT_GAME_HPP
#define CLIENT_GAME_HPP

#include <string>
#include <vector>

void parseBoard(std::string &table, std::vector<std::vector<std::string>> &board);
std::string showBoard(std::vector<std::vector<std::string>> &board);
void getCoords(std::string coords, std::vector<int> &shot);
void sinkShip(std::vector<std::vector<std::string>> &board, std::vector<int> &lastShot);
bool isSinked(std::vector<std::vector<std::string>> &board, std::vector<int> &lastShot);

#endif