#include<iostream>
#include<string>
using namespace std;
int i=0;
string fir,sec;
	 mixtext(string text1,string text2){	

if(text1.size()==text2.size()){
	while(i<text1.size()){
		cout<<text1[i]<<text2[i];
		i++;
	}
	
}
else{cout<<"E";
}
}
	
	int main(){
		cout<<"Enter text1:";
		cin>>fir;
		cout<<"Enter text2:";
		cin>>sec;
		mixtext(fir,sec);
		
		
		return 0;
		
	}
	
	
	
	

