# 使用ubantu 遇到的一些问题和解决

## 系统操作

### 有些软件包出现连接失败的问题

- 这里可能是连接到的库与我们的网络环境匹配度不高，导致一些链接可能下载不到

  解决：在系统的软件更新器中更改下载源，选择最佳服务器

  ![在这里插入图片描述](https://img-blog.csdnimg.cn/2019011201462051.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L25hbmh1YWliZWlhbg==,size_16,color_FFFFFF,t_70)

​        然后在终端中执行操作：`sudo apt-get update`

​       更新系统中的软件包，问题解决（应该）

### 输入法的词汇相当不智能

- 问题：输入法的一些常用词汇只能一个一个字的打出来，而它推荐的那些词汇显然不太合理
- 解决：在输入法的页面中找到辞典，将你一般使用的词汇类型勾选上，就可以智能一点了

## 软件

## 开发环境

### vscode中使用 Open in browser 插件出现问题

![在这里插入图片描述](https://img-blog.csdnimg.cn/20190809172544132.png)

- 解决方法

  安装历史版本 1.1的版本就可以解决问题