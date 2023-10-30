#include <iostream>

 /*Tugas 3 : Membuat program logika if dalam menentukan sebuah score nilai yang diberikan*/

using namespace std;

int main(){
    //membuat variabel nilai untuk memasukan data dari nilai
    float nilai; //menggunakan float agar dapat memasukan nilai desimal
    cout << "Masukan Score : ";
    cin >> nilai;

    //pengkondisian
    if (nilai >=90){ //kondisi 1, jika nilai lebih dari sama dengan 90
        cout << "Selamat! Anda mendapatkan nilai A" <<endl; //menampilkan mendapat nilai A jika kondisi 1 terpenuhi
    }
    else if (nilai >=80 && nilai <=89){ //kondisi 2, jika nilai lebih dari sama dengan 80 dan kurang dari sama dengan 89
        cout << "Anda mendapatkan nilai B" <<endl; //menampilkan mendapat nilai B jika kondisi 2 terpenuhi
    }
    else if (nilai >=70 && nilai <=79){ //kondisi 3, jika nilai lebih dari sama dengan 70 dan kurang dari sama dengan 79
        cout << "Anda mendapatkan nilai C" <<endl; //menampilkan mendapat C jika kondisi 3 terpenuhi
    }
    else if (nilai >=60 && nilai <=69){ //kondisi 4, jika nilai lebih dari sama dengan 60 dan kurang dari sama dengan 69
        cout << "Anda mendapatkan nilai D" <<endl; //menampilkan mendapat nilai D jika kondisi 4 terpenuhi
    }
    else if (nilai>=0 && nilai <60){ //kondisi 5, jika nilai lebih dari sama dengan 0 dan kurang dari 60
        cout << "Anda mendaptkan nilai E, silahkan mengulang matkul" <<endl; // menampilkan mendapat nilai E jika kondisi 6 terpenuhi
    }
    else{ //kondisi 6, jika semua kondisi dari 1-5 tidak terpenuhi maka akan menampilkan kondisi 6 ini
        cout << "Nilai tidak teridentifikasi" <<endl; //menampilkan teks nilai tidak teridentifikasi
    }

return 0;
}

