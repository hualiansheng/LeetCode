class Solution {
public:
  bool isPalindrome(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (auto left = s.begin(), right = prev(s.end()); left < right; ++left, --right) {
      while (left < right && !isalnum(*left))
        left++;
      if (left >= right)
        break;
      while (!isalnum(*right))
        right--;
      if (*left != *right)
        return false;
    }
    return true;
  }
};
