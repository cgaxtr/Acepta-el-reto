#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    while(std::cin >> n){
        int s, f, w, d, bs = 0, bf = 100001, bw = 100001, bd = 100001;
        std::string name, bName;

        for(auto i = 0; i < n; i++){
            std::cin >> s >> f >> w >> d;
            char aux = std::cin.get();
            std::getline(std::cin, name);

            if(s > bs){
                bs = s;
                bf = f;
                bw = w;
                bd = d;
                bName = name;
            }else if(s == bs){
                if(w < bw){
                    bs = s;
                    bf = f;
                    bw = w;
                    bd = d;
                    bName = name;
                }else if(w == bw){
                    if(d < bd){
                        bs = s;
                        bf = f;
                        bw = w;
                        bd = d;
                        bName = name;
                    }else if(d == bd){
                        if(f < bf){
                            bs = s;
                            bf = f;
                            bw = w;
                            bd = d;
                            bName = name;
                        }
                    }
                }
            }
        }

        std::cout << bName << "\n";
    }

    return 0;
}