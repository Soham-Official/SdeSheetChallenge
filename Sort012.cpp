#include <bits/stdc++.h> 
void sort012(int *a, int n)
{
    int two=n-1,zero=0,i=0;
    while(i<=two){
       if(a[i]==0)  swap(a[i++],a[zero++]);
       else if(a[i]==2) swap(a[i],a[two--]);
       else i++; 

   }
}
