#ifndef __STATE_H__
#define __STATE_H__
#include <iostream>
#include <fstream>
#include <sstream>
#include "Grid.h"
using namespace std;

struct Update{
    int point;
    int health;
};
 
class Display
{
   public:
 
    void Make_Grid2(Update obj)
    {
            cout << "You have " << obj.point << " points"<< endl;
            cout << "You have "<< obj.health << " lives" << endl;
    }
};
 
 
class Input{
    protected:
    string something;
    public:
    char GetInput(){
        cout << "Press a to attack and b to block" << endl;
        cout << "Make a move: ";
        cin >> something;
 
        cout << endl;
        cout << "you said: " << something << endl;
        cout << "first letter: " << something[0] << endl;
 
        cin.clear(); // clear error flags
 
        cout << endl;
 
        return something[0];
    }
 
};
 
   
 #endif
