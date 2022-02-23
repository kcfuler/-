# hexo  博客的搭建

## 准备node.js

- 上 node.js 的中文网  下载node.js 并安装

  ```js
  node -v //查看node.js 的版本信息
  npm -v // 查看 npm 的版本信息
  //如果以上两者都显示了版本信息，那么就说明安装成功
  npm config set registry http://registry.npm.tabao.org
  //在安装完成之后记得要更换淘宝源，提高访问的速度
  ```

- 接下来就安装 hexo 环境

  ```js
  npm install -g hexo-cli //安装hexo
  hexo -v //查看hexo版本
  //在你想要的目录下执行以下命令
  hexo init myblog
  //可以生成一个 myblog 的文件夹 里面有相应的配置文件 
  //然后进入相应的文件夹
  //在这个给文件夹里面打开cmd
  ```

- 运行 hexo

  ```js
  hexo server //启动hexo 的服务
  //随后会出现一行带有网址的代码，就是它给你生成的博客的主页
  hexo new "文章名" 
  //它会给你创建一个 .md 格式的文章
  hexo clean 
  //写完文章就执行的操作
  hexo generate 
  //应该是将文章生成到静态网页的步骤
  hexo server 
  //可以再到生成的网址里面检查到我们的修改
  
  ```

  

## 托管平台的操作

1. 创建一个仓库

   将仓库名字命名为你的gitee账户名
   
2. 在你生产的没有blog文件中找到 _config.yml文件

   打开、找到最后两行

   ```powershell
   deploy:
     type: git
     repository: #这里填上你的gitee的项目地址
     
   ```

3. 然后转到cmd

   ```powershell
   npm install --save hexo-deployer-git
   #安装hexo的git插件
   #视频里面没有这一步，略坑
   hexo deploy # 进行部署
   ```

4. 到gitee中进行静态网页的部署

   在仓库界面找到**服务**

   里面有个 gitee pages 进去之后就直接部署

   然后你就可以得到一个静态的网址，点进去就是我们的博客网页了

   注意点：每次在本地deploy之后都要到gitee里面更新，比较麻烦，GitHub会自动更新
