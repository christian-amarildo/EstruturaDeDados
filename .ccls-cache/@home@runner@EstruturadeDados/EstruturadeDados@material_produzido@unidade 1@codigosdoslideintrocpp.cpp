// // História
// // C++ foi desenvolvido por Bjarne Stroustrup a partir de 1979 no Bell Labs em Murray Hill, Nova Jersey.
// // A linguagem foi inicialmente chamada de "C com Classes" e depois renomeada para C++ em 1983.
// // C++ é um aprimoramento da linguagem C, oferecendo suporte a programação orientada a objetos.

// // Especificações
// // C++ é uma linguagem de programação que pode ser executada em várias plataformas,
// // como Windows, Mac OS e diferentes versões do UNIX.
// // C++ é um superconjunto de C, o que significa que praticamente qualquer programa válido em C
// // é também um programa válido em C++.

// // C++ é uma linguagem compilada. Você pode usar um compilador online como o Godbolt (https://godbolt.org/).
// // A linguagem é sensível a maiúsculas e minúsculas, o que significa que "Hello" e "hello" são diferentes.
// // C++ oferece suporte a diferentes paradigmas de programação, incluindo programação processual, orientada a objetos e genérica.
// // É considerada uma linguagem de nível médio, pois combina características de linguagens de alto nível
// // (próximas à linguagem humana) com recursos de baixo nível (próximos ao código de máquina).

// // Exemplo de "Hello World!"
// // meu primeiro programa em C++

// // Incluímos a biblioteca de entrada e saída padrão em C++, que nos permite usar cin e cout.
// #include <iostream>

// // Usamos o namespace std para evitar digitar "std::" antes de cada uso de cout e cin.
// using namespace std;

// // A função main() é o ponto de entrada de qualquer programa em C++.
// // Todo programa C++ precisa ter uma função main, que será chamada quando o programa for executado.
// int main() {

//     // Imprime "Hello World!" na tela. 
//     // cout é o objeto de saída padrão em C++ que direciona a saída para o console.
//     // endl insere uma nova linha após a string.
//     cout << "Hello World!" << endl;

//     // Retorna 0, indicando que o programa terminou com sucesso.
//     // Isso informa ao sistema operacional que o programa foi executado corretamente.
//     return 0;
// }

// // Para compilar o programa, usamos o comando:
// // $ g++ hello.cpp
// // E para executá-lo, usamos:
// // $ ./a.out
// // Isso exibirá "Hello World!" no console.

// // Primeiros Passos
// // #include <iostream.h>
// // Este comando informa ao compilador que ele deve incluir o arquivo-cabeçalho iostream.h durante a linkedição.
// // O arquivo-cabeçalho contém declarações de funções e objetos que serão utilizados no programa.

// // Comentários
// // Comentários em C++ podem ser feitos de duas maneiras:
// // 1. Usando "//" para comentários de uma linha
// // 2. Usando "/* ... */" para comentários de múltiplas linhas

// // Exemplo de uso dos conceitos mencionados:

// // meu primeiro programa em C++
// // Este é um comentário de uma linha.
// #include <iostream>  // Inclui a biblioteca iostream.
// using namespace std;  // Usando o namespace std para facilitar o uso de cin e cout.

// /* Um Primeiro Programa */
// // Este é um comentário de múltiplas linhas.
// // Ele pode ser utilizado para descrever o funcionamento do programa ou para documentar código.

// int main() {
//     // cout << "Hello World!" << endl;
//     // Aqui, instruímos o computador a imprimir a string "Hello World!" na tela.

//     cout << "Hello World!" << endl;  // Exibe "Hello World!" no console.

//     return 0;  // Retorna 0, indicando que o programa terminou com sucesso.
// }

// // Entrada e Saída de Dados
// // Em Portugol, que é uma linguagem didática, usaríamos o comando:
// // Escreva("A média do aluno =", media);
// // Em C++, o equivalente seria:

// // cout é usado para enviar dados para a saída padrão, que geralmente é o console.
// cout << "A média do aluno = " << media;

// // cin é usado para receber dados da entrada padrão, que geralmente é o teclado.
// cin >> n1;  // O valor digitado pelo usuário será armazenado na variável n1.

// // Palavras Reservadas
// // Em C++, algumas palavras não podem ser usadas como nomes de variáveis ou funções,
// // pois têm significado especial na linguagem. Estas são chamadas de palavras reservadas.

// // Exemplos de palavras reservadas: 
// // and, or, bool, char, class, int, float, double, if, else, while, for, return, void, public, private, protected, etc.

// // Variáveis e tipos de dados
// // Em C++, variáveis precisam ser declaradas com um tipo específico. 
// // Existem diferentes tipos de dados, cada um com modificadores que afetam seu comportamento.

// // Exemplos de tipos de dados e seus modificadores:

// // Tipo lógico: bool - Armazena valores booleanos (true ou false).
// bool flag = true;  // Declara uma variável booleana chamada 'flag' e a inicializa com o valor true.

// // Tipo inteiro: int - Pode ser modificado por unsigned, short, ou long.
// int numero = 10;  // Declara uma variável inteira chamada 'numero' e a inicializa com o valor 10.

// // Tipo real: float, double - Pode ser modificado por long.
// float altura = 1.75f;  // Declara uma variável float chamada 'altura' e a inicializa com 1.75.

// // Tipo caractere: char - Armazena um único caractere.
// char letra = 'A';  // Declara uma variável char chamada 'letra' e a inicializa com 'A'.

// // Tipo vazio: void - Usado para funções que não retornam um valor.
// void funcaoExemplo() {
//     // Esta função não retorna nada, apenas executa instruções.
// }

// // Conclusão
// // Este código exemplifica os conceitos básicos de C++, como a história, especificações, 
// // comentários, entrada e saída de dados, palavras reservadas, variáveis e tipos de dados.
