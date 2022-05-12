#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

using namespace std;

void tudo(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1,n2,n3,NotaM=0,NotaT;
	int matri =0;
	float nota =0;
	float porc=0;
	int freq =0;
	int maior=-1, menor;
	int reprovados =0;
	int reprovacaoFalta =0;
	int i=0;

	do{
		cout << " DIGITE A SEGUIR AS INFORMAÇÕES PEDIDAS. " << endl;
		cout << " A MATRÍCULA :";
		cin >> matri;
		cout << " A PRIMEIRA NOTA : ";
		cin >> n1;
		cout << " A SEGUNDA NOTA : ";
		cin >> n2;
		cout << " A TERCEIRA NOTA : ";
		cin >> n3;
		cout << " O NÚMERO DE AULAS ASSISTIDAS : ";
		cin >> freq;
		
		nota = (n1+n2+n3)/3;
		i++;
		cout <<"______________________________________________________________________\n\n";
		cout <<"\n matricula : " << matri << "\n nota final : " << nota << endl << endl;
		cout <<"______________________________________________________________________\n";
			if(nota>=60 && freq >= 20){
				cout <<"\n ALUNO APROVADO \n" <<endl;
			}else{
				if(nota <60 && freq >=20){
					cout << "\n ALUNO REPROVADO POR NOTA\n " <<endl;
					reprovados=reprovados+1;
				}else{
					if (nota >=60 && freq <20){
						cout << "\n ALUNO REPROVADO POR FALTA \n" <<endl;
						reprovados=reprovados+1;
						reprovacaoFalta=reprovacaoFalta+1;
					}else{
						if (nota <60 && freq <20){
							cout <<"\n ALUNO REPROVADO POR NOTA E FALTA\n " <<endl;
							reprovados=reprovados+1;
							reprovacaoFalta=reprovacaoFalta+1;
	
						}
					}
				} 
			}

	if (nota<menor){
		menor=nota;
	}if (nota>maior){
		maior=nota;
	}

	NotaT=NotaT+nota;
	}
	
	while(i<4);
		NotaM= NotaT/4;
		cout <<"______________________________________________________________________\n";
		cout << "\n A nota media da turma foi :" << NotaM <<endl;
		cout << "\n Total de alunos reprovados :" << reprovados <<endl;
		cout <<"\n Porcentagem de alunos reprovados por falta :" << reprovacaoFalta*100/4 << "% " <<endl;
		cout << "\n A maior nota foi " << maior <<" e a menor foi " <<menor <<endl;
		cout <<"______________________________________________________________________\n";
}

int main(){
	int close;
	tudo();
	close = getch();
}
