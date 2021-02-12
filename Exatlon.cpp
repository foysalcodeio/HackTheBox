#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <iterator>


using namespace std;

int main() {

    vector<int>ascii_vals{1152, 1344, 1056, 1968, 1728, 816, 1648, 784, 1584, 816, 1728, 1520, 1840, 1664, 784, 1632, 1856, 1520, 1728, 816, 1632, 1856, 1520, 784, 1760, 1840, 1824, 816, 1584, 1856, 784, 1776, 1760, 528, 528, 2000};
    /*
   for(int i=0; i<ascii_vals.size(); i++){

        ascii_vals.push_back(i);
   }*/

    cout << "Final result is : ";
    for (auto i = ascii_vals.begin(); i != ascii_vals.end(); ++i) {
       // cout << *i/16 << " ";
       char c = static_cast<char>(*i/16);
       cout << c;
    }
    return 0;
}
