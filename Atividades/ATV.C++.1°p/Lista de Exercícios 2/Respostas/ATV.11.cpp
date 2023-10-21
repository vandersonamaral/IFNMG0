#include <iostream>
using namespace std;
int main (){
	int segundos,horas,rs,min,tps;/*rs=resto dos
segundos,tps=tranformaçao para segundos*/
	cout<<"digite os segundos: ";
	cin>>segundos;
	horas=segundos/3600;
	rs=horas*3600-segundos;
	min=rs/60;
	tps=min*60-rs;
	cout<<"resultado e: "<<horas<<"h"<<min<<"min"<<tps<<"seg";
	return 0;
}
