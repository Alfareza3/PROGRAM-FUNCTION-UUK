#include <iostream>

using namespace std;

int main() {
    const int MAX_Kucing = 100;
    int nilaikucing[MAX_Kucing];
    int jumlahkucing, nilai;
    int jumlah = 0;
    double rataRata;

    cout << "Masukkan jumlah kucing: ";
    cin >> jumlahkucing;

    for (int i = 0; i < jumlahkucing; i++) {
        cout << "Masukkan panjang kucing ke-" << i + 1 << ": ";
        cin >> nilaikucing[i];
        jumlah += nilaikucing[i];
    }

    rataRata = (double)jumlah / jumlahkucing;

    cout << "Data Nilai panjang badan kucing:" << endl;
    for (int i = 0; i < jumlahkucing; i++) {
        cout << "kucing ke-" << i + 1 << ": " << nilaikucing[i] << endl;
    }

    cout << "Rata-rata panjang badan kucing: " << rataRata << endl;

    return 0;
}