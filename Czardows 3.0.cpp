#include <windows.h>
#include <conio.h>
#include <iostream>
using namespace std;

int sec;
char x;
string password;
string googlecom;
string gdziejestadas;
string nowyswiat;
void line()
{
   cout<<" "<<endl;   cout<<" "<<endl;    cout<<" "<<endl;    cout<<" "<<endl;    cout<<" "<<endl;    cout<<" "<<endl;    cout<<" "<<endl;    cout<<" "<<endl;     cout<<" "<<endl;
}

void login()
{
    system("cls");
    line();
    cout<<"                                         Administrator         Zapraszamy!"<<endl;
    cout<<"                                         Haslo: ";
    cin>>password;
    Sleep(1000);
    if(password=="haslo")
    {
        cout<<"                                         Haslo poprawne! Wcisnij dowolny przycisk, aby kontynuowac."<<endl;
        x=getch();
    }
    else
    {
        cout<<"                                         Haslo niepoprawne! Wcisnij dowolny przycisk, aby kontynuowac."<<endl;
        x=getch();
        login();
    }
}

void desktop()
{
    system("cls");
    Sleep(1500);
    cout<<"[2137]"<<endl;
    cout<<"Kremowkomat"<<endl;
    line();
    cout<<"__________________________________________________________________________________________________________________"<<endl;
    cout<<"[] O I @ # $ % ^ * () {} ! !$#%@%#^#@@$@^%$"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
}

void startup()
{
    system("cls");
    line();
    cout<<"                                                    [][]"<<endl;
    cout<<"                                                    [][]"<<endl;
    cout<<"                                         Uruchamianie Systemu Czardows 3.0";
    Sleep(500);
    cout<<" .";
    Sleep(500);
    cout<<" .";
    Sleep(500);
    cout<<" .";
    Sleep(3000);
    login();
    desktop();
}

void bsod()
{
    Sleep(1000);
    system("cls");
    cout<<":("<<endl;
    cout<<"Ups chyba wystapil jakis bład"<<endl;
    Sleep(300);
    cout<<"Ladowanie procesu restartu"<<endl;
    Sleep(300);
    cout<<"ukonczono 100%"<<endl;
    Sleep(3000);
    startup();
}

void heh()
{
    Sleep(3000);
    cout<<"Witaj!";
    Sleep(3000);
    cout<<" Wydaje mi sie, ze jestes tu nowy . . .";
    Sleep(3000);
    cout<<" Bez obaw. Wytlumacze ci wszystko.";
    Sleep(3000);
    cout<<" Witaj w Czardows3.0";
    Sleep(3000);
    cout<<" Mozesz tu generalnie robic co chcesz"<<endl;
    Sleep(3000);
    cout<<"A teraz..."<<endl;
    Sleep(3000);
    cout<<" Rozejrzyj sie po systemie"<<endl;
    Sleep(3000);
    cout<<"Bywaj"<<endl;
    Sleep(3000);
    cout<<" A i jeszcze na sam koniec...";
    Sleep(3000);
    cout<<"LAZAAAAAAAAAAA"<<endl;
    Sleep(1000);
    bsod();
}

