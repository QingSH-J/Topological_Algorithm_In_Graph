//
//  HasCycle.cpp
//  HasCycle
//
//  Created by 金心羽 on 2023/3/14.
//

#include "HasCycle.hpp"




bool Graph::HasCycle()
{
    int size = int(GL.size());
    vector<int> degree(size, 0); //set zero
    queue<int> Q;
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        degree[i] = int(GL[i].size());
        if(degree[i] <= 1)
        {
            Q.push(i);
        }
    }
    while(!Q.empty())
    {
        count ++;
        int root = Q.front();
        Q.pop();
        for(auto NextNode : GL[root])
        {
            degree[NextNode] --;
            if(degree[NextNode] == 1)
            {
                Q.push(NextNode);
            }
        }
    }
    return (count == size);
}
