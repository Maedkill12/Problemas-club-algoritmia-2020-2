#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
string solve(long n) {
    uint64_t x=0,y=1,z=1;    
    bool esfibo;
    x = 0;
    y = 1;
    z = 1;
    esfibo = false;
    for(int i=1; i<=50; i++){
        if(n == z){
            esfibo = true;
            break;
        }
        x = y;
        y = z;
        z = x + y;
    }
    return (esfibo?"IsFibo":"IsNotFibo");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
