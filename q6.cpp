/*Given an integer array containing n elements. Find the element in the array for which all the elements
to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.
Ex: arr=[1,6,5,7,10,8,9]
Output: 7
Explanation: Here all the elements to the left of 7 are smaller than it and all the elements to the right of it
are greater than it.
*/
#include <iostream>
using namespace std;

int findElement(int arr[], int n) {
    int leftMax = arr[0];
    int rightMin[n];
    rightMin[n-1] = arr[n-1];
    
    for(int i=n-2; i>=0; i--){
        rightMin[i] = min(arr[i], rightMin[i+1]);
    }
    
    for(int i=1; i<n-1; i++){
        if(arr[i]>leftMax && arr[i]<rightMin[i+1]){
            return arr[i];
        }
        leftMax = max(leftMax, arr[i]);
    }
    
    return -1;
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res = findElement(arr, n);
    if(res!=-1){
        cout<<"The required element is: "<<res;
    }
    else{
        cout<<"No such element found.";
    }
    return 0;
}
