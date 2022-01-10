//wap to input a student marks obtained out of 300 and also find a percentage marks//
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     float marks,percent;
     
     cout<<"\n enter the marks::";
     cin>>marks;
     percent= (marks/300)*100;
     cout<<"\n percentage marks"<< "  "<<percent;
     return 0;

 }