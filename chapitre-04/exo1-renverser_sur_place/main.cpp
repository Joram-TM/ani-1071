#include <cstdio>

void renverser(int t[], int n){
    for (int i=0; i < n/2; i++){
        int r = t[i];
        t[i] = t[n-1-i];
        t[n-1-i] = r;
    }
}

int main (){
    int n = 0;
    int t[n];
    int test = 0;

    while(scanf("%d\n", &n) == 1){
        test =1;
        for (int i=0; i < n; i++){
         scanf ("%d", &t[i]);
    }
    renverser(t, n);
    for (int i=0; i < n; i++){
        printf ("%d\n", t[i]);
    }
    if (test == 0){
        printf("AUCUN");
    }

    }

    return 0;
}