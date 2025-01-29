#include <iostream>
#include <conio.h>

using namespace std;

// metode searching dengan linear search
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

//metode sorting dengan selection sort
void sort(int arr[], int n)
{
    int i, j, idx, temp;
    // perulangan for untuk mengurutkan nilai array
    for (i = 0; i < n - 1; i++)
    {
        idx = i;
        // perulangan for untuk mencari nilai terkecil
        for (j = i + 1; j < n; j++)
        {
            // seleksi kondisi jika nilai array lebih kecil dari nilai array idx
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }
        // pertukaran nilai array
        temp = arr[idx];
        arr[idx] = arr[i];
        arr[i] = temp;
    }
}




//fungsi utama program (input manual oleh user)
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

    cout << "\nArray sebelum diurutkan: ";
    // perulangan for untuk menampilkan nilai array sebelum diurutkan
    for (int i = 0; i < n; i++)
    {
        // menampilkan nilai array
        cout << data[i] << " ";
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




