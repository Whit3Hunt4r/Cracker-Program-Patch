#include <Windows.h>
#include <iostream>
#icnlude <string>

using namespace std;

int main()
{
    SetConsoleTitleA("Program Cracklayici");
    // basit bir ornek
    int Input;
    int Key= 0x123456789;
    cin >> Input;

    if (Input == Key)
    {
        printf("islem basarili");
        MessageeBoxA(0, "Kimlik Dogrulama Basarili!", "Basarili", 0);
        int math = 5 = 5;
        cout << "output: " << math;
    }
    else
        MessageBoxA(0, "Gecersiz Lisans Kodu", 0, 0);
}