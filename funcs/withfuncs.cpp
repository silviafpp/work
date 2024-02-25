#include <iostream>
using namespace std;

void menu() {
    cout << "==================="  << endl;
    cout << "       MENU"          << endl;
    cout << "==================="  << endl;
    cout << "1 - Soma"             << endl;
    cout << "2 - Subtracao"        << endl;
    cout << "3 - Multiplicacao"    << endl;
    cout << "4 - Divisao"          << endl;
    cout << "5 - Resto da Divisao" << endl;
}

//é int porque vai receber um valor
int getOption() {
    int option;

    do {
        cout << "Pick a number: " << endl;
        cin >> option;

        if(option < 0 || option > 5) {
            cout << "Invalid number pick from 1 to 5" << endl;
        }
    } while(option < 0 || option > 5);

    return option;
}

void executeCalc(int option, int a, int b) {

    switch(option) {
        case 1:
            cout << "Soma: " << a + b << endl;
            break;
        case 2:
            cout << "Subtracao: " << a - b << endl;
            break;
        case 3:
            cout << "Multiplicacao: " << a * b << endl;
            break;
        case 4:
            cout << "Divisao: " << a / b << endl;
            break;
        case 5:
            cout << "Resto da Divisao: " << a % b << endl;
            break;
    }
}

int getValA() {
    int a;
    cout << "Pick the value for a: " << endl;
    cin >> a;
    return a;
}

int getValB() {
    int b;
    cout << "Pick the value for b: " << endl;
    cin >> b;
    return b;
}



int main() {
    int option;
    int a;
    int b;

    menu();
    option = getOption();
    a = getValA();
    b =  getValB();
    executeCalc(option, a, b);

    return 0;
}