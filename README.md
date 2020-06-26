# Cgame
一些用C语言编写的小游戏, 大多数都是在控制台上实现基本功能  
代码极短, 可玩性高, 哪个初学者不想在黑漆漆的控制台玩游戏呢?  
仅支持windows下运行, 移植其他平台可作为参考代码   
代码均在Visual Studio 2017编译通过(除了部分代码有说明)  

使用说明:
1. .c文件, 复制粘贴即可使用，或者直接运行.exe文件(仅win10下能运行)
2. 如果是windows7的话, mode命令后面lines的值要加1, 不然会闪的很快
3. 如果是用其他的编译器&IDE, 大多都能编译通过, 不通过就需要改一点细节
4. 注意后缀一定是.c才行,是.cpp话会有很多错误,比如说某些强制转换
5. 如果编译还是不通过可以加q群反馈

目前在bilibili和抖音发布有关视频(抖音那个似乎凉透了,不更新了,没什么好看的)  
bilibili ID:你已经是大佬啦快和萌新们聊天吧[(传送门)](https://space.bilibili.com/345058248)  
抖音 ID:RainbowRoad  
如果想要交流的话, 欢迎加入作者的QQ交流群: 957964924
* * *
## 相关视频
目前均在bilibili发布视频  
1. [av85632867](https://www.bilibili.com/video/av85632867/) 33行实现俄罗斯方块
2. [av85378627](https://www.bilibili.com/video/av85378627/) 18行实现贪吃蛇
3. [av87216317](https://www.bilibili.com/video/av87216317/) 29行实现扫雷
4. [av89592082](https://www.bilibili.com/video/av89592082/) 28行实现2048
5. [av89165167](https://www.bilibili.com/video/av89165167/) 完整功能的扫雷
6. [av90604701](https://www.bilibili.com/video/av90604701/) 用窗口组成的贪吃蛇
7. [BV1rZ4y1W7kn](https://www.bilibili.com/video/BV1rZ4y1W7kn) 24行实现走迷宫
## 关于代码的相关声明
本存储库使用MIT开源协议  
代码主要用于交流学习使用,二次创作或商用都可以的,注明原作者就行,最好可以跟我说一下...  
* * *
## 目前所有的游戏
1. **俄罗斯方块(Tetris)**
    * chaos版本:11行,835个字符,gcc编译通过,实现基本功能
    * tiny版本:30行,减缓下坠速度&进一步压缩
    * tiny版本:33行,压缩&实现基本功能
    * annotation版本:在33行的基础上增加注释  
2. **贪吃蛇(GluttonousSnake)**
    * chaos版本:5行,358个字符,进一步压缩
    * chaos版本:6行,406个字符,gcc编译通过,实现基本功能  
    * tiny版本:15行,可穿墙&进一步压缩
    * tiny版本:18行,压缩&实现基本功能
    * standard版本:47行,展开&去闪烁
    * add版本:67行,增加了完善&拓展功能
    * screen版本:99行,用窗口组成贪吃蛇
3. **扫雷(Minesweeper)**
    * tiny版本:29行,压缩&实现基本功能
    * keyboard版本:25行,进一步压缩&优化交互
    * mouse版本:236行,完善了标志等功能，以及界面优化
4. **2048**
    * tiny版本:28行，压缩&实现功能，有最基础的计分板
5. **窗口游戏(WindowGame)**
    * Snake:贪吃蛇
    * Tetris:俄罗斯方块
    * 2048:2048
6. **走迷宫(Maze)**
    * 26行，实现基本功能&去闪烁
7. **敬请期待Coming soon...**
* * *
## 更新日志
* 2020.6.26 扫雷(keyboard 25行)
* 2020.6.19 贪吃蛇(chaos 5行)
* 2020.6.13 俄罗斯方块（tiny 30行）（chaos 11行）
* 2020.6.13 贪吃蛇（tiny 15行）（chaos 6行）(偷偷更新~)
* 2020.4.30 窗口游戏（源码）
* 2020.4.24 走迷宫（26行）
* 2020.3.18 把之前的代码全部生成.exe可执行程序，归纳在exe文件夹中
* 2020.3.3 窗口游戏（.exe）
* 2020.2.21 贪吃蛇（screen版本）
* 2020.2.17 :2048（28行）
* 2020.2.15 扫雷（236行）
* 2020.2.6 扫雷（29行）
* 2020.2.3 创建了新的文件夹Older version归纳旧版本
* 2020.1.29 俄罗斯方块(2个版本),和一个旧版本38行
* 2020.1.28 贪吃蛇(3个版本)
* 2019.12.27 俄罗斯方块(48行)
* 2019.12.15 贪吃蛇(25行)
