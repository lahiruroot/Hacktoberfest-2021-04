
#include <iostream>
#include <stdlib.h>
//#include <windows.h>
#include <string>
using namespace std;
class hackTober{
      public:
	      void octoberHack(string get_data){
		      if(get_data =="yes"){
		      cout <<"Cool XD"<<endl;
		      }else if(get_data =="no"){
		      cout << "*[ Hacktoberfest encourages participation in the open source community,\n which grows bigger every year.\n Complete the 2021 challenge and earn a limited edition T-shirt."<< endl;}else{
			      cout << "just enter yes or no" << endl;
		      }		
	      }
};
int main(int argc,char*argv[]){
  cout << "\n______________________________" << endl;
  cout << "HacktoberFest User registration" << endl;
  cout << "--------------------------------\n" << endl;
  cout << "Need to get Details about HacktoberFest ? --(if you want type yes and dont want type no)" << endl;
  string input_one;
  cin >> input_one;
  hackTober first_user;
  first_user.octoberHack(input_one);

}
