#include <bits/stdc++.h>
using namespace std;
class StringCalculator
{
    public:
        int add(string numbers)
        {
            int sum=0;
            if(numbers.length()==0){
                return 0;
            }
            for(int i=0;i<numbers.length();i++){
                if(numbers[i]==','){
                    
                    continue;
                }
                else if(numbers[i]>='a' && numbers[i]<='z'){
                    sum+=numbers[i]-'a'+1;
                }
                else{
                    int a=numbers[i]-'0';
                    sum+=a;
                }
            }
            return sum;
        }
};
int main()
{
    StringCalculator obj;
    string numbers;
    cin>>numbers;
    cout<<obj.add(numbers);

    return 0;
}
