#include<iostream>
using namespace std;
int main()
{
int stack[5];
int top = -1;

//Input cancelled orders
cout<<"Enter 5 cancelled orders: "<<endl;
for(int i=-0; i<5; i++) 
{
top++;
cin>>stack[top];
}
// display cancelled orders starting  from the most recent cancelled order
cout<<"\ncancelled orders(Moat recent first): "<<endl;
while(top >=0)
{
cout<<stack[top]<<endl;
top--;
}
return 0;
}
