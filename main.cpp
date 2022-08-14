// Os Banker Algo
// Os Banker Algo 
// main.cpp 
// main.cpp 
// Os Bankers Algo 
// Created by Zain on 27/06/2021

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void Display () 
{
 cout<<"\t\t _"<<endl;
 cout<<"\t\t] "<<endl;
 cout<<"\t\t|___ "<<endl;
 cout<<"\t\t| | ___| | | |__ 1_) ( "<<endl;
 cout<<"\t\t|____/ | || | | |__ | _)"<<endl;
 cout<<"\n\t\t\t\t\t\t\t\tAlgorithm"<<endl<<endl;
 }
int main()
{
    Display();
    int ResourcesArray[10];
    int Allocate[10][10], Need[10][10];
    int Maximum[10][10]; int availability[10], AvaialbleArray[10];
    
    int totalResources, totalProcessess;
    cout<<"Input total Resources : ";
    cin>>totalResources;
    cout<<"Input total Processes : ";
    cin>>totalProcessess;
    //--------> Setting the Avaialblity of Resources 
    for (int i=0;i<totalResources; i++)
    cout<<"Input the Avaialbilty of Recource "<<i+1<<" ";
    cin>>ResourcesArray[i];
    //-------> Getting the Avaialblity of Resources
    cout<<endl<<"Total Resources "<<endl;
        for (int i=0; i<totalResources; i++)
    cout<<ResourcesArray[i]<<" "; /-------> Allocating Resources to Process 
    cout<<"\n\nAllocation"<<endl; 
    for (int i=0;i<totalProcessess;i++)
        cout<<"\nProcess "<<i+1<<endl;
     for (int j=0; j<totalResources; j++)
        cout<<"Input " << j+1 <<" resource for process allocation : ";
        cin>>Allocate[i][j];
    cout<<endl<<endl;
    for (int i=0;i<totalProcessess; i++){
        
    }
    cout<<"Process "<<i+1<<" ";
    for (int j=0; j<totalResources; j++)
    
        cout<<Allocate[i][j]<<" ";
        }
        cout<<endl; 
    
} cout<<endl<<endl;
//---------->Maximum Need 
    for(int i=0;i<totalProcessess; i++)
    { 
        cout<<"\nProcess " <<i+1<<endl;
        for(int j=0; j <totalResources; j++)
        cout<<"Input max need "<<j+1<<" Resource : ";
        cin>>Maximum[i][j];
        cout<<endl;
    for (int i=0;i<totalProcessess; i++),
    cout<<"Process "<<i+1<<" : ";
    for (int j=0; j<totalResources; j++)
        cout<<Maximum[i][j]<<" ";
        cout<<endl;
