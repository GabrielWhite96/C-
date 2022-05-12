#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

float funcao(float a, float b, float c, float x1, float x2){
	if ((b*b)-(4*a*c) < 0){
        cout << "A equacao nao possui solucoes reais ";
        cout << endl << "Aperte qualquer tecla para sair" ;
        x2 = getch () ;
    }else{
        x1 = (-b+(sqrt((b*b)-(4*a*c)))/(2*a));
        x2 = (-b-(sqrt((b*b)-(4*a*c)))/(2*a));
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
        cout << endl << "Aperte qualquer tecla para sair" ;
        x2 = getch () ;
        return 0;}
}

int main(){

    float a=0, b=0, c=0, x1=0, x2=0;
    cout << "Para resolver a funcao" << endl;
    cout << "Digite a:";
    cin >> a;
    cout << "Digite b:";
    cin >> b;
    cout << "Digite c:";
    cin >> c;
    cout << funcao(a, b, c, x1, x2);
    return 0;
    
}
