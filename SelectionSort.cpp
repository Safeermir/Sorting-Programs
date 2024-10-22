#include<iostream>
#include<vector>
#include<climits>
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
    for(int i=0;i<n-1;i++){
        int min=__INT_MAX__;
        int minindex=-1;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                minindex=j;
            }

        }
        swap(v[i],v[minindex]);
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
}