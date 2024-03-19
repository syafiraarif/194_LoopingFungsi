
#include <iostream>
using namespace std;

int panjang, lebar;

void inputdata()
{
    cout << "masukan nilai panjang : ";
    cin >> panjang;
    cout << "masukan nilai lebar : ";
    cin >> lebar;
}

int hitungluas()
{
    return panjang * lebar;
}

void display()
{
    cout << "luasnya adalah : " << hitungluas() << endl;
}
int main()
{
    inputdata();
    display();
}

