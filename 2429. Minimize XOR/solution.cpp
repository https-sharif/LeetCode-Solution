class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int cnt = 0;
        while(num2) {
            cnt += num2 & 1;
            num2 >>= 1;
        }

        int temp = num1;

        int msb = 0;
        while(temp) {
            msb++;
            temp >>= 1;
        }

        int ans = 0;

        while(cnt && msb >= 0) {
            if((num1 & (1 << msb))) {
                ans |= (1 << msb);
                cnt--;
            }
            msb--;
        }

        int shift = 0;
        while(cnt) {
            if((ans & (1 << shift)) == 0) {
                ans |= (1 << shift);
                cnt--;
            }
            shift++;
        }

        return ans;
    }
};
