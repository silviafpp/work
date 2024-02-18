#include <iostream>
using namespace std;

int main(){
    int a, b;
    const float PI = 3.14159;
    float r;

    float notas[5];                             //array que armazena 5 elementos
    float MaisAlta = 0, MaisBaixa = 100;        //armazena a nota mais alta e mais baixa
    float media;                                //declara uma variavel para a media
    int myArray[10] = {1,2,3,4,5,6,7,8,9,10};   //array com 10 elementos
    int maior = myArray[0];                     //inicializa "maior" com o primeiro elemento do array
    int menor = myArray[0];                     //inicializa "maior" com o primeiro elemento do array

    int n;


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

    //verifica se b é diferente de 0 para permitir a divisao
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

    //loop para percorrer as notas dos alunos
    cout << "Digite as notas dos alunos: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Aluno " << i + 1 << ": ";
        cin >> notas[i];

        if (notas[i] > 100) {
            cout << "A nota nao pode ser maior que 100. Digite novamente: " << endl;
        }

        soma += notas[i];

        if(notas[i] > MaisAlta) MaisAlta = notas[i];        //atualiza a maior nota
        if(notas[i] < MaisBaixa) MaisBaixa = notas[i];      //atualiza a menor nota
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

    cout << "Digite um numero para a tabuada de 1 a 10: ";
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}