#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>
// POP 2015-12-17 projekt 1 Czapiewski Robert EiT 1 160287 /// Codeblocks
using namespace std;

int daj_karte(bool t[52], int zakres)
{
    int a = rand() % zakres;
    int i = 1;
    while (a >= 0) {
        if (t[i])
            a--;
        i = (i + 1) % 52;
    }
    if (i == 0)
        i = 51;
    else
        i--;
    t[i] = 0;
    zakres--;
    return i;
}

void DEKODOWANIE(int liczba)
{
    if (liczba < 13) {
        if (liczba > 9) {
            if (liczba == 10) {
                cout << "Jx";
            }
            if (liczba == 11) {
                cout << "Qx";
            }
            if (liczba == 12) {
                cout << "Kx";
            }
        }
        else {
            cout << liczba + 1 << "x";
        }
    }
    ////Trefl
    if (liczba > 12 && liczba < 26) {
        if (liczba > 22) {
            if (liczba == 23) {
                cout << "JX";
            }
            if (liczba == 24) {
                cout << "QX";
            }
            if (liczba == 25) {
                cout << "KX";
            }
        }
        else {
            cout << liczba - 12 << "X";
        }
    }
    ////Karo
    if (liczba > 25 && liczba < 39) {
        if (liczba > 35) {
            if (liczba == 36) {
                cout << "Jy";
            }
            if (liczba == 37) {
                cout << "Qy";
            }
            if (liczba == 38) {
                cout << "Ky";
            }
        }
        else {
            cout << liczba - 25 << "y";
        }
    }
    ////Kier
    if (liczba > 38) {
        if (liczba > 48) {
            if (liczba == 49) {
                cout << "JY";
            }
            if (liczba == 50) {
                cout << "QY";
            }
            if (liczba == 51) {
                cout << "KY";
            }
        }
        else {
            cout << liczba - 38 << "Y";
        }
    }
}
void POMOC() {
   cout << "ΙΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ»" << endl
        << "Ί                               PASJANS 1.4                                       Ί" << endl
        << "ΜΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΉ" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί Legenda:                                                                        Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί x - Pik              C - Krol           Przyklady:                              Ί" << endl
        << "Ί X - Trefl            Q - Dama                                                   Ί" << endl
        << "Ί y - Karo             J - Walet          2x - 3 Pik                              Ί" << endl
        << "Ί Y - Kier             10 - 10            CY - Krol Kier                          Ί" << endl
        << "Ί                      9 - 9              0y - As Karo                            Ί" << endl
        << "Ί                      8 - 8                                                      Ί" << endl
        << "Ί                      7 - 7                                                      Ί" << endl
        << "Ί                      6 - 6                                                      Ί" << endl
        << "Ί                      5 - 5                                                      Ί" << endl
        << "Ί                      4 - 4                                                      Ί" << endl
        << "Ί                      3 - 3                                                      Ί" << endl
        << "Ί                      2 - 2                                                      Ί" << endl
        << "Ί                      A - As                                                     Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί  Opis:                                                                          Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί  Celem gry jest jest przeniesienie wszystkich kart z pola gry (kolumny 1-8)     Ί" << endl
        << "Ί  do pol koncowych (X, x, Y, y). W polach koncowych karty odkladane sa w         Ί" << endl
        << "Ί  kolejnosci od Asa do Krola (0 - C). Gracz moze przenosic karty miedzy          Ί" << endl
        << "Ί  kolumnami pola gry pod warunkiem ze przenoszona karta ma wartosc o 1 mniejsza  Ί" << endl
        << "Ί  od ostatniej ostatniej karty w kolumnie do ktorej ja przenosi oraz jest innego Ί" << endl
        << "Ί  znaku. Ponadto do dyspozycji sa pola tymczasowe (A -D) do ktorych mozna        Ί" << endl
        << "Ί  przeniesc 1 dowolna   karte, a nastepnie przeniesc ja z powrotem do pola gry   Ί" << endl
        << "Ί  lub pola koncowego. Nie ma mozliwosci zabrania kart z pol koncowych.           Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί  Ruch:                                                                          Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί  Aby przeniesc karte, nalezy podac kolumne z ktorej karta ma byc przeniesiona,  Ί" << endl
        << "Ί  nacisnac przycisk ENTER, a nastepnie podac kolumne docelowa i zatwierdzic      Ί" << endl
        << "Ί  ENTER.                                                                         Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί     Przyklady:                                                                  Ί" << endl
        << "Ί     2  ENTER 3  - przenies karte z kolumny 2 do kolumny 3                       Ί" << endl
        << "Ί     4  ENTER A  - przenies karte z kolumny 4 do pola tymczasowego A             Ί" << endl
        << "Ί     D  ENTER Y  - przenies karte z pola tymczasowego D do pola koncowego Kier   Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί   Powodzenia!                                                                   Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί   Lista wprowadzanych zmian dostepna po wpisaniu changelog                      Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί   Autor:                                                                        Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "Ί   Koraz                                                                         Ί" << endl
        << "Ί   Robert Czapiewski EiT 1                                                       Ί" << endl
        << "Ί                                                                                 Ί" << endl
        << "ΘΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΌ" << endl
        ;
}
void TEMPY(int Temp1, int Temp2, int Temp3, int Temp4)
{
    if (Temp1 == -1) {
        cout << "--"
            << "  ";
    }
    else {
        DEKODOWANIE(Temp1);
        cout << "  ";
    }
    if (Temp2 == -1) {
        cout << "--"
            << "  ";
    }
    else {
        DEKODOWANIE(Temp2);
        cout << "  ";
    }
    if (Temp3 == -1) {
        cout << "--"
            << "  ";
    }
    else {
        DEKODOWANIE(Temp3);
        cout << "  ";
    }
    if (Temp4 == -1) {
        cout << "--"
            << "  ";
    }
    else {
        DEKODOWANIE(Temp4);
        cout << "  ";
    }
    cout << "    ";
}

