/*10) Faça um programa em C++ que solicite ao usuário que digite 50 números. Estes dados serão
armazenados em um vetor. Após o usuário digitar todos os números do vetor, o programa
solicitará que usuário digite um número x. Finalmente o programa exibirá na tela todos os
números do vetor digitado que são maiores ou iguais a x.*/
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
