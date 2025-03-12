#include<iostream>
using namespace std;

struct Update{
	int point;
	int health;
};

struct Display
{
	

	void Make_Grid(Update obj)
	{
            cout << "You have " << obj.point << " points"<< endl;
            cout << "You have "<< obj.health << " lives" << endl;
	}
};




struct PlayerInput{

    string something;
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

    


int main(){
    Display grid;


   Update obj; 
    obj.point = 100;
    obj.health = 3;
     grid.Make_Grid(obj);

     PlayerInput playerInput;
    char input = '0';
    while(input != 'q'){
       
        input = playerInput.GetInput();

        if(input == 'b'){
          if(obj.health == 0){
            
            cout << "Game over" << endl;
              break;
             grid.Make_Grid(obj);

            
          }
          else{
            obj.point -=1;
            obj.health -=1;
            grid.Make_Grid(obj);

          }
            
        }
        else if(input == 'a'){
            if(obj.point == 150){
                cout << "You win" << endl;
                break;
                grid.Make_Grid(obj);
            }
            else{
                obj.point +=1;
                obj.health +=1;
                grid.Make_Grid(obj);
            }
            
        }
      

    }

  grid.Make_Grid(obj);

  
}
