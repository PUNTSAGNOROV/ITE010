#include<iostream>
 using namespace std;

int binom(int , int);


int main(){
 
int n , r;

cin>>n>>r;
cout<<binom(n,r)<<endl;
return 0;
}


int binom(int n , int r){
   if ( n < r) 
   return 0;
   if(n == r || !r)
   return 1;
   return binom(n-1 , r)+ binom( n-1 , r-1);
}
