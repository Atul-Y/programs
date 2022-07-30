// Problem Discussion :
// You are given an array of n numbers, which represents n different types of denominations of arr. You are given a target 'amt', you need to count the number of combinations of the arr possible that sum up to the given target amount, i.e. in how many ways you can pay 'amt' using the available denominations.

// Note 1: You can consider that you are having infinite supply of each coin denomination i.e. the same coin denomination can be used for many installments in payment of "amt".

// Note 2: You are required to find the count of combinations and not permutations. For eg, 2 + 2 + 3 = 7 and 2 + 3 + 2 = 7 and 3 + 2 + 2 = 7 are different permutations of the same combination. You should treat them as 1 and not 3.

#include <bits/stdc++.h>
using namespace std;

int main(){        // the anser is coming wrong but logic is correct so try to solve code with aditya verma code
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int amount;
    cin>>amount;

    int dp[amount+1];
    dp[0]=1;

    for(int i=0;i<n;i++){
        for(int j=arr[i];j<=amount;j++){
            dp[j]=dp[j]+arr[j-arr[i]];

        }
    }

    cout<<dp[amount];
    return 0; 
}


                        
                        
                        

                        
                        
                        