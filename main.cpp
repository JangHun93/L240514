#include <iostream>
using namespace std;

struct Player
{
    int PointX = 0;
    int PointY = 0;
};

int main()
{

    Player *User = new Player;
    Player *Goal = new Player;

    User->PointX = 1;
    User->PointY = 1;
    Goal->PointX = 8;
    Goal->PointY = 8;

    int Array2D[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
                           {1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                           {1, 0, 0, 0, 0, 0, 0, 1, 1, 1}, {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                           {1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                           {1, 0, 0, 0, 0, 1, 0, 0, 0, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    for (int X = 0; X < 10; X++)
    {
        for (int Y = 0; Y < 10; Y++)
        {
            if (User->PointX == X && User->PointY == Y)
            {
                cout << "P";
            }
            else if (Goal->PointX == X && Goal->PointY == Y)
            {
                cout << "G";
            }
            else if (Array2D[X][Y] == 0)
            {
                cout << " ";
            }
            else if (Array2D[X][Y] == 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    delete User;
    delete Goal;
}