void menu()
{
    for(;;)
    {
        x=getch();
        switch(x)
        {
            case 'h':
            Sleep(3000);
    cout<<"glupi to sie zawsze nabierze..."<<endl;
    Sleep(3000);
    cout<<"spokojnie juz dostaniesz ten system...."<<endl;
    Sleep(3000);
    cout<<"wcisnij U aby dostac sie do systemu"<<endl;










            case 'q':
            system("cls");
            cout<<"_____________________________________________________________________________"<<endl;
            cout<<"|   1 - stoper                                                               |"<<endl;
            cout<<"|   2 - okrutnik                                                             |"<<endl;
            cout<<"|   3 - wyjdz                                                                |"<<endl;
            cout<<"|   4-lazaaaaaa!                                                             |"<<endl;
            cout<<"|    5-Bapor                                            [][] [] []           |"<<endl;
            cout<<"|    6-Adas                                             [][] [] [] []        |"<<endl;
            cout<<"|    7.Google                                                                |"<<endl;
            cout<<"|    8.Pornhub                                          Czardows 3.0         |"<<endl;
            cout<<"|    9.Minecraft                                                             |"<<endl;
            cout<<"|    -.Stachu Jones                                                         |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
           cout<<"__________________________________________________________________________________________________________________"<<endl;
           cout<<"[] O I @ # $ % ^ * () {} ! !$#%@%#^#@@$@^%$"<<endl;
           cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;


            x=getch();
            switch(x)
            {
                case '1':
                system("cls");
                Sleep(1000);
                cout<<"Sekundy: ";
                cin>>sec;
                system("cls");
                for(int i=sec; i<=sec; i--)
                {
                    cout<<i<<endl;
                    Sleep(1000);
                    system("cls");
                }
                bsod();
                break;
                break;
                case '2':
                system("cls");
                Sleep(1000);
                for(int i=1; i>0; i++)
                {
                    cout<<i<<endl;
                }
                case '3':
                system("cls");
                Sleep(1000);
                cout<<"Jestes pewny ze chcesz wyjsc? ";
                cout<<"Tak(l) Nie(q) ";
                case 'l':
                bsod();
                default:
                bsod();
                break;

                case '4':
                Sleep (3000);
                cout<<"*Dzwonienie*";
                Sleep (3000);
                cout<<"Czesc Shorty....Co porabiasz?";
                Sleep (3000);
               cout<<"A nic ogladam mecz...i pale trawke";
               Sleep(3000);
               cout<<"Jestes sam?";
               Sleep(3000);
               cout<<"LAZAAAAAAAAAAAAAAAAAAAAAAA"<<endl;
               Sleep(3000);


               case '5':
           Sleep (600);
           cout<<"Bapor"<<endl;
           startup();



    case '6':
    Sleep(1000);
    system("cls");
    cout<<"trzeba ich molestowac"<<endl;
    Sleep(4000);
    cout<<"twoja twarz to jednorodna masa - nie ma oczu ani nosa"<<endl;
    Sleep(4000);
    cout<<"nie wiem, trzeba poczekac. zobaczyc co sie urodzi"<<endl;
    Sleep(4000);
    cout<<"ZNOWU GRASZ"<<endl;
    Sleep (4000);
    cout<<"czuje zab"<<endl;
    Sleep(3000);
    startup();




             case '7':
             system("cls");
             Sleep(1000);
            cout<<"_____________________________________________________________________________"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                             Google                                         |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
           cout<<"__________________________________________________________________________________________________________________"<<endl;
           cout<<"[] O I @ # $ % ^ * () {} ! !$#%@%#^#@@$@^%$"<<endl;

    line();
    cin>>googlecom;
    Sleep(1000);

      Sleep(1000);
    system("cls");
    cout<<"Ummm..."<<endl;
    Sleep(4000);
    cout<<"Ale ty wiesz ze nie musisz wpisywać google.com w googla?"<<endl;
    Sleep(4000);
    cout<<"Jakby no wiesz hehe...."<<endl;
    Sleep(4000);
    cout<<"..."<<endl;
    Sleep (4000);
    cout<<"Wpisywanie google.com w googla jest trochu gejowe"<<endl;
    Sleep(3000);
    startup();
    break;


       line();
    cin>>gdziejestadas;
    Sleep(1000);

      Sleep(1000);
    system("cls");
    cout<<"Nigdzie nie widziałem tego pedała!"<<endl;
   Sleep(3000);
Sleep(3000);
cout"<<Wypierdalaj"<<endl;
    startup();
    break;







       case '8':
      Sleep(1000);
    system("cls");
       Sleep (1000);
       cout<<"Ohhhhh~~"<<endl;
       Sleep (1000);
    cout<<"Mocniej~~"<<endl;











           case '9':
             system("cls");
             Sleep(1000);
            cout<<"_____________________________________________________________________________"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                             Minecraft                                      |"<<endl;
            cout<<"|                       j-Tryb jednoosobowy                                  |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                       w-tryb wieloosobowy                                  |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
            cout<<"|                                                                            |"<<endl;
           cout<<"[] O I @ # $ % ^ * () {} ! !$#%@%#^#@@$@^%$"<<endl;
           cout<<"__________________________________________________________________________________________________________________"<<endl;


              case 'j':


              cout<<"stworz nowy swiat"<<endl;
              line();
              cin>>nowyswiat;
              Sleep (1000);
              cout<<"budowanie swiata"<<endl;
              Sleep(1000);
              cout<<"generowanie terenu"<<endl;
            Sleep(5000);
              system ("cls");
               Sleep(1000);
              cout<<"ummm..."<<endl;
              Sleep(1000);
              cout<<"ale ty wiesz że raczej nie da się stworzyc minecrafta w c++ prawda?"<<endl;
               Sleep(1000);
              cout<<"wcisnij q by wrocic co systemu"<<endl;



case '-':
Sleep(1000);
system("cls");
cout<<"Ryko i Koko chuj ci w oko spierdalaj z mojej gory"<<endl;
Sleep(2000);







            }
            default:
            break;
        }
    }
}

int main()
{
    startup();
    heh();
    Sleep(3000);
    cout<<"Psssst . . .";
    Sleep(3000);
    cout<<" Za pomoca przycisku 'h' mozesz uruchomic start menu . . ."<<endl;
    menu();







    return 0;
}

