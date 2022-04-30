#include <fstream>
#include <iostream>
#include <string>

int code_syntax(std::string,std::string,int);
std::string int__main(std::string,std::string,int);
void funkcia(std::string,std::string);
void end(std::string);
int funkcia_main(std::string);
void std_syntax(std::string,std::string,int,int);
void string_syntax(std::string,std::string,int);
void include(std::string);
int function_tyupe(std::string,std::string);////////////
void variabl(std::string str,int main_index){

    int index = main_index;
    std::string syntax = "";
    int j = 0;
    int count = 0;
    int end = 0;
    int main_val = 0;
    bool mutq = true,bace = false;
    std::string int_main = "int main";
    std::string int_tip = "int";
    std::string long_tip = "long";
    std::string short_tip = "short";
    std::string double_tip = "double";
    std::string float_tip = "float";
    std::string char_tip = "char";
    std::string bool_tip = "bool";
    std::string cout_qword = "cout";
    std::string cin_qword = "cin";
    std::string endl_qword = "endl";
    std::string vector_qword = "vector";
    std::string string_qword = "string";
    syntax = int__main(str,int_main,index);
    mutq = false;
    int max_value = 0;
    int min_value = 0;
    int end1 = 0;
    int ios = function_tyupe(syntax,int_tip);
       for(int x = ios;x < syntax.length();++x){
        while(syntax[x] == cout_qword[j]){
            ++x;
            ++j;
            ++count;
            if(count == cout_qword.length()){
                end = count + 5;
                std_syntax(syntax,cout_qword,x,end);
                while(syntax[x] != ';' ){++x;}
                ++x;
                end = 0;
                j = 0;
                count = 0;
                if(bace){
                    max_value = x;
                    bace = false;
                }
            }
        }
        while(syntax[x] == cin_qword[j]){
            ++x;
            ++j;
            ++count;
            if(count == cin_qword.length()){
                end = count + 5;
                std_syntax(syntax,cin_qword,x,end);
                while(syntax[x] != ';' ){++x;}
                ++x;
                j = 0;
                end = 0;
                count = 0;
                if(bace){
                    max_value = x;
                    bace = false;
                }
            }
        }
        while(syntax[x] == endl_qword[j]){
            ++x;
            ++j;
            ++count;
            if(count == endl_qword.length()){
                end = count + 5;
                std_syntax(syntax,endl_qword,x,end);
                while(syntax[x] != ';' ){++x;}
                ++x;
                j = 0;
                end = 0;
                count = 0;
                if(bace){
                    max_value = x;
                    bace = false;
                }
            }
        }
        while(syntax[x] == vector_qword[j]){
            ++x;
            ++j;
            ++count;
            if(count == vector_qword.length()){
                std::string sss = "std::vector";
                x = x - 11;
                count = 0;
                j = 0;
                while(syntax[x] == sss[j]){
                    ++x;
                    ++j;
                    ++count;
                }
                if(count != sss.length()){
                    std::cout << "error vector" << std::endl;
                    exit(0);
                }
                while(syntax[x] != ';'){++x;}
                j = 0;
                end = 0;
                count = 0;
                if(bace){
                    max_value = x;
                    bace = false;
                }
            }
        }
        while(syntax[x] == string_qword[j]){
            ++x;
            ++j;
            ++count;
            if(count == string_qword.length()){
                end = count + 5;
                std_syntax(syntax,string_qword,x,end);
                string_syntax(syntax,string_qword,x);
                while(syntax[x] != ';' ){++x;}
                ++x;
                j = 0;
                end = 0;
                if(bace){
                    max_value = x;
                    bace = false;
                }
            }
        }
        count = 0;
        j = 0;
        if(max_value > min_value){
            x = max_value;
            min_value = max_value;
            --x;
        }
    }
    int indexmin = 0;
    bool start = true;
    int min = 0;
    int start1 = ios;
    for(int i = start1;i < syntax.length();++i){
        start = true;
        while(syntax[i] == int_tip[j]){
            ++i;
            ++j;
            ++count;
            if(int_tip.length() == count){
                ++i;
                j = 0;
                count = 0;
                code_syntax(syntax,int_tip,start1);
                while(syntax[i] != ';' ){++i;}
                ++i;
                if(start){
                    indexmin = i;
                    start = false;
                }
            }
        }
        while(syntax[i] == long_tip[j]){
            ++i;
            ++j;
            ++count;
            if(count == long_tip.length()){
                ++i;
                j = 0;
                count = 0;
                code_syntax(syntax,long_tip,start1);
                while(syntax[i] != ';' ){++i;}
                ++i;
                if(start){
                    indexmin = i;
                    start = false;
                }
                break;
            }
        }
        while(syntax[i] == short_tip[j]){
            ++j;
            ++i;
            ++count;
            if(count == short_tip.length()){
                ++i;
                j = 0;
                count = 0;
                code_syntax(syntax,short_tip,start1);
                while(syntax[i] != ';' ){++i;}
                ++i;
                if(start){
                    indexmin = i;
                    start = false;
                }
                break;
            }
        }
        while(syntax[i] == double_tip[j]){
            ++j;
            ++i;
            ++count;
            if(count == double_tip.length()){
                ++i;
                j = 0;
                count = 0;
                code_syntax(syntax,double_tip,start1);
                while(syntax[i] != ';' ){++i;}
                ++i;
                if(start){
                    indexmin = i;
                    start = false;
                }
                break;
            }
        }
        while(syntax[i] == float_tip[j]){
            ++i;
            ++j;
            ++count;
            if(count == float_tip.length()){
                ++i;
                j = 0;
                count = 0;
                code_syntax(syntax,float_tip,start1);
                while(syntax[i] != ';' ){++i;}
                ++i;
                if(start){
                    indexmin = i;
                    start = false;
                }
                break;
            }
        }
        while(syntax[i] == char_tip[j]){
            ++i;
            ++j;
            ++count;
            if(count == char_tip.length()){
                ++i;
                j = 0;
                count = 0;
                code_syntax(syntax,char_tip,start1);
                while(syntax[i] != ';' ){++i;}
                ++i;
                if(start){
                    indexmin = i;
                    start = false;
                }
                break;
            }
        }
        while(syntax[i] == bool_tip[j]){
            ++i;
            ++j;
            ++count;
            if(count == bool_tip.length()){
                ++i;
                j = 0;
                count = 0;
                code_syntax(syntax,bool_tip,start1);
                while(syntax[i] != ';' ){++i;}
                ++i;
                if(start){
                    indexmin = i;
                    start = false;
                }
                break;
            }
        }
        if(min < indexmin){
            i = indexmin;
            min = indexmin;
            --i;
        }
    }
}
int main() {
    char data[10000];
    std::string str = "";
    std::ifstream infile;
    infile.open("afile.dat");
    std::cout << std::endl;
    while(!infile.eof())
    {
        infile.getline(data,10000);
        str += data;
    }
    include(str);
    return 0;
}
int code_syntax(std::string str,std::string str_int,int main_value) {
    int j = 0;
    int count = 0;
    int count1 = 0;
    int cmp = 0 ,cmp1 = 0;
    for(int i = main_value;i < str.length();++i){
        while(str[i] == str_int[j])
        {
            ++i;
            ++j;
            ++count;
            if(count == str_int.length()){
                if(str[i] != ' '){
                    std::cout << "prabel chka  " << std::endl;
                    exit(0);
                }
                ++i;
                while((str[i] >=97 && str[i] <= 122) || (str[i] == '_')){
                    ++count1;
                    ++i;
                }
                if(count1 < 2){
                    std::cout << "mi symbol int 'a'   " << std::endl;
                    exit(0);
                }
                if(str[i]  >= 65 && str[i] <= 90){
                    std::cout << "mecatar chmutqagrel " << std::endl;
                    exit(0);
                }
                while(str[i] != '=' && str[i] != '{' && str[i] != '(' && str[i] != ';' && str[i] != 39 ){
                    if(str[i] != ' '){
                        std::cout << "ches kara tenc gres  " << std::endl;
                        exit(0);
                    }
                    ++i;
                }
                int y = 0;
                bool hamematel = false;
                std::string true1 = "true";
                std::string false1 = "false";
                if(str[i] == '('){
                    ++i;
                    while(str[i] == ' '){
                        ++i;
                    }
                    while(str[i] == true1[y]){
                        ++i;
                        ++y;
                        ++cmp;
                        if(cmp == true1.length())
                            hamematel = true;
                    }
                    if(hamematel){
                        if(cmp != true1.length()){
                            std::cout <<  " error true1 " << std::endl;
                            exit(0);
                        }
                        hamematel = false;
                        while(str[i] == ' '){++i;}
                        if(str[i] != ')'){
                            std::cout << "error true2 " << std::endl;
                            exit(0);
                        }
                        ++i;
                        while(str[i] == ' '){++i;}
                        if(str[i] != ';'){
                            std::cout << " ; chka " << std::endl;
                            exit(0);
                        }
                        if(str[i+1] == ';'){
                            std::cout << "error  ;;  " << std::endl;
                            exit(0);
                        }
                        return 0;
                    }
                    cmp = 0;
                    while(str[i] == false1[y]){
                        ++i;
                        ++y;
                        ++cmp;
                        if(cmp == false1.length())
                            hamematel = true;
                    }
                    if(hamematel){
                        if(cmp != false1.length()){
                            std::cout <<  " error false3 " << std::endl;
                            exit(0);
                        }
                        hamematel = false;
                        while(str[i] == ' '){++i;}
                        if(str[i] != ')'){
                            std::cout << "error false4 " << std::endl;
                            exit(0);
                        }
                        ++i;
                        while(str[i] == ' '){++i;}
                        if(str[i] != ';'){
                            std::cout << " ; chka " << std::endl;
                            exit(0);
                        }
                        if(str[i+1] == ';'){
                            std::cout << "error  ;;  " << std::endl;
                            exit(0);
                        }
                        return 0;
                    }
                    cmp = 0;
                    if(str[i] == 39){
                        i += 2;
                        if(str[i] != 39){
                            std::cout << " (' ') error " << std::endl;
                            exit(0);
                        }
                        ++i;
                    }
                    while(str[i] == ' '){
                        ++i;
                    }
                    if(str[i] == ','){
                        std::cout << " ches kara tenc ',' () " << std::endl;
                        exit(0);
                    }
                    if(str[i] == '.'){
                        std::cout << "keti error '.' " << std::endl;
                        exit(0);
                    }
                    while(str[i] >= 48 && str[i] <= 57 || str[i] == ',' || str[i] == ' ' || str[i] == '.'){
                        if(str[i]  >= 48 && str[i] <= 57){
                            ++cmp;
                        }
                        if(str[i] == '.'){
                            ++cmp1;
                        }
                        if(str[i] == ','){
                            ++cmp1;
                        }
                        ++i;
                    }
                    if(cmp < cmp1){
                        std::cout << "sxal ',' error  1 " << std::endl;
                        exit(0);
                    }
                    cmp = 0;
                    cmp1 = 0;
                    if(str[i] != ')'){
                        std::cout << "error unes ()  " << std::endl;
                        exit(0);
                    }
                    ++i;
                    while(str[i] == ' '){
                        ++i;
                    }
                    if(str[i] != ';'){
                        std::cout << "error () ';'1 chka  " << std::endl;
                        exit(0);
                    }
                    if(str[i+1] == ';'){
                        std::cout << "error  ;;  " << std::endl;
                        exit(0);
                    }
                }
                cmp = 0;
                cmp1 = 0;
                if(str[i] == '{') {
                    ++i;
                    while(str[i] != ';'){
                        while(str[i] == ' '){
                            ++i;
                        }
                        while(str[i] == true1[y]){
                            ++i;
                            ++y;
                            ++cmp;
                            if(cmp == true1.length())
                                hamematel = true;
                        }
                        if(hamematel){
                            if(cmp != true1.length()){
                                std::cout <<  " error true5 " << std::endl;
                                exit(0);
                            }
                            hamematel = false;
                            while(str[i] == ' '){++i;}
                            if(str[i] != '}'){
                                std::cout << "error true6 " << std::endl;
                                exit(0);
                            }
                            ++i;
                            while(str[i] == ' '){++i;}
                            if(str[i] != ';'){
                                std::cout << " ; chka " << std::endl;
                                exit(0);
                            }
                            if(str[i+1] == ';'){
                                std::cout << "error  ;;  " << std::endl;
                                exit(0);
                            }
                            return 0;
                        }
                        cmp = 0;
                        while(str[i] == false1[y]){
                            ++i;
                            ++y;
                            ++cmp;
                            if(cmp == false1.length())
                                hamematel = true;
                        }
                        if(hamematel){
                            if(cmp != false1.length()){
                                std::cout <<  " error false7 " << std::endl;
                                exit(0);
                            }
                            hamematel = false;
                            while(str[i] == ' '){++i;}
                            if(str[i] != '}'){
                                std::cout << "error false8 " << std::endl;
                                exit(0);
                            }
                            ++i;
                            while(str[i] == ' '){++i;}
                            if(str[i] != ';'){
                                std::cout << " ; chka " << std::endl;
                                exit(0);
                            }
                            if(str[i+1] == ';'){
                                std::cout << "error  ;;  " << std::endl;
                                exit(0);
                            }
                            return 0;
                        }
                        cmp = 0;
                        if(str[i] == 39){
                            i += 2;
                            if(str[i] != 39){
                                std::cout << " (' ') error " << std::endl;
                                exit(0);
                            }
                            ++i;
                        }
                        while(str[i] == ' '){
                            ++i;
                        }
                        if(str[i] == ','){
                            std::cout << "  ' , ' tex ches kara dnes " << std::endl;
                            exit(0);
                        }
                        if(str[i] == '.'){
                            std::cout << " error unes '.' " << std::endl;
                            exit(0);
                        }
                        while(str[i] >= 48 && str[i] <=57 || str[i] == ',' || str[i] == '.'){
                            if(str[i] == ','){
                                std::cout << "ches kara gres tenc = {3,2} orinak " << std::endl;
                                exit(0);
                            }
                            ++i;
                        }
                        while(str[i] == ' '){
                            ++i;
                        }
                        if(str[i] != '}')
                        {
                            std::cout << " '}' es nshany " << std::endl;
                            exit(0);
                        }
                        ++i;
                        while(str[i] == ' '){
                            ++i;
                        }
                        if(str[i] != ';'){
                            std::cout << " ;  111piti dnes" << std::endl;
                            exit(0);
                        }
                        if(str[i+1] == ';'){
                            std::cout << "error  ;;  " << std::endl;
                            exit(0);
                        }
                    }
                }
                if(str[i] == '='){
                    ++i;
                    if(str[i] == ';' ){
                        std::cout << "error ;" << std::endl;
                        exit(0);
                    }
                    while(str[i] == ' '){
                        ++i;
                    }
                    while(str[i] == true1[y]){
                        ++i;
                        ++y;
                        ++cmp;
                        if(cmp == true1.length())
                            hamematel = true;
                    }
                    if(hamematel){
                        if(cmp != true1.length()){
                            std::cout <<  " error true9 " << std::endl;
                            exit(0);
                        }
                        hamematel = false;
                        while(str[i] == ' '){++i;}
                        if(str[i] != ';'){
                            std::cout << "error true10 " << std::endl;
                            exit(0);
                        }
                        if(str[i+1] == ';'){
                            std::cout << "error  ;;  " << std::endl;
                            exit(0);
                        }
                    }
                    cmp = 0;
                    while(str[i] == false1[y]){
                        ++i;
                        ++y;
                        ++cmp;
                        if(cmp == false1.length())
                            hamematel = true;
                    }
                    if(hamematel){
                        if(cmp != false1.length()){
                            std::cout << str[i] ;
                            std::cout <<  " error false11 " << std::endl;
                            exit(0);
                        }
                        hamematel = false;
                        while(str[i] == ' '){++i;}
                        if(str[i] != ';'){
                            std::cout << "error false12 " << std::endl;
                            exit(0);
                        }
                        if(str[i+1] == ';'){
                            std::cout << "error  ;;  " << std::endl;
                            exit(0);
                        }
                    }
                    if(str[i] == 39){
                        i += 2;
                        if(str[i] != 39){
                            std::cout << " (' ') error " << std::endl;
                            exit(0);
                        }
                        ++i;
                    }
                    while(str[i] == ' '){
                        ++i;
                    }
                    if(str[i] == '('){
                        ++i;
                        while(str[i] == ' '){
                            ++i;
                        }
                        cmp = 0;
                        while(str[i] == true1[y]){
                            ++i;
                            ++y;
                            ++cmp;
                            if(cmp == true1.length())
                                hamematel = true;
                        }
                        if(hamematel){
                            if(cmp != true1.length()){
                                std::cout <<  " error true13 " << std::endl;
                                exit(0);
                            }
                            hamematel = false;
                            while(str[i] == ' '){++i;}
                            if(str[i] != ')'){
                                std::cout << "error true14 " << std::endl;
                                exit(0);
                            }
                            ++i;
                            while(str[i] == ' '){++i;}
                            if(str[i] != ';'){
                                std::cout << " ; chka " << std::endl;
                                exit(0);
                            }
                            if(str[i+1] == ';'){
                                std::cout << "error  ;;  " << std::endl;
                                exit(0);
                            }
                            return 0;
                        }
                        cmp = 0;
                        while(str[i] == false1[y]){
                            ++i;
                            ++y;
                            ++cmp;
                            if(cmp == false1.length())
                                hamematel = true;
                        }
                        if(hamematel){
                            if(cmp != false1.length()){
                                std::cout <<  " error false15 " << std::endl;
                                exit(0);
                            }
                            hamematel = false;
                            while(str[i] == ' '){++i;}
                            if(str[i] != ')'){
                                std::cout << "error false16 " << std::endl;
                                exit(0);
                            }
                            ++i;
                            while(str[i] == ' '){++i;}
                            if(str[i] != ';'){
                                std::cout << " ; chka " << std::endl;
                                exit(0);
                            }
                            if(str[i+1] == ';'){
                                std::cout << "error  ;;  " << std::endl;
                                exit(0);
                            }
                            return 0;
                        }
                        cmp = 0;
                        if(str[i] == 39){
                            i += 2;
                            if(str[i] != 39){
                                std::cout << " (' ') error " << std::endl;
                                exit(0);
                            }
                            ++i;
                        }
                        while(str[i] == ' '){ ++i;}
                        if(str[i] == ','){
                            std::cout << " ches kara tenc ',' () " << std::endl;
                            exit(0);
                        }
                        if(str[i] == '.'){
                            std::cout << "keti error '.' " << std::endl;
                            exit(0);
                        }
                        while(str[i] >= 48 && str[i] <= 57 || str[i] == ',' || str[i] == ' ' || str[i] == '.'){
                            if(str[i]  >= 48 && str[i] <= 57){
                                ++cmp;
                            }
                            if(str[i] == '.'){
                                ++cmp1;
                            }
                            if(str[i] == ','){
                                ++cmp1;
                            }
                            ++i;
                        }
                        if(cmp < cmp1){
                            std::cout << "sxal ',' error    2   " << std::endl;
                            exit(0);
                        }
                        cmp = 0;
                        cmp1 = 0;
                        if(str[i] != ')'){
                            std::cout << "error unes ()  " << std::endl;
                            exit(0);
                        }
                        ++i;
                        while(str[i] == ' '){
                            ++i;
                        }
                        if(str[i] != ';'){
                            std::cout << "error () ';' chka  " << std::endl;
                            exit(0);
                        }
                        if(str[i+1] == ';'){
                            std::cout << "error ;;  " << std::endl;
                            exit(0);
                        }
                    }
                    while(str[i] == ' '){
                        ++i;
                    }
                    if(str[i] == '{' ){
                        ++i;
                        while(str[i] == ' '){
                            ++i;
                        }
                        while(str[i] == true1[y]){
                            ++i;
                            ++y;
                            ++cmp;
                            if(cmp == true1.length())
                                hamematel = true;
                        }
                        if(hamematel){
                            if(cmp != true1.length()){
                                std::cout <<  " error true17 " << std::endl;
                                exit(0);
                            }
                            hamematel = false;
                            while(str[i] == ' '){++i;}
                            if(str[i] != '}'){
                                std::cout << "error true 18" << std::endl;
                                exit(0);
                            }
                            ++i;
                            while(str[i] == ' '){++i;}
                            if(str[i] != ';'){
                                std::cout << " ; chka " << std::endl;
                                exit(0);
                            }
                            if(str[i+1] == ';'){
                                std::cout << " error ;;  " << std::endl;
                                exit(0);
                            }
                            return 0;
                        }
                        cmp = 0;
                        while(str[i] == false1[y]){
                            ++i;
                            ++y;
                            ++cmp;
                            if(cmp == false1.length())
                                hamematel = true;
                        }
                        if(hamematel){
                            if(cmp != false1.length()){
                                std::cout <<  " error false19 " << std::endl;
                                exit(0);
                            }
                            hamematel = false;
                            while(str[i] == ' '){++i;}
                            if(str[i] != '}'){
                                std::cout << "error false20 " << std::endl;
                                exit(0);
                            }
                            ++i;
                            while(str[i] == ' '){++i;}
                            if(str[i] != ';'){
                                std::cout << " ; chka " << std::endl;
                                exit(0);
                            }
                            if(str[i+1] == ';'){
                                std::cout << " error ;;  " << std::endl;
                                exit(0);
                            }
                            return 0;
                        }
                        cmp = 0;
                        if(str[i] == 39){
                            i += 2;
                            if(str[i] != 39){
                                std::cout << " (' ') error " << std::endl;
                                exit(0);
                            }
                            ++i;
                        }
                        while(str[i] == ' '){++i;}
                        if(str[i] == ','){
                            std::cout << "  ' , ' tex ches kara dnes" << std::endl;
                            exit(0);
                        }
                        if(str[i] == '.'){
                            std::cout << "error unes '.' " << std::endl;
                            exit(0);
                        }
                        while(str[i] >= 48 && str[i]  <= 57 || str[i] == ',' || str[i] == '.'){
                            if(str[i] == ','){
                                std::cout << "ches kara {1,4} shat tiv gres ',' - ov " << std::endl;
                                exit(0);
                            }
                            ++i;
                        }
                        while(str[i] == ' '){
                            ++i;
                        }
                        if(str[i] != '}'){
                            std::cout << " '}' moracel es " << std::endl;
                            exit(0);
                        }
                        ++i;
                        while(str[i] == ' '){
                            ++i;
                        }
                        if(str[i] != ';'){
                            std::cout << " ';' moraceles dnes  " << std::endl;
                            exit(0);
                        }
                        if(str[i+1] == ';'){
                            std::cout << " error ;;  " << std::endl;
                            exit(0);
                        }
                    }
                    while(str[i] != ';'){
                        while(str[i] == ' '){
                            ++i;
                        }
                        if(str[i] == ','){
                            std::cout << " sxal ',' error " << std::endl;
                            exit(0);
                        }
                        while(str[i] >= 48 && str[i] <=57 || str[i] == ',' || str[i] == '.'){
                            if(str[i] == ','){
                                std::cout << "sxal ',' error " << std::endl;
                                exit(0);
                            }
                            ++i;
                        }
                        while(str[i] == ' '){++i;}
                        if(str[i] != ';'){
                            std::cout << " ; 222 piti dnes" << std::endl;
                            exit(0);
                        }
                        if(str[i+1] == ';'){
                            std::cout << "error ;;   " << std::endl;
                            exit(0);
                        }
                    }
                }
            }
        }
        count = 0;
        j = 0;
        count1 = 0;
    }
    return 0;
}
void end(std::string ssr){
    int end_main = ssr.length() - 1;
    if(ssr[end_main] != '}'){
        std::cout << "error main '}' " << std::endl;
        exit(0);
    }
}
void std_syntax(std::string str,std::string str_x,int num,int sum){
    std::string st1 = "std::";
    st1 += str_x;
    int i = (num - sum);
    int j = 0,count = 0;
    if(i < 19){
        st1 = "";
        std::cout << "error str::" << std::endl;
        exit(0);}
    while(str[i] == st1[j]){
        ++i;
        ++j;
        ++count;
        if(count == st1.length()){
            while( str[i] != ';'){
                str.erase(i,1);
                ++i;
            }
            st1 = "";
            return;
        }
    }
    if(count != st1.length()){
        std::cout << " (std::) moraceles " << std::endl;
        exit(0);
    }
    st1 = "";
}
void string_syntax(std::string str,std::string st,int num){
    int count = 0;
    for(int i = num;i < str.length();++i){
        if(str[i] != ' '){
            std::cout << "error string " << std::endl;
            exit(0);
        }
        ++i;
        while(str[i] == ' '){++i;}
        while((str[i] >= 97 && str[i] <= 122) || str[i] == 95){
            ++count;
            ++i;
        }
        while(str[i] >= 65 && str[i] <= 90){
            std::cout << "error mecatar A " << std::endl;
            exit(0);
        }
        if(count < 2){
            std::cout << " error  str mi 'x'" << std::endl;
            exit(0);
        }
        while(str[i] == ' '){++i;}
        if(str[i] != '='){
            std::cout << "error str '=' " << std::endl;
            exit(0);
        }
        ++i;
        while(str[i] == ' '){++i;}
        if(str[i] != 34){
            std::cout << "error 34 " << std::endl;
            exit(0);
        }
        ++i;
        while(str[i] != 34){
            ++i;
        }
        if(str[i] == 34){++i;}
        while(str[i] == ' '){++i;}
        if(str[i] != ';'){
            std::cout << " string error ;  " << std::endl;
            exit(0);
        }
        return;
    }
}
int funkcia_main(std::string str){
    int count = 0;
    int j = 0;
    std::string str1 = "int main";
    std::string str3 = "";
    for(int i = 0;i < str.length();++i){
        while(str[i] == str1[j]){
            str3 += str[i];
            ++i;
            ++j;
            ++count;
            if(str3 == "int main"){
                return i-8;
            }
        }
        if(count){
            count = 0;
            if(str3 != "int main"){
                str3 = "";
            }
        }
        j = 0;
    }
    std::cout << "ERROR main() " << std::endl;
    exit(0);
}

