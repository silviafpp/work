#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Digite um numero para a tabuada de 1 a 10: ";
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}