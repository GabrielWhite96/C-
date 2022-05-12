#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void preco(int macas){
	float valor = 0.30;
	
	if (macas < 12){
		cout << "O valor total da compra e : R$ " << valor*macas << endl;
	}else{
		valor = 0.25;
		cout << "O valor total da compra e : R$ " << valor*macas << endl;
	}
}


int main(){
	float num;
	cout << "Quantas macas voce vai comprar ?" << endl;
	cin >> num;
	preco(num);
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	num = getch();
}
