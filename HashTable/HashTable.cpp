#include <cstdlib>
#include <iostream>
#include <string>
#include "Hash.h"

using namespace std;

int main(int argc, char** argv){
    int index;
    Hash hashObj;
    
    index = hashObj.Hash("Paul");
    cout << index << endl;
    return 0;
}