#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements you want:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=1;
    int j=0;
    while(i<n){
        if(arr[i]==arr[j]){
            i++;
        }
        if(arr[i]!=arr[j]){
            arr[j+1]=arr[i];
            j++;
            i++;
        }
    }
    cout<<"the number of unique elements are:"<<j+1<<"and the elemenrts are";
    for(int i=0;i<=j;i++){
        cout<<arr[i];
    }
}