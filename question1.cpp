#include <bits/stdc++.h>
using namespace std;
/*ishan bansal
201099308*
non repeated numbers*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /* i++ increase by 1*/
    
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }/*now print result*/
    }

    return 0;
}
