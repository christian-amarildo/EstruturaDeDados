// #include <iostream>  // Inclui a biblioteca de entrada e saída padrão do C++
// using namespace std; // Permite o uso de elementos do namespace 'std' sem precisar qualificá-los

// int main() {         // Função principal do programa, onde a execução começa
//     int a = 10;      // Declaração de uma variável inteira 'a' e atribuição do valor 10

//     // Exibe o valor armazenado na variável 'a'
//     cout << a << endl; // 'cout' é o objeto de saída padrão (console). 'endl' insere uma nova linha.

//     // Exibe o endereço de memória onde a variável 'a' está armazenada
//     cout << &a;        // '&a' retorna o endereço de memória de 'a'
// }
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .

// #include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C

// int main() // Função principal do programa
// {
//     int a;  // Declaração da variável 'a' do tipo inteiro
//     int b;  // Declaração da variável 'b' do tipo inteiro

//     a = 10; // Inicialização da variável 'a' com o valor 10

//     b = &a; // Atribuição do endereço de memória de 'a' à variável 'b'
//     // Aqui, o operador '&' é utilizado para capturar o endereço de memória da variável 'a'.
//     // Assim, 'b' armazenará o endereço de 'a', ou seja, o local na memória onde o valor de 'a' é armazenado.

//     // O conteúdo da variável 'b', que é o endereço de 'a', será exibido no console
//     printf("%d\n", b); // Usamos '%d' para exibir o valor de 'b', que é o endereço de 'a' em formato decimal.
//     // Note que o endereço de memória é um número que pode ser exibido em diferentes formatos, 
//     // como hexadecimal ou decimal. Aqui está sendo exibido como decimal.

//     // O endereço da variável 'b' será exibido em formato hexadecimal
//     printf("%p\n", &b); // Usamos '%p' para exibir o endereço de 'b' no console em formato hexadecimal.
//     // O operador '&' é utilizado novamente, mas desta vez para obter o endereço de memória da variável 'b' em si.
//     // Assim, será exibido o local na memória onde o valor de 'b' (que é o endereço de 'a') está armazenado.

//     return 0; // Retorno de 0 indica que o programa foi executado com sucesso
// }
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// #include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C

// int main() // Função principal onde a execução do programa começa
// {
//     int a = 10; // Declara uma variável do tipo inteiro 'a' e inicializa com o valor 10

//     int* c; // Declara um ponteiro 'c' que pode armazenar o endereço de uma variável do tipo inteiro

//     // Aqui, 'c' recebe o endereço de 'a'. Isso significa que 'c' agora aponta para a localização na memória onde 'a' está armazenada.
//     c = &a;

//     // O operador '*' é usado para acessar o valor da variável cujo endereço está armazenado no ponteiro 'c'.
//     // Assim, '(*c) = 20' significa que o valor na memória apontada por 'c' (que é o endereço de 'a') será atualizado para 20.
//     (*c) = 20;

//     // Exibe o valor da variável 'a'. Como 'c' apontava para 'a' e nós alteramos o valor apontado por 'c' para 20, 'a' agora contém 20.
//     cout << a << endl;

//     return (0); // Retorna 0 para indicar que o programa foi concluído com sucesso
// }
// .
// .
// .
// .
// .
// .
// .
// .
// .
// Alocação de memória dinâmica em C

// #include <stdlib.h> // Inclui a biblioteca padrão para funções de alocação de memória, conversão de números, controle de processos, etc.

// int main() // Função principal onde a execução do programa começa
// {
//     int *x; // Declara um ponteiro do tipo inteiro 'x', que será usado para apontar para a memória alocada dinamicamente

//     // A função malloc (memory allocation) aloca um bloco contínuo de memória de tamanho especificado.
//     // Aqui, sizeof(int) * 10000 calcula o tamanho necessário para armazenar 10.000 inteiros na memória.
//     // O retorno de malloc é um ponteiro para o início do bloco de memória alocado.
//     // O tipo de retorno da malloc é 'void *', o que significa que é um ponteiro genérico. Portanto, fazemos o casting (int *) para convertê-lo em um ponteiro para inteiro.
//     x = (int *) malloc(sizeof(int) * 10000);

//     // Verifica se a alocação de memória foi bem-sucedida. Se malloc retornar NULL, significa que não há memória suficiente disponível.
//     if (x == NULL) {
//         // Normalmente, você faria algo aqui como imprimir uma mensagem de erro ou encerrar o programa.
//         // Mas como isso é apenas um exemplo, não estamos fazendo nada.
//         return -1; // Retorna um valor negativo para indicar erro
//     }

//     // Acessa o elemento de índice 9876 da memória alocada e atribui o valor 1234 a ele.
//     // Como o espaço foi alocado dinamicamente, podemos acessar os elementos dessa maneira.
//     // x[9876] é equivalente a *(x + 9876), onde estamos usando aritmética de ponteiros para acessar o conteúdo da posição específica.
//     x[9876] = 1234;

//     // Normalmente, após o uso de malloc, você deve liberar a memória alocada usando a função free.
//     // Como estamos terminando o programa logo após este ponto, a memória será liberada automaticamente pelo sistema operacional,
//     // mas liberar explicitamente a memória é uma boa prática de programação.
//     free(x); // Libera a memória alocada para evitar vazamento de memória

//     return 0; // Retorna 0 para indicar que o programa foi concluído com sucesso
// }
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// Alocação de memória dinâmica usando calloc em C

// #include <stdlib.h> // Inclui a biblioteca padrão para funções de alocação de memória, conversão de números, controle de processos, etc.

