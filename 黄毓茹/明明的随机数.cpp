
#include<bits/stdc++.h>
using namespace std;

int main()

{

    int N, M=0, a[100], i, j;

    cin >> N;

    for (i=0; i<N; i++) {

        cin >> a[M];

        bool has = false;

        for (j=0; j<M; j++){

            if (a[j] == a[M]){

                has = true;

                break;

            }

        }

        if (!has) M++;

    }
#include<bits/stdc++.h>
    sort(a, a+M);

    cout << M << endl;

    for (i=0; i<M; i++)

        cout << a[i] << " ";

    return 0;

}