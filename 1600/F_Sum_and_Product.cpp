#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
 
map<int,int> mp;
int get(int x,int y)
{
    int D = (x*x) - (4*y);
    if(D < 0) return 0;
 
    int sq_det = sqrt(D);
    int x1 = (x+ sq_det)/2;
    int x2 = (x-sq_det)/2;
    if((x1+x2)!=x || (x1*x2) != y) return 0;
    if(x1 == x2)
    return (mp[x1]*(mp[x2]-1))/2;
    return mp[x1]*mp[x2] ;
 
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        int n , p; cin >> n;
        mp.clear();
        for(int i = 0;i<n;i++)
        {
            cin >> p ;
            mp[p]++;
        }
        int q;cin >> q;
        while(q--) 
        {
            int x,y; cin >> x >> y;
            cout << get(x,y) << " ";
        }
        cout << endl;
    }
}
/*
    fixing the internal LOOP to find potential Ai and Aj:  using the quadratic formula to find potential values of x1 and x2 based on the given x and y. Then, 
    checking if these values satisfy the given conditions and using the map mp to count the occurrences of the solutions.
*/

// EDITORIAL

/*
    The system of equations in the statement resembles Vieta's formula for quadratic equations. If we have
    {       
        ai+aj=b
        ai⋅aj=c
    }
    the quadratic equation will be x2−bx+c=0, here ai and aj will be its roots.

    To find the roots of the quadratic equation, we can use the discriminant formula, D=b2−4ac
    . The roots will then be x1=b−D√2and x2=b+D√2.

    Once we have the potential integer values for ai
    and aj, we can calculate the number of pairs by multiplying the number of occurrences, respectively.

    However, remember to consider some special cases:

    If D<0 , the equation won't have real roots.
    If D=0, then x1=x2, the formula for counting pairs in this case is different.

    The complexity of this solution is O((n+q)logn), using maps to store integer occurrences.
*/

/*
    vieta's Formula : 

    
    For a quadratic polynomial ax² + bx + c = 0, Vieta's formulas state:

    The sum of the roots (solutions) of the quadratic equation is -b/a.
    The product of the roots is c/a.
    These formulas hold for any quadratic equation, whether the solutions are real or complex.
*/

/*
    Got TLE for 5 times just for using the unordered_map<> instead of map<>
*/