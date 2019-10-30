# GC Runtime
株式会社Informatixの製品「GeoConic」「GC Server」等の動作を保証するランタイムです。  
AdoptOpenJDKのソースを取得し、修正を加えたものを公開しています。  
（**オリジナルのAdoptOpenJDKでは[下記](#修正済の不具合)の不具合が起こります。**）  

- 2019/10/28  
AdoptOpenJDKのソースを[8u232_b09](https://github.com/AdoptOpenJDK/openjdk-jdk8u/tree/jdk8u232_b09)に変更しました。  
今まではAdoptOpenJDKのブランチ名をそのままバージョン名として使用していましたが、「1.8.0_xxx」という表記に変更しました。xxxには数字が入ります。  
今回のビルドを「**1.8.0_001**」とします。  


## 修正済の不具合
各ビルドごとに修正した内容についてまとめています。  
新しいビルドには前のビルドまでの修正も反映されています。

### 1.8.0_001(8u232_b09)
- 太字で描かれた角度のある文章が、本来の描画位置よりも斜めに描かれてしまう。  

    |修正前|修正後|
    |:---:|:---:|
    |<img src="./角度付きの太字_修正前.png" width=100%>|<img src="./角度付きの太字_修正後.png" width=100%>|


### 8u222_b10
- 「ＭＳ ゴシック」等で表示した文字に斜体を適用しても反映されない。  

    |修正前|修正後|
    |:---:|:---:|
    |<img src="./斜体_修正前.png" width=100%>|<img src="./斜体_修正後.png" width=100%>|

- 高解像度の端末において一部の弊社製品を起動すると、文字やボタンが極端に小さく表示されてレイアウトが崩れる。  

    |修正前|修正後|
    |:---:|:---:|
    |<img src="./高解像度_修正前.png" width=100%>|<img src="./高解像度_修正後.png" width=100%>|


## 既知の不具合
修正されていない不具合です。
- 斜体の文章に角度がついていると、斜体にならず一文字ずつ斜めに傾く。 

    |不具合|本来の表現(Java8)|
    |:---:|:---:|
    |<img src="./角度付きの斜体_不具合.png" width=100%>|<img src="./角度付きの斜体_本来想定されている見た目.png" width=100%>|


