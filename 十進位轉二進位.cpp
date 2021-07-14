#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()

{
	double a,floa;
	long int a1,b[320],c[320];
	long int i=0;
	bool want2=true;
	string want;
	while(want2){
	cout<<endl<<"Please enter a number that you want to convert from DEC to BIN : ";
	cin>>a;
	a1=(int)a;
	floa=a-(int)a;
	
		
	while(a1/2>0){
		b[i]=a1%2;
		a1/=2;
		i++;
	}

	if(a1%2==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
		for(i=i-1;i>=0;i--){
		cout<<b[i];
	}
	
	i=0;
	
	if(floa==0.0){
		cout<<"";
	}
	else{
		cout<<".";
		for(int u=0;u<=31;u++){
			c[u]=(int)(floa*2);
			floa*=2.0;
			floa-=(int)(floa);
			i++;
		}
		
		for(int k=0;k<=i-1;k++){
			cout<<c[k];
		}
	}	
		
		long int b[320]={0},c[320]={0};
		int k=0;
		i=0;
		
		do {
			cout<<endl<<"Do you want to convert more numbers ? (Yes / No)"<<endl;
			cin>>want;
			if(want=="Yes" or want=="yes" or want=="YES"or want=="YEs"or want=="YeS"or want=="yES"or want=="yeS"or want=="yEs"){
				want2=true;
				k=0;
			}
			else if(want=="No" or want=="NO" or want=="no"){
				want2=false;
				k=0;
			}
			else{
				cout<<"Please enter YES or NO!! Thank you!"<<endl;
				k=1;
			}
		}while(k==1);

}
	system("pause");
    return 0;



}

