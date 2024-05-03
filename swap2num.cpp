#include<iostream>
using namespace std;

void swap(int* moral,int* ethical)//fun to swap 2vari
{
    int value =*moral;
    *moral=*ethical;
    *ethical=value;
}


int main(){

int moral=22;
int ethical=10;
cout<<"before swapping:"<<endl;

cout<<"moral:"<<moral  <<"ethical:"<<ethical<<endl;

swap(&moral,&ethical);


cout<<"after swapping:"<<endl;
cout<<"moral:"<<moral  <<"ethical:"<<ethical<<endl;

return 0;

}
