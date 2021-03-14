#include <bits/stdc++.h>
using namespace std;

const string pattern_begin = "YPSJDD\": \"";
const string pattern_end = "\",";

signed main()
{
    std::ifstream t("source.json");

    std::stringstream buffer;
    buffer << t.rdbuf();
    std::string str(buffer.str());

    vector<string> items;
    int cur = 0;
    while (cur < str.size())
    {
        int pos_begin = str.find(pattern_begin, cur);
        if (pos_begin < 0 || pos_begin >= str.size())
            break;
        pos_begin += pattern_begin.length();
        int pos_end = str.find(pattern_end, pos_begin);
        string ans = str.substr(pos_begin, pos_end - pos_begin);
        items.push_back(ans);
        cout << ans << endl;
        cur = pos_end;
    }
    cout << items.size() << endl;
    for (int i = 0; i < items.size(); i++)
    {
        cout << items[i] << endl;
    }
    return 0;
}