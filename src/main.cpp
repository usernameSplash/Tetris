#include <iostream>
#include "GameObject/GameObject.hpp"
#include "GameObject/GameBoard/GameBoard.hpp"

using namespace std;

int main()
{
    GameObject *go = new GameObject();
    go->ASDF();

    GameBoard *gb = new GameBoard();
    gb->ASDF();
}