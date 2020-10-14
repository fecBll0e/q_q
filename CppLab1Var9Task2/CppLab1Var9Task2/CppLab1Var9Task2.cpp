#include <iostream>
#include <cmath>

using namespace std;

int ArrayInit(float** arr) {
    for (int j, i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            arr[i][j] = sin(i - j) + cos(i + j);
        }
    }
    return 0;
}

int ArrayOut(float** arr, float* OneDimensionalArray) {
    for (int j, i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 15; i++) {
        cout << OneDimensionalArray[i] << " ";
    }
    return 0;

}

int TransArr(float** arr, float* OneDimensionalArray) {
    int k = 0;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            OneDimensionalArray[k] = arr[i][j];
            k++;
        }
    }
    cout << endl;
    return 0;
}

int MemoryFree(float** arr,float* OneDimensionalArray) {
    for (int i = 0; i < 5; i++) {
        delete[]arr[i];
    }

    delete[]arr;
    delete[]OneDimensionalArray;
}

int main()
{
    //------------------------Выделение памяти------------------------------------

    float** arr = new float* [5];
    for (int i = 0; i < 5; i++) {
        arr[i] = new float[3];
    }

    float* OneDimensionalArray = new float [15];

    //----------------------------------------------------------------------------

    ArrayInit(arr);
    TransArr(arr, OneDimensionalArray);
    ArrayOut(arr, OneDimensionalArray);

    //--------------------------Освобождение памяти-------------------------------

    MemoryFree(arr, OneDimensionalArray);
}