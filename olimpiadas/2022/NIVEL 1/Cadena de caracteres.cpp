#include <iostream>

using namespace std;

int cadena(int valor){
	int acum = valor;
	
	while(valor!=1){
		for(int i = valor-1 ; i>=0 ; i--){
			if(valor%i == 0){
				acum += i;
				valor = i;
				break;
			}
		}
	}
	
	return acum;
}

int main(){
	int valor;
	cout << "Ingrese un valor: ";
	cin >> valor;
	cout << cadena(valor);
}
