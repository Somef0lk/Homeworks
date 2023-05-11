#include <iostream>

using namespace std;

struct WashMachine {
    char *firm = new char[20]{};
    char *color = new char[20]{}; // {} - это инициализация.
    int length;
    int width;
    int height;
    int speed;
    int temperature;


    void print() {
        cout << firm << " " << color << " " << length << " " << width << " " << height << " " << speed << " " << temperature << endl;
    }
};