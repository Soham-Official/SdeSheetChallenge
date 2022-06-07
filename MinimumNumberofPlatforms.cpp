int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int platforms=0,ans=0;
    int i=0,j=0;
    while(i<n and j<n){
        if(at[i]<=dt[j]){
            platforms++;
            i++;
            ans=max(ans,platforms);
        }
        else{
            platforms--;
            j++;
        }
    }
    return ans;
}
