#include <stdio.h>
#include <math.h>

int primo(long long int num);

int main(void) {
  printf("Primo? %i\n", primo(83));
  return 0;
}

int primo(long long int num) {
  long long int raizNum = sqrt(num);

  if (num == 2) {
    return 1;
  }
  
  if (num % 2 == 0) {
    return 0;
  }
  
  for (int i = 3; i <= raizNum; i+=2) {
    int resto = num % i;
    int flag = 0;
    if (resto == 0) {
      flag++;
      return 0;
    }
    if (!flag) {
      return 1;
    }
  }

  return 0;
}