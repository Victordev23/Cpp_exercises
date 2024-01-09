#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "insira o primeiro número inteiro: ";
    cin >> firstNumber;
    cout << "insira o segundo número inteiro: ";
    cin >> secondNumber;

    cout << "Seus números são: " << firstNumber << " e " << secondNumber << endl;
    cout << "A soma é: " << (firstNumber + secondNumber) << endl;
    cout << "A diferença é de: " << (firstNumber - secondNumber) << endl;
    cout << "O produto é: " << (firstNumber * secondNumber) << endl;
    cout << "O quociente é: " << firstNumber / secondNumber << endl;
    cout << "E o resto é de: " << firstNumber % secondNumber << endl;
}