void KONCOWE(int Konc1, int Konc2, int Konc3, int Konc4)
{
    if (Konc1 == -1) {
        cout << "--"
            << "  ";
    }
    else {
        DEKODOWANIE(Konc1);
        cout << "  ";
    }
    if (Konc2 == 12) {
        cout << "--"
            << "  ";
    }
    else {
        DEKODOWANIE(Konc2);
        cout << "  ";
    }
    if (Konc3 == 25) {
        cout << "--"
            << "  ";
    }
    else {
        DEKODOWANIE(Konc3);
        cout << "  ";
    }
    if (Konc4 == 38) {
        cout << "--"
            << "  ";
    }
    else {
        DEKODOWANIE(Konc4);
        cout << "  ";
    }
    cout << endl
        << endl;
}

int KOLUMNY(int kolumna, int pole[8][20]) {
    int wartosc;
    wartosc = 0;

    while (pole[kolumna][wartosc] > -1)wartosc++;
    if (pole[kolumna][wartosc] == -1) { wartosc--; return wartosc; }
}

void SPRAWDZANIE(int pole[8][20], int Temp1, int Temp2, int Temp3, int Temp4, int Konc1, int Konc2, int Konc3, int Konc4) {
    int niema = 0;
    int h[8];
    for (int i = 0; i < 8;i++) {
        h[i] = KOLUMNY(i, pole);
    }
    //////////Przeszukiwanie po polu////////////////////////
    int v;
    for (int z = 0; z < 8;z++) {
        v = z + 1;
        for (int p = 0; p < 8;p++) {

            if (v == 8) { v = 0; }
            if (pole[z][h[z]] == pole[v][h[v]] + 14) { niema++; }
            if (pole[z][h[z]] == pole[v][h[v]] + 27) { niema++; }
            if (pole[z][h[z]] == pole[v][h[v]] + 40) { niema++; }
            if (pole[z][h[z]] == pole[v][h[v]] - 12) { niema++; }
            if (pole[z][h[z]] == pole[v][h[v]] - 25) { niema++; }
            if (pole[z][h[z]] == pole[v][h[v]] - 37) { niema++; }

            v++;
        }


    }

    //Tempy
    if (Temp1 == -1) { niema++; }
    if (Temp2 == -1) { niema++; }
    if (Temp3 == -1) { niema++; }
    if (Temp4 == -1) { niema++; }
    //Koncowe
    for (int aa = 0;aa < 8;aa++) {
        if (pole[aa][h[aa]] == Konc1 + 1) { cout << "Mozesz przeniesc karte na pole koncowe x" << endl;niema++; }
        if (pole[aa][h[aa]] == Konc2 + 1) { cout << "Mozesz przeniesc karte na pole koncowe X" << endl;niema++; }
        if (pole[aa][h[aa]] == Konc3 + 1) { cout << "Mozesz przeniesc karte na pole koncowe y" << endl;niema++; }
        if (pole[aa][h[aa]] == Konc4 + 1) { cout << "Mozesz przeniesc karte na pole koncowe Y" << endl;niema++; }
    }


    cout << "Znaleziono " << niema << " mozliwych ruchow.";
}


