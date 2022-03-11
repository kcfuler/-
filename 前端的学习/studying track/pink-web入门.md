# 前端入门



## html



### 浏览器分类



内核有所不同



### web标准



- **结构：网页的骨架**——**最重要**✨
- 表现：网页的外观，颜色等

- 行为：类似行为动作



### html标签（上）



##### html语法规范



1. 



- 基本语法概述：html是由尖括号包围的关键词
- html标签通常是成对出现的，称之为双标签

- 有些特殊的标签为单标签



1. 有两种关系 

- - 包含关系
  - 并列关系



##### html基本结构标签



1.  基本结构骨架  

```html
<html>
    <head>
        <title></title>
    </head>
    <body>
        
    </body>
</html>
```



##### 开发工具



- vscode（老朋友）
- view in browser（方便在浏览器里面打开）

- css peek
- auto rename tag（可以直接修改成对的标签）



##### html常用标签



-  三个重要标签  

```html
<!DOCTYPE html>//告诉浏览器当前文档的类型，这里是表示语言版本为html5的版本
<html lang="zh-CN">//英文是"en"
<meta charset="UTF-8"/>//字符集，必须写，不写可能乱码
<head></head>
```

1. 1.  标签语义
      在合适的地方添加标签可以让页面的结构更加清晰 

- - -  标题标签  

```html
<h1></h1>-----<h6></h6>
//分别代表一到六个等级的标题标签
```

- - -  段落标签  

```html
<p></p>//将标签中的内容分段
//🔍html中不论输入多少个空格，在输出时都只有一个
//文本会根据
```

- - -  换行标签  

```html
<br />//给文字换行，间距要比段落之间的间距更小
```

- - -  文本格式化标签  

```html
<strong></strong>//加粗，也可作<b></b>
<em></em>//倾斜<i></i>
<del></del>//删除线<s></s>
<ins></ins>//下划线<u></u>
```

- - -  盒子标签  

```html
<div></div>//大盒子标签，独占一行
<span></span>//小盒子标签，只占比较小的一个部分
```

- - -  图像标签  

```html
<img src=" " />//是一个单标签
//目前已经知道：图片需要和html文件放在一起
//src代表的是属性，包含图片的名称和路径
<img src=" " alt=" " title=" ">
//其中alt表示当图片不能正常显示的时候显示的文本的内容
//title 则是代表着当图片能正常显示时鼠标放到图片上
显示的提示文本内容
```

- - -  图像标签的其它属性  

```html
<img src=" " width= border= height= >
//分别代表给图片设置宽度、边框和高度
//其中单独设置高度和宽度的时候，图像的另一属性
//会随着原图像的比例调整
```

- - -  图像标签的注意点 

- - - - 图像的其他标签一定要放在img的后面，这时后面的内容没有顺序限制

- - -  目录文件夹和根目录
      创建一个文件夹用于存储html和相关的图片、视频等数据的文件夹就叫目录文件夹
      它所对应的直接子目录就是根目录 
    -  相对路径
      其实就是文件相对于html文件的位置  

```html
<!DOCTYPE html>    <head>        <meta charset="UTF-8">        <title></title>      </head><body>    <img src="img.jpg">//直接路径    <img src="images/img.jpg">//相对向里路径    <img src="../img.jpg">//相对向外路径</body>   </html>
```

- - -  绝对路径 

- - - - 图片相对于电脑文件系统本身的位置，一般是通过盘符来定位
      - 另外一种就就是通过网络来进行定位，只要从该网站上存在这个地址，联网之后就可以通过网络获取，但如果对应网站将图片删除之后无法获取了

- - -  超链接  

```html
//语法格式
<a href="网站地址" target="打开方式">文字或者图片内容</a>
//其中打开方式有两种，分别是
target="_self"//代表在本页面来打开页面
target="_blank"//代表在新的页面来打开页面
```

- - - -  超链接的内部链接
        就是在href之后不用加上http//:，就可以直接访问根目录的网页，相对的页面应该也可以 
      -  超链接的空链接
        用#来代表没有确定地址的网站 

- - - -  另外几种超链接  

```html
//下载链接
<a href="1.zip">下载连接</a>
//点击对应位置就可以直接下载
//图片链接
<a href="http//:baidu.com"> <img src="img.jpg"></a>
//点击对应图片就可以跳转到对应的网站
//锚点链接
<a href="#地址"></a>//这里的href相当于一个指针的用法
<h4 id="地址"></h4>//这里的id相当于一个地址
```



##### html中的注释和特殊字符



```html
<!-- 注释字符（两个箭头类型的符号中间就是注释的内容）   --><!-- 不会显示到网页之中 --><!-- 后面是其它特殊字符 -->&nbsp //空格字符（因为在html中多个空格只会显示一个空格）&lt;&gt;//显示的效果就是左括号和右括号包围中间的内容
```



### html标签（下）



-  表格标签
  用于显示、展示数据
  **表格不是用来布局页面的，是用来展示数据的**  

```html
<table>    <th>表头单元格，里面的文字会加粗</th>    <tr><!-- 表格的行-->        <td>表格数据（data base）(其中可以是任何元素)</td>    </tr></table>
```

- -  表格属性
    一般在开发时都是用css来设置表格的形态  

| 属性名      | 属性值              | 描述                              |
| ----------- | ------------------- | --------------------------------- |
| align       | left、center、right | 规定表格的对齐方式                |
| border      | 1或“ ”              | 规定表格是否有边框，默认 “ ” 为无 |
| cellpadding | 像素值              | 规定单元格边缘和内容之间的距离    |
| cellspacing | 像素值              | 规定单元格和单元格之间的距离      |
| width/hight | 像素值              | 单元格的宽/高                     |

- -  表格结构标签
    给表格划分头部区域和主体区域  

```html
<thead>头部区域</thead>  //内部必须含有tr<tbody>主体区域</tbody>
```

- -  合并单元格
    在特殊情况下，需要合并单元格  

```html
rowspan=合并单元格的个数 // 跨行合并colspan=合并单元格的个数 //跨列合并
```

- - -  目标单元格
      跨行：最上侧单元格为目标单元格
      跨列：最左侧单元格为目标单元格 

- -  注意：合并之后需要删除多余的单元格 
  -  基本步骤 

- - -  找到目标单元格 
    -  合并代码 

- - -  删除多余单元格  

### 列表标签

-  表格是用来展示数据的，而列表是用于布局的 



#### 无序列表



-  **最常用**  

```html
<ul>//无序列表的标签    <li></li>  //无序列表的子标签 没有顺序 默认执行有小点</ul>
```

-  **注意点** 

- - ul容器中只能带有
  - 容器

- - 在li容器中可以包含大多数容器
  - 无序列表中会有自带的样式，在css中可以重设



#### 有序列表



表单会按照一定的顺序进行排列



```html
<ol> // 有序列表的标签
    <li></li>
    <li></li>
</ol>
```



- 与无序列表基本相同，只是会给列表内容加上排序



#### 自定义列表



-  语法格式  

```html
<dl>//自定义列表的标签    <dt></dt>//dd的大哥    <dd></dd>//包含于dt中</dl>
```

-  注意事项
  注意什么时候用无序列表，什么时候用有序列表 



### 表单标签



   主要作用是**收集用户信息**



#### 表单的组成



- 表单域---包含所有表单
- 表单控件（表单元素）---输入信息

- 提示信息    --- 给表单元素添加描述（提示用户） 

- - 表单元素



```html
<form action="url地址" method="提交方式" name="表单域名称">//表单域的标签，用于定义表单域，它会把它范围内的数据提交到服务器    </form>
```



-  表单元素 

- - input元素

```html
<input type="属性值" />    // input 是单标签 type可以用于指定不同的属性值eg:<input type="password"> //输入密码
```

- - type属性

| 属性值   | 作用                                                         |
| -------- | ------------------------------------------------------------ |
| text     | 文本框                                                       |
| password | 密码框，用户看不见输入的密码                                 |
| button   | 按钮                                                         |
| radio    | 单选按钮                                                     |
| checkbox | 定义复选框                                                   |
| image    | 定义图像类型的提交按钮                                       |
| file     | 定义输入字段和”浏览“按钮，可以上传文件                       |
| submit   | 自定义提交按钮(可以用value在按钮上显示内容)，可以把内容提交到远程服务器 |
| reset    | 清除表单里面的全部数据                                       |
|          |                                                              |
|          |                                                              |

-  input 的其它属性 

- -  name (由用户自定义)
    可以给 input 的输入值命名，
    如果想要实现多选一，必须要将选择的input的name命名一致 
  -  value(由用户自定义)---显示的内容主要是根据后台人员来使用
    可以在文本框内部显示提示内容 

- -  checked=checked
    单选按钮和复选框设置之后，可以在打开的时候给上一个默认的值 
  -  maxlength=正整数
    规定文本框输入的最大字符数 

- -  label
    可以将输入的范围扩大到相应的文本或文字  

```html
<label for="设置的地址"> fuck</label><input type="text" id="设置的地址">
```

-  **下拉表单元素**
  从多个元素折叠为一个下拉列表  

```html
<select>    <!-- 定义下拉列表-->    <option></option>//选择的内容    <option checked="checked"></option>//也可以用select来表示默认选中状态</select>
```

