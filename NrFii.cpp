    #include <vector>
    #include <fstream>

    using namespace std;

    ifstream cin("nrfii.in");
    ofstream cout("nrfii.out");

    vector <int> G[101];

    int n , x , k , T[101] , maxi;

    int main()
    {
        cin >> n;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> T[i];
            if(T[i] != 0)
                G[T[i]].push_back(i);

        }
        for(int i = 1 ; i <= n ; i++)
        {
            int cnt = 0;
            for(auto j:G[i])
                cnt++;
            if(cnt > maxi) maxi = cnt;
        }

        for(int i = 1 ; i <= n ; i++)
        {
            int cnt = 0;
            for(auto j:G[i])
                cnt++;
            if(cnt == maxi) cout << i << " ";
        }
    }