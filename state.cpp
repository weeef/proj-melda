#include<iostream>
#include <fstream>
#include <sstream>
#include <"State.h">
using namespace std;
 


 
int main(){
    Display grid;
 
 
   Update obj;
   std::ofstream f("data.txt");//write method
   f << "3 100" << std::endl;
   f.close();
    obj.point = 100;
    obj.health = 3; 
     grid.Make_Grid2(obj);
 
     Input input;
    char input = '0';
    while(input != 'q'){
       
        input = playerInput2.GetInput();
 
        if(input == 'b'){
          if(obj.health == 0){
           
            cout << "Game over" << endl;
              break;
             grid.Make_Grid2(obj);
 
           
          }
          else{
            
            obj.point -=1;
            obj.health -=1;
            grid.Make_Grid2(obj);
 
          }
           
        }
        else if(input == 'a'){
            if(obj.point == 150){
                cout << "You win" << endl;
                break;
                grid.Make_Grid2(obj);
            }
            else{
                obj.point +=1;
                obj.health +=1;
                grid.Make_Grid2(obj);
            }
           
        }
     
 
    }
 
  grid.Make_Grid2(obj);
 
 
}
