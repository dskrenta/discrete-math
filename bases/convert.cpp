#include <iostream>
#include <string>
#include <stack>
using namespace std;

void convertDecimalToBinary (int num);
void convertDecimalToOctal (int num);
void convertDecimalToHexademical (int num);

int main () {
  int num = 2348;

  convertDecimalToBinary(num);
  cout << endl;
  convertDecimalToOctal(num);
  cout << endl;
  convertDecimalToHexademical(num);
  cout << endl;
}

void convertDecimalToBinary (int num) {
  int output;

  if (num <= 1) {
      cout << num;
      return;
  }

  output = num % 2;
  convertDecimalToBinary(num / 2);
  cout << output;
}

void convertDecimalToOctal (int num) {
  int output;

  if (num <= 1) {
    return;
  }

  output = num % 8;
  convertDecimalToOctal(num / 8);
  cout << output;
}

void convertDecimalToHexademical (int num) {
  int output;
  stack<string> hex;
  string hexChars[] = {"A", "B", "C", "D", "E", "F"};

  while (num >= 1) {
    string value;
    output = num % 16;

    if (output > 9) {
      value = hexChars[output - 10];
    } else {
      value = to_string(output);
    }

    hex.push(value);
    num = num / 16;
  }

  while (!hex.empty()) {
    cout << hex.top();
    hex.pop();
  }
}
