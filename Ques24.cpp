//wap to Accept two number and interchange their values. //
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int  num1, num2, value;
     cout<<"\n before interchange ::";

     cout<< "\n first num::";
     cin>>num1;
     
     cout<<"\n second num::";
      cin>>num2;

      value=num1;
      num1=num2;
      num2= value;

      cout<<"\n after interchange ::";

      cout<< "\nfirst num ::"<<num1;
      cout<<"\n second num ::"<<num2;

      return 0;


     
 }