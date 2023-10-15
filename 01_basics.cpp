#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// fibonacii Number
int solveRec(int n){
    if(n<=1)return n;
    return solveRec(n-1)+solveRec(n-2);
}
int solveMem(int n,vector<int>&dp){
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=solveMem(n-1,dp)+solveMem(n-1,dp);
}
int solveTab(int n){
    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int solveSO(int n){
    int prev2=0;
    int prev1=1;
    for(int i=2;i<=n;i++){
        int curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);


}