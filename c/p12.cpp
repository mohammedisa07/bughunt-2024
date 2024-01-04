//program to find the longest common subsequence (LCS) in two strings
//e.g. ABCDE and AFCZE have a common subsequence of ACE

#include <bits/stdc++.h>
using namespace std;

void LCS(string a, string b, int m, int n) {
  int dp[m + 1][n + 1];

  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0)
        dp[i][j] = 0;
      else if (a[i - 1] == b[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }

  cout << dp[m][n] << endl;     //length of LCS

  int index = dp[m][n];
  char lcs[index + 1];
  lcs[index] = '\0';

  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (a[i - 1] == b[j - 1]) {
      lcs[index - 1] = a[i - 1];
      i--;
      j--;
    }
    else if (dp[i - 1][j] > dp[i][j - 1]) i--;
    else j--;
    index--;
  }

  cout << "LCS: " << lcs << endl;
}

int main() {
  string a = "ABFCDE";
  string b = "AFCZE";
  int m = a.length();
  int n = b.length();

  LCS(a, b, m, n);
}
