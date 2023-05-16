#include <iostream>
using namespace std;


int countTXT(const char text[], const char pattern[]) {
    int textLength = 0;

    while (text[textLength] != '\0')
        textLength++;


    int patternLength = 0;

    while (pattern[patternLength] != '\0')
        patternLength++;


    int count = 0;

    for (int i = 0; i <= textLength - patternLength; i++) {
        bool found = true;

        for (int j = 0; j < patternLength; j++)

            if (text[i + j] != pattern[j]) {
                found = false;
                break;
            }

        if (found)
            count++;

    }

    return count;
}



int main() {

    const int maxSize = 301;
    char text[maxSize];
    char pattern[maxSize];

    cout << "Enter rext: ";
    cin.getline(text, maxSize);

    cout << "Vvedite text kotoriy ishite: ";
    cin.getline(pattern, maxSize);

    int txtCount = countTXT(text, pattern);

    cout << "Kolvo etogo teksta: " << txtCount << endl;

    return 0;
}
