#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

int countWays(int n,vector<int>& mem){
    mem[0]=1;
    mem[1]=1;

    if(mem[n] != -1){
        return mem[n];
    }

    mem[n] = countWays(n-1,mem)+countWays(n-2,mem);

    return mem[n];

}

int dp(int n){

    vector<int>mem(n+1,-1);
    return countWays(n,mem);

}

int main(){
    int n;
    cin>>n;
    cout<<dp(n)<<endl;
}
