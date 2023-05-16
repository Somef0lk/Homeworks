#include <iostream>
using namespace std;

int* videleniyeMemory(int size) {
    int* arr = new int[size];
    return arr;
}


void initArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
        arr[i] = i + 1;
}


void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void deleteArray(int* arr) {
    delete[] arr;
}

int* pushBack(int* arr, int& size, int value) {

    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++)
        temp[i] = arr[i];

    temp[size] = value;
    size++;

    delete[] arr;

    return temp;
}


int* insertElement(int* arr, int& size, int value, int index) {

    int* temp = new int[size + 1];

    for (int i = 0; i < index; i++)
        temp[i] = arr[i];

    temp[index] = value;

    for (int i = index + 1; i < size + 1; i++)
        temp[i] = arr[i - 1];

    size++;

    delete[] arr;
    return temp;
}


int* removeElement(int* arr, int& size, int index) {

    int* temp = new int[size - 1];

    for (int i = 0; i < index; i++)
        temp[i] = arr[i];

    for (int i = index + 1; i < size; i++)
        temp[i - 1] = arr[i];

    size--;

    delete[] arr;
    return temp;
}


//2 ne smog


//3:
void separate_elements(int arr[], int size, int*& posArr, int& posSize, int*& negArr, int& negSize, int*& zeroArr, int& zeroSize) {

    posSize = 0;
    negSize = 0;
    zeroSize = 0;


    for (int i = 0; i < size; i++) {

        if (arr[i] > 0)
            posSize++;

        else if (arr[i] < 0)
            negSize++;

        else
            zeroSize++;

    }

    posArr = new int[posSize];
    negArr = new int[negSize];
    zeroArr = new int[zeroSize];


    int posIndex = 0;
    int negIndex = 0;
    int zeroIndex = 0;

    for (int i = 0; i < size; i++) {

        if (arr[i] > 0)
        {

            posArr[posIndex] = arr[i];
            posIndex++;

        }

        else if (arr[i] < 0)
        {
            negArr[negIndex] = arr[i];
            negIndex++;
        }

        else
        {
            zeroArr[zeroIndex] = arr[i];
            zeroIndex++;
        }
    }
}

int main() {

    /* int size = 5;
    int* arr = videleniyeMemory(size);
    initArray(arr, size);
    printArray(arr, size);

    // videleniye
    arr = pushBack(arr, size, 6);
    printArray(arr, size);

    // indeks
    arr = insertElement(arr, size, 0, 2);
    printArray(arr, size);

    // udaleniye
    arr = removeElement(arr, size, 3);
    printArray(arr, size);

    deleteArray(arr);*/





/*
    int arr[] = { 3, -2, 0, 7, -5, 0, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);


    int* posArr = nullptr;
    int posSize = 0;
    int* negArr = nullptr;
    int negSize = 0;
    int* zeroArr = nullptr;
    int zeroSize = 0;


    separate_elements(arr, size, posArr, posSize, negArr, negSize, zeroArr, zeroSize);

    printArray(posArr, posSize);
    printArray(negArr, negSize);
    printArray(zeroArr, zeroSize);

    delete[] posArr;
    delete[] negArr;
    delete[] zeroArr;
*/
    return 0;

}
