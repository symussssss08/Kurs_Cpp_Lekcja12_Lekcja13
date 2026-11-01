// Kurs_C_Lekcja12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std; 

int dodawanie(int x, int y)
{
    return x + y;
}

int main()
{
    
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 5) << endl;
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 90) << endl;
    cout << "Wynikiem dzialania jest: " << dodawanie(2, 45) << endl;
    return 0; 
}

