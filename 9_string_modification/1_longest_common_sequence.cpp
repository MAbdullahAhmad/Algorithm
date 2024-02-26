// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

/**
 * @param str1 first string
 * @param str2 second string
 * @param m size of first string
 * @param n size of second string
 * 
 * @returns length of Longest common sequence
*/
int lcs(string str1, string str2, int m, int n){
  int L[m + 1][n + 1]; // we create a matrix
  int i, j;
  
  for (i = 0; i <= m; i++) {
    for (j = 0; j <= n; j++) {
      cout << i << ", " << j << '\n';

      if (i == 0 || j == 0)
        L[i][j] = 0;

      // if char matched, add 1 to matrix
      else if (str1.at(i - 1) == str2.at(j - 1))
        L[i][j] = L[i - 1][j - 1] + 1;

      // if does not matches, (what does this do)
      else
        L[i][j] = max(L[i - 1][j], L[i][j - 1]);
    }
  }

  return L[m][n];
}

int lcs2(string s1, string s2, int l1, int l2){
  int m[l1+1][l2+1];
  int i, j;

  for(i=0; i<=l1; i++){
    for(j=0; j<=l2; j++){
      if (i==0 || j==0)
        m[i][j] = 0;

      else if(s1.at(i-1) == s2.at(j-1))
        m[i][j] = m[i-1][j-1] + 1;

      else
        m[i][j] = max(m[i-1][j], m[i][j-1]);
    }
  }

  return m[l1][l2];
}

int lcs3(string s1, string s2, int i, int j){
  cout << i << ", " << j << '\n';
  if(i==0 || j==0)
    return 0;

  if(dp[i][j] != -1)
    return dp[i][j];

  if(s1[i-1] == s2[j-1])
    return dp[i][j] = 1 + lcs3(s1, s2, i-1, j-1);

  else
    return dp[i][j] = max(
      lcs3(s1, s2, i, j-1),
      lcs3(s1, s2, i - 1, j)
    );
}

void printMinDelAndInsert(string str1, string str2){

  int m = str1.size();
  int n = str2.size();

  dp[m][n];
  memset(dp, -1, sizeof(dp));

  int len = lcs3(str1, str2, m, n);

  cout << "Minimum number of deletions = " << (m - len) << '\n';
  cout << "Minimum number of insertions = " << (n - len) << '\n';
}

int main(){
  string str1 = "heap";
  string str2 = "pea";
  
  printMinDelAndInsert(str1, str2);

  return 0;
}