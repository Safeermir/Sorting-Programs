#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the "<<n<<" elements of array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){ // Traversing the array
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){// comparing the elements
                swap(v[j],v[j+1]); // Swaping the elements
                flag=false;
            }
        }
        if (flag==true){
            break; // swap did not happen
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}
