/***
E. Eating Queries
time limit per test3.5 seconds
memory limit per test256 megabytes
Timur has n
 candies. The i
-th candy has a quantity of sugar equal to ai
. So, by eating the i
-th candy, Timur consumes a quantity of sugar equal to ai
.

Timur will ask you q
 queries regarding his candies. For the j
-th query you have to answer what is the minimum number of candies he needs to eat in order to reach a quantity of sugar greater than or equal to xj
 or print -1 if it's not possible to obtain such a quantity. In other words, you should print the minimum possible k
 such that after eating k
 candies, Timur consumes a quantity of sugar of at least xj
 or say that no possible k
 exists.

Note that he can't eat the same candy twice and queries are independent of each other (Timur can use the same candy in different queries).

Input
The first line of input contains a single integer t
 (1≤t≤1000
)  — the number of test cases. The description of test cases follows.

The first line contains 2
 integers n
 and q
 (1≤n,q≤1.5⋅105
) — the number of candies Timur has and the number of queries you have to print an answer for respectively.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤104
) — the quantity of sugar in each of the candies respectively.

Then q
 lines follow.

Each of the next q
 lines contains a single integer xj
 (1≤xj≤2⋅109
) – the quantity Timur wants to reach for the given query.

It is guaranteed that the sum of n
 and the sum of q
 over all test cases do not exceed 1.5⋅105
.

Output
For each test case output q
 lines. For the j
-th line output the number of candies Timur needs to eat in order to reach a quantity of sugar greater than or equal to xj
 or print -1 if it's not possible to obtain such a quantity.

Example
InputCopy
3
8 7
4 3 3 1 1 4 5 9
1
10
50
14
15
22
30
4 1
1 2 3 4
3
1 2
5
4
6
OutputCopy
1
2
-1
2
3
4
8
1
1
-1
Note
For the first test case:

For the first query, Timur can eat any candy, and he will reach the desired quantity.

For the second query, Timur can reach a quantity of at least 10
 by eating the 7
-th and the 8
-th candies, thus consuming a quantity of sugar equal to 14
.

For the third query, there is no possible answer.

For the fourth query, Timur can reach a quantity of at least 14
 by eating the 7
-th and the 8
-th candies, thus consuming a quantity of sugar equal to 14
.

For the second test case:

For the only query of the second test case, we can choose the third candy from which Timur receives exactly 3
 sugar. It's also possible to obtain the same answer by choosing the fourth candy.


***/

#include <bits/stdc++.h>
using namespace std;

int lb(vector<long long> &arr, int target) {
    return lower_bound(arr.begin(), arr.end(), target) - arr.begin();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());

        // Prefix sum array
        for (int i = 1; i < n; i++) {
            arr[i] += arr[i - 1];
        }

        while (q--) {
            int x;
            cin >> x;
            int res = lb(arr, x) + 1;
            if (res > n) {
                cout << "-1\n";
            } else {
                cout << res << "\n";
            }
        }
    }
    
    return 0;
}
