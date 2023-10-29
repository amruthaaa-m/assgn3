#include <stdio.h>
void fibo_series(int n);

int main() {
  int inp;
  scanf("%d", &inp);
  fibo_series(inp);

  return 0;
}
void fibo_series(int n) {
  int s1 = 1, s2 = 0, s3;
  printf("%d ", s2);
  for (int i = 0; i <= n; i++) {
    s3 = s2 + s1;
    s1 = s2;
    s2 = s3;
    printf("%d ", s3);
  }
}