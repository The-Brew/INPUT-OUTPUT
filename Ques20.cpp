/* wap A boy throws a stone horizontally with a given speed and acceleration.
 Find the final velocity of the stone after time 5 SECOND. */
 #include<bits/stdc++.h>
using namespace std;
 int main()
 {
     float velocity, speed, acceleration,time;

     cout<<"\n enter initial speed in km/hr ::";
     cin>> speed;
     cout<<"\n enter initial acceleration in m/s ::";
     cin>> acceleration;
     time=5;
     velocity= (speed*5/18 + acceleration)*time; //here speed multiply by 5/18 for change in metere/second. //

     cout<<"\n final velocity :: "<<velocity;
     return 0;
      
     


     



 }
