#include <bits/stdc++.h>
using namespace std;

int sum(int p, int r)
{
    return (p / 2) * ((2 * r) + (p - 1) * r);
}

bool paranthasPossible(int *cooks, int P, int L, int curr_time)
{
    for (int i = 0; i < L; i++)
    {
        int paranthasCooked = 1;
    
        int time = 0;
        while (time + cooks[i] * paranthasCooked <= curr_time and P>0)
        {
            time += cooks[i] * paranthasCooked;
            ++paranthasCooked;
            P--;
        }
        if(P==0) return true;
    }

    return (P==0);
}

int minTimeToCookParantha(int *cooks, int P, int L, int minRank)
{
    int s = 0;
    int e = sum(P, minRank);
    int ans = INT_MAX;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (paranthasPossible(cooks, P, L, mid))
        {
            ans = min(ans, mid);
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int P;
    cin >> P;
    int L;
    cin >> L;
    int cooks[100];
    int Min = INT_MAX;
    for (int i = 0; i < L; i++)
    {
        cin >> cooks[i];
        Min = min(Min, cooks[i]);
    }
    cout << minTimeToCookParantha(cooks, P, L, Min);
}