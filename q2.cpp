/*Given an integer array and its size, find the sum of the greatest and the smallest integer present in the
array. Here 1< size <101
For ex: arr[]={1,2,3,4,5} n=5
Output: 6
Explanation: The smallest number in the array is 1 and the greatest numbers in the array is 5, so the sum
will be 1+5=6*/


#include <iostream>

using namespace std;

int sum(int array[],int n){
    int max=1,min=1;
    int sum=0;
    for (int i=1;i<=n;i++){
        if(array[i]>max){
            max=array[i];
        }else if(array[i]<min){
            min=array[i];
        }   
    }
    cout<<"element with max value in array="<<max<<endl;
    cout<<"element with min value in array="<<min<<endl;
    sum=max+min;
    cout<<sum;

}
int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    sum(array,size);
}

