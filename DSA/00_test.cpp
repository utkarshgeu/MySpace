#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    for(int i=0;i<10000;i++){
        v.push_back(i);
    }

    for(auto& itr : v){
        cout<<itr<<"\n";
    }
}