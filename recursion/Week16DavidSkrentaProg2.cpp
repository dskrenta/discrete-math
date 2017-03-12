#include <iostream>
using namespace std;

void myFunction(int x);

int main() {
  myFunction(10);
}

void myFunction(int x) {
  while(x != 0) {
    cout << x << endl;
    x--;
  }
}
