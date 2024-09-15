#include <iostream>
using namespace std;

int main() {
    int n = 33;
    char c='A';
    int no=1;
    
    for (int i=0;i<8;i++)
        cout<<"    "<<char(c+i)<<"   ";
        cout<<endl;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if(j==0&&(i==2||i%4==2)){
            cout<<no<<" ";
            no++;
            }
             else if (i==0 || i==n-1 || i%4==0 || j%4==0 ||
                j==0 || j==n-1){
                cout<<"* ";
            }
            else if ((i==2 || i==6) && j%2==0)
                cout<<"% ";
            else if ((i==26 || i==30) && j%2==0)
                cout<<"@ ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}