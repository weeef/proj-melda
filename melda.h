#ifndef __MELDA_H__
#define __MELDA_H__
#include <iostream>
#include <fstream>
using namespace std; 

class Melda {
    protected:
    int health = 3;
    int points = 0;
    public: 
struct GridObject
{
    int x;
    int y;
};
 
struct Grid
{
    int width;
    int height;
 
    void Make_Grid(GridObject obj)
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
};
 
struct PlayerInput{
 
    string something;
    char GetInput(){
        cout << "Use W, A, S, or D to move the X!\nIf you wish to quit press q!";
        cin >> something;
 
        cout << endl;
        cout << "you said: " << something << endl;
        cout << "first letter: " << something[0] << endl;
 
        cin.clear();
 
        cout << endl;
 
        return something[0];
    }
    
};
};



#endif
