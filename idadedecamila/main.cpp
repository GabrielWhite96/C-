#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale.h>

using namespace std;

void idadecamila(int idade1, int idade2, int idade3){
	setlocale(LC_ALL, "Portuguese_Brazil");
	if ((idade1<5) || (idade1>100) || (idade2<5) || (idade2>100)|| (idade3<5) || (idade3>100)){
		cout << "Por favor digite idades entra 5 e 100 anos" << endl;
	}else{
		int aux=0;
		if(idade2>idade1){
			aux=idade1;
			idade1=idade2;
			idade2=aux;
		}
		if(idade3>idade1){
			aux=idade1;
			idade1=idade3;
			idade3=aux;
		}
		if(idade3>idade2){
			aux=idade2;
			idade2=idade3;
			idade3=aux;
		}
		cout << "A idade de Camila é " << idade2 << " por ser a irma do meio." << endl;
	}
}

int main(){
	int id1, id2, id3;
	cout << "Informe as tres idades das irmas:" << endl;
	cin >> id1;
	cin >> id2;
	cin >> id3;
	idadecamila(id1, id2, id3);
	cout << "APERTE QUALQUER TECLA PARA SAIR" << endl;
	id1 = getch();
}
