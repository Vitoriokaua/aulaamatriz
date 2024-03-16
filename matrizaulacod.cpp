#include <iostream>
using namespace std;

#define max 10

void ler_matriz(int matriz[max][max], int l, int c) {
    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void imprimir_matriz(int matriz[max][max], int l, int c) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[max][max];
    int linhas, colunas;

    cout << "Quantas linhas você quer colocar (max 10): ";
    cin >> linhas;
    cout << "Quantas colunas você quer colocar (max 10): ";
    cin >> colunas;

    ler_matriz(matriz, linhas, colunas);
    imprimir_matriz(matriz, linhas, colunas);

    return 0;
}






