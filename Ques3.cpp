//wap to convert the given number of seconds to hours and minutes//
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int sec, hr, min, s;
     cout<<"\n enter second:: ";
     cin>>sec;
     hr=sec/3600;
     min= sec/60;
     cout<<"\n hr"<<hr << "\n min"<<min;
     return 0;
     
 }