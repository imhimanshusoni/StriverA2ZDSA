class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int counter=0;
        int temp = N;
        while(temp != 0) {
            int digit = temp % 10;
            if(digit != 0 && N % digit == 0) {
                counter++;
            }
            temp /= 10;
        }
        return counter;
    }
};