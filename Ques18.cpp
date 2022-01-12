//wap to accept the marks of five subject and print the percentage.
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     float sub1,sub2,sub3,sub4,sub5,sum;
     float percentage ;

     cout<<"\n marks of sub1 ::";
     cin>>sub1;
     cout<<"\n marks of sub2 ::";
     cin>>sub2;
     cout<<"\n marks of sub3 ::";
     cin>>sub3;
     cout<<"\n marks of sub4 ::";
     cin>>sub4;
     cout<<"\n marks of sub5 ::";
     cin>>sub5;
     sum=sub1+sub2+sub3+sub4+sub5;
     percentage= (sum/500)*100;
     cout<<percentage<<endl;
     return 0;
 }