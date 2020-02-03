#include "solution.h"
#include <iostream>
#include <unordered_map>

bool Solution::Mapping(std::string from, std::string to){
  int n = from.size();
  int m = to.size();
  if (n == m){
    std::unordered_map<char,char> map1;
    std::unordered_map<char,char> map2;
    for(int i = 0; i < from.size(); i++)
    {
      map1[from[i]] = to[i];
      map2[to[i]] = from[i];
    }
    for(int i = 0; i < from.size(); i++){
      if(map1[from[i]] != to[i] || map2[to[i]] != from[i]){
        std::cout<< "{}" <<std::endl;
        return false;
      }
    }
    std::sort(from.begin(), from.end());
    from.erase(unique(from.begin(), from.end()), from.end());
    std::sort(to.begin(), to.end());
    to.erase(unique(to.begin(), to.end()), to.end());
    std::cout<<"{ ";
    for(int i = 0; i < from.size(); i++)
    {
      std::cout<<"("<<from[i]<<"->"<<to[i]<<") ";
    }
    std::cout<<"}"<< std::endl;
    return true;
  }else{
    std::cout<< "{}" <<std::endl;
    return false;
      
  }
}