#include <iostream>
using namespace std;
int main() {
	float QC,Te,Total; //QC= quantidade de cigarro,Te= tempo.
	cout<<"tempo que pedro consumiu o cigarro =";
	cin>>Te;
	cout<<"valor do maco de cigarro=";
	cin>>QC;
	Total=1.5*QC*Te*365;
	cout<<"Total gasto com cigarro= "<<Total;
	return 0;
}
