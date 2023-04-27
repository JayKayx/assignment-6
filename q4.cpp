/*  Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. Here 1<size<101
For ex: a[]={5,6,10,4,9}
b[]={1,2,3,4,5}
Output: 5
Explanation: The numbers are 4 from a and 1 from b which makes sum 1+4=5  */

#include <iostream>

using namespace std;
int max(int array[],int n){
    int max=0;
    for (int i=1;i<=n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}
int main(){
    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int sum=0;
    int size=sizeof(a)/sizeof(a[0]);
    int maxsum=max(a,size)+max(b,size);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            sum=a[i]+b[j];
            if (i==j){
                continue;
            }else if(sum<maxsum){
                maxsum=sum;
            }

        }
    }cout<<maxsum;


}
