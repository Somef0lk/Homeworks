#include <iostream>
#include <cstring>
using namespace std;
                              //nemnogo ispolzoval google, no vi sami razreshili
int main() {
    const int N = 5;
    char names[N][20];
    int prices[N];


    for (int i = 0; i < N; i++) {
        cout << "Vvedite nazvaniye tovara " << i+1 << ": ";
        cin.getline(names[i], 20);

        cout << "Vvedite cenu tovara " << i+1 << ": ";
        cin >> prices[i];


        cin.ignore();
    }


    int min_price = prices[0], max_price = prices[0];
    char* min_name = names[0];
    char* max_name = names[0];

    for (int i = 1; i < N; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
            min_name = names[i];
        }
        if (prices[i] > max_price) {
            max_price = prices[i];
            max_name = names[i];
        }
    }


    cout << "The cheapest: " << min_name << " (" << min_price << ")\n";
    cout << "The most expensive: " << max_name << " (" << max_price << ")\n";

    return 0;
}
