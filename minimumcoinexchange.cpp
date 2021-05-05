#include<iostream>
using namespace std;

int mincoins(int coins[],int size,int value){
    
      int ans[size];
    int i ,count=0;
        for(i=0;i<size;i++){
            while(value>=coins[i]){
                value -=coins[i];
                ans[count]=coins[i];
                count++;
            }
            if(value==0){
                break;
            }
        }
        cout<<"The coins required are-"<<endl;
        for(int i=0;i<count;i++){
            cout<<ans[i]<<endl;
        }

        return count;
    
    }



int main(){
    int n;
    cout<<"Enter number of coins"<<endl;
    cin>>n;
    int coins[n];
    cout<<"Enter the value of coins in decreasing order"<<endl;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int value;
    cout<<"Enter the value you want to count coins for"<<endl;
    cin>>value;
    int count = mincoins(coins,n,value);
    cout<<"You require minimum "<<count<<"coins"<<endl;
    return 0;   
    
    
  }