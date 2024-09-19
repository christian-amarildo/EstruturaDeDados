// #include <iostream> // Inclui a biblioteca padrão de entrada e saída
// #include <string>   // Inclui a biblioteca de manipulação de strings

// using namespace std; // Permite usar elementos do namespace std sem precisar de
//                      // std:: antes de cada um

// const int MAX_TAMANHO = 100; // Define o tamanho máximo da pilha como 100

// // Estrutura que define uma pilha
// struct Pilha {
//   int topo;                   // Índice do topo da pilha
//   int elementos[MAX_TAMANHO]; // Array que armazena os elementos da pilha
// };

// // Inicializa a pilha, configurando o topo como -1 (significa que a pilha está
// // vazia)
// void inicializarPilha(Pilha &pilha) { pilha.topo = -1; }

// // Verifica se a pilha está vazia
// bool pilhaVazia(const Pilha &pilha) {
//   return pilha.topo == -1; // Se o topo é -1, a pilha está vazia
// }

// // Verifica se a pilha está cheia
// bool pilhaCheia(const Pilha &pilha) {
//   return pilha.topo ==
//          MAX_TAMANHO - 1; // Se o topo é MAX_TAMANHO - 1, a pilha está cheia
// }

// // Adiciona um elemento no topo da pilha
// void empilhar(Pilha &pilha, int elemento) {
//   if (pilhaCheia(pilha)) {    // Se a pilha está cheia
//     cout << "Pilha cheia!\n"; // Exibe uma mensagem de erro
//     return;                   // Retorna sem adicionar o elemento
//   }
//   pilha.topo++;                           // Incrementa o topo
//   pilha.elementos[pilha.topo] = elemento; // Adiciona o elemento no topo
// }

// // Remove e retorna o elemento do topo da pilha
// int desempilhar(Pilha &pilha) {
//   if (pilhaVazia(pilha)) {    // Se a pilha está vazia
//     cout << "Pilha vazia!\n"; // Exibe uma mensagem de erro
//     return -1;                // Retorna -1 como sinal de erro
//   }
//   int elemento = pilha.elementos[pilha.topo]; // Obtém o elemento do topo
//   pilha.topo--;                               // Decrementa o topo
//   return elemento;                            // Retorna o elemento removido
// }

// // Imprime todos os elementos da pilha em ordem LIFO (Last In, First Out)
// void imprimirPilha(const Pilha &pilha) {
//   if (pilhaVazia(pilha)) {    // Se a pilha está vazia
//     cout << "Pilha vazia!\n"; // Exibe uma mensagem de erro
//     return;                   // Retorna sem imprimir nada
//   }
//   cout << "Elementos da pilha (LIFO): ";  // Mensagem inicial
//   for (int i = pilha.topo; i >= 0; i--) { // Itera do topo até o fundo da pilha
//     cout << pilha.elementos[i] << " ";    // Imprime cada elemento
//   }
//   cout << endl; // Nova linha após imprimir todos os elementos
// }

// // Função para inverter as letras de cada palavra na string
// string inverterPalavras(const string &texto) {
//   string resultado = "";   // String para armazenar o resultado final
//   Pilha pilha;             // Cria uma instância da pilha
//   inicializarPilha(pilha); // Inicializa a pilha

//   for (int i = 0; i < texto.length();
//        i++) {              // Itera sobre cada caractere da string
//     if (texto[i] == ' ') { // Se o caractere é um espaço (separador de palavras)
//       // Inverte a palavra na pilha
//       while (!pilhaVazia(pilha)) {       // Enquanto a pilha não estiver vazia
//         resultado += desempilhar(pilha); // Remove os elementos da pilha e
//                                          // adiciona à string resultado
//       }
//       resultado += ' '; // Adiciona um espaço ao resultado
//     } else {
//       empilhar(pilha, texto[i]); // Empilha o caractere se não for um espaço
//     }
//   }
//   // Inverte a última palavra
//   while (!pilhaVazia(pilha)) { // Remove os elementos restantes da pilha e
//                                // adiciona à string resultado
//     resultado += desempilhar(pilha);
//   }
//   return resultado; // Retorna a string com as palavras invertidas
// }

// // Função para converter um número decimal para binário usando pilha
// string decimalParaBinario(int numero) {
//   string resultado = "";   // String para armazenar o resultado final
//   Pilha pilha;             // Cria uma instância da pilha
//   inicializarPilha(pilha); // Inicializa a pilha

