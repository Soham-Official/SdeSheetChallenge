int uniqueElement(vector<int> arr, int n)
{
    int i=0,r=n-1;
    while(i<r){
        int mid=(i+r)/2;
        if(mid%2==0 and arr[mid]!=arr[mid+1] or (mid%2!=0 and arr[mid]!=arr[mid-1])) r=mid;
        else i=mid+1;
    }
    return arr[i];
}
