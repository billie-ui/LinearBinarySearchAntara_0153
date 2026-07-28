#include <iostream>
using namespace std;

int arr [20];
int n;
int i;

void input() // Membuat Looping untuk Menentukan Panjang element Array.
{
    while (true) // Membuat looping untuk menentukan panjang element array
    {
        cout << "Masukkan Banyaknya elemen pada array (Maksimal 20) : ";
        cin >> n;
        if (n > 0 && n <= 20) // Membuat Kondisi jika n > 0 dan n <= 20
        {
            break;
        }
        else // Memebuat Kondisi Jika n > 0 dan n <= 20 tidak Terpenuhi
        {
            cout << "\nMinimum Jumlah Element Adalah 1 dan Maksimum jumlah Element adalah 20\n" << endl;    
        }
    }
    // Display Untuk Menginputkan isi masing - masing element array
    cout << "\n======================\n";
    cout << "Masukkan Element Array\n";
    cout << "======================\n";

    for ( i = 0; i < n; i++)
    {
        cout << "<" << (i+1) << ">";
        cin >> arr[i];
    }
}

void linearsearch() // Membuat algoritma linearsearch
{
    char ch; //inisialisasi untuk pilihan lanjut atau tidak
    int ctr; //inisialisasi untuk melihat jumlah perbandingan
    int item; //inisialisasi untuk input data yang mau dicari

    // Membuat Looping untuk cari element array
    do
    {
        cout << "\nMasukkan Element yang ingin Dicari : ";
        cin >> item;

        ctr = 0;
        i = 0;

        while (i < n)// Step 3
        {
            ctr++;
            if (arr[i] == item) // membuat kondisi jika data ditemukan
            {
                cout << "\n" << item << "ditemukan pada posisi ke " << (i + 1) << endl;
                break;
            }
            i++; //step 4
        }
        if (i > n) // step 5
        {
            cout << "\n" << item << " Tidak ditemukan di dalam array";
        }

        cout << "\nJumlah Nilai Dibandingkan = " << ctr << endl;

        cout << "\nLanjut Ke Pencarian Lain? (y/t):";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

void display() // Membuat Prosedur display
{
    cout << "\nElement Array Adalah : \n " ;
    for (i = 0; i < n; i++)
    {
        cout << arr [i] << "";
        cout << endl;
    }

}

int main ()
{
    input();
    linearsearch();
    display();
}