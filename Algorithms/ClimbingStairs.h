class Solution {
public:
  int fibonacci(int k, int x, int y) {
    if (k == 0)
      return x;
    if (k == 1)
      return y;
    return fibonacci(k-1, y, x+y);
  }
  int climbStairs(int n) {
    return fibonacci(n, 1, 1);
  }
};
