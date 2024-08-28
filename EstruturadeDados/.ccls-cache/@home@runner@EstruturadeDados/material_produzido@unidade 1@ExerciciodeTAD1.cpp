// #include <iostream> // Inclui a biblioteca que permite a entrada e saída de dados (input/output) como std::cout e std::cin
// #include <string> // Inclui a biblioteca que permite o uso da classe std::string, que representa cadeias de caracteres (strings)

// // Estrutura que define um contato na agenda
// // "struct" define um tipo de dado composto, chamado "Contato", que pode
// // armazenar vários tipos de dados juntos.

// // Uma struct em C++ é uma maneira de agrupar diferentes tipos de dados sob um
// // único nome, formando um novo tipo de dado composto. No exemplo struct
// // Contato, você define uma estrutura chamada Contato que contém três membros:
// // nome, endereco e numero, todos do tipo std::string.

// // Uso Básico: struct permite criar variáveis que armazenam múltiplos dados
// // relacionados. Por exemplo, você pode criar uma variável do tipo Contato para
// // armazenar as informações de uma pessoa.

// // Diferença com class: Em uma struct, os membros são públicos por padrão, ou
// // seja, podem ser acessados diretamente fora da struct. Em uma class, os
// // membros são privados por padrão, protegendo os dados internos.

// // Relacionamento com TAD: struct pode ser usada para implementar um Tipo
// // Abstrato de Dados (TAD) simples, que é uma abstração que define como um tipo
// // de dado deve se comportar, incluindo suas operações.

// // Em resumo, struct é uma ferramenta útil para organizar e manipular dados
// // relacionados de forma estruturada.
// struct Contato {
//   std::string
//       nome; // Campo "nome" do tipo std::string para armazenar o nome do contato
//   std::string endereco; // Campo "endereco" do tipo std::string para armazenar o
//                         // endereço do contato
//   std::string numero;   // Campo "numero" do tipo std::string para armazenar o
//                         // número de telefone do contato
// };

// // Função para inicializar um contato
// // "void" indica que a função não retorna nenhum valor
// // "inicializarContato" é o nome da função
// // "Contato &contato" é um parâmetro passado por referência para que as
// // modificações feitas dentro da função afetem a variável original "const
// // std::string &nome", "const std::string &endereco", "const std::string
// // &numero" são parâmetros constantes passados por referência para evitar cópias
// // desnecessárias e proteger os dados contra modificações

// // A função inicializarContato serve para atribuir valores aos campos de um
// // objeto do tipo Contato.

// // 1. O que é void?
// // Definição: void é um tipo de retorno que indica que a função não retorna
// // nenhum valor. Função void: Quando uma função é declarada como void, significa
// // que ela realiza uma operação, mas não devolve nenhum valor ao chamador da
// // função. Essa função apenas executa as instruções dentro de seu bloco de
// // código.
// // 2. Função inicializarContato
// // Essa função tem como objetivo inicializar (ou definir) os valores dos campos
// // de uma estrutura Contato. Vamos analisar a sintaxe:

// // 3. Parâmetros da Função
// // Contato &contato:

// // O símbolo & indica que contato é passado por referência. Isso significa que a
// // função não trabalha com uma cópia do Contato, mas sim com o próprio objeto
// // original. Qualquer alteração feita dentro da função reflete no objeto
// // original fora da função. const std::string &nome, const std::string
// // &endereco, const std::string &numero:

// // const: Indica que o valor passado não será alterado pela função. Isso é uma
// // forma de proteger os dados de entrada.
// // &: Novamente, passagem por referência, mas como os parâmetros são const, eles
// // são protegidos contra alterações. Usar referência também melhora a
// // eficiência, evitando cópias desnecessárias. std::string: É o tipo dos
// // parâmetros que representam cadeias de caracteres (strings).
// // 4. Bloco de Código da Função
// // Dentro da função, cada campo do objeto contato é inicializado com os valores
// // passados como parâmetros:

// // contato.nome = nome;: Atribui o valor do parâmetro nome ao campo nome do
// // objeto contato. contato.endereco = endereco;: Atribui o valor do parâmetro
// // endereco ao campo endereco do objeto contato. contato.numero = numero;:
// // Atribui o valor do parâmetro numero ao campo numero do objeto contato.

// void inicializarContato(Contato &contato, const std::string &nome,
//                         const std::string &endereco,
//                         const std::string &numero) {
//   contato.nome = nome; // Atribui o valor do parâmetro "nome" ao campo "nome" da
//                        // estrutura "contato"
//   contato.endereco = endereco; // Atribui o valor do parâmetro "endereco" ao
//                                // campo "endereco" da estrutura "contato"
//   contato.numero = numero; // Atribui o valor do parâmetro "numero" ao campo
//                            // "numero" da estrutura "contato"
// }

