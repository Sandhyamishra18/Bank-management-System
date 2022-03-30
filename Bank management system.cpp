#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
void showdata()
{
	
	char arrshow[]={'B','A','N','K',' ','M','A','N','A','G','E','M','E','N','T',' ','S','Y','S','T','E','M'};
	cout<<"\n\n\n\n\n\n\t\t\t";
	for(int i=0;i<25;i++)
	{
		cout<<arrshow[i];
		Sleep(500);
		
	}
	system("CLS");
	
}
void choice()
{
	cout<<endl;
	cout<<"PRESS..!!"<<endl;
	cout<<"1. Create new account"<<endl;
	cout<<"2. Update information of existing account"<<endl;
	cout<<"3. Check the details of an existing account"<<endl;
	cout<<"4. For transactions"<<endl;
	cout<<"5. Remove existing account"<<endl;
	cout<<"6. View customers list"<<endl;
	cout<<"7. Exit"<<endl;
}

class bank{
	private:
		string arr[20];
		string arr1[20];
		string arr2[20];
		string arr3[20];
		string arr4[20];
		string arr5[20];
		int arr6[20];
		int a;
	public:
		bank()
		{
			a=0;
		}
		void data(int x)
		{
			
			if(x==1)
			{
				int b=0;
				cout<<"How many accounts do you wanted to create"<<endl;
				cin>>b;
				
				if(a==0)
				{
					a=a+b;
				for(int i=0;i<b;i++)
				{
					cout<<"\n\t----Enter Data----"<<endl<<endl;
				cout<<"Enter name of person: ";
				cin>>arr[i];
				cout<<"Enter last name of person: ";
				cin>>arr1[i];
				cout<<"Enter phone number: ";
				cin>>arr2[i];
				cout<<"Enter email: ";
				cin>>arr3[i];
				cout<<"Enter username: ";
				cin>>arr4[i];
				cout<<"Enter password: ";
				cin>>arr5[i];
				cout<<"Transaction: ";
				cin>>arr6[i];
			    }
			    cout<<"Creating new account please wait";
			    for(int i=0;i<5;i++)
			    {
			    	cout<<".";
			    	Sleep(500);
				}
				
			    Sleep(3000);
			    system("CLS");
			    cout<<"New Accounts is Created..!!"<<endl;
			  }
			  else{
			  	for(int i=a;i<a+b;i++)
				{
					cout<<"\n\t----Enter Data----"<<endl<<endl;
				cout<<"Enter name of person: ";
				cin>>arr[i];
				cout<<"Enter last name of person: ";
				cin>>arr1[i];
				cout<<"Enter phone number: ";
				cin>>arr2[i];
				cout<<"Enter email: ";
				cin>>arr3[i];
				cout<<"Enter username: ";
				cin>>arr4[i];
				cout<<"Enter password: ";
				cin>>arr5[i];
				cout<<"Transaction: ";
				cin>>arr6[i];
			    }
			    cout<<"Creating new account please wait";
			    for(int i=0;i<5;i++)
			    {
			    	cout<<".";
			    	Sleep(500);
				}
				
			    Sleep(3000);
			    system("CLS");
			    cout<<"New Accounts is Created..!!"<<endl;
			    a=a+b;
			  }
			  }
				
			
			else if(x==2)
			{
				if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else{
					string username;
				cout<<"Enter username which you want to update"<<endl;
				cin>>username;
				for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
					cout<<"\t\n---Old Data---"<<endl<<endl;
					cout<<"Name: "<<arr[i]<<endl;
					cout<<"Last name: "<<arr1[i]<<endl;
					cout<<"Phone: "<<arr2[i]<<endl;
					cout<<"Email: "<<arr3[i]<<endl;
					cout<<"Username: "<<arr4[i]<<endl;
					cout<<"Password: "<<arr5[i]<<endl;
					cout<<"Transaction: "<<arr6[i]<<endl;
					cout<<endl;
				cout<<"Enter new name: ";
				cin>>arr[i];
				cout<<"Enter last name: ";
				cin>>arr1[i];
				cout<<"Enter phone number: ";
				cin>>arr2[i];
				cout<<"Enter email: ";
				cin>>arr3[i];
				cout<<"Enter username: ";
				cin>>arr4[i];
				cout<<"Enter password: ";
				cin>>arr5[i];
				cout<<"Transaction: ";
				cin>>arr6[i];
					
				}
			}
		}
		}
			else if(x==3)
			{
				if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else{
				string username;
				cout<<"Enter username"<<endl;
				cin>>username;
				for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
					cout<<"\n\t----Data----"<<endl<<endl;
					cout<<"Name: "<<arr[i]<<endl;
					cout<<"Last name: "<<arr1[i]<<endl;
					cout<<"Phone: "<<arr2[i]<<endl;
					cout<<"Email: "<<arr3[i]<<endl;
					cout<<"Username: "<<arr4[i]<<endl;
					cout<<"Password: "<<arr5[i]<<endl;
					cout<<"Transaction: "<<arr6[i]<<endl;
				}
			}
			}
		}
			else if(x==4)
			{
				if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else{
				string username;
				cout<<"Enter username of account in which you want to transaction"<<endl;
				cin>>username;
					for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
					cout<<"\t\n----Data----"<<endl<<endl;
					cout<<"Name: "<<arr[i]<<endl;
					cout<<"Last name: "<<arr1[i]<<endl;
					cout<<"Phone: "<<arr2[i]<<endl;
					cout<<"Email: "<<arr3[i]<<endl;
					cout<<"Username: "<<arr4[i]<<endl;
					cout<<"Password: "<<arr5[i]<<endl;
					cout<<"Transaction: "<<arr6[i]<<endl;
				}
			}
				int press;
				cout<<"Press 1 for deposit"<<endl;
				cout<<"Press 2 for withdraw"<<endl;
				cin>>press;
				if(press==1)
				{
				
				for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
						int money,sum=0;
					cout<<"Existing money: "<<arr6[i]<<endl;
					cout<<"Enter money which you want to add"<<endl;
					cin>>money;
					sum=arr6[i]+money;
					arr6[i]=sum;
					 cout<<"\n"<<money<<"Rs is added in this account"<<endl<<endl;
				}
				
		    	}
		    	
		      }
		      else if(press==2)
		      {
		      		for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
					int money,sub=0;
					cout<<"Existing money: "<<arr6[i]<<endl;
					cout<<"Enter money which you want to withdraw"<<endl;
					cin>>money;
					sub=arr6[i]-money;
					arr6[i]=sub;
				    cout<<"\n"<<money<<"Rs is withdraw from this account"<<endl<<endl;
					
					
				}
				
		    	}
		      	
			  }
			  
			  else 
			  {
			  	cout<<"Invalid input"<<endl;
			  }
		}
			}
			else if(x==5)
			{
				if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else{
				int press;
				cout<<"Press 1 to delete specific record"<<endl;
				cout<<"Press 2 to delete full record"<<endl;
				cin>>press;
				if(press==1)
				{
					string username;
			    	cout<<"Enter username of account  which you want to delete"<<endl;
				    cin>>username;
				    for(int i=0;i<a;i++)
				    {
			     	if(username==arr4[i])
			    	{
						for(int j=i;j<a;j++)
						{
						arr[j]=arr[j+1];
						arr1[j]=arr1[j+1];
					    arr2[j]=arr2[j+1];
						arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
						arr6[j]=arr6[j+1];
				    	}
				    	a--;
				        cout<<"Required record is deleted..!!"<<endl;
			    	}
		    	    }
		    		
		     	}
				else if(press==2)
				{
						a=0;
						cout<<"All records are deleted"<<endl;
		    	}
				else{
						cout<<"Invalid input"<<endl;
				   	}
				   		
				   	
				
			}
		}
			else if(x==6)
			  {
			  	if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else{
			  	cout<<"\t\t----Data----"<<endl<<endl;
			  	for(int i=0;i<a;i++)
				{
				cout<<"\nData of person "<<i+1<<endl<<endl;
					cout<<"Name: "<<arr[i]<<endl;
					cout<<"Last name: "<<arr1[i]<<endl;
					cout<<"Phone: "<<arr2[i]<<endl;
					cout<<"Email: "<<arr3[i]<<endl;
					cout<<"Username: "<<arr4[i]<<endl;
					cout<<"Password: "<<arr5[i]<<endl;
					cout<<"Transaction: "<<arr6[i]<<endl;
				
			}
			  }
		}
			  else if(x==7)
			  {
			  	cout<<"Thank You..!!"<<endl;
			  	exit(0);
			  }
			else{
				cout<<"Invalid input"<<endl;
			}
		}
	
		
};
main()
{
showdata();
    
	bank b;
   
	int press;
	while(true)
	{
	choice();
	
	cin>>press;
	system("CLS");
	if(press==1)
	{
		b.data(press);
		
	}
	else if(press==2)
	{
		b.data(press);
	}
	else if(press==3)
	{
		b.data(press);
	}
	else if(press==4)
	{
		b.data(press);
	}
	else if(press==5)
	{
		b.data(press);
	}
	else if(press==6)
	{
		b.data(press);
	}
	else if(press==7)
	{
		b.data(press);
	}
	else{
		cout<<"Invalid input"<<endl;
	}
   }
}
