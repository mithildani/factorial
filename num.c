 #include<stdio.h>

void main()
{
    printf("Test");
    int n;
    printf("\t\t Welcome to Factorial Calculator! \n\n\n\n Enter any integer: ");
    scanf("%i",&n);
<<<<<<< HEAD  LALALALALLALA
    printf("Mithils , Sid's and Divya Commit________________\n");


    int i;
    double ans=1;
    for (i=1;i<=n;i++)
    {
        ans=ans*i;
    }

    if (ans<4294967295)
    {
        long finans=ans;
        printf("\n\n %i! is %lu \n\n",n,finans);
    }
    else
    {
        printf("\n\n %i! is %e \n\n",n,ans);
    }
    
    printf("Sid");
}
