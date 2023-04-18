座標圧縮ライブラリ

## (constructor) (const vector<Key> &_coordinates, Val default_val)
_coordinatesをキーとするベクトルを作成する。$O(\log N)

## int pos (const Key key)
keyの座標を返す

## Val &operator[](const Key key)
keyの座標の値を返す
**Valにはbool型を用いないこと。（vector<bool>の各要素の参照はbool&ではないため）**

## Key &key_at(const Key key)
keyの座標の値を返す。更新不可。
