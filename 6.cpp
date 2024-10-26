#include <vector>
#include <string>
#include <iostream>
using namespace std;

string replace(const string &str, const string &old, const string &new_string)
{
    string s = str;
    string o = old;
    string n = new_string;
    vector<int> vec = {};
    while (s.find(o) != string::npos)
    {
        vec.push_back(s.find(o));
        s.erase(s.find(o), o.size());
    }
    for (int i = 0; i < vec.size(); ++i)
    {
        s.insert(vec[i], n);
    }
    return s;
};

int main()
{
    string s = "1234s4522s4543";
    cout << replace(s, "s", "ss");
}
