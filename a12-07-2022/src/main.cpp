#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <cstring>
using namespace std;
class emp
		 {
			      int empid;
			      char name[30];
				        
			       int age;
		  public:
			       char dept[15];
			       void get();
			       char *getdept()
			   {
				  return dept;
		     }
		 };
		 void emp::get()
		 {
			      cout<<"\n Enter Employee Id     :  ";
			       cin>>empid;
			       cout<<"\n Enter Name            :  ";
			       cin>>name;
			       cout<<"\n Enter Department Name:(Admin/Sales/IT/Production)  :  ";
			       cin>>dept;
			       cout<<"\n Enter Age   :  ";
			      cin>>age;
		 };

		 
	int main()
{
			 fstream fout;
			 int pid;
			 pid = fork();
			 if (pid==0)
		{

		
	   		   emp e;
			           
			   ofstream fout; // to write i use ofstream
                           fout.open("Employee.txt",ios::in | ios::out | ios::binary | ios::app | ios::ate);
			         
		            if (fout.fail())
	                {
                             cout<<"\n Unable to Open the File!!!";
			     goto err;
			
                       }			 
			   e.get(); // accepting the details from the user
			  fout.write((char *)&e,sizeof(e)); //writing into the file with fout object
			  if(fout.tellp()%sizeof(e)==0)
	     {
		         cout<<"\n Record Inserted !!!"<<endl;
	     }
	                else    
		   
		    {
		        cout<<"\n Insertion Failed !!!"<<endl;
		        goto err;
}		        err;
     					                                                                                                                                                      fout.close();
																							      cout<<"child terminates"<<endl;
																							      }
else
{
	wait((int *)0);
	cout<<"Parent Starts"<<endl;
        fout.open("Employee.text", ios::in);
						
	if(!fout)
	{
	  cout<<"\nUnable to open the file"<<endl;
         	exit(0);
	}

	cout<<"\nRead the file "<<e<<endl;


	fout.close();
	cout<<"Parent terminates"<<endl;
}																	}

	
