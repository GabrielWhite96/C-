#include <iostream>
#include <conio.h>

using namespace std;

void ordem(int pri, int seg, int ter){
	if(pri==seg){
		cout << "Dois ou mais numeros sao iguais, por favor digite valores diferentes" << endl;
		}else{
			if(pri==ter){
				cout << "Dois ou mais numeros sao iguais, por favor digite valores diferentes" << endl;
			}else{
				if(seg==ter){
					cout << "Dois ou mais numeros sao iguais, por favor digite valores diferentes" << endl;
				}else{
					
					int aux=0;
					if(pri>seg){
						aux=pri;
						pri=seg;
						seg=aux;
					}
					if(pri>ter){
						aux=pri;
						pri=ter;
						ter=aux;
					}
					if(seg>ter){
						aux=seg;
						seg=ter;
						ter=aux;
					}
					cout << "A ordem crescente dos numeros digitados e: " << pri << ", " << seg << ", " << ter << endl;
					}
				}
			}
}

int main(){
	int primeiro, segundo, terceiro;
	cout << "O programa a seguir organiza tres numeros em ordem crescente." << endl;
	cout << "Insira tres numeros:" << endl;
	cin >> primeiro;
	cin >> segundo;
	cin >> terceiro;
	ordem(primeiro, segundo, terceiro);
	cout << "APERTE QUALQUER TECLA PARA SAIR";
	primeiro = getch();
}
