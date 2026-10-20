
#include<bits/stdc++.h>
using namespace std;
bool f(string& s,int k) {

    vector<int>v(26,0);

    for(int i=0; i<s.size(); i++) {
        
        v[s[i]-'a']++;
    }

    int count=0;
    int cnt1=0;
    for(int i=0; i<v.size(); i++) {
        if(v[i]%2!=0) {
            count++;
        }
        if(v[i]==1) {
            cnt1++;
        }
       
          
         
    }

    // if(cnt1==1) return 1;

    if(count-1<=k) {
        return 1;
    }
    return 0;
}

int main () {

      int n;
      cin>>n;

      while(n--) {

        int num;
        int k;
        cin>>num>>k;

        // char arr[num];
         
        // for(int i=0; i<num; i++) {
        //     cin>>arr[i];
        // }
        string s;
        cin>>s;
        bool l=f(s,k);

        if(l) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        
      }

}