//   if (numero == 0) { // Caso especial: se o número for zero
//     return "0";      // Retorna "0"
//   }

//   while (numero > 0) {      // Enquanto o número for maior que zero
//     int resto = numero % 2; // Obtém o resto da divisão por 2 (0 ou 1)
//     empilhar(pilha, resto); // Empilha o resto
//     numero /= 2;            // Divide o número por 2
//   }

//   while (!pilhaVazia(
//       pilha)) { // Remove os elementos da pilha e adiciona à string resultado
//     resultado += to_string(desempilhar(pilha));
//   }

//   return resultado; // Retorna a string com a representação binária
// }

// int main() {

//   // Teste da pilha
//   Pilha pilha;             // Cria uma instância da pilha
//   inicializarPilha(pilha); // Inicializa a pilha

//   empilhar(pilha, 10);  // Adiciona 10 à pilha
//   empilhar(pilha, 20);  // Adiciona 20 à pilha
//   empilhar(pilha, 30);  // Adiciona 30 à pilha
//   imprimirPilha(pilha); // Imprime os elementos da pilha

//   cout << "Desempilhando: " << desempilhar(pilha)
//        << endl;         // Remove e exibe o topo da pilha
//   imprimirPilha(pilha); // Imprime os elementos restantes da pilha

//   // Inversão de palavras
//   string texto = "esse exercicio e muito facio";   // String de teste
//   string textoInvertido = inverterPalavras(texto); // Inverte as palavras
//   cout << "Texto original: " << texto << endl;     // Exibe o texto original
//   cout << "Texto com palavras invertidas: " << textoInvertido
//        << endl; // Exibe o texto com palavras invertidas

//   // Conversão decimal para binário
//   int numeroDecimal; // Variável para armazenar o número decimal
//   cout << "Digite um número inteiro maior que zero: "; // Solicita um número ao
//                                                        // usuário
//   cin >> numeroDecimal;                                // Lê o número

//   string binario =
//       decimalParaBinario(numeroDecimal); // Converte o número para binário
//   cout << numeroDecimal << " em binário: " << binario
//        << endl; // Exibe o resultado

//   return 0; // Termina o programa com sucesso
// }




// //possiveis perguntas no codigo:
// // porque eu preciso definir uma tamanho maximo da pilha?

// //   Você precisa definir um tamanho máximo para a pilha porque é uma limitação fundamental de como as pilhas funcionam na memória do computador. Aqui está uma explicação detalhada:

// //   1. Memória da Pilha: Um Recurso Limitado

// //   Tamanho Fixo: As pilhas são normalmente implementadas usando uma parte fixa da memória do seu programa. Esse tamanho fixo é definido quando o seu programa inicia.
// //   Espaço Contíguo: A pilha precisa alocar blocos de memória contíguos (sem interrupções). Isso ocorre porque ela usa uma estrutura LIFO (Last-In, First-Out), o que significa que os dados são adicionados e removidos do topo.
// //   2. Consequências do Overflow

// //   Overflow da Pilha: Se você tentar colocar mais dados na pilha do que o seu tamanho alocado permite, você encontrará um overflow da pilha. Este é um erro grave que pode fazer com que o seu programa trave.
// //   Comportamento Inesperado: O overflow da pilha pode levar a um comportamento imprevisível do programa porque a pilha pode sobrescrever outros dados importantes na memória.
// //   3. Tamanho Máximo como uma Rede de Segurança

// //   Prevenção de Erros: Definir um MAX_TAMANHO (tamanho máximo) para a sua pilha é uma forma de proteger o seu programa de overflows da pilha. Isso garante que você tenha um limite claro sobre quantos dados você pode colocar na pilha.
// //   Gerenciamento de Recursos: Isso ajuda no gerenciamento de recursos, impedindo que seu programa consuma mais memória do que o necessário.
// //   No seu código:

// //   A constante MAX_TAMANHO define um limite para o número de elementos que seu array elementos pode conter, o que representa a capacidade da pilha.
// //   A função pilhaCheia() verifica se a pilha está cheia antes de empilhar um elemento para evitar overflow.
// //   Avise-me se você gostaria de mais detalhes ou um exemplo de código para ilustrar como o erro de overflow da pilha pode ocorrer!




// porque pilha em struct pilha o nome pilha tem que ter o p maiusculo?

// Em C++, o nome da estrutura Pilha não precisa ter a primeira letra maiúscula. Você pode usar Pilha, pilha ou pilha (com qualquer combinação de maiúsculas e minúsculas) para o nome da sua estrutura.

