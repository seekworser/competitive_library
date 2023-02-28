競プロテンプレート（入出力）

自作クラスを組込み型のtemplate型に割り当てた型のIOをしたいときに、
include順が自作クラス>io.hppの順でないとIOに失敗するため、std/std.hppとファイルを分離

例）
```cpp
using mint = modint;
vector<mint> a;
cin >> a;  // include順がおかしいとここで失敗する
cout << a;  // ここでも失敗する
```