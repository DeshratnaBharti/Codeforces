/***
A. Amr and Music

Amr is a young coder who likes music a lot. He always wanted to learn how to play music but he was busy coding so he got an idea.

Amr has n instruments, it takes ai days to learn i-th instrument. Being busy, Amr dedicated k days to learn how to play the maximum possible number of instruments.

Amr asked for your help to distribute his free days between instruments so that he can achieve his goal.

Input
The first line contains two numbers n, k (1 ≤ n ≤ 100, 0 ≤ k ≤ 10 000), the number of instruments and number of days respectively.

The second line contains n integers ai (1 ≤ ai ≤ 100), representing number of days required to learn the i-th instrument.

Output
In the first line output one integer m representing the maximum number of instruments Amr can learn.

In the second line output m space-separated integers: the indices of instruments to be learnt. You may output indices in any order.

if there are multiple optimal solutions output any. It is not necessary to use all days for studying.

Examples
InputCopy
4 10
4 3 1 2
OutputCopy
4
1 2 3 4
InputCopy
5 6
4 3 1 1 2
OutputCopy
3
1 3 4
InputCopy
1 3
4
OutputCopy
0
Note
In the first test Amr can learn all 4 instruments.

In the second test other possible solutions are: {2, 3, 5} or {3, 4, 5}.

In the third test Amr doesn't have enough time to learn the only presented instrument.

**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i+1});
    }
    
    sort(v.begin(),v.end());
    int res =0;
    vector<int>indices;
    
    for(int i=0;i<n;i++){
        if(v[i].first<=k){
            indices.push_back(v[i].second);
            k-=v[i].first;
        }
        else{
            break;
        }
    }
    cout<<indices.size()<<"\n";
    for(int i=0;i<indices.size();i++){
        cout<<indices[i]<<" ";
    }
    return 0;
        

}
