

#include <iostream>
using namespace std;

int sisi;

void inputdata()
{
    cout << "masukan nilai sisi : ";
    cin >> sisi;
    
}

int hitungluas()
{
    return sisi * sisi;
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

