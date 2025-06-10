# Desafio: Nível Novato

## Comparando Cartas do Super Trunfo

Você já cadastrou as cartas com suas informações no desafio anterior (incluindo estado, nome, população, área, PIB, e pontos turísticos, além da densidade populacional e PIB per capita calculados). Agora, você irá implementar a lógica do jogo!

---

## O que você vai fazer

Implemente a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico (como população, área, PIB, etc.). Este desafio é uma continuação do desafio anterior, onde você desenvolveu o cadastro das cartas. O foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão `if` e `if-else`.

---

## Requisitos Funcionais

Seu programa em C deverá:

1. **Receber os dados de duas cartas:**  
  Utilize o código desenvolvido no desafio anterior para o cadastro das cartas. As cartas devem conter os seguintes atributos:
  - Estado (string)
  - Código da carta (string)
  - Nome da cidade (string)
  - População (int)
  - Área (float)
  - PIB (float)
  - Número de pontos turísticos (int)

2. **Calcular Densidade Populacional e PIB per capita:**  
  O programa deve calcular e exibir:
  - **Densidade Populacional:** População / Área
  - **PIB per capita:** PIB / População

3. **Comparar um atributo escolhido:**  
  Escolha apenas um dos atributos numéricos (População, Área, PIB, Densidade Populacional ou PIB per capita) para realizar a comparação entre as duas cartas.  
  > **Nota:** Essa escolha deve ser feita diretamente no código, não pela entrada do usuário.

4. **Determinar a carta vencedora:**
  - Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
  - Para Densidade Populacional, a carta com o menor valor vence.

5. **Exibir o resultado da comparação:**  
  O programa deve exibir, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado e os valores das duas cartas para aquele atributo.

  **Exemplo:**
  ```
  Comparação de cartas (Atributo: População):
  Carta 1 - São Paulo (SP): 12.300.000
  Carta 2 - Rio de Janeiro (RJ): 6.000.000
  Resultado: Carta 1 (São Paulo) venceu!
  ```

---

## Requisitos Não Funcionais

- **Usabilidade:** A saída do programa deve ser clara e fácil de entender.
- **Legibilidade:** O código deve ser bem organizado, com comentários explicando a lógica utilizada. Utilize nomes de variáveis descritivos.
- **Documentação:** Comente seu código, explicando o propósito de cada parte.

---

## Simplificações para o Nível Básico

- Compare apenas duas cartas pré-definidas no código.
- A escolha do atributo para comparação será feita diretamente no código (sem interação com o usuário).
- Não é necessário implementar menus interativos neste nível. Foque na lógica de comparação utilizando `if` e `if-else`.

# Instruções
Para compilar e rodar o projeto:
```bash
gcc superTrunfoLogica.c -o superTrunfoLogica
./superTrunfoLogica
```