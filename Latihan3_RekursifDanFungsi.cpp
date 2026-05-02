#include <iostream>
#include <vector>
using namespace std;

double hitungTotal(vector<double> nilai) {
    double total = 0;
    for (int i = 0; i < nilai.size(); i++) {
        total += nilai[i];
    }
    return total;
}

double hitungRataRata(vector<double> nilai) {
    double total = hitungTotal(nilai);
    return total / nilai.size();
}

int main() {
    vector<double> nilai;
    int n;
    double input;

    cout << "Masukkan jumlah data nilai: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> input;
        nilai.push_back(input);
    }

    double total = hitungTotal(nilai);
    double rata = hitungRataRata(nilai);

    cout << "\nTotal nilai = " << total << endl;
    cout << "Rata-rata nilai = " << rata << endl;

    return 0;
}