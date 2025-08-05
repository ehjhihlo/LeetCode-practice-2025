class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0;
        
        for (int i=0; i<fruits.size(); i++) {
            bool found = false;
            for (int j=0; j<baskets.size(); j++) {
                if (fruits[i] <= baskets[j]) {
                    baskets.erase(baskets.begin()+j);
                    found = true;
                    break;
                }
            }
            if (!found) count++;
        }

        return count;
    }
};
