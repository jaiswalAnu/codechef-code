#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int srr[n];
        srr[n-1]=1;
        int cnt=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=n-2;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<0&&arr[i+1]>0||arr[i]>0&&arr[i+1]<0){
                srr[i]=srr[i+1]+1;
            }
            else{
                srr[i]=1;
            }
            
        }
        for(int i=0;i<n;i++){
            cout<<srr[i]<<" ";
        }
        cout<<endl;
    
    
    }
   
	    
	return 0;
}
