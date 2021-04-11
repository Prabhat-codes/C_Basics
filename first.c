#include<stdio.h>
int main(){
int a[5][5];
int d[25];

int m,n;
printf("M and N please");
scanf("%d%d",&m,&n);

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
int t,b,r,l,c;
t=0,l=0,r=n-1,b=m-1,c=0;
for(int j=1;j<=m/2 && j<=n/2;j++){
    for (int i=l;i<=r;i++){
        d[c++]=a[t][i];
    }
    for (int i=t+1;i<=b;i++){
        d[c++]=a[i][r];
    }
    for (int i=r-1;i>=l;i--){
        d[c++]=a[b][i];
    }
    for (int i=b-1;i>t;i-- ){
        d[c++]=a[i][l];
    }
    l++;
    r--;
    t++;
    b--;
}
for(int i=0;i<=m*n;i++){
        printf("%d ",d[i]);
}
}

