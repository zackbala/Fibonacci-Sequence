#include <iostream>

int main (int argc, char *argv[]) {
  int n;
  
  std::cout << "Digite quantos numeros de Fibonacci quer: ";
  std::cin >> n;

  int vetor[n-1];

  for (int i = 0; i <= n; i++) {
    if (i < 2) {
      vetor[i] = i;
      std::cout << "F" << i << ": " << vetor[i] << '\n';
    } else {
      vetor[i] = vetor[i-1] + vetor[i-2];
      std::cout << "F" << i << ": "<< vetor[i] << '\n';
    }
  }

  return 0;
}
