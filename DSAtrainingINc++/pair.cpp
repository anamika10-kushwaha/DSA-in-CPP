
    //1...........
    // pair<int,string>p;
    // //method-01
    // p={101,"prabu"};
    // //method-02
    // // p=make_pair(101,"prabhat");
    // cout<<p.first<<",";
    // cout<<p.second;
    //2..........
    // vector<pair<int,string>>vp;
    // vp.push_back({0,"aarav"});
    // vp.push_back({1,"aditya"});
    // vp.push_back({2,"amit"});
    // vp.push_back({3,"akhil"});
    // vp.push_back({4,"bharat"});
    // for(int i=0;i<vp.size();i++){
    //     pair<int,string>p;
    //     p=vp[i];
    //     cout<<p.first<<",";
    //     cout<<p.second<<",";
    // }
    //3..........
    queue<pair<int,int>>q;
    q.push({0,5});
    q.push({1,4});
    q.push({2,3});
    q.push({3,2});
    q.push({4,1});
    q.push({5,0});
    while(!q.empty()){
        pair<int,int>p;
        p=q.front();
        q.pop();
        cout<<p.first<<","<<p.second;
        cout<<"\n";
    }
    return 0;
}