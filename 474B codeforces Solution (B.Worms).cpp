/***
B. Worms
time limit per test1 second
memory limit per test256 megabytes
It is lunch time for Mole. His friend, Marmot, prepared him a nice game for lunch.

Marmot brought Mole n ordered piles of worms such that i-th pile contains ai worms. He labeled all these worms with consecutive integers: worms in first pile are labeled with numbers 1 to a1, worms in second pile are labeled with numbers a1 + 1 to a1 + a2 and so on. See the example for a better understanding.

Mole can't eat all the worms (Marmot brought a lot) and, as we all know, Mole is blind, so Marmot tells him the labels of the best juicy worms. Marmot will only give Mole a worm if Mole says correctly in which pile this worm is contained.

Poor Mole asks for your help. For all juicy worms said by Marmot, tell Mole the correct answers.

Input
The first line contains a single integer n (1 ≤ n ≤ 105), the number of piles.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 103, a1 + a2 + ... + an ≤ 106), where ai is the number of worms in the i-th pile.

The third line contains single integer m (1 ≤ m ≤ 105), the number of juicy worms said by Marmot.

The fourth line contains m integers q1, q2, ..., qm (1 ≤ qi ≤ a1 + a2 + ... + an), the labels of the juicy worms.

Output
Print m lines to the standard output. The i-th line should contain an integer, representing the number of the pile where the worm labeled with the number qi is.

Examples
InputCopy
5
2 7 3 4 9
3
1 25 11
OutputCopy
1
5
3
Note
For the sample input:

The worms with labels from [1, 2] are in the first pile.
The worms with labels from [3, 9] are in the second pile.
The worms with labels from [10, 12] are in the third pile.
The worms with labels from [13, 16] are in the fourth pile.
The worms with labels from [17, 25] are in the fifth pile.
***/

#include <bits/stdc++.h>
using namespace std;

int lb(vector<int> &arr, int target) {
    return lower_bound(arr.begin(), arr.end(), target) - arr.begin();
}

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    
   for(int i=1;i<n;i++){
       arr[i] += arr[i-1];
   }
   int q;
   cin>>q;
   while(q--){
         int x;
         cin >> x;
         int res = lb(arr, x) + 1;
         cout<<res<<"\n";
   }

}
