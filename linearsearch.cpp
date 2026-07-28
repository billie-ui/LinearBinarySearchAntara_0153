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