# github

## 基本概念

1. 开始说明

- fork

  创建一个别人仓库的分支，保留到自己的仓库中（这时候的仓库中存在着完整的该仓库的源码）

- pull request

  把自己在该仓库中的修改合并到主仓库

- watch

  表示关注，如果你watch了某项目，那么以后只要这个项目有任何更新，你都会第一时间收到通知

- issue

  事务卡片，发现代码bug，但没有成形代码，表示讨论用

- github主页

  左侧显示用户动态以关注用户或者关注仓库的动态；右侧显示所有的git库
  
  ![image-20220108163047940](D:\code\前端学习\bilibili截图\仓库各个功能解释)

2. 创建仓库

   注意：没有验证邮箱的话是没有办法创建邮箱的（使用qq邮箱的话注意邮箱的白名单，也就是反垃圾里面的域名白名单）

   - 仓库中的操作

     - 创建文件（newfile）

       > 给文件命名（如果是直接创建文件需要给文件命名后缀）
       >
       > 编辑文件本体
       >
       > 给文件添加创建注释（本次提交概括的标题）
       >
       > ![image-20220108163859091](D:\code\前端学习\bilibili截图\创建文件)

     - 编辑文件

       - 网页的小笔按钮表示修改（每次修改都是一次提交）

         ![image-20220108164313130](D:\code\前端学习\bilibili截图\文件的对应按钮)
         
       - 被删除的文件如何查看信息
       
         在commit中可以查看
       
       - 搜索文件
       
         findfile 按钮可以完成操作，可以使用快捷键T也可以进行搜索
       
       - github issues
       
         发现代码的bug，但是目前没有成形代码，开启一个issue,也就是问题讨论，讨论完成后，issue取消
       
         点击issue后，可以直接发起一个issue，里面进行具体的bug描述
       
       - 收藏
       
         打开项目主页，点击star即可收藏
       
       - 关注
       
       ​       点击watch即可关注，可以收到该项目的实时动态
     
     ## 开源项目的贡献流程
     
     1. 新建issue提交使用问题或者新建想法
     2. pull request 直接修改项目，fork之后修改，再提交修改之后的版本，等待原作者的审核，后合并git
   
   
   
   # git软件的使用
   
   ## git的下载
   
   - 官网
   - 其它渠道
   
   ## 基本操作
   
   ![image-20220108183506604](C:\Users\28429\AppData\Roaming\Typora\typora-user-images\image-20220108183506604.png)![image-20220108183544172](C:\Users\28429\AppData\Roaming\Typora\typora-user-images\image-20220108183544172.png)
   
   - git status         //查看当前的仓库状态
   
   - git add            //向暂存区添加文件
   
   - git commit -m"提交描述"    //向仓库提交文件    ps：这里的描述貌似是必须的
   
     > 作者：Elpie Kay
     > 链接：https://www.zhihu.com/question/61913534/answer/192748096
     > 来源：知乎
     > 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
     >
     > 
     >
     > 英文输入法里按下小写字母i，会进入编辑模式。可以在此模式下输入你想要的commit message。输入结束以后，按下esc退出编辑模式进入命令模式，这时按下英文输入法下的冒号，再输入wq，就可以保存退出了。w是write，q是quit。也可以在按esc退出编辑模式以后，切换到大写模式，连按两下Z。
     >
     > 如果你用不惯这个编辑器的话，可以通过配置git config --global core.editor '其它文本编辑器的执行文件的路径'来设置一个自己喜欢的文本编辑器。这样需要调用文本编辑器时，就不会用默认的vi了。这里的路径可以是全路径，也可以是相对于已经添加到PATH中的路径的相对路径。譬如设置成vs code，sublimetext等等。这些文本编辑器通过命令行启动的时候可以跟一些参数（譬如控制新启动一个编辑器还是只启动一个新tab），这个在编辑器的官方文档里可以找到。
     >
     > > [core]
     > >         editor = 'D:/Program Files/Microsoft VS Code/Code.exe' --wait
     >
     > 如果是ubuntu等*nix系统，可以换用gedit或者nano等简单操作的编辑器，git config --global core.editor nano。gedit有gui，通过xshell等工具远程访问的话，需要配置xming这样的工具，把远程机器上的ui内容显示到当前本地机器的显示器上。可以使用MobaXterm代替Xshell，就不用额外安装设置xming了。

### 初始化

![image-20220108183840156](C:\Users\28429\AppData\Roaming\Typora\typora-user-images\image-20220108183840156.png)

上面的图片有错，邮箱应该是email

- **注意**     **该初始化的名字是在github上提交代码时候的显示的最新名字**

### 一些基本的命令

- touch 文件名 //就是新建一个文件，需要加上后缀

- pwd 当前目录

- cd 路径      // 进入目标目录

- 删除文件

  修改 vi 文件名

  查看 cat 文件名  //也可以在windows下查看文件

  ![image-20220108192705166](D:\code\前端学习\bilibili截图\删除文件)

  需要这三步，把文件从本地和git中都删除



### git远程仓库操作

可以更方便的进行团队协作（也可以作为自己的一个云端代码仓库）

#### 克隆

将远程仓库中的代码克隆到本地

- git clone 仓库地址（也就是code中的http对应的一串地址）

## 搭建网站

### 建立个人网站

1. 新建一个仓库

   - 仓库名必须是    用户名.github.io

   - 在仓库下新建一个index.html文件

   **注意**：

   - 只能支持静态页面

   - 也就是写一个html的网页

     

     

## project pages 项目站点

![image-20220108211225187](D:\code\前端学习\bilibili截图\新建项目网站)

- 需要删除的话就在分支里面将网页相关的分支删除





















































































































## 一些问题

![image-20220108204649499](D:\code\前端学习\bilibili截图\ssh绑定时问题)
