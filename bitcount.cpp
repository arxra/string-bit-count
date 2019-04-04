#include <iostream>
#include <string>
#include <stdlib.h>
#include <climits>

int main(int args, char ** argv){
    if (args < 2)
        std::cout << "Not enough arguemnts" << std::endl;


    std::string w1 = argv[1];
    std::string w2 = argv[2];
    int count = 0;

    char a,b;
    for(int i =0; i< w1.length(); i++){
        a = w1[i];
        b = w2[i];
        for(int ii =0; ii< sizeof(char)*CHAR_BIT;ii++){
            if(((a >> ii) & 1) == ((b >> ii) & 1))
                count++;
        }
    }

    std::cout << "Equal bits: " << count << std::endl;



    return 0;
}