// // Função para imprimir os dados de um contato
// // "const Contato &contato" indica que o parâmetro é passado por referência, e o
// // "const" assegura que a função não vai modificar o valor de "contato"
// void imprimirContato(const Contato &contato) {
//   std::cout
//       << "Nome: " << contato.nome
//       << "\n"; // Imprime o campo "nome" do contato seguido de uma nova linha
//   std::cout << "Endereço: " << contato.endereco
//             << "\n"; // Imprime o campo "endereco" do contato seguido de uma
//                      // nova linha
//   std::cout
//       << "Número: " << contato.numero
//       << "\n"; // Imprime o campo "numero" do contato seguido de uma nova linha
// }

// // Função para alterar o nome de um contato
// // "Contato &contato" é passado por referência para que as alterações feitas
// // dentro da função afetem a variável original "const std::string &novoNome" é o
// // novo nome que será atribuído ao campo "nome" do contato, passado como
// // referência constante
// void alterarNome(Contato &contato, const std::string &novoNome) {
//   contato.nome = novoNome; // Atribui o valor do parâmetro "novoNome" ao campo
//                            // "nome" da estrutura "contato"
// }

// // Função para alterar o número de um contato
// // "Contato &contato" é passado por referência para modificar a variável
// // original "const std::string &novoNumero" é o novo número que será atribuído
// // ao campo "numero" do contato, passado como referência constante
// void alterarNumero(Contato &contato, const std::string &novoNumero) {
//   contato.numero = novoNumero; // Atribui o valor do parâmetro "novoNumero" ao
//                                // campo "numero" da estrutura "contato"
// }

// // Função para buscar um contato pelo nome
// // "bool" indica que a função retorna um valor booleano (verdadeiro ou falso)
// // "const Contato contatos[]" é um array constante de contatos que será
// // pesquisado "int tamanho" é o tamanho do array de contatos "const std::string
// // &nome" é o nome a ser pesquisado, passado por referência constante "Contato
// // &resultado" é uma referência onde o contato encontrado será armazenado
// bool buscarPorNome(const Contato contatos[], int tamanho,
//                    const std::string &nome, Contato &resultado) {
//   for (int i = 0; i < tamanho;
//        i++) { // Loop que percorre o array de contatos de 0 até "tamanho - 1"
//     if (contatos[i].nome ==
//         nome) { // Se o nome do contato atual for igual ao nome procurado
//       resultado =
//           contatos[i]; // Armazena o contato encontrado na variável "resultado"
//       return true; // Retorna "true" para indicar que o contato foi encontrado
//     }
//   }
//   return false; // Se o loop terminar e o contato não for encontrado, retorna
//                 // "false"
// }

// int main() {
//   // Criação de alguns contatos para teste
//   // "Contato agenda[3]" cria um array de 3 elementos do tipo "Contato"
//   Contato agenda[3];

//   // Inicializa os 3 contatos do array "agenda" com os valores fornecidos
//   inicializarContato(agenda[0], "João", "Rua A, 123", "1111-1111");
//   inicializarContato(agenda[1], "Maria", "Rua B, 456", "2222-2222");
//   inicializarContato(agenda[2], "José", "Rua C, 789", "3333-3333");

//   // Imprime todos os contatos na agenda
//   std::cout << "Contatos na agenda:\n"; // Mensagem inicial
//   for (int i = 0; i < 3; i++) {         // Loop para percorrer os 3 contatos
//     imprimirContato(
//         agenda[i]); // Chama a função "imprimirContato" para o contato atual
//     std::cout << "-------------------\n"; // Linha separadora entre os contatos
//   }

//   // Alterar o nome de um contato
//   alterarNome(agenda[1], "Ana Maria"); // Altera o nome do segundo contato de
//                                        // "Maria" para "Ana Maria"
//   std::cout << "\nDepois de alterar o nome:\n"; // Mensagem informativa
//   imprimirContato(agenda[1]); // Imprime o contato com o nome alterado

//   // Alterar o número de um contato
//   alterarNumero(agenda[0], "9999-9999"); // Altera o número do primeiro contato
//                                          // de "1111-1111" para "9999-9999"
//   std::cout << "\nDepois de alterar o número:\n"; // Mensagem informativa
//   imprimirContato(agenda[0]); // Imprime o contato com o número alterado

//   // Buscar contato pelo nome
//   Contato resultado; // Declaração de uma variável para armazenar o resultado da
//                      // busca
//   std::string nomeBusca = "José"; // Nome a ser pesquisado
//   if (buscarPorNome(agenda, 3, nomeBusca,
//                     resultado)) {           // Se a busca for bem-sucedida
//     std::cout << "\nContato encontrado:\n"; // Mensagem informativa
//     imprimirContato(resultado);             // Imprime o contato encontrado
//   } else { // Se a busca não encontrar o contato
//     std::cout << "\nContato com o nome " << nomeBusca
//               << " não encontrado.\n"; // Mensagem de erro
//   }

//   return 0; // Retorno de 0 indica que o programa terminou com sucesso
// }
