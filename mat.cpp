#include <iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

void copy(int i,int a[][7],int rem[][7],int n);
int mart(int n,int a[][7]);


int main()

{
	int n,ans,a[7][7];
	
	cout<<"Please enter size of this matrix(Max size = 7x7)"<<endl;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"Plaese enter each element of this matrix mat["<<i<<"]["<<j<<"]"<<endl;
			cin>>a[i][j];
		}
	}
	
	ans=mart(n,a);
	
	cout<<endl<<"The determine of this matrix is "<<ans<<" . ";



    
	system("pause");
    return 0;



}

int mart(int n,int a[][7]){
	int n2;
	n2=n-1;
	int rem[7][7];
	int res=0;
	int np;
	
	if(n==1)
	res=a[0][0];
	
	if(n>=1)
	for(int i=0;i<n;i++){
		copy(i,a,rem,n);
		if(i%2==0)
		np=1;
		else
		np=-1;
			
		res+=np*a[0][i]*mart(n2,rem);
	}
	return res;
	
}


void copy(int i,int a[][7],int rem[][7],int n){
	int k=0;

		for(int p=0;p<n;p++){
		
			if(p==i)
			continue;
			for(int j=1;j<n;j++)
			rem[j-1][k]=a[j][p];
			k++;
	}
	
	
}



