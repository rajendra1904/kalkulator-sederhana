#include <iostream>
#include <math.h>
using namespace std;


void Jumlah();
void Kurang();
void Kali();
void Bagi();
void pangkat();
void akar();

int main(){
    
    int opr;
    char u;
    
    
	cout << "NAMA\t: RAJENDRA AKHDAN RAFIF"<<endl<<"NIM\t: 2100018086"<<endl;  
	
    cout << " ===== Kalkulator =====" << endl << endl;
q:	cout << " Pilih Operasi Aritmatika\n" << endl;
    cout << " 1. Penjumlahan" << endl;
    cout << " 2. Pengurangan" << endl;
    cout << " 3. Perkalian" << endl;
    cout << " 4. Pembagian" << endl;
    cout << " 5. Pangkat" << endl;
    cout << " 6. Akar Kuadrat" << endl;
    
    cout << "\n Pilihan Anda : ";
    cin >> opr;
    cout << " ==================================================" << endl;
    switch(opr){
        case 1 :
            Jumlah();
            break;
        case 2 :
            Kurang();
            break;
        case 3 :
            Kali();
            break;
        case 4 :
            Bagi();
            break;
        case 5 :
            pangkat();
            break;
        case 6 :
            akar();
            break;
	    default :
	            system("cls");
	            cout << " Pilihan Anda Tidak Ada Dalam Menu. \n Silahkan Input Ulang \n" << endl;
	            goto q;
	            break;
	    }
	    cout << endl;
	    cout << " ==================================================" << endl;
	    cout << " Apakah Anda Ingin Menginput Ulang ? [Y/T] ? ";
	    cin >> u;
	    if(u == 'Y' || u == 'y'){
	        system("cls");
	        goto q;
	    } else {
	        exit(0);
	    }
	return 0;
}

void Jumlah(){
    float a, b;
    float hasil;
    cout << " Penjumlahan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a+b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Kurang(){
    float a, b;
    float hasil;
    cout << " Pengurangan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a-b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Kali(){
    float a, b;
    float hasil;
    cout << " Perkalian\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a*b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Bagi(){
    float a, b;
    float hasil;
    cout << " Pembagian\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a/b;
    cout << " Hasil Penghitungan : " << hasil;
}

void pangkat(){
    float a, b;
    float hasil;
    cout << " Perpangkatan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = pow (a,b);
    cout << " Hasil Penghitungan : " << hasil;
}

void akar(){
    float a, b;
    float hasil;
    cout << " Akar Kuadrat\n\n";
    cout << " Masukkan Bilangan : "; cin >> a;
    hasil = sqrt(a);
    cout << " Hasil Penghitungan : " << hasil;
}
