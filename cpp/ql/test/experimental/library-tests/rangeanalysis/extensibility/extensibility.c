/// Adds its arguments (has custom modeling in QL)
int custom_add_function(int a, int b);

int test_extensibility_add(int x) {
  if (x >= -10 && x <= 10) {
    int result = custom_add_function(x, 100);
    return result; // 90 .. 110
  }
}

int test_overridability_sub(int x) {
  int result = x - x; // Returns 0 due to custom modeling in QL
  return result; // 0
}