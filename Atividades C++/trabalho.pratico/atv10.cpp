/*10) Fa�a um programa em C++ que solicite ao usu�rio que digite 50 n�meros. Estes dados ser�o
armazenados em um vetor. Ap�s o usu�rio digitar todos os n�meros do vetor, o programa
solicitar� que usu�rio digite um n�mero x. Finalmente o programa exibir� na tela todos os
n�meros do vetor digitado que s�o maiores ou iguais a x.*/
#include <iostream>
using namespace std;

const int p= 50;

int main() {
    int a[p],x;
    
    cout << "Digite 50 numeros: ";
    
    for (int i = 0; i < p; i++) {
        cin >> a[i];
    }

    cout << "Digite um numero: ";
    cin >> x;

    for (int i = 0; i < p; i++) {
        if (a[i] >= x) {
        	cout<<a[i]<<" "; 
        }
    }
    return 0;
}
