#include<iostream>

using namespace std;
int main()
{
int m,n;
cin>>m>>n;
int a=0;
int b=0;
int x[4]={0,1,0,-1};
int y[4]={1,0,-1,0};
int result[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
result[i][j]=0;

}
int move_=0;
int adx,ady;
for(int i=1;i<=m*n;i++)
{
    result[a][b]=i;
    adx=a+x[move_];
    ady=b+y[move_];
    if(adx>m-1||ady>n-1||adx<0||ady<0||result[adx][ady])
    {
        move_=(move_+1)%4;
            adx=a+x[move_];
    ady=b+y[move_];

    }
    a=adx;
    b=ady;
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
        cout<<result[i][j]<<'\t';
        cout<<endl;
}

}
