#include <iostream>
using namespace std;
int main (){
	int segundos,horas,min,tpm,tps;/*tpm=tranformaçao para
minutos,tps=tranformaçao para segundos*/
	cout<<"digite as horas, os minutos e os segundos: ";
	cin>>horas>>min>>segundos;
	tpm=horas*60+min;
	tps=tpm*60+segundos;
	cout<<"O resultado e:"<<tps<<" segundos";
	return 0;
}
