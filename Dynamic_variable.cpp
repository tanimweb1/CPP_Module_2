//static and dynamic variable

#include<bits/stdc++.h>
using namespace std;
// int *p;
// void fun(){

//     int x = 10;
//     p = &x;
//     cout<<"fun"<<" "<<*p<<endl;
// return;

int *p;
void fun(){

    int *x = new int;
    *x = 10;
    p = x;
    cout<<"Fun >-"<< " "<<*p<<endl;
return;


}





int main(){

fun();
cout<<"main - "<<" "<<*p<<endl;

return 0;
 }