// No entanto, é uma convenção comum em C++ usar a primeira letra maiúscula para nomes de estruturas. Isso ajuda a distinguir estruturas de variáveis e funções.

// Por exemplo, é comum escrever:

// struct Pessoa { 
//   string nome;
//   int idade; 
// };
// Em vez de:

// struct pessoa { 
//   string nome;
//   int idade; 
// };
// A escolha de como nomear sua estrutura é sua. A convenção de maiúsculas serve para melhorar a legibilidade e organização do código.

// Importante: O compilador C++ não se importa com a capitalização do nome da estrutura. O que importa é que o nome seja consistente e que você use a mesma capitalização ao se referir à estrutura em seu código.




  
//   1. O que é um Array?

//   Coleção Ordenada: Um array é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo (por exemplo, int, float, char, string, etc.) em sequência.
//   Índice: Cada elemento no array tem um índice, que é um número inteiro que identifica sua posição na sequência. O índice começa em 0 para o primeiro elemento e aumenta em 1 para cada elemento subsequente.
//   Acesso Direto: Você pode acessar qualquer elemento do array diretamente pelo seu índice.
//   2. Sintaxe do Array na Estrutura Pilha

//   struct Pilha {
//     int topo;                   // Índice do topo da pilha
//     int elementos[MAX_TAMANHO]; // Array que armazena os elementos da pilha
//   };
//   int elementos[MAX_TAMANHO] declara um array chamado elementos dentro da estrutura Pilha.
//   int: Define o tipo de dados que o array armazenará, nesse caso, números inteiros (int).
//   elementos: É o nome do array.
//   [MAX_TAMANHO]: Define o tamanho do array, ou seja, quantos elementos ele pode armazenar. MAX_TAMANHO é uma constante que você definiu em seu código (provavelmente 100).
//   3. Como funciona o array elementos na Pilha

//   Armazenando Elementos: O array elementos é usado para armazenar os elementos que você coloca na pilha. Imagine que MAX_TAMANHO é 5.
//   Índice do Topo: A variável topo indica o índice do elemento no topo da pilha. Se a pilha estiver vazia, topo será -1.
//   Empilhando: Quando você empilha um elemento, você incrementa topo e armazena o novo elemento no índice topo do array elementos.
//   Desempilhando: Quando você desempilha um elemento, você pega o elemento no índice topo do array elementos, decrementa topo, e retorna o elemento.
//   Exemplo:

//   #include <iostream>
//   const int MAX_TAMANHO = 5;
//   struct Pilha {
//     int topo;
//     int elementos[MAX_TAMANHO];
//   };
//   int main() {
//     Pilha pilha;
//     pilha.topo = -1; // Inicializando a pilha vazia
//     // Empilhando elementos
//     pilha.topo++;
//     pilha.elementos[pilha.topo] = 10;
//     pilha.topo++;
//     pilha.elementos[pilha.topo] = 20;
//     // Acessando elementos
//     std::cout << "Elemento no topo: " << pilha.elementos[pilha.topo] << std::endl; 
//     return 0;
//   }
//   Neste exemplo, o array elementos armazena os números 10 e 20, e o índice topo indica o elemento no topo (que é 20).

//   Lembre-se: o array elementos é um componente essencial para a implementação de uma pilha, fornecendo um local fixo para armazenar os elementos da pilha, enquanto a variável topo gerencia a posição do topo da pilha.

    
    
    
    
//     porque o inicio da pilha vazia é -1?

//     O índice topo é inicializado com o valor -1 em uma pilha vazia para indicar que não há elementos na pilha. Esse valor tem um significado especial e traz várias vantagens na gestão da pilha:

//     Indicador de Vazio: Um valor de -1 para o topo significa que a pilha está vazia, ou seja, ainda não foi adicionado nenhum elemento. Isso facilita a verificação de condições de pilha vazia durante as operações de pilha, como ao tentar desempilhar.

//     Controle de Acesso: Como o índice de um array em C++ começa em 0, um topo com valor -1 indica que não há posição válida na pilha para acessar ou remover um elemento, evitando erros de acesso indevido ao array.

//     Facilidade de Operação: Ao adicionar o primeiro elemento à pilha, o topo é incrementado para 0, que é a posição inicial do array. Isso permite um controle direto sobre a posição dos elementos no array sem a necessidade de ajustar o índice.

//     Portanto, iniciar o topo em -1 é uma prática comum que facilita o gerenciamento da pilha e torna o código mais seguro e fácil de entender.