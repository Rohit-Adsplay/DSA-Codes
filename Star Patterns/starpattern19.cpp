#include <iostream>
using namespace std;

/*
output ----------

 1234
  567
   89
    10

 */

int main() {
    int n;
    cin>>n;
    
    int row = 1;
    int count = 1;
    
    while(row<=n){
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int col = 1;
        while (col <= n-row+1)
        {
            cout <<count ;
            count++;
            col++;
        }

        cout << endl;
        row++;
    }
    

    return 0;
}