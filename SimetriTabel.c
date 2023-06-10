/*Nama File : SimetriTabel */
/*Deskripsi : teks algoritma untuk menentukan bahwa T1 dan T2 simetri atau tidak. Simetri adalah ukurannya sama dan nilai pada setiap elemen tabel T1 dan T2 juga sama. */
/*Pembuat   : Ilham azrinargana pulungan - 24060122140130*/
/*Tanggal   : senin, 21/03/2023, 16.30*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    /*kamus*/
    int i;
    int n1;
    int n2;
    scanf ("%d", &n1);
    scanf ("%d", &n2);
    int tab1 [n1+1];
    int tab2 [n2+1];
    int x;

    /*algoritma*/

    x=1;
    if (n1!=n2){
        printf ("tabel 1 dan tabel 2 tidak simetris");
    }
    else {
        for (i=1;i<=n1;i++){
            scanf ("%d",&tab1[i]);
        }
        for (i=1;i<=n2;i++){
            scanf ("%d",&tab2[i]);
        }
        for (i=1;i<=n1;i++){
            if (tab1[i] !=tab2[i]){
                x=0;
            }
        }
        if (x==1){
            printf ("simetris");
        }
        else {
            printf ("tidak simetris");
        }
    }


    return 0;
}

