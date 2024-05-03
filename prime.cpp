#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Prime(int n){

if(n<=1){
    cout<<false;
}
for(int i=2; i<=n/2; i++)
    if(n%i==0){
    cout<<false;
}


}


int main(){

Prime(11);
 cout<<"true\n";cout<<"false\n";
Prime(12);
  cout<<"true\n";cout<<"false\n";


return 0;



}
