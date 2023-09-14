#include <iostream>

using namespace std;

string formaguarda(int N, string tipo, string patron){
	string cadena = {"00000000"};
	int contador = 0;
	bool booleano = true;
	
	if(tipo == "NORMAL"){
		for(int i = 0 ; i<N ; i++){
			cadena[i] == (patron[contador]);
			if(contador == 0) contador = 1;
			else if(contador == 1) contador = 2;
			else contador = 0;
		}
	}else{
		for(int i = 0 ; i<N ; i++){
			if(booleano){
				if(i!=0){
					if(contador == 0) contador = 1;
					else if(contador == 1) contador = 2;
					else booleano = false;
				}
			}else{
				if(contador == 0) booleano = true;
				else if(contador == 1) contador = 0;
				else contador = 1;
			}
			cadena[i] = (patron[contador]);
		}
	}
	
	return cadena;
}

int main(){
	int N;
	string tipo, patron;
	cin >> N >> tipo >> patron;
	cout << formaguarda(N, tipo, patron);
	return 0;
}
