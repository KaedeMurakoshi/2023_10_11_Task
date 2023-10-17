// 2023_10_11_Task.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

// Q.1 画面上に自分の今年のお年玉をもらった金額を円マーク表記で表示するプログラム
//int main()
//{
//    int money = 0;
//    cout << "いくらもらいましたか？ > " << flush;
//    cin >> money;
//    cout << endl;
//    printf("\\%d", money); // バックスラッシュと\は同じ
//}

// Q.6 入力した人数分だけテストの点数を記録し、その平均点を求めるプログラム

int main()
{
    int* scoreArray;
    int size = 0;
    float sumScore = 0;

    cout << "人数を入力 > " << flush;
    cin >> size;

    scoreArray = new int[size];

    if (scoreArray != NULL)
    {
        for (int i = 0; i < size; ++i)
        {
            printf("%d番目の生徒の点数を入力 > ", i + 1);
            cin >> scoreArray[i];
            sumScore += scoreArray[i];
        }

        float averageScore = sumScore / size;

        printf("平均点は%.1lf点です。", averageScore);

        // 解放
        delete[] scoreArray;
        scoreArray = NULL;
    }
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
