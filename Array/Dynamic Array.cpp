#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q, last_ans = 0, x, y;
    int op, num_to_print;

    cin >> n >> q;
    vector <vector<int> > arr(n);

    while (q--) {

        cin >> op >> x >> y;

        switch (op) {
            case 1 :
                {
                    arr[(x ^ last_ans) % n].push_back(y);
                    break;
                }
            case 2:
                {
                    num_to_print = arr[(x ^ last_ans) % n][y % arr[(x ^ last_ans) % n].size()];
                    last_ans = num_to_print;
                    cout << num_to_print << endl;
                    break;
                }
        }
    }

    return 0;
}
