#include<stdio.h>
int main()
{
    int i,j,a[6][6],b[6][6],c[6][6],ca,cb,ra,rb;
    printf("enter number of rows");
    scanf("%d%d",&ra,&rb);
    printf("enter number of columns");
    scanf("%d%d",&ca,&cb);
    if(ra==rb && ca==cb)
    {
        printf("enter matrix a");
        for(i=0;i<ra;i++)
        {
            for(j=0;j<ca;j++)
            {
                scanf("%d ",&a[i][j]);
            }
        }
        printf("enter matrix b");
        for(i=0;i<rb;i++)
        {
            for(j=0;j<cb;j++)
            {
                scanf("%d ",&b[i][j]);
            }
        } 
    }
        for(i=0;i<rb;i++)
        {
            for(j=0;j<cb;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
      return 0;
}