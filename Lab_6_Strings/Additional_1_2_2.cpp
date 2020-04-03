//
//  main.cpp
//  addtional_1.2.2
//
//  Created by Vladislav Kremenevskiy on 12/13/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;

#include <cstring>


void replace(string & s, string from, string to);

    
int main(int argc, const char * argv[]) {
    
    string m = "dickhead";
    replace(m, "ck", "xui");
    cout << "Here: " << m << '\n';
    
    return 0;
}

void replace(string & s, string from, string to){
    while(s.find(from) > -1){
        s.replace((int)s.find(from), from.size(), to);
    }
}
