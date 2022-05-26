    #include <bits/stdc++.h>
    using namespace std;
    long int UnboundedKnapsack(long int Capacity,long int n, long int weight[],long int val[]){
        long int dp[Capacity+1];
        for(int i=0;i < W+1;i++){
            dp[i]=0;                            
        }
        for(int i=0;i < W+1;i++){
            for(int j=0;j < n;j++){
                if(weight[j] < i){
                    dp[i] = max(dp[i], dp[i-weight[j]] + val[j]);   
                }
            }
        }
        return dp[Capacity];
    }
    int main(){
        //  The no. of items : 
        long int n = 4;
        //  Weights of all the items : 
        long int weight[4] = {5 , 10, 8, 15};
        //  Enter values of all the items : 
        long int val[4] = {40, 30, 50, 25};
        // Enter the knapsack capacity : 
        long int Capacity = 120;
        cout << "The maximum value you can achieve in Unbounded Knapsack is: " << UnboundedKnapsack(W,n,wt,val);
        return 0;
    }
