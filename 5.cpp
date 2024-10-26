#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

bool remove_first_negative_element( vector<int>& vec, int& removed_element){
    bool a = false;
    removed_element = 0;
    for(int i = 0; i< vec.size();++i){
        auto t = vec.begin();
        if(vec[i]<0){
             removed_element = vec[i];
             vec.erase(t + i);
             a = true;
             break;
        }
        
    }
    
    return a;

};

int main(){
    int s;
    vector<int> very = {5, 12, -47, -5};
    cout<<remove_first_negative_element(very,s)<<endl;
    
    for(int i = 0; i<very.size();++i){
        
        cout<<very[i]<<endl;
    }
    cout<<"удаленный элемент: "<<s<<endl;
}
