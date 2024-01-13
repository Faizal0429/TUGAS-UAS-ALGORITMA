#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int INF = 1e9; // Representasi nilai tak terhingga

// Fungsi untuk mencari jalur perjalanan terpendek
int tsp(int mask, int pos, int n, vector<vector<int> >& dist, vector<vector<int> >& dp) {
    if (mask == (1 << n) - 1) {
        return dist[pos][0]; // Kembali ke titik awal
    }

    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    int ans = INF;

    // Iterasi melalui semua kota
    for (int i = 0; i < n; ++i) {
        if ((mask & (1 << i)) == 0) { // Cek apakah kota belum dikunjungi
            int newMask = mask | (1 << i);
            int newPath = dist[pos][i] + tsp(newMask, i, n, dist, dp);
            ans = min(ans, newPath);
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    int n; // Jumlah kota
    cout << "Masukkan jumlah kota: ";
    cin >> n;

    vector<vector<int> > dist(n, vector<int>(n, 0));

    cout << "Masukkan matriks jarak antar kota:";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> dist[i][j];
        }
    }

    vector<vector<int> > dp(1 << n, vector<int>(n, -1));

    int minDist = tsp(1, 0, n, dist, dp); // Dimulai dari kota 0, mask awal 1 (kota pertama dikunjungi)

    cout << "Jarak terpendek untuk perjalanan penjual keliling: " << minDist << std::endl;

    return 0;
}

