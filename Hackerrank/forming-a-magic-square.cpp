#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
    vector<vector<int>> mat1 = {{8,1,6},{3,5,7},{4,9,2}};
    vector<vector<int>> mat2 = {{6,1,8},{7,5,3},{2,9,4}};
    vector<vector<int>> mat3 = {{8,3,4},{1,5,9},{6,7,2}};
    vector<vector<int>> mat4 = {{4,3,8},{9,5,1},{2,7,6}};
    vector<vector<int>> mat5 = {{6,7,2},{1,5,9},{8,3,4}};
    vector<vector<int>> mat6 = {{2,7,6},{9,5,1},{4,3,8}};
    vector<vector<int>> mat7 = {{4,9,2},{3,5,7},{8,1,6}};
    vector<vector<int>> mat8 = {{2,9,4},{7,5,3},{6,1,8}};
    vector<vector<vector<int> > > matrices = {mat1,mat2,mat3,mat4,mat5,mat6,mat7,mat8};

    vector<int> diff;
    int i,j,k,dif = 0;
    for(k=0;k<8;k++) {
        dif = 0;
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++) {
                dif += (abs(matrices[k][i][j] - s[i][j]));
            }
        }
        diff.push_back(dif);
    }
    
    int minimum = diff[0], minindex = 0;
    for(i=1;i<diff.size();i++) {
        if(diff[i]<minimum) {
            minimum = diff[i];
            minindex = i;
        }
    }

    return minimum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
