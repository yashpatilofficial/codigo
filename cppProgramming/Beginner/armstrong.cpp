#include<iostream> // input output services
using namespace std; 
int main()
{
	cout<<"enter the number"<<endl; //printing instructions
	int num,rem,temp,sum=0; // initialising required var
	cin>>num; // taking input of num
	temp=num;
	while(num>0) //logic for Armstrong
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(sum==temp)
	{
		cout<<"armstrong number"<<endl;
	}
	else
	{
		cout<<"not an armstrong number" <<endl;
	}

}


