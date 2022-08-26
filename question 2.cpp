/*ishan bansal
2010990308*/
#include <bits/stdc++.h>

using namespace std;


void findRepeat(int* a, int n){
    unordered_map<int,int> hash;
    
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }/* increase numbern by 1 */
    
    cout<<"repeated Number    frequency\n";
   
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}
/* print it out first*/
int main()
{
    int n;
    cout<<"enter array length\n";
    cin>>n;
    int* a=(int*)(malloc(sizeof(int)*n));
    
    cout<<"input array elements...\n";
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    findRepeat(a,n);

    return 0;
}/*now print result*/
