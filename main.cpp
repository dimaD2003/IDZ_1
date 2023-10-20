#include <iostream>
#include <vector>
#include <string>
 int main(){
    
    //l1

    std:: vector <std::string> L1;
    int n1;
   std::cout<<"Input size of L1"<<std::endl;
    std::cin>>n1;
    if(n1>10000){
        std::cout<<"too many symbol"<<std::endl;
        exit(0);
    }
    for (int i = 0; i < n1; i++)
    {
        std::string str;
        std::cin>> str;
        if(str.length()<=100){
            L1.push_back(str);
        }else{
            std::cout<<"too many lenght of chain"<<std::endl;
            exit(0);
        }
        

    }

    
    //l2
    std:: vector <std::string> L2;
    int n2;
     if(n2>10000){
        std::cout<<"too many symbol"<<std::endl;
        exit(0);
    }
     std::cout<<"Input size of L2"<<std::endl;
    std::cin>>n2;

    for (int i = 0; i < n2; i++)
        {
        std::string str;
        std::cin>> str;
       if(str.length()<=100){
            L2.push_back(str);
        }else{
            std::cout<<"too many lenght of chain"<<std::endl;
            exit(0);
        }
        
    }

    //l1*l2
    std:: vector <std::string> Merge;
    if (!L1.empty() && !L2.empty()) {
    for (auto item1:L1){
        for(auto item2:L2){
            Merge.push_back(item1+item2);
        }
    }
    }else if (L1.empty()) {
        Merge = L2;
    } else {
        Merge = L1;
    }


    std::cout<<"{";
for (auto  item1 : L1) {
        std::cout << item1 <<", ";
    }
     std::cout<<"}"<<std::endl;



    std::cout<<"{";
for (auto  item2 : L2) {
        std::cout << item2 <<", ";
    }
     std::cout<<"}"<<std::endl;



std::cout<<"{";
 for (auto  item : Merge) {
         std::cout << item <<", ";
    }
      std::cout<<"}";
    return 0;
 }