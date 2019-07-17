/*
  Created By-
            1. Adarsh Singh (adarsh_2001) 18BCS1168
            2. Abhishek Yadav (abhi_tom) 18BCS1159
*/




#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nc1=0,nc2=0,nc3=0,nc4=0,nc5=0,lc1=0,lc2=0,lc3=0,lc4=0,za=0,zb=0;
ll tag=0, sukh=0;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// Taking Time when the user opens the application. 
	time_t tt;
	struct tm* t;
	tt= time(NULL);
	t= localtime(&tt);

	ll hour=0;
	stringstream s;
	s<<( t->tm_hour);
	s>>hour;
  
    //Only for testing if your system time is not in the range of Mess Timings. 
	  //hour=12; 
	
	if(hour < 12 || hour >= 14 )
	{
		cout<<"Sorry! The timings of the mess is: 12pm to 2 pm."<<endl;
	}

else{

	string sex;
	cin>>sex;       //Enter the sex of the person.
	ll block1, block, st_time;
	
	cin>>block1;	  //Block in which their last class is in.
	st_time = hour ; 
	block=block1;

	/* The starting time of a new batch in our mess is at 12pm and 1pm.
		So, we have to reset the timings to 0 */
    
	if(st_time==12 || st_time==13)  
	{
		 nc1=0,nc2=0,nc3=0,nc4=0,nc5=0,lc1=0,lc2=0,lc3=0,lc4=0,za=0,zb=0;
		 tag=0, sukh=0;
	}
	

	if(sex=="MALE")
	{

		if(block==3 || block==1 || block==7 ||block==8 || block==9 || block==2)
		{
			if (lc1 <100 )
			{
				lc1++; cout<<"LC 1";
			}
			else if(lc2<100)
			{
				lc2++; cout<<"LC 2";
			}
			else if(lc3<100)
			{
				lc3++; cout<<"LC 3";
			}
			else if(lc4<100)
			{
				lc4++; cout<<"LC 4" ;
			}
			else{
				block=6;
			}
		}

		if(block==6 || block==4 || block==5)
		{
			if(nc1 < 100 )
				{
					nc1++; cout<<"NC 1";
				}
			else if(nc2 < 100 )
				{
					nc2++; cout<<"NC 2";
				}
			else if(nc3 < 100 )
			{
				nc3++; cout<<"NC 3";
			}

			else if(nc4<100 )
				{
					nc4++; cout<<"NC 4";
				}

			else if(nc5<100 )
				{
					nc5++; cout<<"NC 5";
				}

			else if(za<100 )
				{
					za++; cout<<"ZAKIR A";
				}

			else if(zb<100 )
				{
					zb++; cout<<"ZAKIR B";
				}		
		}
	} 

	else if(sex =="Female" )
	{
		if(block==1 || block==7 ||block==8 || block==9 || block==2)
		{
			if(sukh < 100)
			{
				sukh++; cout<<"SUKHNA";
			}
			else 
				block=6;
		}
		if(block==6 || block==4 || block==5 || block==3)
		{
			if(tag<100)
			{
				tag++; cout<<"TAGORE";
			}
			else{
				sukh++; cout<<"SUKHNA";
			}
		}
	}
}

	return 0;
}
