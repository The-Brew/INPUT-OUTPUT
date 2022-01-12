//wap to print the sum of all numbers till a values specifire by the user. [n[n+1]]/2
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int num, sum;
     cout<<"\n enter number ::";
     cin>>num;

     sum= num* (num+1)/2;
    
     cout<< sum <<endl;
     return 0;  
 }