
#include <iostream>
#include <conio.h>
#include<stdio.h>
#include <Windows.h>
#include <math.h>
using namespace std;

double a,b,c,h;
char wybor,wyb,wyb1;
string color;



//funkcja do zmiany koloru
enum Kolor
{
    CZARNY,
    CIEMNONIEBIESKI,
    ZIELONY,
    TURKUSOWY,
    BRAZOWY,
    MORSKI,
    OLIWKOWY,
    JASNOSZARY,
    SZARY,
    NIEBIESKI,
    JASNOZIELONY,
    JASNONIEBIESKI,
    CZEROWNY,
    ROZOWY,
    ZLOTY,
    BIALY

};


void kolor( Kolor c )
{
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), c );
}

double pole_rownolegloboku(double a,double h)
{

    double pole{a*h};
    return pole;


}
double pole_trojkata(double a,double h)
{

    double pole= a*h/2;
    return pole;


}
double pole_prostokata(double a, double b)
{


    double pole{a*b};
    return pole;

}
double pole_kwadratu(double a)
{

    double pole= a*a;
    return pole;



}

//funkcja obliczjaca
double dzialanie(char znak,double a,double b)
{

    double wynik;

    if(znak=='1')
    {
        wynik= a+b;
        return wynik;
    }
    if(znak=='2')
    {
        wynik= a-b;
        return wynik;
    }
    if(znak=='3')
    {
        wynik= a*b;
        return wynik;
    }
    if(znak=='4')
    {
        wynik= a/b;
        return wynik;
    }
}


//funkcja glowna
int main()
{






    do
    {



        HANDLE hOut;
        hOut = GetStdHandle( STD_OUTPUT_HANDLE );

        kolor(ZIELONY);
        cout << "ROSZEK CALCULATOR ";
        kolor( OLIWKOWY);
        cout<<"             ROSZEK STUDIO";
        kolor(ZLOTY);
        cout<<"                   VERSION: 2.0 BETA"<<endl;
        cout<<"------------------------------------------------------------------"<<endl;

        kolor( CZEROWNY);
        cout<<"MENU GLOWNE"<<endl;
        cout<<"1. KALKULATOR"<<endl;
        cout<<"2. KALKULATOR POL FIGUR"<<endl;
        cout<<"3. KALKULATOR TWIERDZENIA PITAGOORASA"<<endl;
        cout<<"4. WYJDZ"<<endl;

        wyb=getch();
        switch (wyb)
        {
            kolor(ZIELONY);
        case '1':
        {
            cout<<"------------------------------------------------------------------"<<endl<<endl;
            cout<<"Podaj 1 liczbe"<<endl;
            cin>>a;
            cout<<"Podaj 2 liczbe"<<endl;
            cin>>b;


            system("cls");
            kolor(ZIELONY);
            cout<<"---------------------------------------------------------------------"<<endl;
            cout<<"1. DODAWANIE "<<endl;
            cout<<"2. ODEJMOWANIE"<<endl;
            cout<<"3.  MNOZENIE"<<endl;
            cout<<"4. DZIELENIE"<<endl;


            wybor=getch();
            switch (wybor)
            {


            case '1':
                dzialanie( wybor,  a,  b  );
                break;

            case '2':
                dzialanie( wybor,  a,  b ) ;
                break;
            case '3':
                dzialanie( wybor,  a,  b ) ;
                break;
            case '4':
                dzialanie( wybor,  a,  b ) ;
                break;

            }
            system("cls");
            cout<<"\n\n twoj wynik: "<<dzialanie(wybor,a,b)<<endl<<endl;

            break;
        }
        case '2':
        {
kolor(NIEBIESKI);

            cout<<"KALKULATOR POL FIGUR"<<endl;
            cout<<"MENU GLOWNE"<<endl;
            cout<<"---------------------------"<<endl;
            cout<<"1. POLE KWADRATU"<<endl;
            cout<<"2. POLE PROSTOKATA"<<endl;
            cout<<"3. POLE TROJKATA"<<endl;
            cout<<"4. POLE ROWNOLRGLOBOKU"<<endl;
            wyb1=getch();
               system("cls");
            switch(wyb1)
            {

            case '1':

                cout<<"Podaj 1 liczbe: "<<endl;
                cin>>a;
                cout<<"Pole kwadratu to "<<pole_kwadratu(a)<<" cm2"<<",a obwod "<<4*a<<"cm."<<endl;
                break;


            case '2':

                cout<<"Podaj 1 liczbe:"<<endl;
                cin>>a;
                cout<<"Podaj 2 liczbe: "<<endl;
                cin>>b;
                cout<<"Pole prostokata wynosi "<<pole_prostokata(a,b)<<"cm2"<<",a obwod "<<2*a+2*b<<"cm."<<endl;     ;  break;


            case '3': cout<<"Podaj podstawe trojkata: "<<endl;
            cin>>a;
            cout<<"podaj wysokosc trojkata"<<endl;
            cin>>h;
            cout<<"pole trojkata wynosi "<<pole_trojkata(a,h)<<"cm2."<<endl;


            case '4': cout<<"podaj dlugosc podstawy rownolegloboku"<<endl;
                        cin>>a;
                        cout<<"podaj wysokosc rownolegloboku"<<endl;
                        cin>>h;
                        cout<<"pole tego rownolegloboku wynosi "<<pole_rownolegloboku(a,h)<<"cm2. \n\n"<<endl;
            }



        }
        break;





     // twierdzenie pitagorasa
        case '3':  {
kolor(BIALY);
        char wybor;
cout<<"Podaj dlugosci bokow trojkata prostokatnego"<<endl;

int a,b,c,w,p,z,l,m,y;
cin>>a>>b;
l=a*a;
m=b*b;
c= a*a + b*b;
y=l+m;

cout<<a<<"+"<<b<<" =c2 "<<endl;
cout<<l<<"+"<<m<<" = c2"<<endl;
cout<<y<<" = c2"<<endl;
cout<<"c = p"<<y<<endl;
cout<<"c="<<sqrt(c)<<"cm"<<endl;
 cout<<"Przeciwprostokatna jest rowna "<<sqrt(c)<<"cm."<<endl;
for(;;){
cout<< "MENU GLOWNE"<<endl;
cout<<"-------------------------"<<endl;
cout<<"1. OBLICZ POLE TEGO TROJKATA"<<endl;
cout<<"2. OBLICZ OBWOD TEGO TROJKATA"<<endl;
cout<<"3. WYJDZ"<<endl;

wybor = getch();
cout<<endl;

switch(wybor)
{
    case '1': z=(a*b)/2;
    cout<<"Pole tego trojkata prostokatnego wynosi:"<<z<<"cm2"<<endl;
    break;

    case '2':cout<<"Obwod tego trojkata prostokatnego wynosi "<<sqrt(c)+ a+b<<"cm"<<endl;

            break;

    case '3':  exit(0); break;

        }
}
















        }
            break;
        case '4':
            exit(0);
            break;

        }






    }
    while(true);
    getchar();
    return 0;
}

