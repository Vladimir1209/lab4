#include <iostream>
#include <vector>
using namespace std;

float f(const vector<float>& a){
  float s=0.0;
for(int i = 0; i<a.size(); i++){
  s+=a[i];}
cout<<s/a.size()<<endl;
};

int main(){
  vector<float> a = {1,2,3,4,5};
  f(a);
}
