#include <iostream>
#include <vector>
#include <string>

void NEXT(const std::string &P, std::vector<int> &next) {
    int k = 0;
    next[0] = 0;
    for (int i = 1; i < P.size(); ++i) {
        while (k > 0 && P[i] != P[k]) {
            k = next[k - 1];
        }
        if (P[i] == P[k]) {
            ++k;
        }
        next[i] = k;
    }
}

std::string::size_type COUNT_KMP(const std::string& S, const std::string &P, std::vector<int> &next){
    std::string::size_type count = 0;
    for(int i = 0; i < S.size(); ++i){
        
    }

}

int main() {

    std::string P = "ABCDABD";
    std::vector<int> next(P.size(), 0);
    NEXT(P, next);
    for (int i = 0; i < next.size(); ++i) {
        std::cout << next[i] << " ";
    }
    return 0;
}