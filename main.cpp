#include <iostream>
using namespace std;
#include <vector>
void ordina(int n, vector<int> & v  ) 
{
    int i, j, t;
    
    for (i = 0; i <= n - 1; i=i+1) {
        for (j = 0; j <= n - 2; j=j+1)
        {
            if (v[j] > v[j + 1]) 
            {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }
}
void visualizza(int n, vector<int> & v  ) 
{
    int i;
    i=0;
    while(i<=n-1){
        cout<<v[i]<<endl;
        i=i+1;
        }

    }
    



int main() {
    srand(time(0));
    int n,i;
    n=3;
    vector<int> v(n);
    vector<int> w(n);
    i=0;
    while(i<=n-1){
        v[i]=rand()%(n*10)+1;
        w[i]=rand()%(n*10)+1;
        i=i+1;}
        ordina(n,v);
        ordina(n,w);
        visualizza(n,v);
        visualizza(n,w);

    
}


