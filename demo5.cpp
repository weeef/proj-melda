#include <iostream>
#include "State.h"
#include "melda.h"
//#include "mob.h"
//#include "Grid.h"

using namespace std;
 
struct GridObject{
    int x;
    int y;

};

 
class Grid
{
    public:
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
 
class PlayerInput {
    public:
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
class Display
{
   public:
 
    void Make_Grid2()
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
};

 

   
int main()
{
    Grid grid;
    grid.Grid::width = 16;
    grid.Grid::height = 24;
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

