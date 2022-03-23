#include <iostream>

using namespace std;
int main()
{
    char status;
    do{//Perulangan Program
    cout<<"PROGRAM MENENTUKAN HASIL KOMBINASI DAN PERMUTASI"<<endl<<endl;
    
    int nilai_n;
    int nilai_r;

    do{
        cout<<"Nilai N Harus Lebih Besar Dari R"<<endl;
        //Input Nilai N
        cout<<"Masukkan Nilai N : ";
        cin>>nilai_n;

        //Input Nilai R
        cout<<"Masukkan Nilai R : ";
        cin>>nilai_r;
        cout<<""<<endl;

    } while (nilai_n < nilai_r);
    
    cout<<"Pilihan Proses Yang Ingin Dilakukan"<<endl; //Menu Pilihan Proses
    cout<<"1. Menentukan Hasil Kombinasi"<<endl;
    cout<<"2. Menentukan Hasil Permutasi"<<endl;
    int pilihan;

    do{
        cout<<"Masukkan Pilihan Anda Berdasarkan Nomor Diatas : ";
        cin>>pilihan;
        cout<<""<<endl;
    }while (pilihan > 2);
    
    
    int hasil_n = 1; //Hasil Awal Agar Dapat Dilakukan Perulangan
    int hasil_r = 1; //Hasil Awal Agar Dapat Dilakukan Perulangan
    int hasil_n_r = 1; //Hasil Awal Agar Dapat Dilakukan Perulangan

    if (pilihan == 1)//Pilihan Menentukan Kombinasi 
    {
        for (int i = 1; i <= nilai_n; i++)//Mencari Nilai Faktorial Dari N Dengan Perulangan For
        {
            int faktorial_n;
            hasil_n = hasil_n * i;
        }

        for (int i = 1; i <= nilai_r; i++)//Mencari Nilai Faktorial Dari R Dengan Perulangan For
        {
            int faktorial_r;
            hasil_r = hasil_r * i;
        }
        
        int pengurangan_n_r = nilai_n - nilai_r;

        for (int i = 1; i <= pengurangan_n_r; i++)//Mencari Nilai Faktorial Dari N - R Dengan Perulangan For
        {
            int faktorial_n_r;
            hasil_n_r = hasil_n_r * i;
        }

        int hasil_akhir = hasil_n / (hasil_r * hasil_n_r);//Menghitung Kombinasi

        cout<<"Nilai Kombinasi Dari "<<nilai_n<<" Dan "<<nilai_r<<" Adalah "<<hasil_akhir<<endl;
    }//Akhir Menentukan Kombinasi

    else if (pilihan == 2)//Pilihan Menentukan Permutasi
    {
        for (int i = 1; i <= nilai_n; i++)//Mencari Nilai Faktorial Dari N Dengan Perulangan For
        {
            int faktorial_n;
            hasil_n = hasil_n * i;
        }
        
        int pengurangan_n_r = nilai_n - nilai_r;

        for (int i = 1; i <= pengurangan_n_r; i++)//Mencari Nilai Faktorial Dari N - RDengan Perulangan For
        {
            int faktorial_n_r;
            hasil_n_r = hasil_n_r * i;
        }

        int hasil_akhir = hasil_n / hasil_n_r;//Menghitung Nilai Permutasi

        cout<<"Nilai Permutasi Dari "<<nilai_n<<" Dan "<<nilai_r<<" Adalah "<<hasil_akhir<<endl<<endl;
    }//Akhir Menentukan Permutasi

    //Pertanyaan Untuk Mengulang Program
    cout<<"Apakah Ingin Mencari Lagi [Y/N]? : ";
    cin>> status;
    cout<<""<<endl;
    }while(status=='Y'||status=='y');

    cout<<"Anda Keluar Dari Program, Selamat Tinggal";
    
}