-  textarea
  文本域元素 
  **注意**：文本域中的文本空格是不会省略的 

```html
<form>//表单的内容    <textarea rows="行数" cols="列数">可以加入预设文本</textarea></form>
```



## css



- 因为html的局限性，所以有css的作用
- 也是一种标记语言，全称为层叠样式表

- 主要用于网页的布局和内容
- 美化html

- 让html专注于结构，样式交给css，结构和样式分离



### 基本结构



```html
<style>
    h1   //选择器，选择需要修改样式的对象 
    {
        属性：值；//属性和值以分号结尾，每一对键值都需要以分号结尾
    }
</style>
```



### 基础选择器



-  标签选择器
  就是结构中的选择方式，选择所有同类标签全部修改
  但无法单独修改 
-  类选择器
  可以实现差异化选择一个标签或者相关几个标签  

```html
<html>
    <head>
        <style>
            .red{
                color:red;
            }
        </style>
    </head>
    <body>
        <p class="red">
            yess
        </p>
    </body>
</html>
```

-  注意点 

1. 1. 类选择器用 "." (英文点号) 进行标识，后面紧跟类名（自定义，由我们自己命名），调用的时候不需要加点
   2. 可以理解为给这个标签起了一个名字来表示

1. 1. 长词组可以使用中横线来为选择器命名
   2. 不要用纯数字，中文等命名，尽量用英文字母表示

1. 1. 命名要有意义，尽量使别人一眼就知道这个类名的目的

-  多类名
  可以给一个标签指定多个类名，实现更多目的
  实际开发中比较常用
  多个类名里面必须用空格分开  

```html
<html>    <head>        <style>            .red {                color:red;            }            .font35 {                font-size: 35px;            }        </style>    </head>    <body>        <p class="red font35">            刘德华        </p>    </body></html>
```

-  id 选择器
  使用方式与类的使用方式类似,**但只能调用一次**  

```html
<html>    <head>        <style>            .box {                width: 100px;                heigth: 100px;            }            #pink             {                color: pink;            }        </style>    </head>    <body>        <div class="box" id="pink">            pink        </div>    </body></html>
```

-  和类选择器的区别 

1. 1. 类选择器可以重复使用，id选择器只能使用一次
   2. id选择器和类选择器的最大区别在于使用次数上

1. 1. 类选择器在修改样式中用得最多，id选择器一般用于页面唯一性的元素上，经常和JavaScript搭配使用

-  **通配符选择器** 



```html
* {更改样式}可以将页面中所有的标签都改为其中定义的样式
```



### 字体属性



#### 3.1 字体系列



   可以将字体更改为不同系列的字体



```html
<html>    <head>        <style>            h2 {                font-family: "Microsoft Yahei";            }        </style>    </head>    <body>            </body></html>
```



-  **注意** 

1. 1.  各种字体之间必须用英文状态的逗号隔开 
   2.  一般情况下，如果有空格隔开的多个单词组成的字体，加引号 

1. 1.  尽量使用系统默认自带字体，保证在任何用户的浏览器中都能正确显示 
   2.  最常见的几个字体： body {
      font-family: 'Microsoft YaHei',tahoma,arial,'Hiragino Sans GB';
      } 



#### 3.2 字体大小



```html
p {font-size: 20px;}
```



- 一般情况下，标题标签需要额外指定字体的大小
- px（像素）大小是我们网页的最常用的单位

- 谷歌浏览器默认的文字大小为16px，我们尽量给一个明确值大小，不要默认大小，避免不同浏览器的显示效果不同
- 可以给 body 指定整个页面文字的大小



#### 3.3 字体粗细



```html
font-weight: xxpx;// 在选中的样式里面设置字体粗细bold //粗体bolder // 加粗体normal //正常的字体 数值是400可以直接写数字，用数字控制数字的粗细font-weight: 800; // 不用加单位
```



可以用重设的方式调整标题的字体



#### 3.4 文字样式



font-style: 字体样式；



- 主要作用是让倾斜的字体不倾斜



#### 3.5 字体的复合样式



```html
<style>    body    {        /* font: font-style font-weight font-size/line-height font-family;*/        font: italic 700 12px 'Microsoft YaHei';     }</style>
```



- 使用时 必须保留的只有 font-size 和 font-family



## 前面的笔记没了 淦！



## css3的高级特性



### 2d转换



#### 二维坐标系



网页中的坐标y轴向下



#### translate语法



```html
transform:translate(x,y);//或者分开写
transform:translateX(n);
transform:translateY(n);
//移动位置
```



- translate最大的优点：不会影响其它元素
- 对**行内元素**没有效果

- translate中的百分比效果是相对于自身元素的大小
- 定义2D转换中的移动，沿着x和y轴移动元素



产生的效果类似于相对定位+z-index提高等级



##### 让一个盒子水平居中



```html
//在定位的前提下position:absolutetop:50%;//这里是父盒子的50%left:50%;transform:translate(-50%,-50%);//这里指的又是自己的50%，实现盒子的水平居中//使用margin:auto auto ;只能实现相对于父盒子水平居中
```



#### 2d旋转之rotate



```html
transform:rotate(ndeg);//也就是顺时针旋转 n degree(角度)；//负数的值就为逆时针旋转
```



- 可以和transition：all 0.3s;这样的渐变效果实现动画的效果



#### 三角的另一个方法



利用一个正方形来旋转 45deg



然后只显示两边，就可以实现一个两边的旋转，得到一个小三角



可以不用字体图标了



#### 设置旋转的中心点



```html
transform-origin:x y;//这里 x y 是指旋转的中心点//默认是50% 50% ，定到中心//可以跟方位名词 left bottom top right 调整到四个角//也可以使用像素（px），像素是相对于坐标原点而言的
```



##### 旋转案例



-  给父盒子加一个伪类元素 
-  给伪类元素加上属性，记住它的显示模式，再给它加上旋转的中心，过渡效果 

-  给父盒子加上一个：hover的选中效果  

```html
.box1:hover::before{}在里面添加你想要的变换效果
```



#### 实现元素的放大和缩小



```html
transform:scale(x,y);//里面给的是数字不跟单位，就是倍数的意思，1就是一倍，2，就是二倍//实现水平、竖直方向的缩放//等比例缩放,对x、y都有效果transform:scale(n);//缩小的方法transform:scale(0.n);transform:scale(0.2,0.3);
```



注意点：



-  与直接修改宽度和高度的区别
  直接修改会导致盒子体积的变化，影响其它盒子的布局 
-  体积变化的时候不会影响其他盒子 

-  **可以设置过渡、可以调整变化的中心点（）**，调整中心的方法和前面的一样 



#### 图片的放大案例



-  可以给父盒子加上一个overflow:hidden;
  防止超出盒子，影响视觉效果 
-  一般情况下这样的变化都会加上一个过渡，看着更舒服 



#### 分页按钮制作



```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        .box ul li{
            float: left;
            margin-left:10px;
            width: 50px;
            height: 50px;
            border: 1px solid pink;
            border-radius: 25px;
            text-align: center;
            line-height: 50px;
            color:aqua;
            font:500 15px;
            text-decoration: none;
            list-style:none;
            transition: all 1s;
        }
        .box ul li:hover{
            transform: scale(1.2);
        }
    </style>
</head>
<body>
    <div class="box">
        <ul>
            <li>1</li>
            <li>2</li>
            <li>3</li>
            <li>4</li>
            <li>5</li>
        </ul>
    </div>
</body>
</html>
```



#### 综合写法



```html
tranform:translate() rotate() transform-origin:x,y scale();//顺序会影响最后的效果当我们有位移和其他的属性的时候，记得位移在前（旋转会改变坐标轴的方向）
```



#### 总结



简单而言就是用css来进行动效交互的设计，**不会对布局有影响**，很方便



### css3动画



可以通过设置多个节点来精确控制一个或一组动画，常用来实现复杂的动画效果



- 相比过渡，动画能实现实现更为复杂的效果



#### 动画的基本使用



1.  定义动画
   动画序列： 

- - 0%是动画的开始，100%是动画的完成。这样的规则就是动画序列
  - 在@keyframes中规定某项css样式，就能创建由当前样式逐渐改为新样式的动画效果

- - 动画是使一种样式逐渐变化为另一种样式的效果。可以改变**任意多的样式**  **任意多的次数**
  - 请用百分比来规定变化发生的事件，或用关键词“from”和“to”，等同于0%和100%。

1.  使用动画 
   **注意**： 

```html
@keyframes name{0%{   样式}100%{   样式}}//定义的动画//在0%和100%之间可以设置不限数量（但是百分比最多只有一百零一个节点。。）的节点//调用 animation-name:name;//动画名称animation-duration:n s;//动画的持续时间
```

1. 1. 动画执行完毕之后里面对应的样式也会消失



#### 动画属性

| 属性                      | 效果                                                         |
| ------------------------- | ------------------------------------------------------------ |
| [@keyframes ]()           | 定义动画                                                     |
| animation                 | 所有动画属性的集合                                           |
| animation-name            | 调用animation动画的名称                                      |
| animation-duration        | 动画的持续时间                                               |
| animation-timing-function | 规定动画的速度曲线，默认是ease                               |
| animation-delay           | 规定动画的延迟播放，默认是0                                  |
| animation-iteration-count | 规定动画的播放次数                                           |
| animation-direction       | 规定动画是否在下一周期逆向播放，默认是normal，alternate逆播放 |
| animation-play-state      | 规定动画是否在运行或暂停。默认是running,还有pause            |
| animation-fill-mode       | 规定动画结束后状态，保持forwards回到起始backwards            |



