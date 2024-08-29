// #include <iostream>

// #define MAXTAM 1000 // Define o tamanho máximo da fila

// typedef int TipoApontador; // Tipo usado para representar índices na fila
// typedef int TipoChave; // Tipo usado para a chave dos itens na fila

// // Estrutura para representar um item na fila
// typedef struct { 
//     TipoChave Chave; // Cada item na fila tem uma chave (neste caso, um número inteiro)
// } TipoItem;

// // Estrutura da fila
// typedef struct {
//     TipoItem item[MAXTAM]; // Array que armazena os itens da fila
//     TipoApontador Frente, Tras; // Variáveis para apontar o início (frente) e o final (trás) da fila
//     int numeroElementos; // Variável para armazenar o número de elementos na fila
// } TipoFila;

// // Função que inicializa a fila como vazia
// void FFVazia(TipoFila *Fila) {
//     Fila->Frente = 0; // Inicializa o apontador da frente em 0
//     Fila->Tras = Fila->Frente; // Inicializa o apontador do final igual ao da frente, indicando fila vazia
// }

// // Função que verifica se a fila está vazia
// int Vazia(TipoFila *Fila) {
//     // A fila está vazia se o apontador de frente for igual ao de trás
//     return (Fila->Frente == Fila->Tras);
// }

// // Função que enfileira um novo item na fila
// int Enfileira(TipoItem x, TipoFila *Fila) {
//     // Verifica se a fila está cheia. A fila está cheia se o próximo índice de "Tras" (após incremento)
//     // coincidir com o índice "Frente". Isso é calculado usando módulo para garantir o comportamento circular.
//     if ((Fila->Tras + 1) % MAXTAM == Fila->Frente) {
//         printf("Erro: fila cheia\n"); // Imprime uma mensagem de erro se a fila estiver cheia
//         return 0; // Retorna 0 indicando falha na enfileiramento
//     }
//     else {
//         // Caso contrário, insere o item no final da fila (índice "Tras")
//         Fila->item[Fila->Tras] = x;
//         // Incrementa "Tras" circularmente. Usando módulo, garantimos que
//         // "Tras" volte ao início do array se ultrapassar o limite máximo.
//         Fila->Tras = (Fila->Tras + 1) % MAXTAM;
//         Fila->numeroElementos = Fila->numeroElementos + 1; // Incrementa o número de elementos na fila
//     }
//     return 1; // Retorna 1 indicando sucesso na enfileiramento
// }

// // Função que desenfileira um item da fila
// TipoItem Desenfileira(TipoFila *Fila) {
//     // Verifica se a fila está vazia
//     if(Vazia(Fila)) {
//         printf ("Erro: fila vazia\n"); // Imprime uma mensagem de erro se a fila estiver vazia
//         Erro; // (Este "Erro;" está incorreto no código original. Deve ser removido ou substituído por uma ação apropriada.)
//     }
//     else {
//         // Armazena o índice do item que está na frente da fila
//         int idx = Fila->Frente;
//         // Incrementa o apontador da frente circularmente para mover a "frente" ao próximo item
//         Fila->Frente = (Fila->Frente + 1) % MAXTAM;
//         // Retorna o item que estava na frente da fila
//         Fila->numeroElementos = Fila->numeroElementos - 1; // decrementa o número de elementos na fila

//         return Fila->item[idx];
//     }
// }

//   int main(); {

//     cout << Fila.numeroElementos << endl;
//   }