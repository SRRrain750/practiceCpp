#include<stdio.h>//calculate ci
#include<math.h>//for using pow fun we must
#include<iostream>
using namespace std;


int main(){

double principle=25000;
double rate=12;
double time=5;

double A=principle*((pow((1+rate/100),time)));
double CI=A-principle;
cout<<"compound interest is:%1f"<<CI<<endl;


return 0;
}