#### 动画简写



```html
animation:动画名称 持续时间 运动曲线 何时开始 播放次数 是否反方向 动画起始或者结束的状态
```



注意：



1. 简写里面不包括 animation-play-state
2. 暂停动画：animation-play-state:paused;经常和鼠标经过等配合使用

1. 想要动画反方向走回来，而不是闪现过来：animation-direction:alternate
2. 盒子动画结束后，停在结束位置：animation-fill-mode:forwards.



#### 热点图案例



-  这里的波纹用阴影来实现 
-  用几个盒子来模拟逐帧的动画效果
  可以用capacity属性（透明度），来模拟渐变的效果
  可以用decay属性来调整播放的时间，使得动画的播放有时差
  让它们体现逐帧切换的效果 

-  用定位来保证它们叠加在一个位置上 
-  用属性选择器可以方便的实现类型的选择
  选择的时候要**注意选择器权重** 



**注意**：



1. 在放大的时候不用scale的原因：**在定位居中的前提下**，因为scale的话可能会让阴影的位置发生偏移，导致动画出现不太好的效果
2. 定位到同一个位置的时候，盒子之间并不会发生挤占的问题，可能是自动分配了z-index的值



#### 速度曲线的细节

| 值          | 描述                                         |
| ----------- | -------------------------------------------- |
| linear      | 动画从头到尾速度是相同的                     |
| ease        | 默认。动画从低速开始，然后加快，在结束前变慢 |
| ease-in     | 动画以低速开始                               |
| ease-out    | 动画以低速结束                               |
| ease-in-out | 低俗开始和结束                               |
| steps       | 指定了时间函数中的间隔数量（步长）           |



##### 打字机效果



```html
write-space:nowrap;//强制一行显示
staps(n);//n可以为字数
从另一个方面来说，它可以用来实现定格动画的效果
overflow:hidden;//将没显示出来的文字隐藏
在动画里面可以逐渐增加盒子的长度，得到一个逐渐显示的效果
```



##### 北极熊-视差滚动效果



-  利用一个盒子来进行播放，利用steps（）来播放图片的每一
  帧，将动画的播放时间缩短，得到动画的效果 



#### 3d效果



相对于2d的变化就是原来的属性里面加了一个3d以及对应的z轴,多出了一个透视属性



```html
translate3d(x,y,z);

//这里的旋转的方向可以用左手来判断
//左手大拇指伸出，四指自然成拳，那么当大拇指和旋转轴对齐的时候，四指的方向就是旋转的方向
perspective: n px;
//这里的n指的是透视距离，也就是人眼到屏幕的距离
//距离越大，透视效果越明显
//z 轴的值的大小则是代表页面到屏幕的距离，数值越大离屏幕也就越近，相对图像的大小也就越大
transform-style:preserve-3d;
transform-style:flat;
//这里的preserve是表示对父盒子添加这个效果，子盒子的3d变换的效果保持不变，而flat则是表示子盒子的3d效果变成扁平的，也就是没有3d效果
```



##### 旋转的两面盒子



```html
<div class="box">    <box class="front"></box>    <box class="back"></box></div>
```



注意点：



1. 想实现两个盒子背靠背的效果可以在堆盒子的时候先将盒子进行旋转
2. 再将整体进行旋转

1. 记得在添加了效果之后给父盒子加上transform-style:preserve-3d;的效果，不然就看不到两个盒子了



##### 立体的盒子



-  在有移动和其他的转换样式的时候，要先写移动 
-  在制作旋转效果的时候，需要注意旋转的轴的位置
  **注意：** 

- - 在制作几个盒子组合的3d效果的时候，最好还是给几个小盒子加上一个大盒子，不然可能会出现预期之外的效果
  - 视距也最好给3d效果的父一级盒子，不然效果也会有偏差



#### 综合案例-旋转木马



- 先旋转好之后再进行移动的操作
- 因为是要进行旋转木马这样的效果，所以所有的图片都在z轴上移动，达到靠近、远离的效果



#### 浏览器的私有前缀



一般是为了兼容老版本的浏览器的写法



```html
-moz-:代表firefox浏览器私有属性-ms-: 代表ie浏览器私有属性-webkit-:代表safari 、 chrome私有属性-o-:代表opera私有属性
```



## 移动端web开发



## javascript



### js的输入输出



-  alert(msg) 
-  console.log(msg)
  这个是输出给浏览器看的 

-  prompt("这里可以放提示内容")//显示出来是一个输入框 



**注意**：



- 基本的变量基本上都和c差不多，只不过没有c那么严格
- 逐行执行的语言，要注意长代码时候的换行

- 变量不声明也可以直接赋值使用，但是会变成全局变量



### 数据类型



计算机中，不同的数据需要的内存空间是不同的，所以需要将数据分为不同的数据类型



#### 变量的数据类型



-  javascript是动态的数据类型，同一个变量的数据类型会根据使用可以动态变化
  javascript会根据数据的实际类型进行自动的判断 



#### 数据类型的分类



##### 简单数据类型

| 简单数据类型 | 说明                                 | 默认值    |
| ------------ | ------------------------------------ | --------- |
| Number       | 数字型，包含整形和浮点型，如21，0.21 | 0         |
| Boolean      | 布尔值类型，如true false ,等价于1和0 | false     |
| String       | 字符串类型                           | ""        |
| Undefined    | 声明之后没有赋值的变量               | undefined |
| Null         | 声明变量为空值                       | null      |



**常用的数据转换**：



1. 在程序里面数字前面加上0，表示转换为八进制
2. 数字的前面加上0x，表示转换为16进制



**常见的数据表示**



-  Number.MAX_VALUE 表示最大值 
-  Infinity and -infinity 表示无穷大  

```html
Number.MAX_VALUE * 2 = Infinity
这样也可以表示无穷大
```

-  NaN,表示一个非数值，一般出现在不同的数据类型之间的运算是（作为一个报错的形式出现）
  isNaN(),这个函数是一个判断的类型，用这个方法来判断是否是数字，如果是数字就返回false，如果不是数字就返回true 



###### 字符串型



- 加了引号的字串都被视为字符串
- 在js中一般使用单引号来进行字符串的声明

- 在存在嵌套的关系的时候，遵循**外单内双**的原则，否则中间的单引号会将字符串切开，报错



1.  字符串转义符
   一般都是使用 \ 开头，需要显示‘\’ ,就加上两个反斜杠 
2.  字符串运算 

1. 1. 拼接 `"我是"+"你叠"`

- -  这里的加法就起到了拼接的作用 
  -  其中字符型和其它类型的数据直接相加会直接拼接 

- -  可以用变量实现字符串的拼接
    `var age=111;`
    `console.log('我'+age+'岁')` 



##### 复杂数据类型



​    这样输出的内容就是 "我111岁"



##### 布尔型



初始化时为false，在计算时当作0来参与运算



而true 则视为 1 来参与运算



##### Udefined



- undefined与字符型相加也会被拼接
- 与数字相加则是 NaN 的类型



##### null



空值



- 与字符串相加同理
- 与数字相加则是看作0参与运算



#### typeof



- 可以使用 typeof 运算符来判断变量的数据类型



注意：typeof(null);//object



使用方法：`consle.log(type value)`//直接空格+变量就可以得到



- 我们还可以从控制台输出的数据的颜色判断数据类型



##### 字面量



可以直接通过数据的形式来判断它的类型



### 数据类型转换



##### 其他类型转换为字符串

| 方式             | 说明                         | 案例                              |
| ---------------- | ---------------------------- | --------------------------------- |
| toString()       | 转成字符串                   | var num=1; alert(num.toString()); |
| String()强制转换 | 转成字符串                   | var num = 1; alert(String(num));  |
| 加号拼接字符串   | 和字符串拼接的结果都是字符串 | var num = 1 ; alert(num+"字符串") |



- 调用的方式有 **通过类** 通过**强制转换** **通过数据类型的规则** ，三种



##### 转换为数值型



-  `parseInt(value)`//可以将字符型转化为数字的整形（只是取整，丢弃小数）
  这个方法同时会去掉字符中的字母，需要字符的开头是数字，截取到没有数字的部分 
-  `parseFloat(value)`  将字符串类型转换为浮点类型，原理应该是一样的，读到第一个小数点后的字符之后结束 

-  `Number(value)`  将一个里面都是数字字符的字符串转换为数字类型，但是不能有其他类型的字符，否则就是NaN。 



**隐式转换**：利用 -  *   /  运算可以实现转换（加法会拼接成字符串）



```
var = '1223123'-'1231'
```



这里的运算结果就是两个字符串里面的数字相减



#### 转换为布尔型



`boolean(var)` 将其它类型转换为布尔型



- 代表空、否定的值会被转换为false，如“”、 0、NaN、null、undefined
- 其余的值都为true



### 运算符



#### 算数运算符

