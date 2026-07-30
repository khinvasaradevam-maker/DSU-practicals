#include<stdio.h>

int main()
{
    int a[20],n,i,c,p,x;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    do
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&c);

        switch(c)
        {
            case 1:
                printf("Position: ");
                scanf("%d",&p);
                printf("Element: ");
                scanf("%d",&x);
                for(i=n;i>=p;i--)
                    a[i]=a[i-1];
                a[p-1]=x;
                n++;
                break;

            case 2:
                printf("Position: ");
                scanf("%d",&p);
                for(i=p-1;i<n-1;i++)
                    a[i]=a[i+1];
                n--;
                break;

            case 3:
                for(i=0;i<n;i++)
                    printf("%d ",a[i]);
                printf("\n");
                break;
        }
    }while(c!=4);

    return 0;
}
