#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    deque<pair<int,int>> deck;
    for(int i = 0; i < n; i++){
        deck.push_back({a[i], i});
    }
    
    int win_idx = p - 1; 
    int count = 0;
    int energy = m;
    
    while(energy > 0){
        
        bool win_in_range = false;
        for(int i = 0; i < k && i < (int)deck.size(); i++){
            if(deck[i].second == win_idx){
                win_in_range = true;
                break;
            }
        }
        
        if(win_in_range){
          
            if(energy < a[win_idx]){
                break;
            }
            energy -= a[win_idx];
            count++;
           
            for(int i = 0; i < (int)deck.size(); i++){
                if(deck[i].second == win_idx){
                    auto card = deck[i];
                    deck.erase(deck.begin() + i);
                    deck.push_back(card);
                    break;
                }
            }
        } else {
            
            int min_cost = INT_MAX, min_pos = -1;
            for(int i = 0; i < k && i < (int)deck.size(); i++){
                if(deck[i].second != win_idx && deck[i].first < min_cost){
                    min_cost = deck[i].first;
                    min_pos = i;
                }
            }
            
            if(min_pos == -1 || energy < min_cost) break;
            
            energy -= min_cost;
            auto card = deck[min_pos];
            deck.erase(deck.begin() + min_pos);
            deck.push_back(card);
        }
    }
    
    cout << count << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}