/***
B. Primes

A prime number is a natural number greater than 1 and has exactly 2 divisors which are 1 and the number itself.

You are given a prime number n
, find any 2 prime numbers a
 and b
 such that a+b=n
 or state that no such pair of primes exists.

Input
The input contains a single prime number n
(2≤n≤107
).

Output
If there doesn't exist any 2 primes such that their summation is equal to n
 then print -1, otherwise print the 2 primes on a single line separated by a space.

Examples
Input
5
Output
2 3
Input
11
Output
-1

***/



#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==0 or n==1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i ==0) return false;
        }
        return true;
 }
 
int main(){
   int n;
   cin>>n;
   if(prime(n-2))cout<<"2 "<<n-2<<"\n";
   else cout<<"-1\n";
    return 0;
}