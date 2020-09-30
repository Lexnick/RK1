#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<char> vec;
    std::vector<float> vec1;
    std::string encrypted_text;
    std::cout<<"Enter encrypted text"<<std::endl;
    std::getline(std::cin, encrypted_text);
    int count_space=0;
    for (int n=0; n!=encrypted_text.length(); n++)
    {
        if (encrypted_text[n]==32)
            count_space+=1;
    }

    for (int i=65; i<91;i++) {
        int count = 0;
        for (int n = 0; n != encrypted_text.length(); n++) {
            if (encrypted_text[n] == i)
                count += 1;
        }
        std::cout<< static_cast<char>(i)<<" - "<<static_cast<float>(count) / (encrypted_text.length()-count_space)*100<<std::endl;
    }
    char letter1;
    char letter2;
    bool contine = true;
    int a=0;
    while (contine==true){
        contine=false;
        std::cout<<"Enter the encrypted letter"<<std::endl;
        std::cin>>letter1;
        std::cout<<"Enter the decrypted letter"<<std::endl;
        std::cin>>letter2;
        for (int i=0; i<encrypted_text.length(); i++)
        {
            if (encrypted_text[i]==letter1){
                encrypted_text[i]=letter2;
            }
        }
        std::cout<<"Letters were swapped"<<std::endl;
        std::cout<<"Do u want to continue? Type 1 if yes; 0 if no"<<std::endl;
        std::cin>>a;
        if (a==1){
            contine=true;}
    }
    std::cout<<encrypted_text;
    return 0;
}