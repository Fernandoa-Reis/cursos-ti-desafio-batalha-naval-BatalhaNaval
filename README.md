Batalha Naval - Nível Novato (Tabuleiro 10x10)
##############################################
Este documento detalha a implementação do nível novato do jogo Batalha Naval com um tabuleiro 10x10 em linguagem C.

Visão Geral
O programa implementa a lógica básica de posicionamento de navios em um tabuleiro 10x10:

Dois navios são posicionados: um horizontal e um vertical

Cada navio ocupa 3 posições consecutivas

As coordenadas são definidas diretamente no código

O programa exibe as coordenadas dos navios e o tabuleiro completo

Explicação do Código
1. Inicialização do Tabuleiro
Cria uma matriz 10x10
Inicializa todas as posições com 0 (representando água)

2. Definição das Coordenadas
Navio horizontal começa na posição (2,3)
Navio vertical começa na posição (4,5)
Cada navio ocupa 3 posições consecutivas

3. Validações
Garante que os navios estejam dentro dos limites do tabuleiro
Verifica se os navios não se sobrepõem

4. Posicionamento dos Navios
Atribui o valor 3 às posições ocupadas pelos navios
Navio horizontal: mesma linha, colunas consecutivas
Navio vertical: mesma coluna, linhas consecutivas

5. Exibição das Coordenadas
Lista as coordenadas de cada parte do navio horizontal
Lista as coordenadas de cada parte do navio vertical

6. Exibição do Tabuleiro
Exibe a matriz 10x10 formatada
Mostra 0 para água e 3 para posições com navios

###Saída Esperada###
Coordenadas do Navio Horizontal:
(2, 3) (2, 4) (2, 5) 

Coordenadas do Navio Vertical:
(4, 5) (5, 5) (6, 5) 

Tabuleiro de Batalha Naval:
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 3 3 3 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 3 0 0 0 0 
0 0 0 0 0 3 0 0 0 0 
0 0 0 0 0 3 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 




###Validações Implementadas###
Verificação de limites do tabuleiro para ambos os navios
Detecção de sobreposição entre navios
Mensagens de erro específicas para cada tipo de problema

