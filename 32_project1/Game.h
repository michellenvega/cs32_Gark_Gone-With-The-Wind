//
//  Game.hpp
//  32_project1
//
//  Created by Michelle Navarrete on 1/6/22.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>

class Mesa;

class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nGarks);
    ~Game();

        // Mutators
    void play();

  private:
    Mesa* m_mesa;
};

int decodeDirection(char dir);




#endif /* Game_h */
