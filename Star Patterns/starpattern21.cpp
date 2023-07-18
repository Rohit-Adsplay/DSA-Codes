#include <iostream>
using namespace std;

/*
output ----------

   1
  22
 333
4444

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
            cout <<row ;
            col++;
        }

        cout << endl;
        row++;
    }
    

    return 0;
}