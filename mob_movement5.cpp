#include <iostream>
//#include "State.h"
//#include "melda.h"
//#include "mob.h"
//#include "Grid.h"

using namespace std;
 
struct GridObject{
    int x;
    int y;
    int a;
    int b;
    int c;
    int d;

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

                else if (obj.a == row && obj.b == col){
                       cout << "O";
                    }

                  else if (obj.c == row && obj.d == col){
                       cout << "O";
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


 

   
int main()
{
    Grid grid;
    grid.Grid::width = 16;
    grid.Grid::height = 24;
    GridObject obj;
    obj.x =6;
    obj.y = 12;
    obj.a = 8;
    obj.b = 14;
    obj.c = 3; 
    obj.d = 10;

    PlayerInput playerInput;
    char input = '0';
    while(input != 'q'){
        grid.Make_Grid(obj);
        input = playerInput.GetInput();

       
 
        if(input == 'a'){

            if(obj.x ==0){
                obj.x == obj.x;
            }
            else{
                obj.x -=1;

            }
         
         if(obj.b == 23){
            for(int i = 0; i < 23; i++){
                obj.b == obj.b; 
                obj.b -=1;
            }
         }
         else{
            obj.b +=1;
         }

         
        }
        else if(input == 'd'){
            if(obj.x == 15){
                obj.x==obj.x;
            }
            else{
                 obj.x +=1;
            }

              if(obj.c == 15){
            for(int i = 0; i < 15; i++){
                obj.c == obj.c; 
                obj.c -=1;
            }
         }
         else{
            obj.c +=1;
         }
        }
 
        else if(input == 's'){
            if(obj.y == 23){
                obj.y == obj.y;
            }
            else{
                obj.y +=1;
            }

            if(obj.d == 23){
            for(int i = 0; i < 23; i++){
                obj.d == obj.d; 
                obj.d -=1;
            }
         }
         else{
            obj.d +=1;
         }

            
        }
 
        else if(input == 'w'){
            if(obj.y ==0){
                obj.y == obj.y;
            }
            else{
                 obj.y -=1;

            }

        }

        

        
 
     
 
    } 
    grid.Make_Grid(obj);
 
}
