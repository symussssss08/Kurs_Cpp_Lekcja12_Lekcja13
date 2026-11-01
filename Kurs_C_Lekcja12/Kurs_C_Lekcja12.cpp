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
    cout << " Wynikiem dodawania jest: ";
     dodawanie(2, 5);
    return 0; 
}

