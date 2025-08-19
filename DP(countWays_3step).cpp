#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

int countWays_3step(int n,vector<int>& mem){
    mem[0]=1;
    mem[1]=1;
    mem[2]=2;

    if(mem[n] != -1){
        return mem[n];
    }

    mem[n] = countWays_3step(n-1,mem)+countWays_3step(n-2,mem)+countWays_3step(n-3,mem);

    return mem[n];

}

int dp(int n){

    vector<int>mem(n+1,-1);
    return countWays_3step(n,mem);

}

int main(){
    int n;
    cin>>n;
    cout<<dp(n)<<endl;
}
