// wap to convert the temp from centigrade to fahrenheit. C/5=[F-32]/9. //

#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     float temp, centi, fahren; // variable declred//

     cout<<"\n enter temp in centigrade ::";
     cin>>centi;
     fahren= (centi*9.0)/5.0+32; //formula centi to fahren//

     cout <<"\n the temp in centi"<<"  "<<centi;
     cout<<"\n the temp in fahren"<<"  "<<fahren; 

     return 0;

 }