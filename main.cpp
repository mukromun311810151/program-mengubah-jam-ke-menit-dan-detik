#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main ()
{
    int detik,menit,jam;

    cout<<"\n\n======PROGRAM KONVERSI JAM KE MENIT DAN DETIK======";
    cout<<endl;
    cout<<"=======================================================";
    cout<<endl;
    cout<<"Masukkan jam = ";
    cin>>jam;

    menit=jam*60;
    detik=jam*3600;
    cout<<"konversi waktu tersebut adalah :"<<endl;
    cout<<"menit = "<<menit<<endl;
    cout<<"detik = "<<detik<<endl;

}
