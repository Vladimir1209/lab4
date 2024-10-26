#include <iostream>
#include <vector>
using namespace std;

pair<float, float>  minMax(const vector<float>& a){
  float m,mi;
  m=0.0;
  mi = 10000000.0;
  for(int i = 0; i<a.size();++i){
    if(a[i]>m){m=a[i];}
    if(a[i]<m){mi=a[i];}
  }
  return make_pair(m,mi);
};

int main(){
  vector<float> a = {1,2,3,4,5};
  pair<float, float> test = minMax(a);
  test.first;
  cout<<(test.first)<<" "<<(test.second)<<endl;
}
