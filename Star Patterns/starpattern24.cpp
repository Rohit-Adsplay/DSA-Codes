#include <iostream>
using namespace std;

/*
output ----------

   1
  121
 12321
1234321

 */

int main() {
    int n;
    cin>>n;
    
    int row = 1;
    
    while(row<=n){
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }

        int start = row-1;
        while(start){
            cout<<start;
            start--;
        }

        cout << endl;
        row++;
    }
    

    return 0;
}