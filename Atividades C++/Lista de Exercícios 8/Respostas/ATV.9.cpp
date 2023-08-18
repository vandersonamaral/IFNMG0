#include <iostream>
using namespace std;

const int p= 50;
int main() {
	int a[p],x;
	bool encontrado = false;
	cout << "Digite 50 numeros: ";
	for (int i = 0; i < p; i++) {
		cin >> a[i];
	}
	cout << "Digite um numero: ";
	cin >> x;
	for (int i = 0; i < p; i++) {
		if (a[i] == x) {
			encontrado = true;
			break;
		}
	}
	if (encontrado) {
		cout << "O valor " << x << " esta presente no vetor." << endl;
	} 
	else {
		cout << "O valor " << x << " nao esta presente no vetor." << endl;
	}
	return 0;
}
