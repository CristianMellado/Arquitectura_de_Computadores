/*
			DIVISION DE ENTEROS
	Universidad Catolica San Pablo
Ciencia de la Computación (CCOMP3-1)
			CRISTIAN MELLADO BACA
*/
//Compilado en replit linux

#include <iostream>
#include <bitset>
using namespace std;

int main(){
	
	const int n = 10; //n bits (contador)
	int A=0, M=3, Q=100, Count=n; //M = divisor, Q = dividendo
	bitset<n> num_Q (Q), num_A (A);
	
	for(int Count = 0; Count>0; Count=Count+1){
		
		num_A[0] = num_Q[n-1];
		A = num_A.to_ulong();

		num_A <<= 1;
		num_Q <<= 1;
		
		A -= M;
		
		bitset<n> a(A);
		num_A = a;
		Count--;
	}
	
	
	cout<<" Cociente\t"<<num_Q<<"\t"<<Q<<endl;
	cout<<" Residuo\t"<<num_A<<"\t"<<A<<endl;
	
	//system("pause");
    return 0;
}