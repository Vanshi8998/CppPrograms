#define pii pair<lli,lli>
#define ff first
#define ss second
#define M 998244353
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    int k;
    cin>>k;
    while(k--){
        int j = 1;
        vector<int>temp;
        for(int i = 1; i < v.size()-1; i++){
            if(v[j+1] - v[j-1] > v[i+1] - v[i-1]){
                j = i;
            }
        }
        for(int i = 0; i < v.size(); i++){
            if(i != j){
                temp.push_back(v[i]);
            }
        }
        v = temp;
    }
    int j = 1;
    vector<int>temp;
    for(int i = 1; i < v.size(); i++){
        if(v[j] - v[j-1] < v[i] - v[i-1]){
            j = i;
        }
    }
    cout<<v[j] - v[j-1];
    return 0;
}

