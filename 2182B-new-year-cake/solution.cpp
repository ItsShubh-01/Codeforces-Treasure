#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--) {
        vector<int> arr(2);
        for(int& i:arr) cin >> i;
        sort(arr.begin(), arr.end());
        vector<int> brr =arr;
        
        int count=0, counter1=1, counter2=2;
        while(true) {
            if(count%2==0) {
                if(arr[0]>=counter1) {
                    count++;
                    arr[0]-=counter1;
                    counter1*=4;
                }
                else break;
            }
            else {
                if(arr[1]>=counter2) {
                    count++;
                    arr[1]-=counter2;
                    counter2*=4;
                }
                else break;
            }
        }
        int count2=0;
        counter1=1, counter2=2;
        while(true) {
            if(count2%2==0) {
                if(brr[1]>=counter1) {
                    count2++;
                    brr[1]-=counter1;
                    counter1*=4;
                }
                else break;
            }
            else {
                if(brr[0]>=counter2) {
                    count2++;
                    brr[0]-=counter2;
                    counter2*=4;
                }
                else break;
            }
        }
        cout << max(count, count2) << '\n';
    }
    return 0;
}