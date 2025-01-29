#include <iostream>
#include <conio.h>

using namespace std;

// metode searching
int pencarian(int arr[], int n, int x)
{
    int i;
    // perulangan for untuk mencari nilai x
    for (i = 0; i < n; i++)
    {
        // seleksi kondisi jika nilai x ditemukan
        if (arr[i] == x)
        // mengembalikan nilai i
            return i;
    }
    // mengembalikan nilai -1 jika nilai x tidak ditemukan
    return -1;
}

//metode sorting
void sort(int arr[], int n)
{
    int i, j, temp;
    // perulangan for untuk mengurutkan array
    for (i = 0; i < n - 1; i++)
    {
        // perulangan for untuk membandingkan nilai array
        for (j = i + 1; j < n; j++)
        {
            // seleksi kondisi jika nilai array i lebih besar dari nilai array j
            if (arr[i] > arr[j])
            {
                // menukar nilai array i dengan nilai array j
                temp = arr[i];
                // nilai array i diisi dengan nilai array j
                arr[i] = arr[j];
                // nilai array j diisi dengan nilai temp
                arr[j] = temp;
            }
        }
    }
}

//fungsi utama tapi input oleh user manual
int main()
{
    int n;
    // menginputkan ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> n;

// alokasi memori array
    int* data = new int[n];
    cout << "Masukkan nilai array: ";
    // perulangan for untuk menginputkan nilai array
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    int x;
    // menginputkan nilai yang dicari
    cout << "Masukkan nilai yang dicari: ";
    cin >> x;

    // memanggil fungsi pencarian
    int result = pencarian(data, n, x);
    // seleksi kondisi jika nilai result sama dengan -1
    if (result == -1)
    {
        cout << "Nilai tidak ditemukan";
    }
    // seleksi kondisi jika nilai result tidak sama dengan -1
    else
    {
        cout << "Nilai ditemukan pada indeks ke-" << result;
    }

    // memanggil fungsi sorting
    sort(data, n);
    cout << "\nArray setelah diurutkan: ";
    // perulangan for untuk menampilkan nilai array setelah diurutkan
    for (int i = 0; i < n; i++)
    {
        // menampilkan nilai array
        cout << data[i] << " ";
    }

    
}




