#include <iostream>
using namespace std;

int jumlah(int a, int b);
int selisih(int a, int b);
int kali(int a, int b);
float bagi(float a, float b);

int main()
{
    int a, b;
    cout << "Masukkan angka : ";
    cin >> a;
    cout << "Masukkan angka : ";
    cin >> b;
    cout << jumlah(a, b) << endl;
    cout << selisih(a, b) << endl;
    cout << kali(a, b) << endl;
    cout << bagi(a, b) << endl;

    return 0;
}

int jumlah(int a, int b)
{
    return a + b;
}

int selisih(int a, int b)
{
    return a - b;
}

int kali(int a, int b)
{
    return a * b;
}

float bagi(float a, float b)
{
    float x = (float)a / b;
    return x;
}