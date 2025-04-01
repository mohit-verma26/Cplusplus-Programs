#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N, Q, k;
    int **data;
    cin>>N>>Q;
    data = new int*[N];
    for(int i=0; i<N; i++) {
        cout<<"Enter the size of the array:- ";
        cin>>k;
        data[i] = new int[k];
        for(int j=0; j<k; j++) {
            cout<<"Enter elements of in 2nd array:- ";
            cin>>data[i][j];
        }
    }

    int a, b;
    for(int i=0; i<Q; i++) {
        cout<<"which element of array you want to see:- ";
        cin>>a>>b;
        cout<<data[a][b];
    }

	return 0;
}
