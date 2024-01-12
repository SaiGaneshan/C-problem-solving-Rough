#include<iostream>
using namespace std;
#include<cmath>

void bobblesortbig_small(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }

    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

void bobblesortsmall_big(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }

    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

int chocolateproblem(int amount)
{
    int chocolate=0;
    int wrappers=0;
    while(amount>0)
    {
        chocolate++;
        amount--;
        wrappers++;
        if(wrappers==3)
        {
            amount++;
            wrappers-=3;
        }
        else if(wrappers<3 && amount==0)
        {
            return chocolate;
        }
        else
        {
            continue; 
        } 
        
    }
}
int cube(int number)
{
    return number*number*number;
}
bool armstrong(long number)
{
    if(number>0)
    {
        long original_number = number;
        long armstrong_number=0;
        while(number>0)
        {
            long last_digit=number%10;
            armstrong_number+=pow(last_digit,3);
            number=number/10;
        }
        return (int)armstrong_number==(int)original_number;
      
    }
    else
    {
        cout<<"enter a valid output"<<endl;
    }
}

int reverse(int number)
{
    int r=0;//consider r is the reversed number
    int original_number = number;
    while(number>0)
    {
        int last_digit  = number%10;
        r = r*10+last_digit;
        number=number/10;
    }
    return r;
}

struct Q_4
{
    int no_of_days;
    int remaining_amount;
};
Q_4 question_4(int amount,int spent_per_day)
{
    Q_4 result;
    int days=1;
    int number_of_days=0;
    for(days;days<31 && amount>=spent_per_day;days+=2)
    {
       amount-=spent_per_day;
       number_of_days++;
    }
    int remaining_amount;int no_of_days;
    result.remaining_amount=amount;
    result.no_of_days = number_of_days;
    return result;
}

void checkevenorodd(int number)
{
    if(number>0)
    {
        if(number%2==0)
        {
           cout<<number<<" is a even number!"<<endl;
           return;
        }
        cout<<number<<" is a odd number!"<<endl;
        return;
    }
    else
    {
        cout<<"Enter a valid number!"<<endl;
    }

}

bool checkprimenumber(int number)
{
    if(number==1)
    {
        cout<<"Its not a prime number!"<<endl;
    }
    else
    {
        for(int i=2;i<number;i++)
       {
           if(number%i==0)
           {
                return false;
           }  
        }
    return true;
    }
}

void rangeprimenumber(int start,int end)
{
    for(int i=start;i<=end;i++)
    {
        if(i==1)
        {
            cout<<"its not a prime number =1"<<endl;
        }
        else
        {
            int result = checkprimenumber(i);
            if(result)
            {
                cout<<"its a prime number="<<i<<endl;
            }
            else
            {
                cout<<"its not a prime number = "<<i<<endl;
            } 
        }
    }

}

int main()
{
    //use this to check if a number is even or odd
    /*int number;
    cout<<"Enter the number=";
    cin>>number;
    checkevenorodd(number);*/


    //code to check question 4
    /*int amount,spent_per_day;
    cout<<"The amount that was given and how much was spend in a day are";
    cin>>amount>>spent_per_day;
    Q_4 result = question_4(amount,spent_per_day); 
    cout<<"Remaining amount: "<<result.remaining_amount<<endl;
    cout<<"Number of days that amount can be spent in a month: "<<result.no_of_days<<endl;*/

    /*int number;
    cout<<"number=";
    cin>>number;
    int result=reverse(number);
    cout<<result;*/


    /*for(long number=1;number<2000;number++)
    {
        bool result=armstrong(number);
        if(armstrong(number))
        {
            cout<<"Its a armstrong number,number="<<number<<endl;
        }
        /*else
        {
            continue;
        }

    }*/
//code for chocolate problem
   /* int amount;
    cout<<"amount = ";
    cin>>amount;
    int result = chocolateproblem(amount);
    cout<<"the total chocolate with that amount is "<<result<<endl;
    return 0;
    */

//code for bubble sort algorithms
int n;
cout<<"n=";
cin>>n;
int arr[n];
cout<<"arr[n]=";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
bobblesortbig_small(arr,n);
cout<<endl;
bobblesortsmall_big(arr,n);

}