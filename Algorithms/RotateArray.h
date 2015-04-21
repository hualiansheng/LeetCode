class Solution {
public:
  int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
  }
  void rotate(int nums[], int n, int k) {
    k %= n;
    int d = gcd(n, k);
    for (int i = 0; i < d; ++i) {
      int j = (i + n - k) % n;
      int tmp = nums[j];
      while (j != i) {
        int prevIdx = (j + n - k) % n;
        nums[j] = nums[prevIdx];
        j = prevIdx;
      }
      nums[j] = tmp;
    }
  }
};
