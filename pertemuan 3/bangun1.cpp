#include <iostream>

/*Tugas 3 : Membuat program untuk menghitung luas persegi,
    persegi panjang, dan segitiga menggunakan switch case*/

using namespace std;

void loopFunction(){
    for (int i = 0; i < 115; ++i){
            cout << "-";
    }}

int main (){
    //membuat variabel untuk
    int bangun;
    cout << "Bangun Datar : \n";
    cout << "1. Persegi\n" ;
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n\n";
    cout << "Pilih Bangun Datar : ";
    cin >> bangun;

    switch (bangun){
    //program menghitung luas persegi
    case 1:
     float s, luas; //menggunakan float agar dapat memasukan angka desimal
     loopFunction();
     cout << "\nMenghitung Luas Persegi\n\n";
     cout << "Masukan Panjang sisi : ";
     cin >> s;

     //perhitungan luas persegi dengan rumus luas persegi (sisi x sisi)
     luas=s*s;
     cout << "Luas Persegi adalah : " <<luas<<endl; //menampilkan luas persegi dari hasil perhitungan
     loopFunction();
    break;
    case 2:
    //program menghitung luas persegi panjang
     float p, l; //menggunakan float agar dapat memasukan angka desimal
     loopFunction();
     cout << "\nMenghitung Luas Persegi panjang\n\n";
     cout << "Masukan Panjang : ";
     cin >> p; //input panjang
     cout << "Masukan Lebar : ";
     cin >> l; //input lebar

     //perhitungan luas persegi panjang dengan rumus persegi panjang (panjang x lebar)
     luas= p*l;
     cout << "Luas persegi panjang : " <<luas<<endl; //menampilkan luas persegi panjang dari hasil perhitungan
     loopFunction();
    break;
    case 3:
    //program menghitung luas segitiga
     float a, t; //menggunakan float agar dapat memasukan angka desimal
     loopFunction();
     cout << "\nMenghitung Luas Segitiga\n\n";
     cout << "Masukan alas : ";
     cin >> a;
     cout << "Masukan tinggi : ";
     cin >> t;

     //perhitungan luas segitiga dengan rumus segitiga (1/2 x alas x tinggi)
     luas=a*t/2;
     cout << "Luas segitiga : " <<luas<<endl; //menampilkan luas segitiga dari hasil perhitungan
     loopFunction();
    break;
    }

return 0;
}
