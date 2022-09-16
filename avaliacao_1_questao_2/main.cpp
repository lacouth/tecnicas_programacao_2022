#include <iostream>

using namespace std;

int main()
{
    int s = 0;
    int t = 0;
    int a = 0;
    int b = 0;
    int m = 0;
    int n = 0;
    int d = 0;
    int macas = 0;
    int laranjas = 0;


    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        cin >> d;
        if( (a + d) >= s and (a+d) <= t){
            macas++;
        }
    }

    for(int i = 0; i < n; i++){
        cin >> d;
        if((b + d) >= s and (b+d) <= t){
            laranjas++;
        }
    }

    cout << macas << endl << laranjas<<endl;
    return 0;
}
