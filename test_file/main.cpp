#include <iostream>
#include "test.h"
#include "add.hpp"
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int all_val = 0;
    cout << " hello" << endl;

    // int *p ,*p1;
    // p[0] = 2;
    // p1[0] = 3;
    float pixdx;

    pixdx = -6.9332569854;
    cout << (int)pixdx <<endl;
    cout << setiosflags(ios::fixed) <<pixdx <<endl;
    /*
    for (size_t i = 0; i < 10; i++)
    {
        ofstream outfile;
        outfile.open("list2.xml", ios::app);
        for(int i = 0; i < 10; i ++){
            cout << i << endl;
            all_val = add_(i,i + 1);
            cout << "all "<< all_val << endl;
            outfile << "all "<< all_val << endl;

        }
        outfile.close();
    }*/
    
    std::vector<pair <int,int> > a_d;
    int x = 720;
    int y = 1280;
    a_d.push_back(make_pair(x,y));
    //cout << a_d[0].first << endl;
    cout << setiosflags(ios::fixed)<<setprecision(7)<< pixdx <<endl;
    return 0;
}

