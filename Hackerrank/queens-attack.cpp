#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the queensAttack function below.
int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    int numOfAttack = 0;
    vector <int> v = {0,0,0,0,0,0,0,0};
    v[0] = n - c_q;
    v[1] = n - r_q;
    v[2] = c_q - 1;
    v[3] = r_q - 1;
    v[4] = min(v[0],v[3]);
    v[5] = min(v[0],v[1]);
    v[6] = min(v[1],v[2]);
    v[7] = min(v[2],v[3]);


    int i;
    for(i=0;i<k;i++) {
        int r = obstacles[i][0];
        int c = obstacles[i][1];

        if(r == r_q) {
            if(c > c_q) 
                v[1] = min(c-c_q-1,v[1]);
            else 
                v[3] = min(c_q-c-1,v[3]);
        } 
        else if(c == c_q) {
            if(r > r_q) 
                v[0] = min(r-r_q-1,v[0]);
            else 
                v[2] = min(r_q-r-1,v[2]);
        }
        else if(r+c == r_q+c_q) {
            if(r > r_q)
                v[4] = min(r-r_q-1,v[4]);
            else
                v[6] = min(r_q-r-1, v[6]);
        } 
        else if(abs(r-r_q) ==  abs(c-c_q)) {
            if(r > r_q) 
                v[5] = min(v[5],r-r_q-1);
            else 
                v[7] = min(v[7],r_q-r-1);
        }
    }

    for(i=0;i<8;i++) {
        cout<<v[i]<<" ";
        numOfAttack += v[i];
    }
    cout<<endl;

    return numOfAttack;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string r_qC_q_temp;
    getline(cin, r_qC_q_temp);

    vector<string> r_qC_q = split_string(r_qC_q_temp);

    int r_q = stoi(r_qC_q[0]);

    int c_q = stoi(r_qC_q[1]);

    vector<vector<int>> obstacles(k);
    for (int i = 0; i < k; i++) {
        obstacles[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> obstacles[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
