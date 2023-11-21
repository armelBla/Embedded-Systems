// Area of triangle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

int main()
{
    float base, hauteur, area;
    cout << "Area of triangle\n";
    cout << "give a base of triangle\n";
    cin >> base;
    cout << "give a height of triangle\n";
    cin >> hauteur;
    area = (base * hauteur) / 2;
    cout << "Area of triangle is: \n"<< area;

}


