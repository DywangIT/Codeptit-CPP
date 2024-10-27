#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //
// accumulate(v.begin(), v.end(), 0) : tính tổng các phần tử với 0 là giá trị khởi tạo
// max_element : trả về iterater trỏ đến giá trị lớn nhất có giá trị là *max_element
// Transformations : số bước chuyển đổi

int minTransformations(vector<vector<int>> &v){
	int n = v.size();
	vector<int> rowsums(n), colsums(n);

	// Tính tổng mỗi hàng và cột
	for(int i = 0; i < n; i++){
		rowsums[i] = accumulate(v[i].begin(), v[i].end(), 0);
		for(int j = 0; j < n; j++) colsums[j] += v[i][j];
	}

	// Tìm tổng lớn nhất trong hàng và cột
	int maxsum = *max_element(rowsums.begin(), rowsums.end());
	maxsum = max(maxsum, *max_element(colsums.begin(), colsums.end()));

	int Transformations = 0;
	// Thực hiện các phép biến đổi
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int tmp = min(maxsum - rowsums[i], maxsum - colsums[j]);
			rowsums[i] += tmp;
			colsums[j] += tmp;
			Transformations += tmp;
		}
	}

	return Transformations;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<vector<int>> v(n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				int x; cin >>x;
				v[i].push_back(x);
			}
		}
		cout << minTransformations(v) << '\n';
	}
	return 0;
}
