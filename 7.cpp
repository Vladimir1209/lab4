#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> split(const std::string &str, char sep)
{
    string s = str;
    string n = "";
    vector<int> vec = {};
    vector<string> nw = {};
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == sep)
        {
            if (n.size() > 0)
            {
                nw.push_back(n);
                n = "";
            }
        }
        else
        {
            n += s[i];
        }
    }
    nw.push_back(n);
    return nw;
};

int main()
{
    string s = "1234s 4522 s4543";
    for (int i = 0; i < split(s, '2').size(); ++i)
    {
        cout << split(s, '2')[i] << endl;
    }
}
