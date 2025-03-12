#include <iostream>
using namespace std;

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
 
