#include <iostream>
using namespace std;

int main(){

    int n,temp;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;

        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"Sorted Array is by INSERION SORT is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
