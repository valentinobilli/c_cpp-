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
	
	for(int i = 0  ; i< patron.size() ; i++)if(!(patron[i] >= 'a' && patron[i] <= 'z')){
		system("cls");
		cout << "El patron debe contener solo letras mininusculas";
		return 0;
	}
	
	if(patron.size() <= 0){
		system("cls");
		cout << "El patron no puede tener 0 cuadros o menos";
		return 0;
	}
	
	if(tipo != "NORMAL" && tipo !="ESPEJADO"){
		system("cls");
		cout << "El tipo solo puede ser NORMAL o ESPEJADO";
		return 0;
	}
	
	if(N >= 1000){
		system("cls");
		cout << "La guarda no puede medir mas o igualar los 1000 cuadrados";
		return 0;
	}
	
	cout << formaguarda(N, tipo, patron);
	return 0;
}
