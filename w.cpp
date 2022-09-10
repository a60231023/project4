#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	    int X;
	    cin>>X;
	    if(X<=100){
	       X =X;
	        
	    }else if(100<X<=1000){
	       X =X-25; 
	    }else if(1000<X<=5000){
	        X =X-100;
	    }else{
	        X = X-500;
	    }
	    cout<<endl;
	    cout<<X;
	return 0;
}
