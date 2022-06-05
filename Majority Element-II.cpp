#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int majority1;
    int majority2;
    int count1=0,count2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==majority1) count1++;
        else if(arr[i]==majority2) count2++;
        else if(count1==0){
            majority1=arr[i];
            count1++;
        }
        else if(count2==0){
            majority2=arr[i];
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1=0,count2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==majority1) count1++;
        if(arr[i]==majority2) count2++;
    }
    vector<int>v;
    if(count1 > floor(arr.size()/3)) v.push_back(majority1);
    if(count2 > floor(arr.size()/3) and majority1!=majority2) v.push_back(majority2);
    return v;
}
