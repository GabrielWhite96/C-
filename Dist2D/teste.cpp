#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale>

//segundo exercicio

using namespace std;

struct loc{
    float x;
    float y;
};

void Dist2D (loc &p){
    cout << "\n Digite os pontos x e y:\n\n";
    cout << " X = ";
    cin >> p.x;
    cout << " Y = ";
    cin >> p.y;
    

}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    loc a, b;
    cout << "______________________________________________________________________\n";
    Dist2D (a);
    Dist2D (b);
    float dx = (a.x-b.x) * (a.x-b.x);
    float dy = (a.y-b.y) * (a.y-b.y);
    float dist = sqrt (dx+dy);
    cout << "\n______________________________________________________________________\n\n";
    cout << " A distancia do ponto A ao ponto B é: " << dist << endl;
    cout << "\n APERTE QUALQUER TECLA PARA SAIR.";
    
    dx = getch();
}


