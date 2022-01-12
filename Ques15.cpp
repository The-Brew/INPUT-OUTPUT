/* wap to calculate simple interest & compound interest
 on given amount, rate and time. */
 #include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int amount, rate,time, SI;
     cout<<"\n enter amount ::";
     cin>>amount;
     cout<<"\n enter rate ::";
     cin>>rate;
     cout<<"\n enter time ::";
     cin>>time;
     SI= (amount*rate*time)/100;
     cout<<SI <<endl;

     return 0;

 }