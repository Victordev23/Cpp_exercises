#include <iostream>
using namespace std;

int collatzConjecture(int number);

int main(void)
{
    int number;
    do
    {
        cout << "Number: ";
        cin >> number;

    } while (number < 0);

    collatzConjecture(number);
}

int collatzConjecture(int number)
{
    int steps;

    if (number == 1)
    {
        cout << "End";
        return 0;
    }
    else if (number % 2 == 0)
    {
        cout << number << "\n";
        return collatzConjecture(number / 2);
    }
    else if (number % 2 != 0)
    {
        cout << number << "\n";
        return collatzConjecture(3 * number + 1);
    }
}