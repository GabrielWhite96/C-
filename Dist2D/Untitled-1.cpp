#include <iostream>
#include <math.h>
#include <conio.h>

//segundo exercicio

using namespace std;

struct loc{
    float x;
    float y;
}

void Dist2D (loc &p){
    cout << "\n Digite os pontos x e y:\n";
    cout << " X = ";
    cin >> p.x;
    cout << " Y = ";
    cin >> p.y;
    

}

int main(){
    loc a, b;
    cout << "______________________________________________________________________\n";
    Dist2D (a);
    Dist2D (b);
    float dx = (a.x-b.x) * (a.x-b.x);
    float dy = (a.y-b.y) * (a.y-b.y);
    float dist = sqrt (dx+dy);
    cout << "a distancia do ponto A ao ponto B é: " << dist;
    
    cout << " APERTE QUALQUER TECLA PARA SAIR.";
    a = getch();
}

