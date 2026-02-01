
//>>>>>>>>>>>>>>>> PATTERN PRINTING>>>>>>>>>>>>>>>>
 /*****
   ****
   ****
   ****
   */
  #include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i =0;i<n;i++)//for num of line,,, outer loop
   {
    for(int j=0;j<n;j++)//focus on colounm& then conect them
    {cout<<"* ";}
    cout<<"\n";
   }
}
//by functions
#include <iostream>
using namespace std;
void printp(int n){
    for(int i =0;i<n;i++)//for num of line,,, outer loop
   {
    for(int j=0;j<n;j++)//focus on colounm& then conect them
    {cout<<"* ";}
    cout<<"\n";
   }
}
int main(){int t;
    cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    printp(n);}
    return 0;
}


    
