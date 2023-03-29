以下の離散対数問題を解く。
 （計算量$\sqrt{p}$）

> $x^k \equiv y \ (\mod{p})$となる最小のkを求めよ

# アルゴリズムの概要

### 1. baby step
$m = \left\lceil \sqrt{\varphi (p)} \right\rceil$とする。
$x^0, x^1, \cdots x^{m-1}$を事前計算する。

### 2. giant step
$r = x^{-m}$を計算し、$y r^a$が事前計算した
$x^0, x^1, \cdots x^{m-1}$に現れるまでaを増やしていく。

### 3. 出力
$k = ma + b$を出力する。