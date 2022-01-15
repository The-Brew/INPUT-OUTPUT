// wap to Accept three numbers and display the remainder of the sum of that number with 2. //
 #include<bits/stdc++.h>
using namespace std;
 int main()
{
    int num1, num2, num3,Num, sum,rem;
    cout<<"\n enter num1 ::";
    cin>>num1;
    cout<<"\n enter num2 ::";
    cin>>num2;
    cout<<"\n enter num3 ::";
    cin>>num3;
    sum= num1+num2+num3;
    cout<< " sum of three num ::"<<sum;
    rem=2%sum;
    cout<<" remainder of the sum of three num ::"<<rem;
    return 0;


}