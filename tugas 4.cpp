#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;
    cout << "Masukkan operator (- + * /): ";
    cin >> op;
    switch(op) {
        case '+':
            cout << "Hasilnya: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Hasilnya: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Hasilnya: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Hasilnya: " << num1 / num2 << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
            }
            break;
        default:
            cout << "Error: Operator tidak valid." << endl;
            break;
    }

    return 0;
}
