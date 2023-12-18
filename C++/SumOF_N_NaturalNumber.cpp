// SumOF_N_NaturalNumber.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;


int main()
{
    int number, sum;

    cout << "Enter the number\n";
    cin >> number;

    sum = number * (number + 1) / 2;

    cout << "la somme est " << sum;

    return 0;
}

