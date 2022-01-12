#include <bits/stdc++.h>

using namespace std;

void create_file(string filename,string file_extension){
    ifstream ftemp;
    ofstream fout;
    ftemp.open("./template/"+file_extension +"template.txt");
    fout.open("./"+(filename +'.' + file_extension));
    fout << ftemp.rdbuf();
    fout.close();
    ftemp.close();   
}

int main(int argc, char* argv[]){
    if(argc-1 < 1){return 1;}
    string name,extension;
    int len = argc-1;
    while(*++argv && len > 0){
        if(len >= 2){
            name = *argv;
            extension = *++argv;
            create_file(name,extension);
            len -= 2;
        }
        else if(len >=1){
            name = *argv;
            create_file(name,"cpp");
            --len;
        }
    }
}