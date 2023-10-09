#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr  = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < arr.size(); i++) if(i%2 == 0) cout << arr[i]*2 << " ";
    return 0;
}
