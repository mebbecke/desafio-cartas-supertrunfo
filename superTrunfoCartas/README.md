# Desafio: Nível Novato

## Criando as Cartas do Super Trunfo

Neste primeiro nível, seu objetivo é construir a base do nosso jogo **Super Trunfo de Países**: um sistema para cadastrar as cartas com informações sobre as cidades. Você vai praticar a leitura de dados do usuário, o armazenamento em variáveis e a exibição dessas informações na tela.

---

## O que você vai fazer

Criar um programa em C que permita ao usuário inserir os dados de **duas cartas do Super Trunfo**. Para cada carta, o usuário deverá fornecer as seguintes informações:

- **Estado**: Uma letra de 'A' a 'H' (representando um dos oito estados).  
  **Tipo**: `char`

- **Código da Carta**: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).  
  **Tipo**: `char[]` (um array de caracteres, ou string)

- **Nome da Cidade**: O nome da cidade.  
  **Tipo**: `char[]` (string)

- **População**: O número de habitantes da cidade.  
  **Tipo**: `int`

- **Área (em km²)**: A área da cidade em quilômetros quadrados.  
  **Tipo**: `float`

- **PIB**: O Produto Interno Bruto da cidade.  
  **Tipo**: `float`

- **Número de Pontos Turísticos**: A quantidade de pontos turísticos na cidade.  
  **Tipo**: `int`

---

## Exemplo de Saída

Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:

```plaintext
Carta 1:
- Estado: A
- Código: A01
- Nome da Cidade: São Paulo
- População: 12325000
- Área: 1521.11 km²
- PIB: 699.28 bilhões de reais
- Número de Pontos Turísticos: 50

Carta 2:
- Estado: B
- Código: B02
- Nome da Cidade: Rio de Janeiro
- População: 6748000
- Área: 1200.25 km²
- PIB: 300.50 bilhões de reais
- Número de Pontos Turísticos: 30
```

---

## Requisitos Funcionais

1. O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
2. O programa deve armazenar os dados lidos em variáveis apropriadas.
3. O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

---

## Requisitos Não Funcionais

- **Usabilidade**: O programa deve ser fácil de usar, com instruções claras para o usuário.
- **Legibilidade**: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
- **Corretude**: O programa deve funcionar corretamente, sem erros de compilação ou execução.

---

## Simplificações para o Desafio

- Você só precisa implementar o cadastro e a exibição de **duas cartas**.
- Neste nível, foque apenas na leitura, armazenamento e exibição das informações. Você **não precisa implementar** nenhuma lógica de comparação entre as cartas ou qualquer outro recurso adicional.
- **Não utilize estruturas de repetição** (como `for` ou `while`) ou estruturas de decisão (como `if` ou `else`). Seu código deve ser uma sequência simples de instruções.

# Desafio: Nível Aventureiro
## Calculando Densidade Populacional e PIB per Capita

No nível básico, você criou um sistema para cadastrar as cartas do Super Trunfo. Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo! Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

---

## O que você vai fazer

Aprimore o programa em C que você criou no nível básico. O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, seu programa também deve:

1. **Calcular a Densidade Populacional**:  
  Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo `float`.

2. **Calcular o PIB per Capita**:  
  Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo `float`.

3. **Exibir os Resultados**:  
  Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

---

## Exemplo de Saída

```plaintext
Carta 1:
- Estado: A
- Código: A01
- Nome da Cidade: São Paulo
- População: 12325000
- Área: 1521.11 km²
- PIB: 699.28 bilhões de reais
- Número de Pontos Turísticos: 50
- Densidade Populacional: 8102.47 hab/km²
- PIB per Capita: 56724.32 reais

Carta 2:
- Estado: B
- Código: B02
- Nome da Cidade: Rio de Janeiro
- População: 6748000
- Área: 1200.25 km²
- PIB: 300.50 bilhões de reais
- Número de Pontos Turísticos: 30
- Densidade Populacional: 5622.24 hab/km²
- PIB per Capita: 44532.91 reais
```

---

## Requisitos Funcionais

1. Manter as funcionalidades do nível básico (leitura e exibição dos dados das cartas).
2. Calcular e exibir corretamente a densidade populacional e o PIB per capita para cada cidade.

---

## Requisitos Não Funcionais

- **Usabilidade**: O programa deve ser fácil de usar, com instruções claras para o usuário.
- **Legibilidade**: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
- **Corretude**: O programa deve funcionar corretamente, sem erros de compilação ou execução.
- **Eficiência**: O programa deve realizar os cálculos de forma eficiente.

---

## Simplificações para o Nível Intermediário

- Você ainda só precisa lidar com **duas cartas**.
- Continue sem usar estruturas de repetição (`for`, `while`) ou estruturas de decisão (`if`, `else`).

# Instruções
Para compilar e rodar o projeto:
```bash
gcc superTrunfoCartas.c -o superTrunfoCartas
./superTrunfoCartas
```