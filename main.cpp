#include <iostream>
#include <vector>
#include <string>
 int main(){
    
    //l1

    std:: vector <std::string> L1;
    int n1;
    std::cin>>n1;
    for (int i = 0; i < n1; i++)
    {
        std::string str;
        std::cin>> str;
        L1.push_back(str);

    }
    //l2
    std:: vector <std::string> L2;
    int n2;
    std::cin>>n2;

    for (int i = 0; i < n1; i++)
        {
        std::string str;
        std::cin>> str;
        L2.push_back(str);
        
    }

    //l1*l2
    std:: vector <std::string> Merge;
    for (auto item1:L1){
        for(auto item2:L2){
            Merge.push_back(item1+item2);
        }
    }

    
 for (const std::string& chain : Merge) {
        std::cout << chain << std::endl;
    }
    return 0;
 }