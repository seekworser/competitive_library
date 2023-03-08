ACL利用UnionFindライブラリ
出力用関数でデバッグできるようにする。
現状ACLの`group()`がconst methodではないため、constの`group_const()`methodを作りdebug出力に対応する。
