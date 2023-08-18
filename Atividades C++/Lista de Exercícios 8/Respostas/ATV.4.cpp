#include <iostream>
using namespace std;

const int p = 30;
int main() {
	int soma = 0, n1 = 0, n2 = 1, num;
	for (int i = 1; i < p; i++) {
		soma += n1;
		num = n1 + n2;
		n1 = n2;
		n2 = num;
	}
	cout << "A soma dos 30 primeiros termos da serie de Fibonacci : "<< soma << endl;
	return 0;
}
