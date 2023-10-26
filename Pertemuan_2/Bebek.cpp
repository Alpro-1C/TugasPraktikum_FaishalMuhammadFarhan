#include <iostream>

using namespace std;

void loopFunction(){
    for (int i = 0; i < 115; ++i){
            cout << "-";
    }}

int main() {
/*Tugas 2: Menentukan berapa ekor bebek yang harus pak tatang berikan
kepada masing-masing temannya, dan berapa sisanya*/

 loopFunction();

 /*membuat variable data yang dimana N untuk nilai bebek, M untuk nilai teman,
 bagi untuk hasil pembagian, dan sisa untuk hasil sisa dari pembagian*/
 int N, M, bagi, sisa;

 //Memasukan nilai Input
 cout<<"\nJumlah Bebek : ";
 cin>>N; //Memasukan nilai input
 cout<<"Jumlah Teman : ";
 cin>>M; //Memasukan nilai input

 //Proses perhitungan
 bagi= (N/M); //operasi pembagian
 sisa= (N%M); //operasi modulus

 //Output akan menampilkan bebek yang diberikan kepada masing-masing teman sesuai hasil bagi N dan M
 cout<<"Bebek yang diberikan kepada masing-masing teman : "<<bagi<<endl;

 //Output akan menampilkan sisa bebek sesuai hasil dari sisa pembagian N dan M
 cout<<"Sisa Bebek : "<<sisa<<endl;

 loopFunction();

return 0;
}
