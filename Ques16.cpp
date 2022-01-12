// wap to read a number n and print n^2,n^3, n^4 and n^5. 
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
      int n;
      int sqrt, cube,quad,penta;

cout<<"\n enter number ::";
cin>>n;



sqrt= n*n;
cube= n*n*n;
quad= n*n*n*n;
penta= n*n*n*n*n;

cout<<sqrt<<endl;
cout<<cube<<endl;
cout<<quad<<endl;
cout<<penta<<endl;

return 0;
 }