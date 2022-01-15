// wap to read  two number and print their quotient and reminder. //
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int dividend, divisor, quotient, reminder;
     cout<<"\n enter dividend ::";
     cin>>dividend;
     cout<<"\n enter divisor ::";
     cin>>divisor;
     quotient= dividend/divisor;
     reminder= dividend%divisor;
     cout<< "\n ::"<<quotient;
     cout<<"\n ::"<<reminder;
     return 0;
 }