#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin >> count;
    while(count--){
        string a;
        string b;
        int len1, len2;
        cin >> len1 >> len2;
        cin >> a >> b;
        int table[len1+1][len2+1];
        for(int i = 0; i <= len1; i++){
            for(int j = 0; j <= len2; j++){
                if(i == 0 || j == 0) table[i][j] = 0;

                else if(a[i-1] == b[j-1]) table[i][j] = table[i-1][j-1]+1;

                else table[i][j] = max(table[i-1][j], table[i][j-1]);
            }
        }
        cout << table[len1][len2] << "\n";
    }
    return 0;
}