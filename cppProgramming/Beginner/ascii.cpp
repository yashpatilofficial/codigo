 //C++ Program to find ascii value of a value
#include<iostream> //files for input output
using namespace std;
int main()
{
    cout<<"enter the char"; // intructions for user
    char ch;
    cin>>ch;// taking input
    int a=(int)ch;//function to convert to ascii val
    cout<<"the ascii value of " << ch << "is " << a<<endl;
}
