#include <iostream>
#include<stdlib.h>
#include<ctime>
#include<cstdlib>
using namespace std;

int random(int limit = 10);
void guessguessguess (int try1,int guess,int ub,int lb);

int main()

{
	int ub,guess,try1,lb=1;
	
	cout<<"Upper limit which you want(Lower bound is 1) : "<<endl;

	cin>>ub;
	guess=random(ub);
	cout<<"The range is from "<<lb<<" to "<<ub<<"."<<endl<<" Start to guess your answer!!!"<<endl;
	cin>>try1;
	guessguessguess(try1,guess,ub,lb);
    
	system("pause");
    return 0;



}

int random(int limit){
	
	srand(static_cast <unsigned int>(time(0)));
	
	int ans= (rand()%limit)+1;
	
	return ans;
	
}

void guessguessguess (int try1,int guess,int ub,int lb){
	while(1){
	if(try1>guess){
		ub=try1;
		cout<<endl<<"The new range is from "<<lb<<" to "<<ub<<endl<<" Keep trying!!!"<<endl;
		cin>>try1;
		continue;
}
	else if(try1<guess){
		lb=try1;
		cout<<endl<<"The new range is from "<<lb<<" to "<<ub<<endl<<" Keep trying!!!"<<endl;
		cin>>try1;
		continue;
}

	else if(try1==guess){
	
		cout<<endl<<"You hit the answer good job!!!"<<endl;
		break;
	}
    
}
	
	
	
}




