class Solution {
public:
  inline bool match(char c1, char c2) {
    if (c1 == '(' && c2 == ')')
      return true;
    if (c1 == '{' && c2 == '}')
      return true;
    if (c1 == '[' && c2 == ']')
      return true;
    return false;
  }
  bool isValid(string s) {
    stack<char> parens;
    for (const auto c : s) {
      if (c == '(' || c == '{' || c == '[')
        parens.push(c);
      else {
        if (parens.empty() || !match(parens.top(), c))
          return false;
        parens.pop();
      }
    }
    return parens.empty();
  }
};
