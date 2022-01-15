/* wap A shopkeeper offer 10 percent discount on the purchase. Accept the price and the 
quantity and display the amount payable. */
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int quantity,total;
     float price,amount;
     cout<<"\n enter quantity ::";
     cin>>quantity;
     cout<<"\n price in RS ::";
     cin>>price;
     amount=quantity*price;
     cout<<"\n total amount in RS::"<<amount;
     total= amount*10/100;
     cout<<"\n payable amount in RS  ::"<<total;
     return 0;
 }