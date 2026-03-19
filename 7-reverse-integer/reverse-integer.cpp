class Solution {
public:
    int reverse(int x) {
        int result=0;

        while(x!=0){
            // x=abs(x);
            int r=x%10;
            x=x/10;
            if (result > INT_MAX/10 || result < INT_MIN/10)  return 0;
            result=result * 10 +r;
        }
        return result;


        
    }
};



// class Solution {
// public:
//     int reverse(int x) {
//         int result = 0;

//         while (x != 0) {
//             int r = x % 10;
//             x = x / 10;

//             if (result > INT_MAX/10 || result < INT_MIN/10)
//                 return 0;

//             result = result * 10 + r;
//         }

//         return result;
//     }
// };