#include <iostream>
#include <cmath>
using namespace std;
//inicio 
int main() {
    //
    float media;
    int sala[6];
    //coleta de informações sobre as salas
    cout << "Quantos alunos a sala 1 tem ? ";
    cin >> sala[0];
     cout << "Quantos alunos a sala 2 tem? ";
    cin >> sala[1];
     cout << "Quantos alunos a sala 3 tem? ";
    cin >> sala[2];
     cout << "Quantos alunos a sala 4 tem? ";
    cin >> sala[3];
     cout << "Quantos alunos a sala 5 tem? ";
    cin >> sala[4];
     cout << "Quantos alunos a sala 6 tem? ";
    cin >> sala[5];
    //calculo da média
    for(int i = 0; i < 6; i++) {
        cout << "A sala " << i + 1 << " tem " << sala[i] << " alunos" << endl;
    }
    //soma de ambas 
    media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]) / 6;
    cout << "A media é " << media << endl;
    //rezultado do calculo 
    if (sala[0] > media){
        cout << "A sala " << 1 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 1 << " está abaixo da media" << endl;
    }
    if(sala[1] > media) {
        cout << "A sala " << 2 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 2 << " está abaixo da media" << endl;
    }
    if(sala[2] > media) {
        cout << "A sala " << 3 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 3 << " está abaixo da media" << endl;
    }
    if(sala[3] > media) {
        cout << "A sala " << 4 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 4 << " está abaixo da media" << endl;
    }
    if(sala[4] > media) {
        cout << "A sala " << 5 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 5 << " está abaixo da media" << endl;
    }
    if(sala[5] > media) {
        cout << "A sala " << 6 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 6 << " está abaixo da media" << endl;
    }
    //
    int maior_sala = 0;
    int menor_sala = 0;
    //
    for (int a = 1; a < 6 ; a++) {
        if (sala[a] > sala[maior_sala]) {
            maior_sala = a;
        }
        if (sala[a] < sala[menor_sala]) {
            menor_sala = a;
        }
    }

    //entrega dos rezultados 
    cout << "A sala com o maior número de alunos é a sala " << (maior_sala+1)
         << " com " << sala[maior_sala] << " alunos." << endl;
    cout << "A sala com o menor número de alunos é a sala " << (menor_sala+1)
         << " com " << sala[menor_sala] << " alunos." << endl;


return 0;
}