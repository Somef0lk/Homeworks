#include <iostream>
using namespace std;



int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);

}



              //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!smog sdelat tolko 1 zadaniye iz 3 no reshil shto lucshe kinut xotabi ego cem nicego ne kidat!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main() {

    int a, b;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "GCD(NOD): " << result << endl;


    return 0;
}
