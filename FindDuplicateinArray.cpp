#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	int slow=arr[0];
    int fast=arr[arr[0]];
    while(fast!=slow){
        fast=arr[arr[fast]];
        slow=arr[slow];
    }
   slow=0;
   while(fast!=slow){
        fast=arr[fast];
        slow=arr[slow];
    }
    return slow;
}
