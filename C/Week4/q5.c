#include<stdio.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

void Merge(struct Student s[], int l, int mid, int r)
{
    int a=l,b=mid+1, i=0;
    struct Student ar3[r-l+1];
    while(a<=mid && b<=r)
    {
        if(s[a].roll<s[b].roll)
        {
            ar3[i++]=s[a++];
        }
        else
        {
            ar3[i++]=s[b++];
        }
    }
    while(a<=mid)
    {
        ar3[i++]=s[a++];
    }
    while(b<=r)
    {
        ar3[i++]=s[b++];
    }
    i=0;
    for(int x=l; x<=r; x++)
    {
        s[x]=ar3[i++];
    }
}

void mergeSort(struct Student s[],int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(s,l,mid);
        mergeSort(s,mid+1,r);

        Merge(s,l,mid,r);
    }
}

int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    struct Student s[n];
    printf("Enter elements in the array\n");
    for(int x=0; x<n; x++)
    {
        scanf("%s%d%d",&s[x].name,&s[x].roll,&s[x].marks);
    }

    mergeSort(s,0,n-1);
    printf("\nSorted Array\n\n");
    printf("Roll No.\tName\tMarks\n\n");
    for(int x=0; x<n; x++)
    {
        printf("%d\t\t%s\t%d\n",s[x].roll,s[x].name,s[x].marks);
    }

    return 0;
}