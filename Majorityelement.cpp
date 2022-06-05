#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	int majority=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(count==0){
            majority=arr[i];
            count=1;
        }
        else if(arr[i]==majority) count++;
        else count--;
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==majority) count++;
    }
    if(count> floor(n/2)) return majority;
    else return -1;
    
}
