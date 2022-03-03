int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    while(n != 0){
        int aux;
        std::vector<int> v;

        for (auto i = 0; i < n; i++)
        {
           std::cin >> aux;
            v.push_back(aux);
        }
        
        int count = 0;
        if(v[v.size() - 1] < v[0] && v[0] > v[1])
            count++;

        if(v[v.size() - 2] < v[v.size() - 1] && v[v.size() - 1] > v[0])
            count++;
        
        for(auto i = 1 ; i < v.size() - 1; i++){
            if(v[i - 1] < v[i] && v[i] > v[i + 1])
                count++;
        }

        std::cout << count << "\n";

        std::cin >> n;
    }

    return 0;
}