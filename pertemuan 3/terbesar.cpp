#include <iostream>

/*Tugas 3 : Membuat program yang dapat mencetak nilai terbesar dari ketiga angka yang diberikan */

using namespace std;

int main(){
    /*Membuat variable a, b, dan c*/
    int a, b, c;

    cout << "Masukan nilai a : "; //Menampilkan nilai a
    cin >> a; //memasukan input

    cout << "Masukan nilai b : "; //menampilkan nilai b
    cin >> b; //memasukan input

    cout << "Masukan nilai c : "; //menampilkan nilai c
    cin >> c; //memasukan input

    //pengkondisian
    if (a>b && a>c){ //kondisi 1, jika nilai a lebih besar dari nilai b dan c maka a adalah nilai terbesar
        cout << "Nilai terbesar adalah a dengan nilai : " <<a<<endl; //akan menampilkan nilai terbesar jika kondisi 1 memenuhi
    }
    else if (b>a && b>c){ //kondisi 2, jika nilai b lebih besar dari nilai a dan c maka b adalah nilai terbesar
        cout << "Nilai terbesar adalah b dengan nilai : " <<b<<endl; //akan menampilkan nilai terbesar jika kondisi 2 memenuhi
    }
    else if (c>a && c>b){ //kondisi 3, jika nilai c lebih besar dari nila a dan b maka c adalah nilai terbesar
        cout << "Nilai terbesar adalah c dengan nilai : " <<c<<endl; //akan menampilkan nilai terbesar jika kondisi 3 memenuhi
    }
    else{ //kondisi 4, kondisi akan keluar jika nilai a, b dan c sama
        cout << "Ketiga Nilai sama besar" <<endl; //akan menampilkan kondisi 4 jika benar
    }

return 0;
}
