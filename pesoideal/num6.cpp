#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

float pesoideal(int sex, float altu){
	if (sex = 2){
		float aux=(72.7*altu)-58;
		return aux;
	}else{
		if (sex=1){
			float aux=(62.1*altu)-44.7;
			return aux;
		}
	}	
}

int main(){
	float sexo, altura;
	cout << "Voce e homem ou mulher, digite 1 para mulher e 2 para homem :" << endl ;
	cin >> sexo;
	cout << "Informe sua altura :" << endl;
	cin >> altura;
	cout << "O seu peso ideal e : " << pesoideal(sexo, altura) << "kg" << endl;
	cout << endl << "Aperte qualquer tecla para sair" ;
	sexo = getch () ;
	
}
