#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//

using namespace std;



int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int voto=7, int c1=0, int c2=0, int c3=0, int c4=0, int nul=0, int bra=0;
	
	while(voto!=0){
		cout << "DIGITE O NÚMERO DO VOTO.\N 1-CARLIN\N 2-JORGIN\N 3-TITIN\N 4-CREUZA\N 5-VOTAR NULO\N 6-VOTAR EM BRANCO";
		cin >> voto;
		
		switch(voto){
			case 0:
				cout << "VOTAÇÃO ENCERRADA\N\N";
				cout << "======================================================================\n\n\n" ;
				cout << "APERTE QUALQUER TECLA PARA SAIR"
				
			case 1:
			c1=c1+1;
			cout << "VOTO EM CARLIN REGISTRADO";
			break;
			
			case 2:
			c2=c2+1;
			cout << "VOTO EM JORGIN REGISTRADO";
			break;
			
			case 3:
			c3=c3+1;
			cout << "VOTO EM TITIN REGISTRADO";
			break;
			
			case 4:
			c4=c4+1;
			cout << "VOTO EM CREUZA REGISTRADO";
			break;
			
			case 5:
			nul=nul+1;
			cout << "VOTO NULO REGISTRADO";
			break;
			
			case 6:
			bra=bra+1;
			cout << "VOTO EM BRANCO REGISTRADO";
			break;
			
			default:
				cout << "OPÇÃO INVALIDA !!!";
				break;
		}
	}
	cout << "RESULTADO:\n CARLIN\t \n JORGIN\t \n TITIN\t \n CREUZA\t \n NULO\t \n EM BRANCO\t \n" << c1,c2,c3,c4,nul,bra;

	
	voto = getch();
}
