#include <iostream>

using namespace std;
int main()
{
    int arr[4]={1,2,3,2};
    int n=4;
    int a=0;
    for(int m=0; m<n; m++){
        for(int i=0; i<n; i++){
            a=m^arr[i];
            if (a==a){
                cout<<m<<endl;
                break;
                
            }
            
        }
    }
      
    

    return 0;
}