| 符号 | 属性 | 用法 |
| ---- | ---- | ---- |
| +    | 加   |      |
| -    | 减   |      |
| *    | 乘   |      |
| /    | 除   |      |
| %    | 取模 |      |



在写的时候尽量在符号左右加上空格（比较优雅）



- 取模运算符的作用之一就是可以判断能否整除



#### 自增/减运算符



- 运算符必须和变量结合使用



#### 判断运算符



- 比较特别的是 === ，！==，表示需要数据类型和值同时满足才为真



#### 逻辑运算符



-  &&
  在对表达式判断时 如果 `表达式1 && 表达式2`
  如果表达式1为真，则返回第二个表达式的值
  如果为假，则返回第一个表达式的值 

-  || 

  而或运算则有所不同

  如果表达式1为真，则返回表达式1

  而如果前表达式为假，那么就往后判断到为真的一项，如果没有，那么就返回0

  这里面负数并不是 false ，好像只有对应的那几个特殊情况和0为false的情况

- ! 

-  **短路**：如果有一个结果可以判断出结果，就不再向后计算 



### 流程控制

控制代码按照什么样的结构顺序来执行

- if分支语句

  ```html
  if (条件表达式)
  {
  //执行语句
  } else if{
  } else {
  
  }
  ```

- 三元表达式

  `x>y?x:y`

  - 这里面好像没有格式化输出的固定代码，但是可以直接通过字符串的拼接进行补零操作

- switch分支语句

  ```html
  switch (表达式)
  {
  case value1:
  执行语句1；
  break；
  case value2:
  执行语句2;
  break;
  }
  ```

  

  小案例：**promt中得到的数据是字符串型，想要直接用于数值判断的话需要进行类型转换**

  - 如果判断的值的范围比较小（比较确定），那么使用switch的效率更高（它会直接跳转到值相等的项，而不会进行其它判断）

#### 循环结构

```js
for(var i=0 ;i < 100 ; i++)
   {
                    //循环的代码
                    }
                    
 while()
     {
     }

do {
    //循环语句
}while(循环条件)
   continue;//直接跳到下一个循环
   break;//退出循环
//前面几种循环大多数时候都可以互相替换
```

- 可以用精确的算法来生成网页元素！（自动部署的原理？）

执行过程：`var i=1`这一句只执行一次

​                   接下来就先判断 `i<100`

​                    然后执行 `i++` 

​                   然后再进行到第二步

- **字符串能拼接这一点很重要**

### js中的命名规范

1. 变量
   - 变量一般需要有意义
   - 变量名一般用名词
   - 函数名一般用动词

### js 数组

```js
//创建数组的方式：
//1. 创建一个新数组
var arr=new Array();
//2.利用数组字面量创建数组,同样是空数组
var arr=[];
//3.可以创建数组的同时直接将数据存储到数组中，而且不用限定数组的长度
//不分数据类型,这里和c++的区别还是很大的
var arr=[1,2,3,'xxxx','fuxk',true];

```

- 数组的输入输出

  ```js
  //可以通过直接输出数组名称来输出数组中的所有元素
  var arr=[1,2,3,4,5,'xxx'];
  console.log(arr);
  //这样就可以直接在控制台得到所有的数组元素
  //也可以通过for循环直接输出
  ```

- 数组的长度

  ```js
  //数组名.length()
  var arr=[1,2,3,4,5,'xxx'];
  var len=arr.length;//没有括号
  //这样就可以直接得到数组的长度，方便操作
  //毕竟初始化数组的时候是没有长度的，当代码到一定长度的时候就值得关注了
  
  ```

  

- 数组新增元素

  1. 可以透过修改length元素来改变数组的长度

     ```js
     var arr=[1,2,3]
     arr.length=5;//可以直接将数组的长度修改为5，后面里面的两个未赋值的元素默认为 empty
     ```

     

  2. 也可以直接通过下标来进行扩容

     ```js
     var arr=[1,2,3];
     arr[3]=5;//这里就可以直接给数组增加第四个位置的元素
     for(var i=0;i<10;i++)
         {
             arr[i]=i;//也可以直接通过循环的形式来进行扩容和赋值
         }
     ```

- **注意**：

  1. 不要直接给数组名赋值，不然所有的元素就都没了
  2. 数组最终的length是由最后一个元素存储的位置来决定的

案例：**筛选数组的方法**

```js
var arr=[1,2,3,4,5];
var newArr=[]；
for(int i=0;i<arr.length;i++)
    {
        if(arr[i]>2)
            {
                newArr[newArr.length]=arr[i];
                //这样就利用了数组长度和下标差1的性质，可以方便的动态调整数组
            }
    }
```

- 可以直接用数组相互赋值吗 ？

  可以直接用等于赋值

  

### js函数

就是一些可以重复使用的代码块，通过这个代码块可以实现代码的重复使用

```js
function Function_name(可以跟上传入的变量，用逗号隔开，没有数量的限制){
    //代码执行
}
//函数需要调用才能执行
//声明的时候括号里面是形式参数
//调用的时候括号里面的是实际参数
//那么数组呢,也可以直接传入数组，不用加上类型的修饰，可以直接以数组的形式调用
```

```js
//一个小例子     
function say(name, job) {//直接跟变量名，没有类型的限制
            console.log(name + ' welcome to our school ,' + job);
        }
        say('harry', 'wizard');
```



- 注意：
  1. 如果实际参数的个数大于形参，那么就按顺序取得形参的个数
  2. 如果形参的个数大于实参，那么多出的形参就会定义为undefined ，一般情况下参与运算的时候就会转换为NaN



##### 函数的返回值

```js
function name {
    //执行功能
    return result;
}
```

- 在执行结束之后相当于将执行的结果赋值给函数名
- 函数的返回值也是一个终止函数，在一个函数中遇到return语句，执行完毕后就会直接退出函数，而后面的语句不会再执行，return只会返回一个值

```js
return [1,2,3,4,5];
//可以直接让return返回一个数组的值
//这里可以感受到万物皆对象的这个概念，因为变量也是对象，函数返回也是对象
```

- 如果一个函数没有返回值，而用它来赋值的话，得到的就是undefined的量（这自然是当然了）

- arguments

  当我们不确定有多少个参数传递的时候，就可以用arguments来获取。在js中，arguments实际上他是当前函数的一个内置对象，用于存储所有传递进来的实参（是一个数组的形式）

  - 伪数组
    1. 具有数组的length属性
    2. 按照索引的方式进行存储
    3. 没有一些数组的方法：pop（）、push ( )等方法

- **函数可以相互调用**

  ```js
  //函数有两种声明方式
  //1.常规声明
  function name{
  
  }
  //2.函数表达式 （匿名函数）,相当于给函数的另一个命名方式
  //效果和前面的效果差距不大，都是对象
  var name =function(aru)
  {
      
  }
  var fun=function(aru){
      console.log('');
      console.log('');
  }
  
  
  ```



### 作用域

是为了提高程序的可靠性，减少命名冲突

- 作用域（es6之前）

  1. 全局作用域

     整个js标签或者一个单独的js文件

  2. 局部作用域

     在函数内部就是局部作用域

  3. 块级作用域

     就是和c++类似，在一个花括号里面声明的变量只对这个花括号里面的方法和函数生效，在括号外不能调用

**全局变量会有覆盖的效果**

- 全局变量和局部变量的区别

  全局变量比较占内存，调用方便

  局部变量更省内存，单使用的时候需要声明

#### 作用域链

也就是内部函数可以访问外部函数的机制，实现层层套娃

在使用变量的时候是链式查找

在内部调用一个变量的时候，它会从内向外查找，直到找到变量

**其实也就是一个就近原则**

### js预解析

js的解析过程：进行预解析，再进行代码执行

1. 步骤

- js引擎会把js里面所有的 var 还有 fuction 提升到当前作用域的最前面
-  代码执行 按照代码书写的顺序从上往下执行

2. 预解析分为 变量预解析（变量提升） 和  函数预解析（函数提升）
   - **变量提升：将变量的声明提升到当前作用域的最前面（只有声明，没有赋值），在对函数的另外一种声明中也遵循这个原则**
   - **函数提升：将所有的函数声明提升到当前作用域的最前面（提升的只是用关键字的声明，函数表达式的形式无效）**
   - 注意都是**当前作用域**

#### 案例（重要）

```js
var a=b=c=9;
//这条语句的结果是
// var a=9;b=9;c=9;
//这里a是局部变量，而b和c都是全局变量，这里就是赋值操作带来的区别
```

### 对象

#### 概念

对象是一个**具体**的事物（和类相比具有唯一性），特指

类则是对象的抽象

- 对象是一组无序的相关属性和方法的集合，所有的事物都是对象，字符串、数组、数值、函数等都是对象。

  由属性（特性）和方法（行为）来定义

- 

- 类比c++结构体

#### 创建对象

```js
//用花括号来进行对象的创建
//以下是c++习惯带来的错误示范
var obj={
    var name='li';
    var job='wizard';
    function show{
 console.log(name+job);   
}
}

var obj = {
     name :'li',//对象里面的变量不用再声明，赋值语句之间使用逗号分开,且赋值用冒号就可以
     job :'wizard',
    //函数的声明直接用 name:function{}就可以，不用再用关键字在前的那种方式
     show: function () {
       console.log(name + job);
                        }
           };
//对象的一种调用方式和c++的方式基本相同
obj.var;
obj.fuc();
obj.fuc;//这样会显示出对应函数（方法）的声明
//对象调用的第二种方式
obj['var'];//调用的时候必须要有引号
obj['fuc()'];//这种形式不行
```

