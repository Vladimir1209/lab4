#include <iostream>
#include <vector>
using namespace std;

float argmax(const vector<float>& a){
  float m;
  m=0.0;
  int l = 0;
  for(int i = 0; i<a.size();++i){
    if(a[i]>m){l=i;m=a[i];}
  }
  if(a.size()==0){
    return -1;
  }else{
    return l;
  }
};

int main(){
  vector<float> a = {1,2,3,4,5};
  cout<<argmax(a)<<endl;
}
