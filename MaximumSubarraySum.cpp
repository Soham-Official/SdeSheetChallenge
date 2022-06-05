#include<bits/stdc++.h>
long long maxSubarraySum(int nums[], int n)
{
    long long msf=0,meh=0;
       for(int i=0;i<n;i++){
           meh+=nums[i];
           if(meh<0) meh=0;
           msf=max(msf,meh);
       }
        return msf;
}
