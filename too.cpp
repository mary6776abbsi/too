#include <iostream>

using namespace std;

int main() {
    int number;
    char character;

    // دریافت عدد و کاراکتر از کاربر
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a character: ";
    cin >> character;

    // چاپ کاراکتر به تعداد عدد وارد شده
    for (int i = 0; i < number; ++i) {
        cout << character;
    }

    return 0;
}
