/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()//zmienne przeniesc nad int main chyba
{
    float dlugosc_pomieszczenia, szerokosc_pomieszczenia, wysokosc_pomieszczenia, wydajnosc_farby, szerokosc_okna_i_drzwi=0.9, pojemnosc_puszki_farby=1.25, powierzchnia_scian=0, powierzchnia_okien_i_drzwi=0,powierzchnia_do_pomalowania=0, Ile_litrow_farby=0,ile_puszek_farby=0;
    int liczba_okien=0, liczba_drzwi=0, wysokosc_okna=1, wysokosc_drzwi=2, liczba_elementow=0;


cout<<"Podaj dlugosc pomieszczenia w metrach: ";
cin>>dlugosc_pomieszczenia;
cout<<"Podaj szerokosc pomieszczenia w metrach: ";
cin>>szerokosc_pomieszczenia;
cout<<"Podaj wysokosc pomieszczenia w metrach: ";
cin>>wysokosc_pomieszczenia;
cout<<"Podaj wydajnosc farby w mkw/l: ";
cin>>wydajnosc_farby;

if (0.3*dlugosc_pomieszczenia<szerokosc_okna_i_drzwi & 0.3*szerokosc_pomieszczenia<szerokosc_okna_i_drzwi){
    cout<<"Pomieszczenie jest zbyt male"; //liczymy tylko dwie sciany, poniewaz przeciwlegle sciany maja takie same wymiary
return 0;
}
if (wysokosc_pomieszczenia<wysokosc_drzwi){
    cout<<"Pomieszczenie jest zbyt male";
    return 0;
}
if(0.3*dlugosc_pomieszczenia>szerokosc_okna_i_drzwi){
    liczba_elementow=liczba_elementow+(0.3*dlugosc_pomieszczenia/szerokosc_okna_i_drzwi*2); //mnozymy razy dwa poniewaz przeciwlegle sciany sa takie same
}
if(0.3*szerokosc_pomieszczenia>szerokosc_okna_i_drzwi){
    liczba_elementow=liczba_elementow+(0.3*szerokosc_pomieszczenia/szerokosc_okna_i_drzwi*2);
    }
    
switch(liczba_elementow){
    case 2: liczba_drzwi=liczba_drzwi+1;
    liczba_okien=liczba_okien+1;
    break;
    case 3: liczba_drzwi=liczba_drzwi+1;
    liczba_okien=liczba_okien+2;
    break;
    case 4: liczba_drzwi=liczba_drzwi+1;
    liczba_okien=liczba_okien+3;
    break;
    case 5: liczba_drzwi=liczba_drzwi+2;
    liczba_okien=liczba_okien+3;
    break;
    default: liczba_drzwi=liczba_drzwi+2;
    liczba_okien=liczba_okien+3;//switch case 1 nie wystepuje ze wzgledu na parzysta liczbe scian, nie mozliwym jest aby tylko na jednej scianie mogl sie pojawic jakis element
}
    cout<<"Liczba okien: "<<liczba_okien<<endl;
    cout<<"Liczba drzwi: "<<liczba_drzwi<<endl;
    
    powierzchnia_scian=szerokosc_pomieszczenia*wysokosc_pomieszczenia*2+dlugosc_pomieszczenia*wysokosc_pomieszczenia*2;
    powierzchnia_okien_i_drzwi=(wysokosc_drzwi*szerokosc_okna_i_drzwi)*liczba_drzwi+(wysokosc_okna*szerokosc_okna_i_drzwi)*liczba_okien;
    powierzchnia_do_pomalowania=powierzchnia_scian-powierzchnia_okien_i_drzwi;
Ile_litrow_farby=powierzchnia_do_pomalowania/wydajnosc_farby;
ile_puszek_farby=Ile_litrow_farby/pojemnosc_puszki_farby;

cout<<"do pomalowania pomieszczenia potrzeba kupic " <<round(ile_puszek_farby)<<" puszek farby"<<endl;


    return 0;
}


