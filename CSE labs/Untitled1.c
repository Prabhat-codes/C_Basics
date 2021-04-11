#import<stdio.h>
int main()
{
char d1[100],d2[100];
int i,t,l,k[100],j,c;
int cost=0;

printf("enter number of test cases ");
scanf("%d",&t);

for(i=0;i<t;i++)
{
 printf("enter length of strands ");
 scanf("%d",&l);
 printf("number of proteins which can be exchanged") ;
  scanf("%d",&k[i]);
 printf("enter dna strand1 ")
for( j=0;j<l;j++)
{
    scanf("%c",&d1[j])
    d1[j]=toupper(d1[j]);

}
for( j=0;j<l;j++)
{
    scanf("%c",&d2[j])
    d2[j]=toupper(d2[j]);
}
for(j=0;j<l;j++)
{
    if(d1[j]=='A')
    {
        if(d2[j]=='T')
        break;
    }
    if(d1[j]=='T')
    {
        if(d2[j]=='A')
        break;
    }
    if(d1[j]=='T')
    {
        if(d2[j]=='A')
        break;
    }
    if(d1[j]=='T')
    {
        if(d2[j]=='A')
        break;
    }

}

}
