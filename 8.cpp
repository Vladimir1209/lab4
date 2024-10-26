#include <vector>
#include <string>
#include <iostream>
using namespace std;

string join(const vector<string> &vec, const string &sep)
{
    vector<string> v = vec;
    string s = sep;
    string nw = "";
    for (int i = 0; i < v.size(); ++i)
    {
        nw = nw + v[i] + s;
    }
    return nw;
};

int main()
{
    vector<string> v = {"a", "bb", "ccc"};
    cout << join(v, " ");
}