第二种，先声明

```js
var obj = new Object();//这里就创建了一个对象
obj.uname = '';//里面的属性就可以这样直接赋值，没有数量的限制
obj.fuc=function(){
    
}//创建函数的方法也和前面的方法基本相同，相当于obj就是一个var 的声明
//不过这种方法创建对象都是使用等号赋值，而不是：
//冒号的特权好像必须要在{}中，也就是在那个域里面的值默认都加上了var(弱类型的语言就是这样？)
```

第三种，利用构造函数来构建对象

```js
//相当于类和继承的关系
//构造函数相当于类
//例：创建四大天王对象
function Name(形式参数){
    this.var=xvar;
    this.fuc=fuc_name(){
        
    }
}
//构造函数里面赋值都是使用等号，结尾是分号
//名字一般是首字母大写（代码规范）
```

- 赋值语句的结尾都是分号？

  



#### new关键字

- new在执行的时候的四个步骤

  1. 在内存中创建一个新的空对象
  2. 让this指向这个新的对象
  3. 执行构造函数里面的代码，给这个新对象添加属性和方法
  4. 返回这个新对象（所以构造函数不需要return）

  我的理解：在内存里面找一个空间，指针指向这个空间，给这个空间赋值，返回空间的索引（地址）

#### 遍历对象

`for...in` 遍历对象

```js
for(var k in obj)
{
console.log(k);//得到的属性名
console.log(obj[k]);//得到的属性名
}
```



#### 案例

### js内置对象

- js中有三种对象：自定义对象、内置对象、浏览器对象
- 前面两种是js基础的内容，第三个就是我们js独有的，对浏览器的内容进行操作
- 内置对象就是js语言的自带的库，提供一些常用的方法和功能，帮助我们快速开发
- math,date,array,string

#### 查文档

MDN文档（有中文）

- 查询方法
- 数据类型
- 返回类型

#### math对象

- 常用的常数

  ```js
  Math.Pi//圆周率
  ```

- 常用的方法

  ```js
  Math.max(1,3,4,5,3);//得到的就是 5
  Math.max(...arr);//这里得到的就是arr 数组里面的最大值，注意那三个点是语法规则，是必要的
  Math.floor() ; //向下取整
  //这里类似于c++里面的int作除法，直接取整
  Math.ceil(); // 向上取整，往大了取整只要有小数部分就直接往上加一
  Math.round();//四舍五入，这里面的四舍五入是往大的方向取整
  //Math.round(-1.5)  这里结果是-1，也就是往大取整的体现
  Math.abs();     //取绝对值
  //Math.abs('-1'); 这条语句也能输出1，对于数字来说会进行隐式转换为数字,但如果有字符会转为NaN
  
  Math.random();//生成随机数的方法
  ```

#### 封装对象

```js
var myMath={
    PI:3.1415926535,//对象的成员之间需要用逗号隔开
    max:function(arguments)
    {
        var max=arguments[0];//方法声明的变量不受影响
        for(var i=1;i<arguments.length;i++)
            {
                if(arguments[i]>max)
                    {
                        max=arguments[i];
                    }
            }
        return max;
    },
    min :function(arguments){
        var min=arguments[0];
        for(var i=1;i<arguments.length;i++)
            {
                if(arguments[i]<min)
                    {
                        min=arguments[i];
                    }
            }
        return min;
    }
}
```

date对象

```js
//创建一个date对象
var date = new Date();
//使用date对象自带的方法
date.getFullYear();//返回现在的年
date.getMonth();//返回现在的月
date.getDay();//返回现在是哪天
date.getHours();//返回现在的小时
date.getMinutes();//返回现在是多少分钟
date.getSeconds();//返回现在是多少秒

//返回系统计时（从1970年到现在）
date.getTime();
date.valueOf();
var date = +new Date();
var date = +new Date(time); //这里的time是指从那时到time所用的时间
var date = Date.now(); //这个是h5新增的特征，可能会有兼容性问题
```



#### 数组对象

```js
//创建数组对象
1.字面量创建的方式
var arr=[1,23,23,12];
2.new 字符方法创建
var arr= new Array(n);//这个n是指你给它留下的空间
var arr= new Array(qwe,q,42,34);//可以在这个方法中加上你想给数组添加的元素，相当于字面量的方法

3. 添加和删除
var arr = new Array();
arr.push();//在字符串后面添加元素，并返回增加后的字符长度
arr.upshift();//在字符串的前面添加元素，并返回增加后的长度

arr.pop();//在字符串的后面删除元素，并返回被删除的元素
arr.shift();//在字符串的前面删除元素，并返回被删除的元素

4.常用方法

arr.reverse();//转置数组元素
arr.sort();//内置排序元素,但是好像是根据字典序来排的，想要对数字排序需要自定一下排序条件
arr.sort(function(a,b)
        {
    return a-b;//这里是降序排列，返回真就交换元素位置
})

返回数组元素索引方法
1. indexOf('数组元素');//返回该数组元素的第一个索引号
//如果没有就返回 -1
2. lastIndexOf('数组元素');//返回数组元素的最后一个索引号（从后往前查找）


数组转化为字符串

var arr = [12,3,23,13,2];
var str = arr.toString();//将数组转化为字符串

arr.join();//可以给字符串的数组元素之间加上分割的符号，符号可以自定义
arr.join(symbol);//symbol 就是你自定义的符号
```

- 数组去重案例

  把旧数组里面不重复的元素放到新数组里面，遍历旧数组，把新数组里面没有的元素加到新数组中。

  ```js
  function unique(arr)
  {
      var newarr=[];
      for(var i=0 ;i < arr.length;i++)
          {
              if( newArr.indexOf(arr[i]) == -1)
                  {
                      newArr.push(arr[i]);    
                  }
              
          }
  }
  
  //去重主要就是给已经出现过的数打上标记
  c++版
  #include <iosteam>
  #include <map>
  using namespace std;
  void solve(arr[])
  {
      map<int,int > m;
      int arr1[n];
      for(int i=1;i<n;i++)
          {
              if(m[arr[i]]=1) continue;
              m[arr[i]]=1;
              arr1=arr[i];
          }
      return arr1[];
  }
  ```



#### 字符串类型

```js
1. 字符串的不变性
是指里面的字符串的内容存储的内存空间不会清楚，重新赋值只是重新开辟了一个新的空间

2. 字符串中所有的方法，都不会修改字符串本身，任何方法都不会修改字符串的值；
var str = 'lsdjfljdfla';
str.indexOf('k',n);//后面的这个n指的是从某个位置开始往后查找

```

查找字符串'abcoefoxyozzopp'中所有o出现的位置以及次数

- 算法

  - 先查找第一个o出现的位置
  - 然后只要 indexOf 返回的结果不是 -1 就继续往后查找
  - 因为 indexOf 只能查找到第一个，所以后面的查找，利用第二个参数，当前索引加1，从而继续查找

  ```js
  function sr (str)
  {
      var cnt = 0 ,temp = 0;
      do {
          temp = str.indexOf('0',temp) + 1;
          cnt++;
          console.log(temp-1);
      } while(str.indexOf('0') !== -1)
      return cnt;
  }
  
  //上面的代码不知道哪里出了问题
  
  var str = 'abcoefoxyozzopp';
  var index = str.indexOf('o');
  var num = 0;
  while(index !== -1)
      {
          console.log(index);
          num++;
          index=str.indexOf('o',index+1);
      }
  console.log('o出现的次数是：' + num);
  ```

  根据位置返回字符
  
  ```js
  // 根据位置返回字符
  1.charAt(index)
  var str = 'andy';
  str.charAt(3);//得到 d
  //遍历字符串
  for (var i=0;i<length;i++)
      {
          console.log(str.charAt(i));
      }
  
  2.charCodeAt(index) //返回对应位置的 ascll 码表
  str.charCodeAt(index) 
  //可以用于得知用户的输入符号
  
  3.str[] //这里可以直接得到字符，不过这个是H5新增的特性
  
  ```
  
  判断对象里面的属性是否存在
  
  ```js
  var obj = {
      agt: 19
  }
  if(obj['agt'])
      {
          console.log('里面有该属性');
      } else {
          console.log('里面没有该属性');
      }
  
  //可以用这样的方式来直接判断对象里面是否有该属性
  ```
  
  - 案例2
  
  ```js
  //判断一个字符串 'abcoefoxyozzopp'中出现次数最多的字符，并统计其字数
  核心算法：
  1.利用对象的赋值来做一个map，将字符串里面出现过的字符赋值给一个对象，当字符再出现时就给属性的值加一
  2.第一次便利给对象赋值完毕之后再将最大的那个属性找出来
  
  var str = 'abcoefoxyozzopp';
  var o={};
  for (var i=0 ; i<str.length;i++)
      {
          var chars = str.charAt(i);//将每一个字符取出来
          if(o[chars])
              {
                  o[chars]++;//存在就加一
              }else{
                  o[chars]=1;//不存在就赋值为一
              }
      }
  
  //遍历对象
  var max = 0;
  var ch='';
  for (var k in o)//遍历对象的方法
      {
          //k 得到的是属性名
          //o[k]才是属性值
         if(o[k]>max)
             {
                 max=o[k];
                 ch=k;
             }
      }
  ```

