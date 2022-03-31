#include <iostream>

using namespace std;

void input_array(int *q)//prosedur untuk menginput array menggunakan pointer dan perulangan for dimana i adalah baris dan j adalah kolom
{
    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << "Masukkan nilai matriks ke [" << i << "][" << j << "] : ";
            cin >> q[i*3+j];
        }
    }
}
void tampilkan_array(int *q)//prosedur untuk menampilkan array menggunakan pointer dan perulangan for dimana i adalah baris dan j adalah kolom
{
    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << q[i*3+j] << " ";
        }
        cout << endl;
    }
}

void perkalian_array(int *q, int *r, int *hasil)//prosedur untuk mengkali matriks a(yang diibaratkan q) dan matriks b(yang diibaratkan r) dan mengeluarkan hasil
{
    int i, j, k;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            *(hasil + i * 3 + j) = 0;
            for ( k = 0; k < 3; k++)
            {
                *(hasil + i * 3 +j) += *(q + i * 3 + k) * *(r + k * 3 + j);//rumus perkalian matriks 3x3
            }
            }
        }
}


int main()
{
	cout << "PROGRAM PERKALIAN MATRIKS ORDO 3X3" <<endl << endl;
	cout << "Masukkan Matriks A" <<endl;
    int matriks_A[9];
    input_array(matriks_A); //memanggil prosedur input_array untuk memasukkan elemen array matriksA
    
    cout<<" "<<endl;
	cout << "Masukkan Matriks B" << endl;
    int matriks_B[9];
    input_array(matriks_B); //memanggil prosedur input_array untuk memasukkan elemen array matriksB

    cout << "Matriks yang anda masukkan adalah : " << endl;
    tampilkan_array(matriks_A); //memanggil prosedur tampilkan_array untuk menampilkan matriksA
    cout << " X " << endl;
    tampilkan_array(matriks_B);//memanggil prosedur tampilkan_array untuk menampilkan matriksB
     
    int hasil[9];
    perkalian_array(matriks_A, matriks_B, hasil);//memanggil prosedur perkalian 
    cout << "Hasil perkalian matriks A dan B adalah : " << endl;
    tampilkan_array(hasil);//memanggil prosedur tampilkan_array
    
}
