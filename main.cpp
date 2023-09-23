#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa' // ; elmaradás
    for (int i = 0;) // hiányos for ciklus szintakszis
    {
        b[i] = i * 2; // int tipusu j valtozo felvetele(kezdőérték=0), duplázásával kapjuk majd a tömb elemeit
    }
    for (int i = 0; i; i++) // hiányos for ciklus szintakszis
    {
        std::cout << "Ertek:" // ; elmaradás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] // ; elmaradás
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // memória nincs felszabadítva
    return 0;
}
