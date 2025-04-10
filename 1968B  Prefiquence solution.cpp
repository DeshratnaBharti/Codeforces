/***
B. Prefiquence
time limit per test2 seconds
memory limit per test256 megabytes
You are given two binary strings a
 and b
. A binary string is a string consisting of the characters '0' and '1'.

Your task is to determine the maximum possible number k
 such that a prefix of string a
 of length k
 is a subsequence of string b
.

A sequence a
 is a subsequence of a sequence b
 if a
 can be obtained from b
 by the deletion of several (possibly, zero or all) elements.

Input
The first line consists of a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and m
 (1≤n,m≤2⋅105
) — the length of string a
 and the length of string b
, respectively.

The second line of each test case contains a binary string a
 of length n
.

The third line of each test case contains a binary string b
 of length m
.

It is guaranteed that the sum of values n
 over all test cases does not exceed 2⋅105
. Similarly, the sum of values m
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single number — the maximum k
, such that the first k
 characters of a
 form a subsequence of b
.***/


#include <bits/stdc++.h>
using namespace std;
  
  
void solve(){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int i=0,j=0;
    while(i<n and j<m){
        if(a[i]==b[j]){
            i++;
            j++;
        }else{
            j++;
        }
    }
    cout<<i<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}

}
