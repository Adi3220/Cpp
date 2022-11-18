#include <iostream>

using namespace std;
int main()
{
    int arr[6]={10,54,78,5,45,7};
    int n=6;
    
        for(int i=0; i<n; i=i+2){
            swap(arr[i], arr[n-1-i]);
        }
    for(int j=0; j<n; j++){
        cout<< arr[j]<<" ";
    }
      
    

    return 0;
}