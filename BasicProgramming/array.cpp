#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int array[5]={1,2,3,4,5};
    // cout<<array[0]<<endl;
    // int problem[5]={0};
    // cout<<problem[0]<<endl;
    // cout<<problem[1]<<endl;
    // cout<<problem[2]<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<problem[i]<<endl;
    // }
    // int array1[5]={1};
    // cout<<array1[0]<<endl;
    // cout<<array1[1]<<endl;
    // cout<<array1[2]<<endl;
    // cout<<array1[3]<<endl;
    // cout<<array1[4]<<endl;
    int arr[4]={4,12,8,10};
    int k=0;
    for(int i=0;i<4;i++){
        
        if(arr[i]>k){
            k=arr[i];
        }
    }
    cout<<k<<endl;
}