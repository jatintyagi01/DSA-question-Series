class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int boat =0;
        int left = 0;
        int right = n-1;
        while(left<=right){
            if(people[right]+people[left] <= limit){
                left++;
            }
            right--;
            boat++;
        }
        return boat;
    }
};