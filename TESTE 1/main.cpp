#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string.h>
using namespace std;

void nome ()
{
int i,x;
int LINHA1=50;
int COLUNA1=60;
char saida [4];
char nomes [LINHA1][COLUNA1];
cout << "digite um codigo para a sua saida\nquando desejar sair basta digitar seu codigo novamente \n(seu codigo pode ter 1 character)"<<endl; 
cin >> saida; 
for (i = 0,x = 0; i < LINHA1;i++)
{

cout << "digite nomes, para sair use o seu codigo"<<endl;
cin >> nomes;
x++;

if (strcmp (nomes, saida) == 0){
break;
}


}


system ("cls");
cout << "Os nomes digitados foram "<<endl;
for(int i = 0; i < x - 1; i++)
{

cout <<endl<< nomes<<endl;

}


}





int main(int argc, char** argv)
{



nome();
return 0;
}
