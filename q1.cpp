//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include <iostream>

using namespace std;

int count(int arr[],int n){
//we will count the number of odd elements and subtract it from n which will give even elements
    int count_odd=0;
    int count_even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count_odd++;}
    }
    count_even=n-count_odd;
    cout<<"Odd Numbers="<<count_odd<<endl<<"Even Numbers="<<count_even;

}
int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    count(array,size);
}