##### 字符串操作方法（重点）

```js
1. concat ('字符串1'，'字符串2'，'字符串3')
//相当于加号，拼接字符串
2.arr.substr(start,length)
//从start 位置开始（索引号），length是截取的个数
3.replace('被替换的字符'，'替换为的字符')
var str = 'andy';
console.log(str.replace('a','b'));
//替换字符串中的第一个字符
4.字符串转换为数组 split('分隔符')
var str = '1234';
//可以将字符串转换成单个的数组元素，它会将字符串中与你分隔符相同的符号删除，并从那个位置进行分割
//没有分割的符号的话split 方法会将字符串视为一个元素，无法分割

```

#### 数据类型之间的区别

1. 简单类型与复杂类型

   - 简单类型又叫做基本数据类型或者值类型，复杂类型又叫做引用类型

     - 值类型：简单数据类型/基本数据类型，再存储时变量中存储的是值本身，因此叫做值类型
     - string , number , boolean , undefined , null（返回值是对象）
     - 引用类型:复杂数据类型，再存储变量的时候存储的仅仅只是地址（引用），因此叫做引用数据类型

     通过new 关键字创建的对象（系统对象、自定义对象），如Object 、Array 、Date等

     堆和栈：

     1. 栈：有操作系统自动分配释放存放函数的参数值、局部变量的值等。其操作方式类似于数据结构中的栈
     2. 堆：存储复杂类型（对象），一般由程序员分配释放，由垃圾回收机制回收

     - 简单数据类型是直接指向栈中的值
     - 复杂数据类型是将数据存储在堆中，而将地址存储在栈里面

     ####  传参

     - 简单数据类型传参对原数据没有影响
     - 复杂数据类型传参会直接修改原来的数据

     

     

     

     

#### 基本包装类型

简而言之就是基本的库方法

```js
var temp = new String('');
因为js把简单的数据类型包装为了复杂数据类型

```

### JS webApis



- web api 和 js 基础关联性

js 的基础语法是为了与webApis配合使用的

- webApi 是 js 独有的部分

##### API

- api就是一些预先定义的函数，目的是提供应用程序与开发人员基于某软件或者硬件得以方位一组例程的能力，而又无需访问源码，了解里面的细节

  

### DOM

DOM是文档对象模型，是处理可扩展标记语言的标准程序接口

通过DOM接口可以改变网页的内容、样式等

#### dom树

- 文档：一个页面就是一个文档，DOM中使用doccument表示
- 元素：页面中所有标签都是元素，DOM中使用element表示
- 节点：网页中所有内容都是节点，DOM中使用node来表示

DOM把以上内容都看作对象



#### 如何获取网页元素

```js
1.根据id获取
document.getElementByid( id )//可以获取带有ID的元素对象
 //id 是大小写敏感的字符串，代表了所要查找的元素的唯一ID
 //返回一个匹配到ID的 DOM Element对象。若在当前Documment下没有找到，则返回null
//在写获取元素的时候，因为文档页面从上往下加载，所以先得有标签， 所以需要把script写到标签的下面
//这个方法通过的是驼峰命名法
document.getElementByid('time');//里面必须是字符串
//返回的是对象
console.dir(time);//这个函数可以打印我们返回的元素对象，更好的查看里面的属性和方法

2.根据标签名获取
 document.getElementsByTagName()//可以返回带有指定标签名的对象的集合
//返回过来的是以伪数组形式存储的标签元素
//得到的元素是动态的
//如果页面中没有那个元素，那么返回的是一个空的伪数组
可以指定父元素来获取对应父元素的子元素
var ol = document.getElementsByTagName('ol');
var li = ol[0].getElementsByTagName('li');//这样就可以通过指定的父元素来得到特定的子元素了
//这里必须指定对象是哪一个，因为通过文档对象得到的都是伪数组的形式的对象
//也可以根据Id选择父元素，再根据选中的父元素来得到子元素标签，id返回的元素不是伪数组

```

3.通过HTML5新增的方法获取

​    可以通过类名获取

```js
document.getElementsByClassName('box');
//通过类名选择


document.querySelector('.class');//不加all只返回选中的第一个对象
document.querySelectorAll('#id');
//加了 all 之后就可以返回选中的所有元素
document.querySelectorAll('li');
注意点：使用querySelectorAll的时候需要对不同的选择器有所区分
```





4.特殊元素获取

- 获取body元素

  ```js
  var bodyEle=document.body;
  //可以直接得到body里面的内容，不用加参数
  ```

  

- 获取html元素

```js
var htmlEle=document.documentElement;
//html比较特殊，需要这个方法来返回对象
```

#### 事件基础

事件是可以被js侦测到的行为

触发-响应

##### 事件的三部分

- 事件源

  事件被触发的对象

- 事件类型

  如何被处罚 什么事件 比如：鼠标经过触发 鼠标点击

- 事件处理程序  

  事件处理程序，一般通过一个函数赋值的方式来完成

  例：

  ```js
  var btn = document.getElementById('btn');
  btn.onclick=fuction()
  {
      alert('危险');
  }
  ```

##### 执行事件的步骤

1. 获取事件源
2. 注册事件（绑定事件）
3. 添加事件处理程序（采取函数赋值形式）



#### 操作元素

##### 修改元素内容

```js
element.innerText
//从起始位置到终止位置的内容，但它去除html标签，同时空格和换行也会去去掉
//它不识别html标签，会直接当作字符串显示出来
element.innerHTML//这个是标准，用得更多
//起始位置到终止位置的全部内容，包括html标签，同时保留空格和换行
```

- 这两个标签是可以读写的，但是读取出来的内容和它的具体的规则有关



##### 常用元素的属性操作

```js
 1.innerText、innerHtml 改变元素内容
 2.src 、 href
 3.id、 alt、title
 
```

##### 修改表单的属性

```js
//表单中的内容比较特殊，需要特别修改
type 、value 、 checked selected、disabled
```

```js
value 是表单里面的内容
disabled 是被禁用，不能再被点击
this.disabled = true;//this 指向的是函数的调用者

```

- 模仿京东改为文本框的案例

  算法：利用一个flag变量，来判断flag的值，如果是1就切换为文本框，flag设置为0，反过来也一样

  ```html
  //点击按钮将密码框切换为文本框，就可以看见里面的密码
  css 的一些属性：
  type:text password outline 
  ```

  

##### 修改样式

```js
1.element.style 行内样式操作
2.element.className 类名样式操作
```

- js修改的样式属于行内样式，在样式冲突的时候以js 为准
- js里面的样式采取驼峰命名法，比如fontSize 、backgroundColor
- **修改的属性都要加上引号才能起作用**

精灵图案例

1. 精灵图的排布需要有规律
2. 找到一点数学规律
3. 使用for循环来调整精灵图的位置

```js
这里有一点比较重要的就是字符串拼接
```

显示隐藏文本框内容

这里有两个新事件  

onfocus 得到焦点 onblur 失去焦点

 ```js
         var inp = document.getElementById('input');
         inp.onfocus = function () {
             if (this.value === '手机')
                 this.value = '';
         }
         inp.onblur = function () {
             if (this.value === '')
                 this.value = '手机';
         }
 在具体功能的实现的时候要注意焦点的变化带来的内容的变化，
 可以设计一下回复的条件
 ```

- 使用className修改样式

  ```js
  element.className='change';
  可以让当前的这个元素的类名改为change ，批量修改样式
  ```

  注意点：

  1. 如果需要修改的样式较多，可以考虑这种方法
  2. 修改的样式需要 className 这个方法
  3. **在修改的时候元素原来所有的样式都会被新的样式替换，要注意这一点**

  **如果想要保留原来的类名，就把原来的类名也加上，这个语法符合多类名的要求**

  *设置密码提示错误案例*

1. 首先判断的触发条件是失去焦点
2. 如果输入真确则提示正确的小图标变为绿色
3. 如果不是 6 到 16 位 ，那么就让图标变为错误的信息
4. 这里的核心在于可以用字符串长度来判断输入的位数的信息

```js
innerHtml//可以用来修改需要保留样式的文字
innerText
```

##### 总结

1. 操作元素内容
   - innerText
   - innerHTML
2. 操作常见元素属性
   - 常见的元素属性都是可以获取和修改的
3. 操作表单元素属性
   - 主要就是表单里面的那几个元素和属性
4. 操作元素样式属性
   - element.style
   - element.className

##### 排他思想

在出现多个按钮的选择的时候

可以使用 **for循环** 来给元素绑定事件

```js
var btns = document.getElementsBytagName()
for(var i = 0 ; i<btns.length;i++)
    {
        btns[i].onclick = function()
        {
            for(var j = 0 ;j<btns.length;j++)
                {
                    btns.[i].backgroundColor='';
                    //这里是先将其他元素的颜色去掉
                }
            btns[i].backgroundColor='pink';
        }
    }
```



*百度换肤案例*