// int main() // Função principal onde a execução do programa começa
// {
//     int *x; // Declara um ponteiro do tipo inteiro 'x', que será usado para apontar para a memória alocada dinamicamente

//     // A função calloc (contiguous allocation) é usada para alocar memória para um número específico de elementos de um determinado tamanho.
//     // Ela difere de malloc em dois aspectos principais:
//     // 1. calloc toma dois argumentos: o número de elementos (10000) e o tamanho de cada elemento (sizeof(int)).
//     // 2. calloc inicializa automaticamente toda a memória alocada com zero, o que não acontece com malloc.
//     x = (int *) calloc(10000, sizeof(int));

//     // Verifica se a alocação de memória foi bem-sucedida. Se calloc retornar NULL, significa que não há memória suficiente disponível.
//     if (x == NULL) {
//         // Normalmente, você faria algo aqui como imprimir uma mensagem de erro ou encerrar o programa.
//         // Mas como isso é apenas um exemplo, não estamos fazendo nada.
//         return -1; // Retorna um valor negativo para indicar erro
//     }

//     // Acessa o elemento de índice 9876 da memória alocada e atribui o valor 1234 a ele.
//     // Como o espaço foi alocado dinamicamente, podemos acessar os elementos dessa maneira.
//     // x[9876] é equivalente a *(x + 9876), onde estamos usando aritmética de ponteiros para acessar o conteúdo da posição específica.
//     x[9876] = 1234;

//     // Após o uso de calloc, é importante liberar a memória alocada para evitar vazamento de memória.
//     // Aqui, utilizamos a função free para liberar a memória alocada por x.
//     free(x); // Libera a memória alocada por 'x'

//     return 0; // Retorna 0 para indicar que o programa foi concluído com sucesso
// }




// Alocação de memória dinâmica usando calloc em C

#include <stdlib.h> // Inclui a biblioteca padrão para funções de alocação de memória, conversão de números, controle de processos, etc.

int main() // Função principal onde a execução do programa começa
{
    int *x; // Declara um ponteiro do tipo inteiro 'x', que será usado para apontar para a memória alocada dinamicamente

    // A função calloc (contiguous allocation) é usada para alocar memória para um número específico de elementos de um determinado tamanho.
    // Ela difere de malloc em dois aspectos principais:
    // 1. calloc toma dois argumentos: o número de elementos (10000) e o tamanho de cada elemento (sizeof(int)).
    // 2. calloc inicializa automaticamente toda a memória alocada com zero, o que não acontece com malloc.
    x = (int *) calloc(10000, sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida. Se calloc retornar NULL, significa que não há memória suficiente disponível.
    if (x == NULL) {
        // Normalmente, você faria algo aqui como imprimir uma mensagem de erro ou encerrar o programa.
        // Mas como isso é apenas um exemplo, não estamos fazendo nada.
        return -1; // Retorna um valor negativo para indicar erro
    }

    // Acessa o elemento de índice 9876 da memória alocada e atribui o valor 1234 a ele.
    // Como o espaço foi alocado dinamicamente, podemos acessar os elementos dessa maneira.
    // x[9876] é equivalente a *(x + 9876), onde estamos usando aritmética de ponteiros para acessar o conteúdo da posição específica.
    x[9876] = 1234;


    x = (int *) realloc((void *) x, 1000 * sizeof (int));
    // realloc é uma função que redimensiona a memória previamente alocada por malloc, calloc ou uma chamada anterior a realloc.
    // Aqui, estamos redimensionando o bloco de memória apontado por 'x'.

    // (void *) x: O ponteiro 'x' é convertido explicitamente para 'void *', que é o tipo genérico de ponteiro em C.
    // No entanto, essa conversão não é realmente necessária em C, porque 'realloc' aceita um ponteiro de qualquer tipo.
    // Essa conversão é usada por clareza ou em casos onde o compilador pode emitir um aviso.

    // 1000 * sizeof(int): Especifica o novo tamanho do bloco de memória.
    // O bloco de memória é redimensionado para conter 1000 elementos do tamanho de um 'int'.
    // Isso significa que a nova memória alocada terá capacidade para armazenar 1000 inteiros.

    // (int *): O resultado de realloc é convertido para um ponteiro do tipo 'int *'.
    // Isso é necessário porque realloc retorna um ponteiro do tipo 'void *', que precisa ser convertido para o tipo de dado apropriado.

    // A função realloc faz o seguinte:
    // 1. Se o novo tamanho (1000 * sizeof(int)) for maior que o tamanho anterior, realloc tenta expandir o bloco atual de memória.
    //    Se não for possível expandir no mesmo local, ele aloca um novo bloco de memória com o tamanho desejado, copia os dados
    //    do bloco antigo para o novo e libera a memória do bloco antigo.
    // 2. Se o novo tamanho for menor, o bloco de memória é reduzido.
    // 3. Se o ponteiro original (x) for NULL, realloc se comporta como malloc, alocando um novo bloco de memória do tamanho solicitado.
    // 4. Se realloc falhar em alocar a nova memória, ele retorna NULL, mas a memória original ainda permanece alocada.

    // Em resumo, essa linha redimensiona a memória apontada por 'x' para caber 1000 inteiros e ajusta o ponteiro 'x' para apontar
    // para o novo bloco de memória (que pode ou não estar no mesmo local que o bloco original).

    

    // Após o uso de realloc, é importante liberar a memória alocada para evitar
    // Após o uso de calloc, é importante liberar a memória alocada para evitar vazamento de memória.
    // Aqui, utilizamos a função free para liberar a memória alocada por x.
    free(x); // Libera a memória alocada por 'x'

    return 0; // Retorna 0 para indicar que o programa foi concluído com sucesso
}
