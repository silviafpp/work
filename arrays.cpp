#include <iostream>
using namespace std;

int main() {
    float notas[5];
    float MaisAlta = 0, MaisBaixa = 100;
    float soma = 0; 
    float media;

    int myArray[10] = {1,2,3,4,5,6,7,8,9,10};
    int maior = myArray[0];
    int menor = myArray[0];

    cout << "Digite as notas dos alunos: " << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Aluno " << i + 1 << ": ";
        cin >> notas[i];

        if (notas[i] > 100) {
            cout << "A nota nao pode ser maior que 100. Digite novamente: " << endl;
        }

        soma += notas[i];

        if(notas[i] > MaisAlta) MaisAlta = notas[i];
        if(notas[i] < MaisBaixa) MaisBaixa = notas[i];
    }

    media = soma / 5; 

    cout << "A media e: " << media << endl;
    cout << "A maior nota e: " << MaisAlta << endl;
    cout << "A menor nota e: " << MaisBaixa << endl;

    for(int a = 0; a < 10; a++) {
        if(myArray[a] > maior) {
            maior = myArray[a];
        }
        if(myArray[a] < menor) {
            menor = myArray[a];
        }
    }
    
    cout << "O maior numero e: " << maior << endl;
    cout << "O menor numero e: " << menor << endl;

    return 0; 
} 
