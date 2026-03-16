#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Bubble sort
    // int n;cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n-1;i++){
    //     for (int j=0;j<n-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }


       int n=9;
       int a[9]={3,3,4,5,6,7,9,8,5};
           int max = a[0];

       for(int i=0;i<0;i++){
        if(a[i]>max){
            max=a[i];
        }
       }    
       vector<int> b(max+1,0);

       for(int i=0; i<n; i++)
       {
        b[a[i]]++;
       }
       for(int i=0;i<(max+1);i++){
        int ind=0;
            while(b[i]>0){
            a[ind]=i;
            ind++;
            b[i]--;
        }
       }
       for(int i=0;i<n;i++){
        cout<<a[i];
    }


}
