#include <iostream>
using namespace std;

	void deleteG(char * checker)
	{
	 	char* builder = checker;
    
	 	while(*checker!='\0')
	 	{
      if(*checker!='g' && *checker!='G')
	 		{
	 			*builder=*checker;
	 			builder++;
	 		}		
	 	 checker++;
	 	}
    *builder ='\0';
}

int main()
	{
    	char msg[100] = "I recall the glass gate next to Gus in Lagos, near the gold bridge.";
    	deleteG(msg);
    	cout << msg;  // prints   I recall the lass ate next to us in Laos, near the old bride.
  }
 