#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//

using namespace std;



int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
 	int voto=7; 
	 int c1=0; 
	 int c2=0; 
	 int c3=0; 
	 int c4=0; 
	 int nul=0;
	 int bra=0;
	
	
	while(voto!=0){
		cout << " DIGITE O NÚMERO DO VOTO." << endl;
		cout << " 1-CARLIN" << endl;
		cout << " 2-JORGIN" << endl;
		cout << " 3-TITIN" << endl;
		cout << " 4-CREUZA" << endl;
		cout << " 5-VOTAR NULO" << endl;
		cout << " 6-VOTAR EM BRANCO" << endl;
		cout << " DIGITE '0' PARA ENCERRAR AS VOTAÇOES." << endl;
		cout << "\n DIGITE O NUMERO DESEJADO: ";
	
		cin >> voto;
		
		switch(voto){
			case 0:
			cout << "\n VOTAÇÃO ENCERRADA\n\n";
			cout << "\n ======================================================================\n\n\n" ;
			cout << "\n APERTE QUALQUER TECLA PARA SAIR\n";
			cout << " ______________________________________________________________________\n\n";
			break;
				
			case 1:
			c1=c1+1;
			cout << "\n VOTO EM CARLIN REGISTRADO\n";
			cout << " ______________________________________________________________________\n\n";
			break; 
			
			case 2:
			c2=c2+1;
			cout << "\n VOTO EM JORGIN REGISTRADO \n ";
			cout << " ______________________________________________________________________\n\n";
			break;
			
			case 3:
			c3=c3+1;
			cout << "\n VOTO EM TITIN REGISTRADO \n ";
			cout << " ______________________________________________________________________\n\n";
			break;
			
			case 4:
			c4=c4+1;
			cout << "\n VOTO EM CREUZA REGISTRADO \n ";
			cout << " ______________________________________________________________________\n\n";
			break;
			
			case 5:
			nul=nul+1;
			cout << "\n VOTO NULO REGISTRADO \n ";
			cout << " ______________________________________________________________________\n\n";
			break;
			
			case 6:
			bra=bra+1;
			cout << "\n VOTO EM BRANCO REGISTRADO \n ";
			cout << " ______________________________________________________________________\n\n";
			break;
			
			default:
			cout << "\nOPÇÃO INVALIDA !!!\n\n";
			cout << "______________________________________________________________________\n\n";
			break;
		}
	}
	cout << " RESULTADO:\n" ;
	cout << "\n CARLIN\t:" << c1;
	cout << "\n JORGIN\t:" << c2;
	cout << "\n TITIN\t:" << c3; 
	cout << "\n CREUZA\t:" << c3; 
	cout << "\n NULO\t:" << nul;
	cout << "\n BRANCO\t:" << bra;
	
	voto = getch();
}
