#include <iostream>
#include <stdio.h>

using namespace std;

void SetColor(int ForgC);

string login, haslo;

int kiloma, kilomb, x, y, z, q, w, s, plusy, minusy, grk, days, plnd;

int main()

{    cout << "Jacobotronix 0.01a " << endl;

     cout << "Rozliczacz trasy 2000,...20!" << endl << endl << endl;

    cout << "Login:";
    cin >> login;

    cout <<"Haslo:" ;
    cin >> haslo ;

    if ((login=="Jakqbek")&&(haslo=="Sqnx"))
    {
    cout << "wchodzisz ziom..";
    }
    else
    {
    cout << "Spadaj Parchu!!!";return 0;
    }


    cout << "" << endl;

    cout <<"Podaj wartosc kilometrow startowa:";
    cin >> kiloma;

    cout << "Podaj koncowy stan kilometrow:";
    cin >> kilomb;

    cout << "Podaj stawke gr za kilometr:";
    cin >> grk;

    cout << "Podaj ile dni byles w trasie:";
    cin >> days;

    cout << "Podaj stawke PLN za dzien trasy:";
    cin >> plnd ;

    cout <<"Jakies zaliczki w PLN?(suma):";
    cin >> minusy ;

    cout << "uznania(w sumie):";
    cin >> plusy ;

    x = kilomb - kiloma ;
    y = x * grk ;
    z = days * plnd ;
    q = y / 100  ;
    w = q + z ;
    s = w + plusy - minusy ;

    cout << "Przejechales:"<< x << endl;

    cout << "Za Prowadzennie wozu zarabiasz:"<< q << endl;

    cout << "Za Okupowanie 'fortela' nalezy sie:"<< z << endl;

    cout << "W sumie zarabiasz:"<< w << endl;

    cout << "Bilans ostateczny po uwzglednieniu dodatkowych kosztow/uznan:" << s << endl << endl;

    cout << "Chwala Jacobowi pierwszmu tego imienia: Krola podstaw c++, Namiestnika konsoli, Hetmana funkcji if / then, oraz Pierwszego kaplana kosciola swietego Linuxa ;p";
    return 0;
}
