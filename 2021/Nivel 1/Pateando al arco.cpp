#include <iostream>

using namespace std;

string arco(int x, int y){
	if(x<0 || x>=733 || y>=233) return "AFUERA";
	else if(x==732 || y==232 || x==0) return "PALO";
	else return "GOL";
}

int main(){
	int x, y;
	cin >> x >> y;
	
	if(x<-1000 || x>1000){
		cout << "X debe ser mayor que 0 y menor que 1000";
		return 1;
	}
	
	if(y<=0 || y>1000){
		cout << "Y debe ser mayor que 0 y menor que 1000";
		return 1;
	}
	
	cout << arco(x, y);
	
	return 0;
}
