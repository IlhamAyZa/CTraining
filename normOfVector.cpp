#include <numeric>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long double vectorNorm(int first, int last) {
  return sqrt(inner_product(first, last, first, 0.0L));
}

int main() {
  int v[] = { 3, 4 };
  cout << "The length of the vector (3,4) is ";
  cout << vectorNorm(v, v + 2) << endl;
}