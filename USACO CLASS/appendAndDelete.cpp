#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    if(k==0 || s.compare(t)==0)
    {
        if(s.compare(t)==0)
        return "Yes";
        else
        return "No";

        cout<<s<<' '<<t<<endl;
    }
    return appendAndDelete(s.substr(0,s.length()-1), t, --k);
    string temp=s+t[t.length()-1];
    return appendAndDelete(temp, t, --k);
}

int main()
{
    string s;
    cin>>s;

    string t;
    cin>>t;

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    cout << result << "\n";

    return 0;
}

