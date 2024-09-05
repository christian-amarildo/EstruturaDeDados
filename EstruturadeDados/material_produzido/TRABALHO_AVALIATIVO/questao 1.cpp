/*
Autores: Nome do Aluno 1: christian amarildo, Nome do Aluno 2: david galhego 

Atividade: Trabalho sobre listas, pilhas e filas (Vale 4 pontos)
Entrega: até o dia 19/9/2024 via SIGAA
Apenas um dos alunos deve enviar o trabalho pelo SIGAA.
Instruções: Colocar os nomes dos autores no início do código e enviar o link do trabalho no Replit abaixo de cada questão.
Observação: Trabalhos sem os nomes não serão considerados.

Questão 1 (Vale 2 pontos): 
Em uma danceteria, as pessoas que se aproximam da pista de dança devem formar pares o mais rápido possível. 
Os pares são formados sempre entre um Homem e uma Mulher, na ordem em que chegam.

Regras:
- Se vários homens ou várias mulheres chegarem em sequência, eles devem ser colocados em uma fila de espera.
- Cada vez que um par Homem-Mulher for possível, ele deve ser formado imediatamente.
- Se não houver pares disponíveis, o próximo a chegar espera na fila de "sobressalentes" até que alguém do sexo oposto chegue.

Exemplo:
Entrada:
Joana (M)
Francisco (H)
João (H)
Samuel (H)
Maria (M)
Davi (H)
Christiano (H)
Beatriz (M)

Saída esperada:
Par: Joana e Francisco
Par: Maria e João
Par: Beatriz e Samuel
Dois homens esperam para dançar

Questão 2 (Vale 2 pontos):
Em um banco, apenas um caixa atende uma longa fila de clientes. Os clientes que chegam são acomodados no final da fila, 
e o caixa só atende os clientes que possuem toda a documentação necessária.

Regras:
- A chance de um cliente não ter a documentação necessária é de 1 em 4.
- Caso um cliente não tenha a documentação completa, ele volta para o final da fila para tentar ser atendido novamente.
- Simule alguns minutos desse cenário, atendendo e reposicionando os clientes conforme necessário.

Exemplo de fluxo de clientes:
1. Cliente 1 chega, tem toda a documentação e é atendido.
2. Cliente 2 chega, não tem a documentação, volta para o fim da fila.
3. Cliente 3 chega, tem toda a documentação e é atendido.
4. Cliente 2 retorna ao início da fila e é atendido na segunda tentativa.

Observação:
Cada questão vale 2 pontos. Certifique-se de que as regras de formação de pares (Questão 1) e de simulação de atendimento no banco (Questão 2) 
estejam implementadas corretamente.

*/
