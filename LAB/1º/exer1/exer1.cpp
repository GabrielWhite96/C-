#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//esse programa soma dois valores

using namespace std;

void soma(float x, float y){
	setlocale(LC_ALL, "Portuguese_Brazil");
	cout << "O resultado da soma � : " << x+y << endl << endl;
	
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float num1;
	float num2;
	cout << "___________________________________________________________________\n\n";
	cout << "O programa em quest�o soma dois n�meros." << endl ;
	cout << "Informe o primeiro n�mero :";
	cin >> num1;
	cout << "Informe o segundo n�mero :";
	cin >> num2;
	cout << "___________________________________________________________________\n\n" ;
	soma(num1, num2);
	cout << "===================================================================\n\n\n" ;
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	
	num1 = getch();
}
