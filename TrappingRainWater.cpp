#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long left=0,right=n-1,leftmax=INT_MIN,rightmax=INT_MIN;
    long sum=0;
    while(left<right){
        if(arr[left]<arr[right]){
            if(arr[left]>=leftmax) leftmax=arr[left];
            else sum+=(leftmax-arr[left]);
            left++;
        }
        else{
            if(arr[right]>=rightmax) rightmax=arr[right];
            else sum+=(rightmax-arr[right]);
            right--;
        }
    }
    return sum;
}
