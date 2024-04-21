#include <iostream>
#include <math.h>
using namespace std;

bool CzyParzysta(int a)
{
    if (a == 0)
        return true;
    if (a % 2 == 0)
        return true;
    else
        return false;
}

int Wyraz(int n)
{
    int wyraz;
    if (n <= 0)
    {
        cout << "nie mozna oblpiczyc tego wyraziu ciagu";
        return 0;
    }
    else
    {
        wyraz = (3 * n) + 4;
        return wyraz;
    }
}

int OdDo(int a, int b)
{
    for (int i = a; i < b; i++)
    cout << i << endl;
    return b;
}

int silnia(int a)
{
    int wy = 1;
    for (int i = 1; i < a; i++)
    {
        wy = wy * i;
       
    }
    int wynik = wy;

    return wy*a;
}

int main()
{
    int a;
    cout << "zad.4 Napisz funkcje ktora sprawdzi czy liczba jest parzysta"<<endl<<"Podaj liczbe: ";
    cin >> a;
    if (CzyParzysta(a) == false)
        cout << "twoja liczba jest nieparzysta" << endl;
    else
        cout << "Twoja liczba jest parzysta" << endl; 
    cout << endl;

    int b;
    cout << "zad.10 Napisz funkcje ktora policzy n- ty wyraz ciagu an=3n+4" << endl;
    cout << "Podaj ktory wyraz ciagu an=3n+4 chcesz policzyc: ";
    cin >> b;
    cout << "Twoj wyraz ciagu an=3n+4 jest rowny: ";
    cout << Wyraz(b);
    cout << endl << endl; 

    int d, c;
    cout << "zad.28 napisz funkcje ktora wypisze na ekran liczby od a do b" << endl;
    cout << "Podaj od ktorej liczby mam zaczac wypisywac: ";
    cin >> d;
    cout << endl;
    cout << "Podaj na ktorej liczbie mam skonczyc: ";
    cin >> c;
    cout << endl;
    cout << OdDo(d, c) << endl;
    cout << endl;

    int j;
    cout << "zad.9 Napisz funkcje ktora policzy silnie";
    cout << "z jakiej liczby chcesz policzyc silnie: ";
    cin >> j;
    cout << "silnia z twojej liczby wynosi: ";
    cout << silnia(j);

}