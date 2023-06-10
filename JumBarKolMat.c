/*Nama File : BilSempN */
/*Deskripsi : algoritma untuk mencetak bilangan Sempurna sampai dengan bilangan integer sembarang N.  */
/*Pembuat   : Ilham azrinargana pulungan - 24060122140130*/
/*Tanggal   : senin, 13/03/2023, 16.30*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    /*kamus*/
    int i;
    int n;
    scanf ("%d",&n);
    int matriks [n+1][n+1];
    int csum [1+n];
    int rsum [n+1];
    int x;
    int y;


    /*algoritma*/
    for (x=1;x<=n;x++){
        csum[x]=0;
        rsum[x]=0;
    }
    for (x=1;x<=n;x++){
        for (y=1;y<=n;y++){
            scanf ("%d",&matriks[x][y]);
            rsum[x] = rsum[x]+matriks[x][y];
            csum[y] = csum[y]+matriks[x][y];

        }
    }
    for (x=1;x<=n;x++){
        printf ("baris ke-%d, %d \n",x,rsum[x]);
    }
    for (y=1;y<=n;y++){
        printf ("kolom ke-%d, %d \n",y,csum[y]);
    }

    return 0;
}
