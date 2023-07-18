#include <iostream>
using namespace std;

/*
output ----------

1234
 234
  34
   4

 */

int main() {
    int n;
    cin>>n;
    
    int row = 1;
    
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
            cout << col+row-1;
            col++;
        }

        cout << endl;
        row++;
    }
    

    return 0;
}