class Solution {
public:
  string intToRoman(int num) {
    char digits[4] = {'I', 'X', 'C', 'M'};
    char fives[3] = {'V', 'L', 'D'};
    string romanNumerals = "";
    for (int i = 0; num > 0 && i < 4; ++i, num /= 10) {
      int k = num % 10;
      switch (k) {
      case 1:
      case 2:
      case 3:
        romanNumerals = string(k, digits[i]) + romanNumerals;
        break;
      case 4:
        romanNumerals = digits[i] + (fives[i] + romanNumerals);
        break;
      case 5:
      case 6:
      case 7:
      case 8:
        romanNumerals = fives[i] + string(k-5, digits[i]) + romanNumerals;
        break;
      case 9:
        romanNumerals = digits[i] + (digits[i+1] + romanNumerals);
        break;
      default:
        break;
      }
    }
    return romanNumerals;
  }
};
