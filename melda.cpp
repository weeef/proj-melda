#include <iostream>
#include "melda.h"
#include <fstream>
using namespace std;

int main()
{
    Grid grid;
    grid.width=16;
    grid.height = 24;
    GridObject obj;
    obj.x =6;
    obj.y = 12;
    PlayerInput playerInput;
    char input = '0';
    while(input != 'q'){
        grid.Make_Grid(obj);
        input = playerInput.GetInput();
 
        if(input == 'a'){
       
            obj.x -=1;
        }
        else if(input == 'd'){
            obj.x +=1;
        }
 
        else if(input == 's'){
            obj.y +=1;
        }
 
        else if(input == 'w'){
            obj.y -=1;
        }
 
     
 
    }
 
    grid.Make_Grid(obj);
 
}


