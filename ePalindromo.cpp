// Scrivi un programma in c++ che prende in input una stringa di caratteri e verifichi se questa è un palindromo ,ovvero se può essere letta allo stesso modo da sinistra a destra e viceversa

#include <iostream>
#include <string>

using namespace std;

bool isPalindromo(string parola)
{
    bool risultato = true;

    int k = parola.length() - 1;

    for (int i = 0; i < parola.length(); i++)
    {
        if (parola[i] != parola[k])
        {
            risultato = false;
            break;
        }
        else
        {
            k--;
        }
    }
    return risultato;
}

int main()
{
    string parola;
       if (isPalindromo("dvd"))
        {
            cout<< "La parola è un palindromo"<<endl;
        }
        else
        {
            cout<< "La parola non è palindromo"<<endl;
        }
}
