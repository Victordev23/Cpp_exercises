#include <iostream>
using namespace std;

int makingWall();

int main()
{
    makingWall();
}

int makingWall()
{
    int wallHeight;
    do
    {
        cout << "Digite a altura desejada para a parede: ";
        cin >> wallHeight;
    } while (wallHeight < 1);

    for (int i = 0; i < wallHeight; i++)
    {
        for (int i = 0; i < wallHeight; i++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
