#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

void sort(vector<float>& a){
  if(a.size()<=1) return ;
  for(int i=0;i<a.size()-1;++i){
    for(int g=0;g<a.size()-i-1;++g){
      if(a[g]<a[g+1]){
        swap(a[g],a[g+1]);
      }
    }
  }
};

int main(){
  vector<float> a = {1,2,3,5,4};
  sort(a);
  for (auto i : a){
    cout<<i<<endl;
  }
}
