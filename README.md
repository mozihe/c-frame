这是一个简单的代码框架  
适用于Linux系统  
适合刚开始练习分文件编程的同学使用  
基于VScode，开箱即用  
本框架以opencv作为演示链接库  
支持cmake编译，也支持直接调试  
需要修改的地方做好了备注  
基本只需要修改项目名  
可以在include下添加新的头文件，在src内加入新的源文件  
需要额外库可以按照格式补全  

以下是cmake编译步骤  
命令行  
mkdir build  
cd build  
cmake ..  
make  
可执行文件会出现在build文件夹  

缺少opencv或者nlohmann请使用命令行安装  
sudo apt install libopencv-dev nlohmann-json3-dev  

进阶版增加了自定义配置文件  
可以不重新编译就调整参数，调参党福音  
如果写了多个配置文件，自行修改接口  
做游戏时可以边玩边根据反馈调参   