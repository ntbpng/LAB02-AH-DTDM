#include <stdio.h>

// Hàm kiểm tra số nguyên có 2 chữ số hay không
int isTwoDigit(int num) {
  return (num >= 10 && num <= 99);
}

// Hàm in ra các số nguyên có 2 chữ số là bội của 7
void printTwoDigitMultiplesOf7() {
  for (int i = 10; i <= 99; i++) {
    if (i % 7 == 0) {
      printf("%d ", i);
    }
  }
}

int main() {
  printf("Các số nguyên có 2 chữ số là bội của 7: ");
  printTwoDigitMultiplesOf7();
  return 0;
}