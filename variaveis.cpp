#include <iostream>
using namespace std;

int main(){
    int a, b;
    const float PI = 3.14159;
    float r;

    cout << "Vamos fazer contas, escolhe 2 numeros." << endl;
    cout << "Numero A: ";
    cin >> a;
    cout << "Numero B: ";
    cin >> b;

    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;

    cout << "Soma: " << soma << endl;
    cout << "Diferenca: " << diferenca << endl;
    cout << "Produto: " << produto << endl;

    if (b !=0) {
        float divisao = a / b;
        int restoDivisao = a % b;
        cout << "Divisao: " << divisao << endl;
        cout << "Resto da Divisao: " << restoDivisao << endl;
    } else {
        cout << "A divisao por zero nao e permitida";
    }

    cout << "Vamos calcular a area de um circulo! Insere o valor de um raio: ";
    cin >> r;

    float area = PI * r * r;

    cout << "Aqui esta a area do circulo: " << area << endl; 
}