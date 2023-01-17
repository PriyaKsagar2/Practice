/*Given a number N. 
The task is to print the nearest prime if the number is not prime by making it prime by adding prime numbers sequentially from 2. */
//If the input is a prime number, it will be printed as a result else it's nearest prime number will be printed.

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{ 
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    int z,i,k,j,sum=0,flag=0,l,flag1=0,a,m;
    bool isPrime = true;

    //0 and 1 are not prime 
    if(num==1 || num==0)
    {
        isPrime = false;
        cout<<"0 and 1 are not prime.";
    }
    else{
        for(z=2; z<=num/2; ++z)
        {
            if(num%z==0){
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<num<<" is a Prime number.";
    }
    else
    {
        cout<<num<<" is not prime."<<endl; 

        i=num/2;
        for(k=2;k<=i;k++) 
        {
            l=k/2;
            for(j=2;j<=l;j++) 
            {
                flag=0;
                if(k%j==0) 
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) 
            {
                num=num+k;
            }

            a=num/2;
            for(m=2;m<=a;m++) 
            {
                flag1=0;
                if(num%m==0) 
                {
                    flag1=1;

                    break;
                }
            }
            if(flag1==0)
            {
                cout<<"The nearest prime number to given input is: "<<num;
                return 0;
            }
        }
    }
}

