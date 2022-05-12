#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void maiorvalor(float num1, float num2, float num3){
	if (num1==num2==num3){
		cout << "O tres numeros sao iguais, tente novamente" << endl;
	}else{
	if (num1==num2){
	cout << "O primeiros e o segundo numero sao iguais, tente novamente" << endl;
	}else{
		if (num1==num3){
			cout << "O primeiro e o terceiro numero sao iguais, tente novamente" << endl;
			}else{
				if (num2==num3){
				cout << "O segundo e o terceiro numero sao iguais, tente novamente" << endl;
				}else{
					if (num1==num2==num3){
					cout << "O tres numeros sao iguais, tente novamente" << endl;
					}else{
						int aux = 0;
						if (num1>aux){
							aux = num1;
						if (num2>aux){
							aux = num2;
						if (num3>aux){
							aux = num3;
						}
						cout << "O maior numero e: " << aux << endl;
				
								}
							}
						}
					}
				}
			}
		}
	}

int main(){
	float val1, val2, val3;
	cout << "Este programa informa o maior valor" << endl ;
	cout << "Informe o primeiro numero:";
	cin >> val1;
 	cout << "Informe o segundo numero:";
 	cin >> val2;
 	cout << "Informe o terceiro numero:";
	cin >> val3;
	maiorvalor(val1, val2, val3);
	cout << endl << "Aperte qualquer tecla para sair" ;
	val1 = getch () ;
}
