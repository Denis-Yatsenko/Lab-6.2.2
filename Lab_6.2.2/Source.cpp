// Рекурентний спосіб
// 24 варіант
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* A, const int size, const int Low, const int High, int i)
{
    A[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(A, size, Low, High, i + 1);
}

void Print(int* A, const int size, int i)
{
    cout << setw(4) << A[i];
    if (i < size - 1)
        Print(A, size, i + 1);
    else
        cout << endl;
}
void Sort(int* A, const int size, int i) 
{ 
    int min = A[i];
    int imin = i;
    for (int j = i + 1; j < size; j++)
        if (min < A[j])
        {
            min = A[j];
            imin = j;
        }
        A[imin] = A[i];
    A[i] = min;

    if (i < size - 2)
        Sort(A, size, i + 1);
}
int main() {
    setlocale(LC_ALL, "Ukrainian");
    srand((unsigned)time(NULL));
    const int n = 10;
    int A[n];
    int i = 0;
    int Low = -20;
    int High = 37;
    cout << "Початковий массив" << endl;
    Create(A, n, Low, High,i);
    Print(A, n,i);
    cout << endl;
    cout << "Впорядкований массив" << endl;
    Sort(A, n,i);
    Print(A, n,i);
    cout << endl;
    return 0;
}
