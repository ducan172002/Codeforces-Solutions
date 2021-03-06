/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int n,m,i,k,a[10];

    while (sf ("%d %d",&n,&m) != EOF)
    {
        for (i=0; i<n; i++)
            sf ("%d",&a[i]);

        map <int,bool> mp;

        for (i=0; i<m; i++)
        {
            sf ("%d",&k);
            mp[k] = true;
        }

        vector <int> v;

        for (i=0; i<n; i++)
            if (mp[a[i]])
                v.pb(a[i]);

        int len = v.size();

        for (i=0; i<len; i++)
        {
            pf ("%d",v[i]);

            if (i == len-1)
                pf ("\n");
            else
                pf (" ");
        }

        v.clear();
        mp.clear();
    }

    return 0;
}
