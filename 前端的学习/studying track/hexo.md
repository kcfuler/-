# hexo  博客的搭建

## 准备node.js

- 上 node.js 的中文网  下载node.js 并安装

  ```js
  node -v //查看node.js 的版本信息
  nmp -v // 查看 npm 的版本信息
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

   
