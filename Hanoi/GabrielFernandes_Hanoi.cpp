#include <iostream>
#include <conio.h>
#include <locale>

using namespace std;

void MoverDiscos(int d, char hA, char hC, char cB){
	setlocale(LC_ALL, "Portuguese_Brazil");
    if(d==1){
        cout << " Mova o disco " <<d<<" da haste " << hA << " até a haste " << hC << endl;
    }else{
        MoverDiscos(d-1,hA,cB,hC);
        cout << " Mova o disco " <<d<<" da haste " << hA << " até a haste " << hC << endl;
        MoverDiscos(d-1,cB,hC,hA);
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int n ;
    cout << " DIGITE O NÚMERO DE DISCOS :";
    cin >> n;
    cout << "______________________________________________________________________\n\n";
    MoverDiscos(n,'A','C','B');
    cout << "\n______________________________________________________________________\n\n";
	cout << " APERTE QUALQUER TECLA PARA SAIR.";
	
    n = getch();
}
