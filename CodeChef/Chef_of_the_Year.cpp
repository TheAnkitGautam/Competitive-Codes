#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> naco;
    map<string, int> naf;

    for (int i = 0; i < n; i++)
    {
        string name, con;
        cin >> name >> con;
        naco[name]=con;
    }
    for (int i = 0; i < m; i++)
    {
        string sub;
        cin>>sub;
        naf[sub]++;
    }
    for(auto v:naf)
    cout<<v.first<<" "<<v.second<<endl;
    
    
    return 0;
}