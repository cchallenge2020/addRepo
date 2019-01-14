#include<iostream>
using namespace std;
void printPatt(int n);
int main(){

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N {0};
    cin>>N;
    printPatt(N);

}
void printPatt(int n)
{
    //write your code here
    static int e ;
    for(int i{0}; i<n; i++)
    {
        const int t {e+i+1};
        for(int j {1}; j<=i+1; j++)
        {
            e++;
            if(i%2==0)
                cout<<e;
            else
            {
                cout<<t+1-j;
            }
        }
        cout<<endl;
    }

}