#include <iostream>
using namespace std;


void getText(char text[], int maxSize) {

    cout << "Enter a text(max "<< maxSize << " symbo;s): ";
    cin.getline(text, maxSize);

}

int getLength(const char text[]) {
    int length = 0;

    while (text[length] != '\0')
        length++;

    return length;
}

void replaceCharacter(char text[], char oldChar, char newChar) {
    int length = getLength(text);

    for (int i = 0; i < length; i++)
        if (text[i] == oldChar)
            text[i] = newChar;

}

void sortText(char text[]) {

    int length = getLength(text);

    for (int i = 0; i < length - 1; i++)

        for (int j = 0; j < length - 1 - i; j++)

            if (text[j] > text[j + 1]) {

                char temp = text[j];
                text[j] = text[j + 1];
                text[j + 1] = temp;

            }


}




int main() {

    const int maxSize = 301;
    char text[maxSize];

    getText(text, maxSize);

    cout << "Viberite deystviye:\n";
    cout << "1. Nayti dlinu teksta\n";
    cout << "2. Pomenat simvol\n";
    cout << "3. Sortirovka teksta po ascii\n";

    int choice;
    cin >> choice;

    cin.ignore();

    switch (choice) {

        case 1:

            cout << "Dlnina texta: " << getLength(text) << endl;
            break;

        case 2:

            char oldChar, newChar;
            cout << "Vvedite simvol dlya zameni: ";
            cin >> oldChar;

            cin.ignore();

            cout << "Vvedite noviy simvol: ";
            cin >> newChar;

            cin.ignore();

            replaceCharacter(text, oldChar, newChar);
            cout << "Noviy text: " << text << endl;

            break;

        case 3:

            sortText(text);
            cout << "Text posale sortirovki: " << text << endl;
            break;

        default:
            cout << "Error\n";
            break;

    }

    return 0;
}
