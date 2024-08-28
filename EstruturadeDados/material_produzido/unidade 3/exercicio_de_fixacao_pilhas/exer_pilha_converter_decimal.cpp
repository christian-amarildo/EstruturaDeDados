#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Estrutura da pilha
struct Pilha {
    int *elementos; // Ponteiro para os elementos da pilha (alocados dinamicamente)
    int topo;        // Índice do topo da pilha
    int capacidade; // Capacidade atual da pilha
};

// Inicializa uma pilha vazia
Pilha* criarPilha(int capacidadeInicial) {
    Pilha* pilha = new Pilha;
    pilha->elementos = (int*)malloc(capacidadeInicial * sizeof(int));
    pilha->topo = -1;
    pilha->capacidade = capacidadeInicial;
    return pilha;
}

// Verifica se a pilha está vazia
bool pilhaVazia(Pilha* pilha) {
    return pilha->topo == -1;
}

// Verifica se a pilha está cheia
bool pilhaCheia(Pilha* pilha) {
    return pilha->topo == pilha->capacidade - 1;
}

// Expanda a capacidade da pilha (se necessário)
void expandirPilha(Pilha* pilha) {
    pilha->capacidade *= 2; // Dobra a capacidade
    pilha->elementos = (int*)realloc(pilha->elementos, pilha->capacidade * sizeof(int));
}

// Empilha um elemento na pilha
void empilhar(Pilha* pilha, int data) {
    if (pilhaCheia(pilha)) {
        expandirPilha(pilha); // Expanda a pilha se estiver cheia
    }
    pilha->topo++;
    pilha->elementos[pilha->topo] = data;
}

// Desempilha um elemento da pilha
int desempilhar(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        cout << "Pilha vazia!" << endl;
        return -1;
    }
    int data = pilha->elementos[pilha->topo];
    pilha->topo--;
    return data;
}

// Função para converter um número decimal para binário utilizando uma pilha
string decimalToBinary(int decimal) {
    Pilha* pilha = criarPilha(10); // Inicializa a pilha com capacidade 10
    string binary = "";

    while (decimal > 0) {
        int remainder = decimal % 2;
        empilhar(pilha, remainder);
        decimal /= 2;
    }

    while (!pilhaVazia(pilha)) {
        binary += to_string(desempilhar(pilha));
    }

    delete[] pilha->elementos; // Libera a memória alocada para os elementos
    delete pilha; // Libera a memória alocada para a pilha

    return binary;
}

// Função para converter um número decimal para octal utilizando uma pilha
string decimalToOctal(int decimal) {
    Pilha* pilha = criarPilha(10);
    string octal = "";

    while (decimal > 0) {
        int remainder = decimal % 8;
        empilhar(pilha, remainder);
        decimal /= 8;
    }

    while (!pilhaVazia(pilha)) {
        octal += to_string(desempilhar(pilha));
    }

    delete[] pilha->elementos;
    delete pilha;

    return octal;
}

// Função para converter um número decimal para hexadecimal utilizando uma pilha
string decimalToHexadecimal(int decimal) {
    Pilha* pilha = criarPilha(10);
    string hexadecimal = "";
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (decimal > 0) {
        int remainder = decimal % 16;
        empilhar(pilha, remainder);
        decimal /= 16;
    }

    while (!pilhaVazia(pilha)) {
        int digit = desempilhar(pilha);
        hexadecimal += hexDigits[digit];
    }

    delete[] pilha->elementos;
    delete pilha;

    return hexadecimal;
}

int main() {
    int decimal;

    cout << "Digite um número decimal: ";
    cin >> decimal;

    cout << "Binário: " << decimalToBinary(decimal) << endl;
    cout << "Octal: " << decimalToOctal(decimal) << endl;
    cout << "Hexadecimal: " << decimalToHexadecimal(decimal) << endl;

    return 0;
}