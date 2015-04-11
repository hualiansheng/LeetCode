class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    if (strs.empty())
      return "";
    int maxCommonLen = strs[0].length();
    for (int i = 1; i < strs.size(); ++i) {
      for (int j = 0; j < maxCommonLen; ++j) {
        if (strs[0][j] != strs[i][j]) {
          maxCommonLen = j;
          break;
        }
      }
    }
    return strs[0].substr(0, maxCommonLen);
  }
};
