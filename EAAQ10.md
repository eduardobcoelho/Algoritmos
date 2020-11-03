Algoritmo A(a,n):
    Entrada dois inteiros, a e n
    Saída: ?
k ← n --> 1
b ← 1 --> 1
c ← a --> 1
enquanto (k > 0) faça --> 1n
  se (k % 2 == 0) então --> 2n  
    k ← k / 2 --> 2n
    c ← c * c --> 2n
  else 
   k ← k -1 --> 1n
   b ← b * c --> 1n
   { icremento de K } 2n
retorne b --> 1

11n + 4 --> O(n)