#include <iostream>
using namespace std;

//untuk membuat batas garis "=" yang digunakan untuk pembatas
void garis(){
    for (int i = 0; i < 115; ++i){
            cout << "=";
    }}

//untuk membuat deret garis "=" yang digunakan untuk judul seriap program dalam menu
void top(){
    for (int i = 0; i < 16; ++i){
            cout << "=";
    }}

int main(){
    int menu; /*membuat variabel menu untuk digunakan switch case 
                sehingga tidak perlu membuat 3 file berbeda dalam 1 folder dalam penugasan*/ 

    bool valid = true; //untuk mengulang atau keluar program
    do{

garis();

    //Tampilan menu untuk memilih program 
    cout << "\nMenu Program :" <<endl;
    cout << "1.Program menetukan deret bilangan ganjil, genap, dan prima beserta jumlah dan faktornya" <<endl;
    cout << "2.Program membuat segitiga dengan pola bintang" <<endl;
    cout << "3.Program menentukan deret bilangan Fibonnaci" <<endl;
    cout << "4.Keluar" <<endl;

garis();

    cout << "\nPilih program : ";
    cin >> menu; //input program yang akan dipilih

cout <<endl;

/*membuat switch case */
switch (menu){
    case 1: //Program 1 deret bilangan ganjil, genap dan prima
    {
    int batas, jumlah;

        top();
        cout << "PROGRAM PERTAMA";
        top();
        cout << "\nMenentukan deret bilangan ganjil, genap, dan prima beserta jumlah dan faktornya" <<endl;
        cout << "\nMasukkan nilai batas : ";
        cin >> batas; //Memasukan nilai input batas


        //BILANGAN GANJIL
        cout << "\nDeret Bilangan Ganjil : ";
        for(int i = 1; i <= batas; i++){ //perulangan menentukan deret bilangan ganjil
         if(i % 2 != 0){
            cout << i << " ";
        }
    }

    //menentukan jumlah deret
    jumlah = 0;
        for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){
        jumlah += i;
        }
    }
        cout << "\nJumlah Deret : " << jumlah; //menampilkan jumlah deret
        cout << "\nFaktor Bilangan " << jumlah << " adalah : ";
         for (int i = jumlah; i > 0; --i){ //perulangan untuk menentukan angka faktor dari
            if (jumlah % i == 0){
                cout << i << " " ; //menampilkan deret pemfaktoran
            }
        }
        cout <<endl;

    //BLANGAN GENAP
    cout << "\nDeret Bilangan Genap :  ";
    for(int genap = 1; genap <= batas; genap++){
        if(genap % 2 == 0){
            cout << genap << " ";
        }
    }

    jumlah = 0;
    for (int genap = 1; genap <= batas; genap++){
        if (genap % 2 == 0){
            jumlah += genap;
        }
    }
    cout << "\nJumlah Deret : " << jumlah;
    cout << "\nFaktor Bilangan " << jumlah << " adalah : ";
        for (int genap = jumlah; genap > 0; --genap){
            if (jumlah % genap == 0){
                cout << genap << " ";
            }
        }
        cout <<endl;

    //BILANGAN PRRIMA
    cout << "\nDeret Bilangan Prima : ";
    for(int i = 2; i <= batas; ++i)
    {
        int prim = 1;
        for (int k = 2; k * k <= i; ++k)
        {
            if(i % k == 0)
        {
            prim = 0;
            break;    
        }
    }
    if (prim == 1)
    {
        cout << i << " ";
    }

    }

    jumlah = 0;
     for(int i = 2; i <= batas; ++i)
    {
        int prim = 1;
        for (int k = 2; k * k <= i; ++k)
        {
            if(i % k == 0)
        {
            prim = 0;
            break;    
        }
    }
    if (prim == 1)
    {
        jumlah += i;
    }
    }
    cout << "\nJumlah Deret bilangan : " << jumlah;
    cout << "\nFaktor bilangan " << jumlah << " Adalah : ";
        for (int i = jumlah; i > 0; --i){
            if (jumlah % i == 0){
                cout << i << " ";
            }
        }

cout<<endl;
garis();
        break;
    }

    case 2: //Program 2 Segitga pola bintang
    {
    int n;

    top();
    cout << "PROGRAM KEDUA";
    top();
    cout << "\nProgram membuat segitiga dengan pola bintang" <<endl;
    cout << "\nMasukkan tinggi segitiga : "; //input tinggi segitiga
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
    for (int k = 1; k <= (2*i - 1); k++)
    {
        cout << "*";
    }
    cout <<endl;
    }
        break;
    }

    case 3: //Program 3 deret bilangan fibonnaci
    {
    int n, a=0, b=1, c;
   

    top();
    cout << "PROGRAM KETIGA";
    top();
    cout << "\nBilangan Deret Fibonaci\n";
    cout << "Masukkan nilai ke-n : "; 
    cin >> n; //input nilai batas yang diinginkan

   cout << "Deret fibonnaci : ";
    for(int i = 1; i <= n; i++){ //perulangan untuk menentukan bilangan fibonnaci yang dimana deret angka akan dijumlahkan dengan angka sebelumnya
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
        break;
    }

    case 4: //untuk keluar dari program 
    {
        cout << "Adios..." <<endl;
        garis();
        valid = false; //untuk memberhentikan looping
        break;
    }
    default:
    break;
        }
    }while (valid); //untuk mengulang program menu setelah digunakan/dijalankan. tidak berlaku pada case 4 dimana itu memberhentikan looping
return 0;
}