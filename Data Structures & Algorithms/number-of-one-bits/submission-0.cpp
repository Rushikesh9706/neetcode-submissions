class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        
        // Loop runs as long as there are still 1s left in the number
        while (n > 0) {
            // (n & 1) isolates the least significant (rightmost) bit.
            // If it's a 1, we add it to the count.
            if ((n & 1) == 1) {
                count++;
            }
            
            // Shift all bits in 'n' to the right by 1 position.
            // This drops the bit we just checked and brings the next one into position.
            n >>= 1; 
        }
        
        return count;
    }
};