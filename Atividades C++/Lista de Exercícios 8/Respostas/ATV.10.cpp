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
