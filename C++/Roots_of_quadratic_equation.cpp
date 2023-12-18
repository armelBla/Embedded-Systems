// Roots_of_quadratic_equation.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, rootsOne,rootsTw;

    cout << "Enter the three variable a, b, c\n";
    cin >> a >> b >> c;

    rootsOne = ((-b) + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    rootsTw = ((-b) - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    cout << "the first solution is " << rootsOne;
    cout << "the second solution us " << rootsTw;

    return 0;
}

