#include <iostream>
using namespace std;

/*
output ----------

4321
 321
  21
   1

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
            cout << n-row-col+2;
            col++;
        }

        cout << endl;
        row++;
    }
    

    return 0;
}