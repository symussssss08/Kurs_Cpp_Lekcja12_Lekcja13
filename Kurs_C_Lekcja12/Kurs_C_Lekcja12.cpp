// Kurs_C_Lekcja12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include "moje.h"


using namespace std; 

/*

    // lekcja 12

int main()
{
    
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 5) << endl;
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 90) << endl;
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 45) << endl;
    return 0; 
}

string dodawanie(int x, int y) 
{
    return "Wynik: " + to_string(x + y);
}
*/

    // lekcja 13 

int main()
{

    cout << "Wynikiem dzialania jest: " << dodawanie(2, 5) << endl;
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 90) << endl;
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 5, 13) << endl;
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 5, 13) << endl;
    cout << dodawanie(2, 5, "Obliczenia: ") << endl;
   
    return 0;
}

string dodawanie(int x, int y)
{
    return "Wynik: " + to_string(x + y);
}

string dodawanie(int x, int y, int z)
{
    return "Wynik: " + to_string(x + y + z);
}

string dodawanie(int x, int y, string z)
{
    return z + to_string(x + y);
}
