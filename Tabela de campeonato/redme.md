Situação de Aprendizagem: Simulador de Campeonato de Futebol em C
Objetivo: Desenvolver um software em C que simule um campeonato de
futebol, utilizando matrizes e funções para armazenar e processar informações
sobre os times, seus placares e a classificação final.
Contexto:
Imagine que você é o desenvolvedor responsável por criar um sistema para
gerenciar um campeonato de futebol amador. O sistema deve permitir que os
usuários insiram os nomes dos times participantes, simulem os jogos e
apresentem os resultados, incluindo o vencedor, o perdedor e se houve
empate. Ao final de todas as partidas, o sistema deve gerar uma classificação
dos times com base em seus desempenhos.

Requisitos do Software:
1. Cadastro de Times:
o Utilize uma matriz de strings para armazenar os nomes dos times.
o Crie uma função para solicitar ao usuário que insira os nomes dos
times participantes.
2. Simulação de Partidas:
o Utilize uma matriz para armazenar os placares dos jogos (gols de
cada time).
o Crie uma função para simular uma partida, solicitando ao usuário
que insira o número de gols de cada time.
o A função deve determinar o vencedor, o perdedor e se houve
empate, atualizando a matriz de placares.

3. Classificação Final:

Crie uma função para calcular a classificação final dos times com
base nos placares.

A classificação deve considerar os seguintes critérios (em ordem de
prioridade):

 Maior número de vitórias

 Maior saldo de gols (gols marcados - gols sofridos)

 Maior número de gols marcados

o A função deve apresentar a classificação final em ordem
decrescente.

4. Estrutura do Programa:

 Utilize funções para modularizar o código e facilitar a leitura e
manutenção.

 Utilize comentários para explicar o funcionamento de cada
parte do código.

Exemplo de Uso:

1. O usuário inicia o programa.
2. O programa solicita o número de times participantes.
3. O usuário insere os nomes dos times.
4. O programa simula cada partida, solicitando o placar de cada jogo.
5. Ao final de todas as partidas, o programa apresenta a classificação final
dos times.
