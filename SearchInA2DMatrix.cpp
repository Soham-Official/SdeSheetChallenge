#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int j=n-1,i=0;
    while(i<m and j>=0){
        if(mat[i][j]==target) return true;
        else if(mat[i][j]>target) j--;
        else i++;
    }
    return false;
}
