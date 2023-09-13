#include <iostream>

using namespace std;

int envido(int numero1 , string palo1 , int numero2, string palo2, int numero3, string palo3){
	int acum = 20;
	
	if(numero1 >= 10) numero1 = 0;
	if(numero2 >= 10) numero2 = 0;
	if(numero3 >= 10) numero3 = 0;
	
	if(palo1 == palo2 && palo2 == palo3){
		int arr[3] = {numero1, numero2, numero3};
		
		for(int i = 0 ; i<3 ; i++){
			for(int j = i ; j<3 ; j++){
				if(arr[i]>arr[j]){
					int aux = arr[i];
					arr[i] = arr[j];
					arr[j] = aux;
				}
			}
		}
		
		return arr[2] + arr[1] + acum;
	}
	else if(palo1 == palo2)return numero1 + numero2 + acum;
	else if(palo2 == palo3)return numero2 + numero3 + acum;
	else if(palo1 == palo3)return numero1 + numero3 + acum;
	else{
		int arr[3] = {numero1, numero2, numero3};
		
		for(int i = 0 ; i<3 ; i++){
			for(int j = i ; j<3 ; j++){
				if(arr[i]>arr[j]){
					int aux = arr[i];
					arr[i] = arr[j];
					arr[j] = aux;
				}
			}
		}
		
		return arr[2];
	}
}

bool confirmPalo(string palo){
	return palo == "copas" || palo == "oros" || palo == "espadas" || palo == "bastos";
}

bool confirmValor(int valor){
	bool valor1 = (valor != 8) && (valor != 9) && (valor<13) && (valor>0);
	return valor1;
}

int main(){
	string palo[3];
	int valor[3];
	
	for(int i = 0 ; i<3 ; i++)
	{
		do{
			cin >> valor[i] >> palo[i];
		}while(!confirmPalo(palo[i]) && !confirmValor[i]);
	}
	
	cout << envido(valor[0], palo[0], valor[1], palo[1], valor[2], palo[2]);
}
