# Batalha Naval - em C

- Representa um tabuleiro do jogo de **Batalha Naval**, usando uma matriz 10x10.
- Posiciona dois navios, um na horizontal e outro na vertical, e exibe no terminal.

---

# Objetivo
- Criar e exibir um tabuleiro, de matriz 10x10
- Posiciona 4 navios:
    - um na horizontal e outro na vertical
    - e dois navios na diagonal
- Exibir o tabuleiro no terminal, com marcação dos navios, sinalizando as linhas e colunas

---

## Lógica do Jogo

- O tabuleiro é uma matriz de inteiros `tabuleiro[10][10]`, onde:
  - `0` representa água.
  - `3` representa partes dos navios.

- As linhas são rotuladas com **letras A – J**.
- As colunas são rotuladas com **números 1 – 10**.

---

## Saída
```plaintext
========== Batalha Naval ==========

   1 2 3 4 5 6 7 8 9 10 
A  3 0 0 0 0 0 0 0 0 3
B  0 3 0 0 0 0 0 0 3 0 
C  0 0 3 0 0 0 0 3 0 0 
D  0 0 0 0 0 0 0 0 0 0 
E  0 0 0 0 0 0 0 0 0 0 
F  0 0 0 0 0 0 0 0 0 0 
G  0 0 0 0 0 0 0 3 0 0 
H  0 3 3 3 0 0 0 3 0 0 
I  0 0 0 0 0 0 0 3 0 0 
J  0 0 0 0 0 0 0 0 0 0

Localização dos navios:
- Navio na horizontal: H2, H3, H4
- Navio na vertical: G8, H8, I9
- Navio na diagonal (esquerda para direita): A1, B2, C3
- Navio na diagonal (direita para esquerda): A10, B9, C8
```