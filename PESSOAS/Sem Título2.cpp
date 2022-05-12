#include <iostream>
#include <conio.h>
#include <locale>

//primeiro exercicio

using namespace std;

struct Pessoa{
	string nome;
	string sexo;
	int idade;
	string cidade;
	
};

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int escolha=6;
	Pessoa p1, p2, p3, p4, p5;
	
	p1.nome = "Gabriel";
	p1.sexo = "M";
	p1.idade = 19;
	p1.cidade = "Los Angeles";
	
	p2.nome = "Caio";
	p2.sexo = "M";
	p2.idade = 18;
	p2.cidade = "Manaus";
	
	p3.nome = "Isa";
	p3.sexo = "F";
	p3.idade = 20;
	p3.cidade = "Los Angeles";
	
	p4.nome = "Lucas";
	p4.sexo = "M";
	p4.idade = 21;
	p4.cidade = "Tokyo";
	
	p5.nome = "Dukaum";
	p5.sexo = "M";
	p5.idade = 21;
	p5.cidade = "Fortaleza";
	
	while(escolha!=0){
		cout << "______________________________________________________________________\n";
		cout << " DIGITE O NÚMERO DA PESSOA PARA VER AS INFORMAÇÕES." << endl;
		cout << " 1-GABRIEL" << endl;
		cout << " 2-CAIO" << endl;
		cout << " 3-ISA" << endl;
		cout << " 4-LUCAS" << endl;
		cout << " 5-DUKAUM" << endl;
		cout << " DIGITE '0' PARA ENCERRAR." << endl;
		cout << "\n DIGITE O NUMERO DESEJADO: ";
		
		cin >> escolha;
		
		switch(escolha){
			case 0:
			cout << "______________________________________________________________________\n\n";
			cout << " APERTE QUALQUER TECLA PARA SAIR\n";
			cout << "______________________________________________________________________\n\n";
			break;
			
			case 1:
			system("clear||cls");
			cout << " NOME: " << p1.nome << endl;
			cout << " SEXO: " << p1.sexo << endl;
			cout << " IDADE: " << p1.idade << endl;
			cout << " CIDADE: " << p1.cidade << endl << endl;
			break;
			
			case 2:
			system("clear||cls");
			cout << " NOME: " << p2.nome << endl;
			cout << " SEXO: " << p2.sexo << endl;
			cout << " IDADE: " << p2.idade << endl;
			cout << " CIDADE: " << p2.cidade << endl << endl;
			break;
			
			case 3:
			system("clear||cls");
			cout << " NOME: " << p3.nome << endl;
			cout << " SEXO: " << p3.sexo << endl;
			cout << " IDADE: " << p3.idade << endl;
			cout << " CIDADE: " << p3.cidade << endl << endl;
			break;
			
			case 4:
			system("clear||cls");
			cout << " NOME: " << p4.nome << endl;
			cout << " SEXO: " << p4.sexo << endl;
			cout << " IDADE: " << p4.idade << endl;
			cout << " CIDADE: " << p4.cidade << endl << endl;
			break;
			
			case 5:
			system("clear||cls");
			cout << " NOME: " << p5.nome << endl;
			cout << " SEXO: " << p5.sexo << endl;
			cout << " IDADE: " << p5.idade << endl;
			cout << " CIDADE: " << p5.cidade << endl << endl;
			break;
			
			default:
			system("clear||cls");
			cout << "\n ###!!! OPÇÃO INVALIDA !!!###\n\n";
			cout << "______________________________________________________________________\n\n";
			break;
			
		}
	}
	escolha = getch();
}

