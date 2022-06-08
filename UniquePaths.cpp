#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	//m+n-2 c m-1
    double ans=1.0;
    int x=m+n-2;
    for(int i=1;i<m;i++){
        ans=ans*(x)/i;
        x--;
    }
    return (int)ans;
}
