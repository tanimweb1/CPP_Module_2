#include<bits/stdc++.h>
using namespace std;
int *p;
void fun(){

   int*x= new int;
   *x=10;
p = x;
cout<<"Fun function er p er adress "<<*p<<endl;
return;
}


int main(){
fun();
cout<<"Main function er p er adress "<<*p<<endl;
}