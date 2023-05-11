#include <iostream>
#include <ctime>
using namespace std;


int Max(int* arr, int size) {

    int max = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] > max)
            max = arr[i];

    }

    return max;
}


int Min(int* arr, int size) {

    int min = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] < min)
            min = arr[i];

    }
    return min;
}


double Avg(int* arr, int size) {

    double sum = 0.0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum / size;
}

int Action(int* arr1, int size1, int* arr2, int size2, int (*func)(int*, int)) {

    int result = func(arr1, size1);
    int temp = func(arr2, size2);

    if (temp > result)
        result = temp;

    return result;
}




int main(){

    srand(time(NULL));

    const int SIZE1 = 5;
    const int SIZE2 = 8;
    int arr1[SIZE1];
    int arr2[SIZE2];



//---------------------------------------


    for (int i = 0; i < SIZE1; i++)
        arr1[i] = rand() % 100;

    for (int i = 0; i < SIZE2; i++)
        arr2[i] = rand() % 100;

//-----------------------------------------


    cout << "Select operation:\n";
    cout << "1 - Max\n";
    cout << "2 - Min\n";
    cout << "3 - Avg\n";
    int choice;
    cin >> choice;

//--------------------------------------------


    int result;

    switch (choice) {

        case 1:

            result = Action(arr1, SIZE1, arr2, SIZE2, Max);
            cout << "Max : " << result << endl;
            break;

        case 2:

            result = Action(arr1, SIZE1, arr2, SIZE2, Min);
            cout << "Min : " << result << endl;
            break;

        case 3:

            double avg1 = Avg(arr1, SIZE1);
            double avg2 = Avg(arr2, SIZE2);
            cout << "Average : " << (avg1 + avg2) / 2 << endl;
            break;


    }





    return 0;
}




