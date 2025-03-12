#include <iostream>
using namespace std;

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

        if(input == 'w'){
		
            obj.x -=1;
        }
        else if(input == 'e'){
            obj.x +=1;
        }

        else if(input == 's'){
            obj.y +=1;
        }

        else if(input == 'n'){
            obj.y -=1;
        }

      

    }

	grid.Make_Grid(obj);

}
