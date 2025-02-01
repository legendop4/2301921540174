//LEETCODE PROBLEM  Find the Winner of the Circular Game
// LINK : https://leetcode.com/problems/find-the-winner-of-the-circular-game/
// submission detail : https://leetcode.com/submissions/detail/1527818945/

class Solution {
public:
    int jos(int n,int k){
        if(n==1)
            return 0;
        else
            return(jos(n-1,k)+k)%n;
    }

    int findTheWinner(int n, int k) {
        return(jos(n,k)+1);
    }
    
    
};
