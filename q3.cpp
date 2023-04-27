/*Q3 - Given an integer array and its size, reverse the array and print it. Here 1<size<101
For ex: arr[]={1,2,3,4,5} n=5
output: 5,4,3,2,1
arr[]={1,1,1,1,1] n=5
Output: 1,1,1,1,1*/

#include <iostream>

using namespace std;
void reverse(int array[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;}
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    reverse(array,size);
    
}
