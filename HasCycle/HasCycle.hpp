//
//  HasCycle.hpp
//  HasCycle
//
//  Created by 金心羽 on 2023/3/14.
//

#ifndef HasCycle_hpp
#define HasCycle_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Graph
{
public:
    vector<vector<int>> GL;
public:
    bool HasCycle();
};
#endif /* HasCycle_hpp */
