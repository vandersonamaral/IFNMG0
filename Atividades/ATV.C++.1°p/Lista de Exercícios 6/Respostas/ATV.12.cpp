#include <iostream>
using namespace std;

int main() {
	int i=1920;
	while(i<=2020){
		if(i % 400 ==0 || i%4==0 && i% 100!=0 )
			cout<<i<<" ";
	i++;
	}
	return 0;
}
