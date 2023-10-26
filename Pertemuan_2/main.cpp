#include <iostream>

using namespace std;

void loopFunction(){
    for (int i = 0; i < 115; ++i){
            cout << "-";
    }}

int main() {
    /*Tugas 1: Diberikan Sebuah variable firstvalue = 10 dan secondvalue = 8. Tukarlah nilai kedua
    nilai tersebut tanpa variable tambahan*/

    //buat  variable yang dimana a dan b berisi nilai
    int a,b;
     a =10; //nilai firstvalue
     b =8; //nilai secondvalue

    loopFunction();

    //Nilai yang akan ditamoilkan adalah nilai asli/sebelum ditukar
    cout<<"\nNilai Sebelum ditukar :\nfirstvalue="<<a<<endl;

    //Nilai yang akan ditamoilkan adalah nilai asli/sebelum ditukar
    cout<<"secondvalue= "<<b<<endl<<endl;

    //Output akan menampilkan nilai firstvalue yang sudah ditukar dengan nilai secondvalue
    cout<<"Nilai Sesudah ditukar :\nfirstvalue= "<<b<<endl; //isi dengan variable b

    //Output akan menampilkan nilai secondvalue yang sudah ditukar dengan nilai firstvalue
    cout<<"secondvalue= "<<a<<endl;//isi dengan variable a

    loopFunction();

return 0;
}