void CHANGELOG() {
    cout<< "ΙΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝ»" << endl
        << "Ί                                       CHANGELOG                                         Ί" << endl
        << "ΜΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΉ" << endl
        << "Ί  Wersja 1.4                                                                             Ί" << endl
        << "Ί  -Zmiana ramek ze znakow '=' na elementy budowania GUI                                  Ί" << endl
        << "Ί  -Poprawa skladni kodu                                                                  Ί" << endl
        << "Ί                                                                                         Ί" << endl
        << "Ί  Wersja 1.3                                                                             Ί" << endl
        << "Ί  -Normalne oznaczenia kart A-as K-krol itd. oraz liczone normalnie od 2 do 10           Ί" << endl
        << "Ί                                                                                         Ί" << endl
        << "Ί  Wersja 1.2.1                                                                           Ί" << endl
        << "Ί  -Do przenoszenia na pola tymczasowe mozna teraz uzywac malych liter                    Ί" << endl
        << "Ί  -Transformacja kodu aby nie korzystal z tzw. zmiennych globalnych                      Ί" << endl
        << "Ί                                                                                         Ί" << endl
        << "Ί  Wersja 1.2                                                                             Ί" << endl
        << "Ί  -Dodano mechanizm sprawdzajacy ilosc mozliwych ruchow                                  Ί" << endl
        << "Ί  -Uniemozliwienie blednego przenoszenia kart w obaszarze pola                           Ί" << endl
        << "Ί  -Uniemozliwienie blednego przenoszenia z pol dodatkowych na koncowe                    Ί" << endl
        << "Ί  -Uniemozliwienie przenoszenia kart z pol koncowych                                     Ί" << endl
        << "Ί  -Dodano wyswietlanie iformacji w wypadku gdy mozliwe jest przeniesienie na pole        Ί" << endl
        << "Ί   koncowe                                                                               Ί" << endl
        << "Ί                                                                                         Ί" << endl
        << "Ί  Wersja 1.1                                                                             Ί" << endl
        << "Ί  -Uniemozliwienie przeniesienia karty na pola ABCD, gdy juz znajduje sie na nich karta  Ί" << endl
        << "Ί  -Uniemozliwienie przeniesienia kart na pola koncowe bez zachowania kolejnosci i znaku  Ί" << endl
        << "Ί  -Wprowadzenie CHANGELOG'u                                                              Ί" << endl
        << "Ί  -Zamiana kolejnosci pol koncowych na bardziej intuicyjne                               Ί" << endl
        << "Ί                                                                                         Ί" << endl
        << "Ί  Wersja 1.0                                                                             Ί" << endl
        << "Ί  -Pierwsza wersja stabilna - uniemozliwienie crash'u gry poprzez wpisywanie blednych    Ί" << endl
        << "Ί   wartosci.                                                                             Ί" << endl
        << "Ί  -Wprowadzenie pomocy                                                                   Ί" << endl
        << "Ί                                                                                         Ί" << endl
        << "ΘΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΝΌ" << endl;
}
int main()
{
    ///////////////////////////////Inicjacja///////////////////////////////////
    bool t[52]; // tablica czy dana karta byla, resetowac za kazdym rozdaniem;
    int zakres; // zakres = 52 przy kazdym resecie;
    zakres = 52;
    for (int i = 0; i < 52; i++)t[i] = 1;
    int Temp1, Temp2, Temp3, Temp4, Konc1, Konc2, Konc3, Konc4, Temp5, Temp6, ruch1, ruch2;
    Temp1 = Temp2 = Temp3 = Temp4 = Konc1 = Temp5 = Temp6 = -1;
    Konc2 = 12;
    Konc3 = 25;
    Konc4 = 38;
    ruch1 = ruch2 = 98;
    string ruch1tekst, ruch2tekst;
    bool oszukuje = true;
    int dziesiatka = 0;
    //////////////////////////Losowanie polaa///////////////////////////////////
    // [poziom] [pion]   0-12 - pik   13-25 - trefl  26-38 - karo  39-51 kier
    int h, w, ee, rr;
    h = w = ee = rr = 0;
    srand(time(0));
    int pole[8][20];

    for (int i = 0; i < 52; i++) {
        pole[ee][rr] = daj_karte(t, zakres);
        ee++;

        if (ee == 8) {
            rr++;
            ee = 0;
        }

    }

    /*for (int i = 0; i < 52; i++) {
        pole[i % 8].push_back(daj_karte());
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < pole[i].size(); j++) {
            cout << pole[i][j] << "  ";
        }
        cout << endl;
    }*/
    /////////////////////////////Nadpisywanie pustych miejsc///////////////////
    pole[4][6] = 4; pole[5][6] = 4;pole[6][6] = 4;pole[7][6] = 4;
    for (int i = 0; i < 108; i++) {
        pole[ee][rr] = -1;
        ee++;

        if (ee == 8) {
            rr++;
            ee = 0;
        }
    }
    /////////////////////////////////POMOC/////////////////////////////////////
    cout << endl << "Aby uzyskac pomoc wpisz pomoc." << endl << endl;
    ////////////////////PODTRZYMYWANIE PROGRAMU/////PETLA//////////////////////
    for (;;) {
        //////////////// Wyswietlanie////////////////////////
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        cout << "A   B   C   D       x   X   y   Y" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        TEMPY(Temp1, Temp2, Temp3, Temp4);
        KONCOWE(Konc1, Konc2, Konc3, Konc4);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        cout << "1   2   3   4   5   6   7   8" << endl
            << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15
        );
        w = 0;
        h = 0;

        for (int i = 0; i < 160; i++) {
            ////Puste
            if (pole[h][w] == -1) { cout << "  "; }
            ////Pik
            if (pole[h][w] > -1 && pole[h][w] < 13) {
                if (pole[h][w] > 9 || pole[h][w] == 0) {
                    if (pole[h][w] == 10) {

                        cout << "Jx";
                    }
                    if (pole[h][w] == 11) {

                        cout << "Qx";
                    }
                    if (pole[h][w] == 12) {

                        cout << "Kx";
                    }
                    if (pole[h][w] == 0) {

                        cout << "Ax";
                    }
                }
                else {
                    if (pole[h][w] + 1 == 10) { dziesiatka = 1; }
                    cout << pole[h][w] + 1 << "x";
                }
            }
            ////Trefl
            if (pole[h][w] > 12 && pole[h][w] < 26) {
                if (pole[h][w] > 22 || pole[h][w] == 13) {
                    if (pole[h][w] == 23) {
                        cout << "JX";
                    }
                    if (pole[h][w] == 24) {
                        cout << "QX";
                    }
                    if (pole[h][w] == 25) {
                        cout << "KX";
                    }
                    if (pole[h][w] == 13) {

                        cout << "AX";
                    }
                }
                else {
                    if (pole[h][w] - 12 == 10) { dziesiatka = 1; }
                    cout << pole[h][w] - 12 << "X";
                }
            }
            ////Karo
            if (pole[h][w] > 25 && pole[h][w] < 39) {
                if (pole[h][w] > 35 || pole[h][w] == 26) {
                    if (pole[h][w] == 36) {
                        cout << "Jy";
                    }
                    if (pole[h][w] == 37) {
                        cout << "Qy";
                    }
                    if (pole[h][w] == 38) {
                        cout << "Ky";
                    }
                    if (pole[h][w] == 26) {

                        cout << "Ay";
                    }
                }
                else {
                    if (pole[h][w] - 25 == 10) { dziesiatka = 1; }
                    cout << pole[h][w] - 25 << "y";
                }
            }
            ////Kier
            if (pole[h][w] > 38) {
                if (pole[h][w] > 48 || pole[h][w] == 39) {
                    if (pole[h][w] == 49) {
                        cout << "JY";
                    }
                    if (pole[h][w] == 50) {
                        cout << "QY";
                    }
                    if (pole[h][w] == 51) {
                        cout << "KY";
                    }
                    if (pole[h][w] == 39) {

                        cout << "AY";
                    }
                }
                else {
                    if (pole[h][w] - 38 == 10) { dziesiatka = 1; }
                    cout << pole[h][w] - 38 << "Y";
                }
            }

            h++;
            if (h == 8) {
                h = 0;
                w++;
            }
            cout << " ";
            if (dziesiatka == 0) { cout << " "; }
            dziesiatka = 0;
            if (h % 8 == 0) {
                cout << "\n";
            }
        }
        cout << endl << endl;

        ///////////////SPRAWDZANIE MOZLIWYCH RUCHOW////////////////
        SPRAWDZANIE(pole, Temp1, Temp2, Temp3, Temp4, Konc1, Konc2, Konc3, Konc4);
        ///////////////PRZYJMOWANIE RUCHU/////////////////////

        cin >> ruch1tekst;
        if (ruch1tekst == "pomoc" || ruch1tekst == "POMOC") { POMOC();ruch1 = 99;ruch2 = 99; }
        if (ruch1tekst == "changelog" || ruch1tekst == "CHANGELOG") { CHANGELOG();ruch1 = 99;ruch2 = 99; }
        cin >> ruch2tekst;

        //////////////INTERPRETACJA///////////////////

        if (ruch1tekst == "1") { ruch1 = 0; }
        if (ruch1tekst == "2") { ruch1 = 1; }
        if (ruch1tekst == "3") { ruch1 = 2; }
        if (ruch1tekst == "4") { ruch1 = 3; }
        if (ruch1tekst == "5") { ruch1 = 4; }
        if (ruch1tekst == "6") { ruch1 = 5; }
        if (ruch1tekst == "7") { ruch1 = 6; }
        if (ruch1tekst == "8") { ruch1 = 7; }
        if (ruch1tekst == "A" || ruch1tekst == "a") { ruch1 = 8; }
        if (ruch1tekst == "B" || ruch1tekst == "b") { ruch1 = 9; }
        if (ruch1tekst == "C" || ruch1tekst == "c") { ruch1 = 10; }
        if (ruch1tekst == "D" || ruch1tekst == "d") { ruch1 = 11; }
        //if(ruch1tekst=="X"){ruch1=12;}
        //if(ruch1tekst=="x"){ruch1=13;}    Ruchy niedozwolone
        //if(ruch1tekst=="Y"){ruch1=14;}
        //if(ruch1tekst=="y"){ruch1=15;}
     /////
        if (ruch2tekst == "1") { ruch2 = 0; }
        if (ruch2tekst == "2") { ruch2 = 1; }
        if (ruch2tekst == "3") { ruch2 = 2; }
        if (ruch2tekst == "4") { ruch2 = 3; }
        if (ruch2tekst == "5") { ruch2 = 4; }
        if (ruch2tekst == "6") { ruch2 = 5; }
        if (ruch2tekst == "7") { ruch2 = 6; }
        if (ruch2tekst == "8") { ruch2 = 7; }
        if (ruch2tekst == "A" || ruch2tekst == "a") { ruch2 = 8; }
        if (ruch2tekst == "B" || ruch2tekst == "b") { ruch2 = 9; }
        if (ruch2tekst == "C" || ruch2tekst == "c") { ruch2 = 10; }
        if (ruch2tekst == "D" || ruch2tekst == "d") { ruch2 = 11; }
        if (ruch2tekst == "x") { ruch2 = 12; }
        if (ruch2tekst == "X") { ruch2 = 13; }
        if (ruch2tekst == "y") { ruch2 = 14; }
        if (ruch2tekst == "Y") { ruch2 = 15; }
        /////////////////////////////////////DZIALANIE/////////////////////////////////////////////////////////////////
        if (ruch1 < 8) { Temp5 = KOLUMNY(ruch1, pole); }
        if (ruch2 < 8) { Temp6 = KOLUMNY(ruch2, pole); }
        ////Zabezpieczenie przed oszustwem na polu////////
        oszukuje = true;
        if (ruch1 < 8 && ruch2 < 8) {
            if (pole[ruch1][Temp5] + 14 == pole[ruch2][Temp6]) { oszukuje = false; }
            if (pole[ruch1][Temp5] + 27 == pole[ruch2][Temp6]) { oszukuje = false; }
            if (pole[ruch1][Temp5] + 40 == pole[ruch2][Temp6]) { oszukuje = false; }
            if (pole[ruch1][Temp5] - 12 == pole[ruch2][Temp6]) { oszukuje = false; }
            if (pole[ruch1][Temp5] - 25 == pole[ruch2][Temp6]) { oszukuje = false; }
            if (pole[ruch1][Temp5] - 38 == pole[ruch2][Temp6]) { oszukuje = false; }
            if (oszukuje == true) { ruch1 = ruch2 = 99; }
        }
        ////////////////////////////////////////
        if (ruch1 < 8) {
            if (ruch2 < 8) { pole[ruch2][Temp6 + 1] = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; }
            if (ruch2 == 8) { if (Temp1 == -1) { Temp1 = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; } }
            if (ruch2 == 9) { if (Temp2 == -1) { Temp2 = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; } }
            if (ruch2 == 10) { if (Temp3 == -1) { Temp3 = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; } }
            if (ruch2 == 11) { if (Temp4 == -1) { Temp4 = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; } }
            if (ruch2 == 12) { if (Konc1 + 1 == pole[ruch1][Temp5]) { Konc1 = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; } }
            if (ruch2 == 13) { if (Konc2 + 1 == pole[ruch1][Temp5]) { Konc2 = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; } }
            if (ruch2 == 14) { if (Konc3 + 1 == pole[ruch1][Temp5]) { Konc3 = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; } }
            if (ruch2 == 15) { if (Konc4 + 1 == pole[ruch1][Temp5]) { Konc4 = pole[ruch1][Temp5];pole[ruch1][Temp5] = -1; } }
        }
        if (ruch1 > 7 && ruch1 < 16) {
            if (ruch2 > 11) {
                if (ruch1 == 8) {
                    if (ruch2 == 12) { if (Temp1 == Konc1 + 1) { Konc1 = Temp1;Temp1 = -1; } }
                    if (ruch2 == 13) { if (Temp1 == Konc2 + 1) { Konc2 = Temp1;Temp1 = -1; } }
                    if (ruch2 == 14) { if (Temp1 == Konc3 + 1) { Konc3 = Temp1;Temp1 = -1; } }
                    if (ruch2 == 15) { if (Temp1 == Konc4 + 1) { Konc4 = Temp1;Temp1 = -1; } }
                }
                if (ruch1 == 9) {
                    if (ruch2 == 12) { if (Temp2 == Konc1 + 1) { Konc1 = Temp2;Temp2 = -1; } }
                    if (ruch2 == 13) { if (Temp2 == Konc2 + 1) { Konc2 = Temp2;Temp2 = -1; } }
                    if (ruch2 == 14) { if (Temp2 == Konc3 + 1) { Konc3 = Temp2;Temp2 = -1; } }
                    if (ruch2 == 15) { if (Temp2 == Konc4 + 1) { Konc4 = Temp2;Temp2 = -1; } }
                }
                if (ruch1 == 10) {
                    if (ruch2 == 12) { if (Temp3 == Konc1 + 1) { Konc1 = Temp3;Temp3 = -1; } }
                    if (ruch2 == 13) { if (Temp3 == Konc2 + 1) { Konc2 = Temp3;Temp3 = -1; } }
                    if (ruch2 == 14) { if (Temp3 == Konc3 + 1) { Konc3 = Temp3;Temp3 = -1; } }
                    if (ruch2 == 15) { if (Temp3 == Konc4 + 1) { Konc4 = Temp3;Temp3 = -1; } }
                }
                if (ruch1 == 11) {
                    if (ruch2 == 12) { if (Temp4 == Konc1 + 1) { Konc1 = Temp4;Temp4 = -1; } }
                    if (ruch2 == 13) { if (Temp4 == Konc2 + 1) { Konc2 = Temp4;Temp4 = -1; } }
                    if (ruch2 == 14) { if (Temp4 == Konc3 + 1) { Konc3 = Temp4;Temp4 = -1; } }
                    if (ruch2 == 15) { if (Temp4 == Konc4 + 1) { Konc4 = Temp4;Temp4 = -1; } }
                }
            }
            else {
                if (ruch1 == 8) { pole[ruch2][Temp6 + 1] = Temp1;Temp1 = -1; }
                if (ruch1 == 9) { pole[ruch2][Temp6 + 1] = Temp2;Temp2 = -1; }
                if (ruch1 == 10) { pole[ruch2][Temp6 + 1] = Temp3;Temp3 = -1; }
                if (ruch1 == 11) { pole[ruch2][Temp6 + 1] = Temp4;Temp4 = -1; }
            }
        }
        ruch1 = ruch2 = 99;
    }

    return 0;
}
