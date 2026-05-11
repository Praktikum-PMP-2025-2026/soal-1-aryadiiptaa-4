#include <stdio.h>

int main(){
    int N, jumlah = 0;
    int max = 0;
    int indeks = 0;
    int iso = 0;
    scanf("%d", &N);
    int m[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &m[i][j]);
        }
    }

    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(m[i][j]==1){
                jumlah++;
            }
        }
        if(jumlah>max){
            max = jumlah;
            indeks = i;
        }
        printf("DEGREE %d %d\n", i, jumlah);
        jumlah = 0;
    }
    printf("MAX_VERTEX %d\n", indeks);


    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(m[i][j]==1){
                jumlah++;
            }
        }
        if(jumlah==0){
            printf("ISOLATED %d\n", i);
            iso++;
        }
        jumlah = 0;
    }
    if(iso==0){
        printf("ISOLATED NONE");
    }
    // for(int i=0; i<N; i++){
    //     for(int j=0; j<N; j++){
    //         printf("%d", m[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}