```js
var imgs=document.querySelector('.baidu').querySelectorAll('li');
//这里也可以直接递进选取
可以直接获取到图片的地址
this.src//可以直接获取到图片
然后同样可以使用字符串拼接的方式来给背景图片元素赋值
```

*表格隔行变色*

1. 两个新事件：onmouseover 鼠标经过   onmouseout 鼠标离开
2. 核心思路：鼠标经过 tr 行 ，当前的行变背景颜色，鼠标离开去掉当前的背景颜色
3. thead是不用改变颜色的

```js
1.获取元素
选中tbody，然后递进选中tr
var trs = document.querySelector('tbody').querySelectorAll('tr');
for(var i = 0 ;i<trs.length;i++)
    {
        trs[i].onmouseover =function (){
            
        }
        trs[i].onmouseout = function()
        {
            this.className = 'change';
        }
    }
//这个案例里面建议改变样式在css里面进行，进一步实现结构，效果，样式的分离
```



*全选和取消全选的案例*

1. 全选和取消全选的做法：让点击全选之后的复选框都选中，反之则选不选中

2. 下面复选框所有的复选框需要全部选中，上面才能全部选中：需要给每一个按钮都绑定一个事件，每次选中的时候都检查；

```js
        for (var i = 0; i < bts.length; i++) {
            bts[i].onclick = function () {
                var flag = true;
                for (var i = 0; i < bts.length; i++) {
                    if (!bts[i].checked) {
                        flag = false;
                        break;//只要有一个没被选中就不用判断了
                    }
                    al.checked = flag;

                }
            }
        }//这里有一个flag变量的用法
```

##### 自定义属性的操作

1. 获取属性值

   1. element.属性

      这个主要获取的是内置属性

   2. element.getAttribute('属性');

      这个主要获取的是自定义属性

2. 修改属性值

   可以直接对获取的属性值再赋值就可以了

   - element.属性=‘新的值’
   - element.setAttribute('属性'，'值')；

3. 移除属性值

   - element.removeAttribute('属性');

tab*栏切换案例*

1. tab 栏切换有两个大的模块

2. 上的模块选项卡，点击某一个，当前这一个底色会是红色，其余不变（排他思想）修改类名的方式

3. 下面的模块内容，会跟随上面的选项卡变化，所以下面模块变化写到事件里面

4. 规律：下面模块的显示内容和上面的选项卡一一对应，相匹配

5. 核心思路：给上面的tab_list 里面所有的小 li 添加自定义属性，属性值从0开始编号

   ```html
   <!DOCTYPE html>
   <html lang="en">
   
   <head>
       <meta charset="UTF-8">
       <meta http-equiv="X-UA-Compatible" content="IE=edge">
       <meta name="viewport" content="width=device-width, initial-scale=1.0">
       <title>Document</title>
       <style>
           * {
               list-style: none;
               margin: 0;
               padding: 0;
           }
   
           .tab_nav {
               width: 1100px;
               height: 166px;
               margin: 200px auto;
           }
   
           .tab_nav .tab_list {
               height: 44px;
               background-color: rgb(238, 241, 238);
               border-bottom: 1px solid rgb(228, 230, 228);
               /* text-align: center;
               line-height: 45px; */
           }
   
           .tab_nav .tab_list li {
               float: left;
               height: 43px;
               padding: 0 6px;
               text-align: center;
               line-height: 45px;
               font-size: 16px;
               cursor: pointer;
           }
   
           .tab_content {
               padding: 20px 0 0 20px;
           }
   
           .item {
               display: none;
           }
   
           .current {
               color: white;
               background-color: rgb(214, 39, 31);
           }
   
           .display {
               display: block;
           }
   
           .nodisplay {
               display: none;
           }
       </style>
   </head>
   
   <body>
       <div class="tab_nav">
           <div class="tab_list">
               <ul>
                   <li class="current">商品介绍</li>
                   <li>规格与包装</li>
                   <li>售后保障</li>
                   <li>商品评价</li>
                   <li>手机社区</li>
               </ul>
           </div>
           <div class="tab_content">
               <ul>
                   <li class="item" style="display:block">商品介绍模块内容</li>
                   <li class="item">规格与包装模块内容</li>
                   <li class="item">售后保障模块内容</li>
                   <li class="item">商品评价模块内容</li>
                   <li class="item">手机社区模块内容</li>
               </ul>
           </div>
       </div>
       <script>
           var lis = document.querySelector('.tab_list').querySelectorAll('li');
           var content = document.querySelector('.tab_content').querySelectorAll('.item');
           // console.log(content);
           for (var i = 0; i < lis.length; i++) {
               lis[i].setAttribute('index', i);
               lis[i].onclick = function () {
                   for (var i = 0; i < lis.length; i++) {
                       lis[i].className = '';
                       content[i].style.display = 'none';//这里使用类的方式进行修改的话不能改变预定设置的类属性
                       //直接对属性赋值的优先级好像要高于对类的修改
                   }
                   this.className = 'current';
                   var ind = this.getAttribute('index');
                   // console.log(ind);
                   content[ind].style.display = 'block';
               }
           }
       </script>
   </body>
   
   </html>
   ```

   

   **收获**

   - 掌握了tab栏的布局方法
   - **直接通过属性赋值的优先级好像要高于通过类的赋值修改**

##### h5的自定义属性

自定义属性可以通过 element.getAttribute( ) 来获取

但是在实际开发的过程中容易混淆

所以h5中为大家添加了一个自定义属性的规范

```js
1. date-自定义属性//也就是使用date- 开头的都是自定义属性
2. h5新增element.dataset.index 或者element.dataset['index']
//可以获得一个自定义属性的集合，可以直接获得
//dataset 是一个集合，里面存放了所有的自定义属性
//如果自定义属性里面有多个-链接的单词，我们获取的时候采取的是驼峰命名法
< div data-index-time='20'></div>
    var div = document.getElementByTagname('div');
   var time = div.dataset.indexTime;
   这样就可以直接获取到自定义的值
   
```

注意**这里是data ，不是date**

#### 结点操作

1. 为什么学习结点操作

   获取元素：

   1. 使用 dom 提供的方法获取元素，前面学习的方法都是
   2. 利用结点的层次获取元素
      - 可以利用父子结点关系进行获取元素
      - 操作更有逻辑性

2. 结点模型

   标签、元素是元素节点

   文本是文本节点

   属性是属性节点

   一般结点一般需要有几个属性：结点类型（nodeType） 、结点名称(nodeName)、结点值(nodeValue) 三个基本属性

   - 元素节点 nodeType 为1
   - 属性节点 nodeType 为2
   - 文本结点 nodeType 为3 （文本节点包括文字、空格、换行等）

   我们一般都是获取**元素节点**

         ##### 节点层级

- 常见的是**父子层级关系**

  ```js
  1. 父节点 parentNode  //得到的是距离元素最近的父亲节点 
  <div class='demo'>
      <span class='erweima'>x</span>
      </div>
  var erweima = document.querySelector('.erweima');
  erweima.parentNode;//这样就可以直接获得 demo ，也就是它的父亲级盒子
  ```

  获取子节点

  ```js
  1. childNodes
  element.childNodes;就可以直接获取到子节点
  但是获得的是所有类型
  
  
  2.判断类型 element.childNodes[n].NodeType,可以获得节点的类型
  
  3. 非标准，但是浏览器基本上都支持，可以看作一种通用写法
  element.children ;//可以只获得第一类节点，在开发中更常用，各个浏览器也支持
  
  ```

  - 获取第一个和最后一个元素

    ```js
    1. 首先是默认的写法
    element.firstChild 
    element.lastChild
    //上面这两种方法获取到的节点包含文本节点，操作起来得不到我们想要的效果
    2. 可以直接获得元素的写法
    element.firstElementChild
    element.lastElementChild
    //这两种方法可以直接获得第一个元素和最后一个元素
    //但是具有兼容性的问题，只有IE9以上的版本才支持
    3. 开发常用的写法
    element.childern[0];
    element.children[element.children.length - 1];
    //这一种方法则是直接使用前面的这获取元素的方法，利用数组元素的关系来进行获取
    //前面获取到第一个元素，后面的获取到最后一个元素
    ```

    案例：下拉菜单

    这里布局出了一点小问题，没能把布局搞出来

    ```js
    var nav = document.querySelector('.nav');
    //这样写的主要原因是布局的时候是使用一个大的ul来作为nav
    //然后在里面加上一个 a 来表示选择栏， 再用一个ul和li来表示内容
    //所以是nav[i].childre[1],也就是第二个元素是内容，在鼠标经过的时候显示，反之隐藏
    for(var i = 0 ;i<nav.length;i++)
        {
            nav[i].onmouseover = function ()
            {
                nav[i].children[1].display='block';
            }
            nav[i].onmouseout = function()
            {
                nav[i].children[1].display='none';
            }
        }
    ```

##### 兄弟节点

```js
1. 还是默认
element.previousSibling ;
element.nextSibling;
//默认的获取兄弟元素的方法，还是包含文本节点
2.加上元素的属性
element.previousElementSibiling;
element.nextElementSibiling;
//这个方法可以获取元素，但是同样有兼容性问题
3.封装一个函数
function nextSibiling(element)
{
    var el = element;
    while(el.nextSibiling)
        {
            if(el.nextSibiling.NodeType==1)
                {
                    return el.nextSibiling;
                }
        }
    return null;
}
```

