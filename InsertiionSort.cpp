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
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
}