std::string int__main(std::string syntax,std::string int_main,int index){
    int i = index;
    int j = 0;
    int count = 0;
    int end = 0;
    int start = 0;
    while(syntax[i] == int_main[j]){
        ++i;
        ++j;
        ++count;
        if(int_main.length() == count){
            start = i - count;
            end = start;
            count = 0;
        }
    }
    while(syntax[i] == ' '){++i;}
    if(syntax[i] != '('){
        std::cout << "error '(' main " << std::endl;
        exit(0);
    }
    ++i;
    while(syntax[i] == ' '){++i;}
    if(syntax[i] != ')'){
        std::cout << "error ')' main " << std::endl;
        exit(0);
    }
    ++i;
    while(syntax[i] == ' '){++i;}
    if(syntax[i] == ';'){
        std::cout << "main  ; " << std::endl;
        exit(0);
    }
    while(syntax[i] == ' '){++i;}
    if(syntax[i] != '{'){
        std::cout << " error '{' main " << std::endl;
        exit(0);
    }
    start = ((i+1) - end);
    syntax.erase(end,start);
    std::string str2 = syntax;
    return str2;
}
void include(std::string str){
    std::string include1 = "#include <iostream>";
    int j = 0,count = 0,i = 0;
    while(str[i] == include1[j]){
        ++i;
        ++j;
        ++count;
    }
    if(count != include1.length()){
        std::cout << " error #include " << std::endl;
        exit(0);
    }
    end(str);
    int main_index = funkcia_main(str);
    variabl(str,main_index);
    exit(0);
}
int function_tyupe(std::string syntax,std::string int_tip){
    int j = 0,i = 19;
    int count = 0;
 bool funkcia = false;
 int end1 = 0;
        while(syntax[i] == int_tip[j]){
            ++i;
            ++j;
            ++count;
            if(count == int_tip.length()){
                funkcia = true;}
        }
            if(funkcia){
                count = 0;
                while(syntax[i] == ' '){++i;}
                end1 = i;
                while(syntax[i] != '(' && syntax[i+1] != ')' && syntax[i] != ';'){/////////////////////////////////////////
                    ++i;
                }
                if(syntax[i] == ';'){return 19;}
                if(syntax[i] == '(' && syntax[i+1] != ')'){
                    std::cout << "error ():::" << std::endl;
                    exit(0);
                }
                if(syntax[i] == '(' && syntax[i+1] == ')'){
                    funkcia = true;}
                else{
                    j = 0;
                    count = 0;
                    return 19;
                }
                if(funkcia){
                    i = end1;
                    while(syntax[i] >= 97 && syntax[i] <= 122 || syntax[i] == '_' ){
                        ++i;
                        if(syntax[i] == '_'){
                            ++count;
                        }
                    }
                    if(syntax[i] >= 65 && syntax[i] <= 90){
                        std::cout << "Error mecatar" << std::endl;
                        exit(0);
                    }
                    if(count == 0 ) {
                        std::cout << "Error function " << std::endl;
                        exit(0);
                    }
                    while(syntax[i] == ' '){++i;}
                    if(syntax[i] != '(' && syntax[i+1] != ')'){
                        std::cout << "Error function ()" << std::endl;
                        exit(0);
                    }
                    i = i + 2;
                    while(syntax[i] == ' '){++i;}
                    if(syntax[i] != ';'){
                        std::cout << "Error function ;" << std::endl;
                        exit(0);
                    }
                }
              }
        return i;
    }
