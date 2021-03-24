#include <stdio.h>
int main() {
    int sum;
    int x, i;
    FILE *fp;
    fp = fopen("ten.txt", "r+");
    for (i=0; i<10; ++i) {scanf("%d",&x); fprintf(fp, "%d ", x);} printf("\n");
    fseek(fp,0*sizeof(x),SEEK_SET);
    for (i=0; i<10; i++){ 
        fscanf(fp,"%d",&x);
        printf("%d ", x);}; 
    printf("\n");
    for (i=0; i<10; i++){ 
        fscanf(fp,"%d",&x);
        sum += sizeof(x); 
    };
    printf("bites %d\n", sum);
    fseek(fp,5,SEEK_SET);
    for (i=0; i<7; i++){ 
        fscanf(fp,"%d",&x);
        printf("%d ", x);};
    fclose(fp);
    return 0;
}