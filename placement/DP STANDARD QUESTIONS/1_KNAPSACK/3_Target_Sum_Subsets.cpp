// Given an array of n integers (non-negative), and a target value tar, you need to check whether a subset of the array whose sum of elements is equal to the target tar exists or not.
// Please recall that a subset (or subsequence) of an array is taking zero or more elements from the array (in the same order in which they occur in the array).
// Here, you need to just print true or false whether such a target sum subset exists or not. You do not need to print the subset.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }
  int tar;
  cin >> tar;

  vector<vector<bool>> dp(n + 1, vector<bool>(tar + 1));
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= tar; j++) {
      if (i == 0 && j == 0) {
        dp[i][j] = true;
      } else if (i == 0) {
        dp[i][j] = false;
      } else if (j == 0) {
        dp[i][j] = true;
      } else {
        if (dp[i - 1][j] == true) {
          dp[i][j] = true;
        } else {
          int val = arr[i - 1];
          if (j >= val && dp[i - 1][j - val] == true) {
            dp[i][j] = true;
          }
        }
      }
    }
  }

  if (dp[n][tar] == 1) {
    cout << "true";
  } else cout << "false";

}
