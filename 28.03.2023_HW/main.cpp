#include <iostream>
using namespace std;

bool isPalindrome(char str[], int len) {

    for (int i = 0; i < len / 2; i++) {

        if (str[i] != str[len - 1 - i])
            return false;

    }

    return true;
}



                         //!!ispolzoval nemnogo google tak kak ne ocen ponal no 90% sam delal!!

int main() {
//1:

    /*char* str = new char[100]; //

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ')
            str[i] = '\t';

    }

    cout << "Modified string: " << str << std::endl;

    delete[] str;*/

//2:

    /*char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int letters = 0, digits = 0, others = 0;
    for (int i = 0; str[i] != '\0'; i++) {

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            letters++;

        else if (str[i] >= '0' && str[i] <= '9')
            digits++;

        else
            others++;
    } //pocemu vi nam ne govorili shto tak mojno bilo((( a ya mucilsya etim ascii

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Others: " << others << endl;*/



//3 ?


//4:

    /*char str[] = "radar";
    int len = sizeof(str) / sizeof(str[0]) - 1;

    bool result = isPalindrome(str, len);

    if (result)
        cout << "The string is a palindrome" << endl;

    else
        cout << "The string is not a palindrome" << endl;*/


    return 0;
}
