/*wap to calculate the no of dresses one can meke  from a given lenght 
of cloth.if each dress take 5 meter of cloth*/

#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int lenght, dresses;
     cout<<"\n enter lenght of cloth::";
     cin>> lenght;
     /*5 meter of cloth means
     500 cm,
      so 500/50= 10 no of cloth*lenght of given cloth */
dresses= lenght*10;
cout<<"\n no of dress::"<<dresses;
return 0;
 }