#include <iostream>

using namespace std;

void loopFunction(){
    for (int i = 0; i < 115; ++i){
            cout << "-";
    }}

int main() {
    /*Tugas 1: Diberikan Sebuah variable firstvalue = 10 dan secondvalue = 8. Tukarlah nilai kedua
    nilai tersebut dengan menggunakan variable tambahan*/

    //buat 3 variable yang dimana a dan b berisi nilai.Sedangkan c adalah variable sementara untuk perpindahan kedua nilai
    int a,b,c;
    a =10; //nilai firstvalue
    b =8; //nilai secondvalue

    loopFunction();

    //Nilai yang akan ditampilkan adalah nilai asli/sebelum ditukar karena dimasukan nilai variable a
    cout<<"\nNilai Sebelum ditukar :\nfirstvalue="<<a<<endl;

    //Nilai yang akan ditamoilkan adalah nilai asli/sebelum ditukar karena dimasukan nilai variable b
    cout<<"secondvalue= "<<b<<endl<<endl;

    //Proses penukaran
    c = a; //Variable c diisi oleh nilai variable a
    a = b; //variable a diisi oleh nilai variable b
    b = c; //variable b diisi oleh nilai variable c yang dimana nilai c diisi oleh variable a

    //Output akan menampilkan nilai firstvalue yang sudah ditukar dengan nilai secondvalue
    cout<<"Nilai Sesudah ditukar :\nfirstvalue= "<<a<<endl;

    //Output akan menampilkan nilai secondvalue yang sudah ditukar dengan nilai firstvalue
    cout<<"secondvalue= "<<c<<endl;

    loopFunction();

return 0;
}
