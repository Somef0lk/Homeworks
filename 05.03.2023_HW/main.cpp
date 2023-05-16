#include <iostream>
using namespace std;


//bool visokGod(int year) {
//    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
//}

// 1:
/*int daysBetweenYears(int day1, int month1, int year1, int day2, int month2, int year2) {

    int daysMonth[] = {31, visokGod(year1) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int totalDays1 = 0;

    for (int i = 0; i < month1 - 1; i++)
        totalDays1 += daysMonth[i];

    totalDays1 += day1;
    if (month1 > 2 && visokGod(year1))
        totalDays1++;


    int totalDays2 = 0;
    for (int i = 0; i < month2 - 1; i++)
        totalDays2 += daysMonth[i];

    totalDays2 += day2;

    if (month2 > 2 && visokGod(year2))
        totalDays2++;


    int totalDays = 0;

    for (int year = year1; year < year2; year++)
        totalDays += visokGod(year) ? 366 : 365;


    return totalDays + totalDays2 - totalDays1;
}*/


/*double average(int arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}*/

void count_elements(int arr[], int size, int& positive_count, int& negative_count, int& zero_count) {

    positive_count = 0;
    negative_count = 0;
    zero_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            positive_count++;

        else if (arr[i] < 0)
            negative_count++;

        else
            zero_count++;
    }
}

int main() {
    //1:
    /*int day1, month1, year1, day2, month2, year2;

    cout << "Vvedite 1 datu (dd mm yyyy): ";
    cin >> day1 >> month1 >> year1;

    cout << "Vvedite vtoruyu datu (dd mm yyyy): ";
    cin >> day2 >> month2 >> year2;

    int days = daysBetweenYears(day1, month1, year1, day2, month2, year2);
    cout << "Raznica: " << days << " dney" << endl;*/

//2:

    /*int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    double avg = average(arr, size);
    cout << "Average: " << avg << endl;*/


        //3:

    /*int arr[] = {1, -2, 0, 3, -4, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive_count, negative_count, zero_count;

    count_elements(arr, size, positive_count, negative_count, zero_count);

    cout << "Positive count: " << positive_count << endl;
    cout << "Negative count: " << negative_count << endl;
    cout << "Zero count: " << zero_count << endl;*/

    return 0;
}
