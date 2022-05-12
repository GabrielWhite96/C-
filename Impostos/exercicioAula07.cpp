#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void porcentagemimposto(int salario){
	float imposto = 0;
	
	if ( salario <= 1500 ){
			cout << "Voce nao precisa pagar imposto de renda " ;
	}else{

	if (( salario > 1500 )&&( salario <= 3000)){
			imposto = 0.12;
	}else{

	if (( salario > 3000 )&&( salario <= 4000)){
			imposto = 0.20;
	}else{
		
	if ( salario > 4000){
			imposto = 0.27;
			}
		}
		}
		cout << "O valor do imposto de renda a ser pago e : " << imposto * salario ;
	}
	
}

int main(){
	float num;
	cout << "Informe o seu salario atual: " << endl ;
	cin >> num;
	porcentagemimposto ( num );
	cout << endl << "Aperte qualquer tecla para sair" ;
	num = getch () ;
	return 0;
	
}
