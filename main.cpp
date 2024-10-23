#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

template <typename T>
void COUT(T mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << mas[i] << " ";
    }
    cout << endl;
}


void Sort(int* a, const int size) {
    for (int i = 0; i < size - 1; i++) {
        int max = a[i];
        int imax = i;

        for (int j = i + 1; j < size; j++) {
            if (a[j] > max) {
                max = a[j];
                imax = j;
            }
        }

        a[imax] = a[i];
        a[i] = max;
    }
}

int main() {
    srand((unsigned)time(0));
    setlocale(LC_CTYPE, "ukr");

    const int SIZE = 10;
    int a[SIZE];

    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;
    }

    cout << "Початковий масив: " << endl;
    COUT(a, SIZE);

    Sort(a, SIZE);

    cout << "Вiдсортований масив за спаданням: " << endl;
    COUT(a, SIZE);

    return 0;
}