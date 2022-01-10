//wap to convert the given number of days into years and months//
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int days, months, years, weeks;
     cout<<"enter days:: \n";
     cin>>days;

     years = (days / 365);
    weeks = days / 7;
    
    months= days /30;
    
     cout<<"\n days"<<days;

     cout<<"\n months"<<months;

     cout<<"\n years"<<years;

     cout<<"\n weeks"<<weeks;

return 0;
 }