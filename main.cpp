#include <iostream>

using namespace std;

int main()
{
    int k;
    do
    {
   int wybor;
    float kilogram, gram, funt, uncja, cal, milimetr;
    cout << "Wybierz opcj\251 przeliczania: " << endl;
    cout << "Wpisz 0, by przelicza\206 z kilogramow na gramy" << endl;
    cout << "Wpisz 1, by przelicza\206 z gramow na kilogramy" << endl;
    cout << "Wpisz 2, by przelicza\206 z gramow na uncje" << endl;
    cout << "Wpisz 3, by przelicza\206 z uncji na gramy" << endl;
    cout << "Wpisz 4, by przelicza\206 z milimetrow na cale" << endl;
    cout << "Wpisz 5, by przelicza\206 z cali na milimetry" << endl;
while(!(cin >> wybor))
    {
        cout << "Blad! Podaj poprawna liczbe: ";
        cin.clear();
        cin.ignore(9999, '\n' );
    }
    if(wybor>=0&&wybor<=5)
        {
    switch (wybor)
    {
    case 0:
    {
    cout << "Przelicz z kilogram\242w na gramy" << endl;
    cout << "Ilo\230\206 kilogram\242w: " << endl;
    while(!(cin >> kilogram))
    {
        cout << "Blad! Podaj poprawna ilosc kilogramow: ";
        cin.clear();
        cin.ignore(9999, '\n' );
    }
    gram=1000*kilogram;
         cout<<"To jest " << gram <<" gram\242w"<<endl;
    }
    break;
    case 1:
        {
    cout << "Przelicz z gra\242w na kilogramy" << endl;
    cout << "Ilo\230\206 gram\242w: " << endl;
        while(!(cin >> gram))
    {
        cout << "Blad! Podaj poprawna ilosc gramow: ";
        cin.clear();
        cin.ignore(9999, '\n' );
    }
        kilogram=gram/1000;
    cout<<"To jest " << kilogram <<" kilogram\242w"<<endl;
    }break;
    case 2:
        {
    cout << "Przelicz z gramow na uncje" << endl;
    cout << "Ilo\230\206 gram\242w: " << endl;
            while(!(cin >> gram))
    {
        cout << "Blad! Podaj poprawna ilosc gramow: ";
        cin.clear();
        cin.ignore(9999, '\n' );
    }
    uncja=gram/28.3495231;
    cout<<"To jest " << uncja <<" uncji"<<endl;
    }
    break;
    case 3:
        {
    cout << "Przelicz z uncji na gramy" << endl;
    cout << "Ilo\230\206 uncji: " << endl;
            while(!(cin >> uncja))
    {
        cout << "Blad! Podaj poprawna ilosc uncji: ";
        cin.clear();
        cin.ignore(9999, '\n' );
    }
    gram=uncja*28.3495231;
    cout<<"To jest " << gram <<" gramow"<<endl;
    }
    break;
    case 4:
    {
    cout << "Przelicz z milimetrow na cale" << endl;
    cout << "Ilo\230\206 milimetrow: " << endl;
    while(!(cin >> milimetr))
    {
        cout << "Blad! Podaj poprawna ilosc milimetrow: ";
        cin.clear();
        cin.ignore(9999, '\n' );
    }
    cal=25.4*milimetr;
         cout<<"To jest " << cal <<" cali"<<endl;
    }
    break;
        case 5:
    {
    cout << "Przelicz z cali na milimetry" << endl;
    cout << "Ilo\230\206 cali: " << endl;
    while(!(cin >> cal))
    {
        cout << "Blad! Podaj poprawna ilosc cali: ";
        cin.clear();
        cin.ignore(9999, '\n' );
    }
    milimetr=cal/0.03937;
         cout<<"To jest " << milimetr <<" milimetrow"<<endl;
    }
    break;
    }
    }
    else
    {
        cout<<"B\210\245d, wyszli\230my poza przedzia\210"<<endl;
    }
    cout << "\nWpisz '0' je\230li chcesz zako\344czy\206 dzia\210anie programu, \na  '1', je\230li chcesz ponownie przelicza\206 jednostki wagi/dlugosci. " << endl;
    cin>>k;

       }while(k==1);
    return 0;
}
