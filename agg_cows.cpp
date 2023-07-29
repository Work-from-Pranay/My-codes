bool ispossible(vector<int> &stalls,int k,int mid){
    int cc=1;
    int n=stalls.size();

    int lp=stalls[0];
    for(int i=0;i<n;i++){
        if(stalls[i]-lp >=mid){
            cc++;
            if(cc==k){
                return true;
            }
            lp=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(ispossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
       mid=s+(e-s)/2;
    }
    return ans;
}