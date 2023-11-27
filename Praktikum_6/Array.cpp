#include <iostream>
using namespace std;

/*Tugas Praktikum 6 (Array)*/

//function untuk membuat garis pembatas
void garis(){
    for (int i = 0; i < 115; ++i){
            cout << "-";
    }
}

int main()
{
    int n;

    garis(); //memanggil function garis untuk pembatas

    // membuat perulangan jika kondisi nilai input bernilai negatif  atau < 0
    do{
        cout << "\nMasukan Elemen : ";
        cin >> n;

        if (n <= 0){
            cout << "Nilai elemen harus bernilai positif. Silahkan masukkan kembali nilai" << endl;
        }

    }while (n <=0 );

    garis();

    int arr[n];

    cout << "\nMasukkan elemen array:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Nilai ke-" << i << ": ";
        cin >> arr[i];
    }

    //membuat perulangan untuk mencari nilai terbesar dalam array
    int nilai_max = arr[0]; //deklarasi nilai array
    int indeks_max = 0; //deklarasi index

         for (int i = 1; i < n; ++i) { //Looping untuk mencari nilai terbesar dan indexnya yang sudah diinputkan
            if (arr[i] > nilai_max) {
                nilai_max = arr[i];
                indeks_max = i;
        }
    }

    garis();

    cout << "\nNilai tertingginya adalah : " << nilai_max << endl; //Output akan menampilkan nilai terbesar
    cout << "Nilai terdapat pada indeks : " << indeks_max << endl; //output akan menampilkan index nilai terbesar

return 0;
}