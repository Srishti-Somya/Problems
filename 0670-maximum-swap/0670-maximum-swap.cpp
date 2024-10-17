class Solution {
public:
    int maximumSwap(int num) {
        vector<int>temp;
    while(num>0){
    int digit=num%10;
    temp.push_back(digit);
    num=num/10;
    } 
    reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size()-1;i++){
        int maxi=temp[i];
        int d=maxi;
        int e=-1;
        for(int j=i+1;j<temp.size();j++){
         if(temp[j]>=maxi){
            maxi=temp[j];
            e=j;
         }
        }
        if(maxi!=d && e!=-1){
            swap(temp[e],temp[i]);
            break;
        }
    }
    int ans=0;
    for(int i=0;i<temp.size();i++){
     ans=ans*10+temp[i];
    } 
    return ans;  
    }
};