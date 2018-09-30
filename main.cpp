#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

int main()
{
    char more;
    cout << "**** Do you know how many threads does your computer has ? ****" << endl;
    unsigned int nthreads = std::thread::hardware_concurrency();
    cout << "I have found " << nthreads << " Threads do you want to know more ?? S/N" << endl;
    cin>>more;
    if(more =='s' || more =='S')
        system("grep -i --color \"Model Name\" /proc/cpuinfo ");
    else
        cout << "thanks for using me" << endl ;
}