##### 创建节点

在页面里创建一个元素分为两步：创建元素、添加元素

```js
1. 创建元素
document.creatElement('创建的元素');
//这样只是创建了一个元素，并没有将它添加到页面中

2. 添加元素
element.appendChild(child);
//这个是将床架的元素添加到父元素的子元素的尾部，也称为尾部添加
element.insertBefore(要插入的元素,插入的位置);
//这里面不能加上分号
//这个方法则是会将元素添加到对应元素的前面

```

##### 删除节点

```js
语法：
node.removeChild(child);
这样是从父节点中删除子节点
```

案例：删除留言

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=\, initial-scale=1.0">
    <title>Document</title>
    <style>
        ul li a {
            float: right;
        }
    </style>
</head>

<body>
    <input type="text" name="" id="">
    <a href=""></a>
    <button>发布</button>
    <ul></ul>
    <script>
        var text = document.querySelector('input');
        var btn = document.querySelector('button');
        var ul = document.querySelector('ul');
        btn.onclick = function () {
            if (text.value == '') {
                alert('您没有输入内容');
                return false;
            } else {

                var li = document.createElement('li');
                li.innerHTML = text.value + "<a href='javascript:;'>删除</a>";
                ul.insertBefore(li, ul.children[0]);

                // 在前面插入
                // ul.appendChild(li);
                // 前面这一行代码是在后面插入
                //接下来添加删除功能
                // 1. 获取元素
                var as = document.querySelectorAll('a');//获取到页面里面所有的a元素,要用ALL
                // 2.注册事件
                console.log(as);
                for (var i = 0; i < as.length; i++) {
                    as[i].onclick = function () {
                        //注意这个方法的语法规范，是删除父元素里面的孩子，这里删除的是a对应的li，是a的父元素，而li的父元素是ul，所以才这么写
                        ul.removeChild(this.parentNode);
                    }
                }
            }
        }
    </script>
</body>

</html>
```



- 注意点：
  1. querySelectorAll 的用法
  2. node.removeChild(child) 的语法规范

##### 复制节点

- node.cloneNode();

  这个方法有语法规范，node.cloneNode(true)；是深拷贝，可以连标签里面的内容一起赋值

  而在括号里面如果不加上参数 true ,默认为false ，也就是浅拷贝，只会赋值标签结构，而不会复制标签里面的内容

  ```js
  node.cloneNode(true);//深拷贝
  node.cloneNode()/node.cloneNode(false);//浅拷贝
  ```

  案例：动态生成单元格
  
  ```js
  <!DOCTYPE html>
  <html lang="en">
  
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Document</title>
      <style>
          table {
              border: 1px solid #ccc;
          }
  
          table th,
          td {
              border: 1px solid #ccc;
              text-align: center;
              font-weight: 600;
          }
  
          table th {
              background-color: #ccc;
              padding: 0 30px;
          }
      </style>
  </head>
  
  <body>
      <table cellspacing="0">
          <thead>
              <tr>
                  <th>姓名</th>
                  <th>科目</th>
                  <th>分数</th>
                  <th>操作</th>
              </tr>
          </thead>
          <tbody>
          </tbody>
      </table>
      <script>
          var stu = [
              {
                  name: 'nick',
                  disciplin: 'javascript',
                  score: 99
              },
              {
                  name: 'leon',
                  disciplin: 'javascript',
                  score: 98
              },
              {
                  name: 'frank',
                  disciplin: 'javascript',
                  score: 88
              }
          ]
          var tbody = document.querySelector('tbody');
          for (var i = 0; i < stu.length; i++) {
              var tr = document.createElement('tr');
              tbody.appendChild(tr);
              for (var k in stu[i]) {
                  var td = document.createElement('td');
                  td.innerHTML = stu[i][k];
                  //因为 k in stu[i] 这个语法 是用于在对象里面遍历属性，而这里的stu[i]带表的就是每一对象，这样添加就可以完成表格的填充了
                  tr.appendChild(td);
              }
              var td = document.createElement('td');
              td.innerHTML = '<a href="javascript:;">删除</a>';
              tr.appendChild(td);
          }
          var as = document.querySelectorAll('a');
          for (var i = 0; i < as.length; i++) {
              as[i].onclick = function () {
  
                  //    还是要注意这个移除节点的语法规范
                  //    需要的是删除元素的父节点来移除它的子节点，写出来的两个关键点必须要有，你要删除的节点是谁，它的父节点又是谁，怎样定位
                  tbody.removeChild(this.parentNode.parentNode);
              }
          }
      </script>
  </body>
  
  </html>
  ```
  
  ##### 三种创建元素方式的区别
  
  ```js
  document.write();
  //如果是在页面加载，这种方式会导致页面重绘
  element.innerHTML 
  //用这种方式新建元素的话，使用数组的形式赋值效率会很高，
  //但如果直接使用直接使用字符串拼接的方式进行赋值的话效率会非常低
  document.creatElement();
  //使用这种方式创建元素的效率适中，结构更清晰
  ```

##### DOM的重点核心

添加元素、增删改查、自定义属性、事件

#### 事件高级

##### 使用侦听器添加事件

- 好处：同一个元素，同一个事件，可以对应多个触发函数，实现更多功能

  ```js
  evenTarget.addEventListener('type'，function,useCapture);
  //这个就是监听器函数的具体形式，其中type代表的是事件类型，必须不加on的是字符串形式，而function就是添加的函数，而useCapture是一个布尔型参数，默认是false，后面会讲
  
  attchEvent('onType',function);
  //只有ie9之前的浏览器支持
  ```

##### 移除事件

- 这里主要的目的是用来实现只能触发一次的功能

  有三种移除方法，对应三种注册的方法

  ```js
  1. 传统方法的移除
  语法：element.onEvent=null;
  也就是让删除对应的函数，破坏事件三要素
  element.onclick = function()
  {
      this.onclick=null;
  }
  2.监听事件的解绑方式
  removeEventListener('type',function,useCapture);
  //也就是和add相对的move方法,不过这里的function 对应的是函数名，所以需要把函数写到它的外边
  addEventListener('click',fn);
  function fn ()
  {
      alert('fdfjalfdj');
      removeEventListener('click',fn);
      //加上这行代码就可以完成事件的移除了
  }
  
  3. 兼容ie9以下版本的操作
  detachEvent('onclick',fn);
  //例
  attchEvent('onclick',fn2);
  function fn2()
  {
      alert('23rfsdf');
      detachEvent('onclick',fn2); 
  }
  ```

##### dom的事件流

事件在节点之间传播的顺序称为事件流

执行的顺序：

1. 接受阶段

   触发事件的信息最开始由文档节点收到，然后逐层向下传播，直到找到事件

2. 冒泡阶段

   在事件的信息传送到对应的元素之后，元素返回事件触发的结果，逐层往上返回变化

##### 事件流的一些细节

- js只会执行事件流的两个阶段中的一种，要么是捕获阶段，要么是冒泡阶段
- onclick 和 attchEven 都只能关注冒泡事件
- addEventListener 当它的 useCapture 的参数为true 的时候，就可以监听到捕获阶段的事件
- 实际开发中很少关注事件的捕获，更多关注的是事件的冒泡阶段
- 有一些事件是没有冒泡阶段的，比如 onfocus 、onmouseleave 等
- 事件的冒泡有时会带来麻烦，需要解决

##### 事件对象

事件对象是指触发的事件本身，这个事件带有触发事件的相关信息和一些方法

```js
element.onclick = function (event)//这里传递的对象只是形参，它是在事件绑定的时候就自动生成的
//里面的参数名称可以是任意的，比如e 、evt等等
{
     console(event);
}

addEventListener ('click',function(e){
    console(e);//监听器的获取方式和传统方式相同
})

//考虑ie678 的兼容性写法
attchEvent('onclick',function(e)
          {
      e = e || window.event;//这里利用的是赋值表达式，如果前面一个不支持，就会返回false，执行或语句，所以就可以得到第二种结果，照顾到老版本的浏览器
}
          )
```



























# 菜鸟js



### js数据类型



- 当您声明新变量时，可以使用关键词 "new" 来声明其类型：



#### 对象



- js中也是万物皆对象，变量是对象的容器
- 定义对象可以跨越多行，空格和换行不是必须的



##### 对象方法



对象方法作为一个函数调用 `person.method()`



访问属性则是 `person.method`



```html
method : function(){//对象方法}
```



-  当对象里面没有同名属性且调用方法没有加上名称的时候
  回返回方法的定义（也就是我们写在方法中的那些算式） 



#### 函数



函数是由事件驱动的或者当它被调用时执行的可重复使用的代码块



```html
<!DOCTYPE html><html><head><meta charset="utf-8"><title>测试实例</title><script>function myFunction(){    alert("Hello World!");}</script></head> <body><button onclick="myFunction()">点我</button></body></html>
```



-  JavaScript 对大小写敏感。关键词fuction必须时小写的，并且必须以与函数名称相同的大小写来调用函数
  函数同样可以传入参数 



```html
myFuction(var 1,var 2)//中间用逗号分隔， 把参数作为变量来声明{ //代码}
```



和c++差不多，不过没有要求返回值的类型

