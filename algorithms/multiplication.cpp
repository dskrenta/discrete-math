#include <iostream>
#include <math.h>
using namespace std;

int multiply1(double num1, double num2);
int multiply2(int num1, int num2);
int multiply3(int num1, int num2);

int * splitNum(int num);
int getNumLength(int num);

int main() {
  int num1 = 4321;
  int num2 = 2345;

  cout << multiply1(num1, num2) << endl;
  cout << multiply2(num1, num2) << endl;
  cout << multiply3(num1, num2) << endl;
}

// Multiplication through division of reciprocal
int multiply1(double num1, double num2) {
  return num1 / (1 / num2);
}

// Compiler multiplication
int multiply2(int num1, int num2) {
  return num1 * num2;
}

// Long multiplication
int multiply3(int num1, int num2) {
  int result = 0;
  int digits[4];
  int num = num2;
  int index = 0;

  while (num > 0) {
    int digit = num % 10;
    num /= 10;
    digits[index] = digit;
    index++;
  }

  for(int i = 0; i < 4; i++) {
    result += num1 * (digits[i] * pow(10, i));
  }

  return result;
}
