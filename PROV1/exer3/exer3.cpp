#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int NumFilhos, NumSalarios, NumPessoas, PessSalariAte100;
   	float MediaSalario, MediaFilhos, Salario, MaiorSalario, PorcenSalariAte100;
   	
   	NumFilhos = 0, NumSalarios = 0, NumPessoas = 0, PessSalariAte100 = 0;
  	MaiorSalario = 0.0, MediaSalario = 0.0,  MediaFilhos = 0.0;
   	
   	cout << " DIGITE O NÚMERO DE FILHOS E O SÁLARIO. (Para para terminar digite um salário negativo)" << endl << endl;
   	
   		while(Salario >=0){
   			cout << " Salário: ";
   			cin >> Salario;
   			if(Salario < 0){
   				break;
			   }else{
			   	if(Salario >= 0){
			   		cout << " Número de filhos: ";
   					cin >> NumFilhos;
   					cout << "" << endl;
   					NumPessoas++;
				   }
			   }	

   		if (Salario > MaiorSalario) MaiorSalario = Salario;
    	if (Salario <= 100.0) PessSalariAte100++;
    	MediaSalario += Salario;
    	MediaFilhos += NumFilhos;
    }
    
    if (NumPessoas) MediaSalario = MediaSalario / NumPessoas;
  	if (NumPessoas) MediaFilhos = MediaFilhos / NumPessoas;
  	if (NumPessoas) PorcenSalariAte100 = (PessSalariAte100 / (float)NumPessoas) * 100.0;
  	
  	cout << "______________________________________________________________________\n\n";
  	cout << " Média do salário da população: " << MediaSalario << endl;
  	cout << " Média filhos: " << MediaFilhos << endl;
  	cout << " Maior salário: " << MaiorSalario << endl;
  	cout << " Percentual de pessoas com salários até 100 reais: " << PorcenSalariAte100 <<"%"<< endl;
   	
   	NumFilhos = getch();
   
   }
