# GC Runtime

株式会社 Informatix の製品「GeoConic」「GC Server」等の動作を保証するランタイムです。  
Adoptium/AdoptOpenJDK のソースを取得し、修正を加えたものを公開しています。  
（**オリジナルの Adoptium/AdoptOpenJDK では[下記](#修正済の不具合)の不具合が起こります。**）

- 2024/08/30  
  Adoptium のソースを[8u422_b05_adopt](https://github.com/adoptium/jdk8u/tree/jdk8u422-b05_adopt)に変更しました。  
  ビルド番号：**1.8.0_004**

- 2022/05/12  
  このバージョンから AdoptOpenJDK ではなく Adoptium のソースになりました。  
  [8u332_b09_adopt](https://github.com/adoptium/jdk8u/tree/jdk8u332-b09_adopt)に変更しました。  
  ビルド番号：**1.8.0_003**

- 2021/06/11  
  AdoptOpenJDK のソースを[8u292_b10](https://github.com/AdoptOpenJDK/openjdk-jdk8u/tree/jdk8u292-b10)に変更しました。  
  ビルド番号：**1.8.0_002**

- 2019/10/28  
  AdoptOpenJDK のソースを[8u232_b09](https://github.com/AdoptOpenJDK/openjdk-jdk8u/tree/jdk8u232-b09)に変更しました。  
  今までは AdoptOpenJDK のブランチ名をそのままバージョン名として使用していましたが、「1.8.0_xxx」という表記に変更しました。xxx には数字が入ります。  
  今回のビルドを「**1.8.0_001**」とします。

## 修正済の不具合

各ビルドごとに修正した内容についてまとめています。  
新しいビルドには前のビルドまでの修正も反映されています。

### 1.8.0_003 (8u332_b09)

- Java の脆弱性問題に対応。
- 斜体の文章に角度がついていると、斜体にならず一文字ずつ斜めに傾く問題を修正。  
  ※以前、既知の不具合として載せていた現象で、Adoptium 側で修正されました。
  |修正前|修正後|
  |:---:|:---:|
  |<img src="./角度付きの斜体_修正前.png" width=100%>|<img src="./角度付きの斜体_修正後.png" width=100%>|

### 1.8.0_002 (8u292_b10)

- タッチパネルにおいてピンチイン・インチアウトしても拡大縮小しない問題を修正。

### 1.8.0_001 (8u232_b09)

- 太字で描かれた角度のある文章が、本来の描画位置よりも斜めに描かれてしまう問題を修正。

  |                       修正前                       |                       修正後                       |
  | :------------------------------------------------: | :------------------------------------------------: |
  | <img src="./角度付きの太字_修正前.png" width=100%> | <img src="./角度付きの太字_修正後.png" width=100%> |

### 8u222_b10

- 「ＭＳ ゴシック」等で表示した文字に斜体を適用しても反映されない問題を修正。

  |                  修正前                  |                  修正後                  |
  | :--------------------------------------: | :--------------------------------------: |
  | <img src="./斜体_修正前.png" width=100%> | <img src="./斜体_修正後.png" width=100%> |

- 高解像度の端末において一部の弊社製品を起動すると、文字やボタンが極端に小さく表示されてレイアウトが崩れる問題を修正。

  |                    修正前                    |                    修正後                    |
  | :------------------------------------------: | :------------------------------------------: |
  | <img src="./高解像度_修正前.png" width=100%> | <img src="./高解像度_修正後.png" width=100%> |
