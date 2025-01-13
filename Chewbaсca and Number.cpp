/*
  Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input
The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.

Output
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Examples
Input
27
Output
22
Input
4545
Output
4444

Input
9984

Output
9014

Input
91730629

Output
91230320

  **/




#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    
    string ans = "";
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int y = ch-'0';
        int inverted = 9-y;
        ans += (min(y,inverted)+'0');
        
    }
    if(ans[0]=='0'){
        ans[0]='9';
    }
    cout<<ans<<"\n";

    return 0;
}
