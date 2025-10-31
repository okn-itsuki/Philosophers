概要（Overview）
この課題で成功するために知っておくべき重要事項は以下の通りである：

- 1人または複数の哲学者（philosophers）が円卓に座っている。
- テーブルの中央には大きなスパゲッティのボウルがある。
- 哲学者たちは交代で 食事（eating）・思索（thinking）・睡眠（sleeping） を行う。
- 食事中は思索も睡眠もしない。
- 思索中は食事も睡眠もしない。
- そしてもちろん、睡眠中は食事も思索もしない。
- テーブルの上には**フォーク（forks）**もある。
- フォークの本数は哲学者の人数と同じである。
- スパゲッティを1本のフォークだけで食べるのは非現実的なので、
- 哲学者は食事を始める前に左右両方のフォークを取らなければならない。
- 哲学者が食事を終えたら、フォークをテーブルに戻して眠り始める。
- 眠りから覚めたら、再び思索を始める。
- シミュレーションは、ある哲学者が飢えて死亡した時点で終了する。
- すべての哲学者は食べる必要があり、決して飢えてはならない。
- 哲学者たちは互いに通信を行わない。
- 哲学者は他の哲学者が死にかけているかどうかを知らない。
- 言うまでもなく、哲学者たちは死を避けなければならない。

全体規則（Global rules）
あなたは次の2つのプログラムを書く必要がある：
- 必須部分（mandatory part）のプログラム
- ボーナス部分（bonus part）のプログラム（ボーナスを行う場合）
どちらのプログラムも、以下の規則に従わなければならない

禁止事項
- グローバル変数は禁止。

プログラムの引数
- あなたのプログラムは次の引数を取らなければならない
```number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]```

それぞれの意味は次のとおりである
- number_of_philosophers
	哲学者の人数、すなわちフォークの本数でもある
- time_to_die
	哲学者が最後の食事開始時点、またはシミュレーション開始時点から
	time_to_die ミリ秒以内に食事を始めなかった場合、その哲学者は死亡する。
- time_to_eat
	哲学者が食事をするのに要する時間。
	その間、哲学者は2本のフォークを持っていなければならない。
- time_to_sleep
	哲学者が眠る時間。
- number_of_times_each_philosopher_must_eat
	　すべての哲学者がこの回数以上食事を終えた場合、シミュレーションは終了する。
　この引数が指定されない場合は、哲学者が死亡した時点で終了する。

配置と番号
- 各哲学者には 1 から number_of_philosophers までの番号が振られる。
- 哲学者1番は、哲学者 number_of_philosophers 番の隣に座る。
- その他の哲学者N番は、哲学者 (N - 1) 番と (N + 1) 番の間に座る。

ログ出力（About the logs of your program）
	各哲学者の状態変化は、以下の形式で出力しなければならない：

timestamp_in_ms X has taken a fork
timestamp_in_ms X is eating
timestamp_in_ms X is sleeping
timestamp_in_ms X is thinking
timestamp_in_ms X died

- timestamp_in_ms は現在の時刻（ミリ秒）
- X は哲学者の番号に置き換える。

表示ルール
- 表示される状態メッセージは他のメッセージと重なってはならない。
- 哲学者の死亡を知らせるメッセージは、実際の死亡から10ミリ秒以内に表示されなければならない
- もう一度言う：哲学者は死を避けなければならない！

スレッド安全性
- あなたのプログラムには**データ競合（data race）**があってはならない。

必須部分（Mandatory part）
プログラム名：philo
提出ファイル：Makefile, *.h, *.c （ディレクトリ philo/ 内）
Makefileルール：NAME, all, clean, fclean, re

number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]

特定の規則（Specific rules for the mandatory part）
各哲学者は別々のスレッドとして表現しなければならない。

哲学者たちはそれぞれの間に1本ずつフォークを持っている。
　したがって、複数の哲学者がいる場合、
　各哲学者の左側と右側にそれぞれ1本のフォークが存在する。
　もし哲学者が1人しかいない場合、その哲学者は1本のフォークしか利用できない。
- 哲学者がフォークを「複製」してしまうのを防ぐために、
　各フォークの状態はミューテックスで保護しなければならな
# 10/22
