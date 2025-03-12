#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>
#include "/usr/local/cs/cs251/show_mem.h"
#include "Grid.h"
using namespace std;


 void Grid:: Make_Grid(GridObject obj)
    {
        for (int col = 0; col < height; col++)
        {
            for (int row = 0; row < width; row++)
            {
                if (obj.x == row && obj.y == col)
                {
                    cout << "X";
                }
                else
                {
                    cout << ".";
                }
            }
 
            cout << endl;
        }
    }

     char PlayerInput::GetInput(){
        cout << "Use W, A, S, or D to move the X!\nIf you wish to quit press q!";
        cin >> something;
 
        cout << endl;
        cout << "you said: " << something << endl;
        cout << "first letter: " << something[0] << endl;
 
        cin.clear();
 
        cout << endl;
 
        return something[0];
    }

void Display:: Make_Grid2()
    {
            std::ifstream g("data.txt"); //reads in health and points from a txt file
            int health, points;
            g >> health >> points; 
            g.close();

            cout << "You have " << points << " points"<< endl;
            cout << "You have "<< health << " lives" << endl;
            std::ofstream f("data.txt"); //method of writing into file
            f << "4" << std::endl;
             f.close();


    }

