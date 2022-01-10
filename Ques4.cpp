/*wap to find area of a triangle on a given base lenght and height.also calculate area of circle 
on a given diameter*/
#include<bits/stdc++.h> // header file//
using namespace std;
int main() // main fun//
{
    float base, height,radius,pi=3.14;// taking variables//
    float ar_tri, ar_circle; 

    cout<<"\n enter base lenght::"; // base of triangle//
    cin>>base;
    cout<<"\n enter base height::";// height of triangle//
    cin>>height;
ar_tri= (base*height)/2;  //formula of area of triangle//
cout<<"\n ar of tri"<< "  " <<ar_tri;
cout<<"\n enter the radius :: ";
cin>>radius;
ar_circle= 3.14*radius*radius; //formula of area of circle//
cout<<"\n area of circle is ::"<< "  " <<ar_circle;

 return 0;

}