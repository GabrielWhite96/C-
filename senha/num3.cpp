#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void verificar(int senha){
	if (senha == 1234){
		cout << "ACESSO PERMITIDO" << endl;
	}else{
		cout << "ACESSO NEGADO" << endl;
	}
}

int main (){
	float num;
	cout << "Digite a senha:" << endl;
	cin >> num;
	verificar (num);
	num = getch ();
	
}
