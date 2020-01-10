#include "gcd.h"

using std::cin;

int main() {
  int a, b;
  cin >>  a >>  b;

  GCD<int> Obj(a, b);
  Obj.gcd();

  GCD<int> Obj2(a, b);
  Obj2.gcd_rec();
    return 0;
}
