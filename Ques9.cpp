/* wap to accept the height in centimeter and 
then convert it into feet and inches.[1 foot=12inches, 1 inches= 2.54cm] */

#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     float cm, foot, inches;
     cout<<"\n enter height in cm::";
     cin>>cm;
     inches= cm/2.54;
     foot= inches/12;
     cout<<"\n my height feet::"<<foot;
     cout<<"\n my heigth inch::"<<inches;
     return 0;
 }