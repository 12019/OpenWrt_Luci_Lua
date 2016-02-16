openwrt配置命令：

sudo minicom -D /dev/ttyUSB0
la /dev/ttyUSB0


cd /etc/config/
cat wireless
/etc/init.d/network reload
cat /etc/config/wireless
router_reset
ifconfig

r13: http://192.168.232.1

r10: http://192.168.233.1

亮哥邮箱：  zhengkl@meizu.com

ssh root@192.168.232.1

局域网地址：10.2.64.20

--------------------------------------------------------


git配置命令：


git branch -a

git checkout 切换分支

git log

HEAD

git diff 

----------------------------------------------------------
gvim字体设置：
DejaVu Sans Mono 12

中继器配置：
cd /usr/bin/apcli_connect.sh

---------------------------------------------------------


如何通过Luci界面找到相应函数代码并修改？
（1）浏览器找到相关函数名
（2）在luci/controller/admin/network.lua中找到相应函数
（3）看懂，修改
（4）移植到r13的api/index.lua或meizu目录的相应lua文件中
（5）./build.sh

修改 / 编译：
/usr/lib/lua/meizu/build.sh
logread -f 查看日志
-----------------------------------------------------------

小米luci代码路径：

/home/rh/my_code/miwifi_package_rom/usr/lib/lua/luci


小米功能基础库路径：
/home/rh/my_code/miwifi_package_rom/usr/lib/lua/xiaoqiang



定时wifi开关（智能开关）路径：

/home/rh/my_code/miwifi_package_rom/usr/lib/lua/luci/controller/api/xqsystem.lua    --line 1517

/home/rh/my_code/miwifi_package_rom/usr/lib/lua/xiaoqiang/common/XQFunction.lua    --line 89 & 29



------------------------------------------------------------
grep:
grep -F "bind_router" ./* -Rn			--查找正文中含有bind_router的关键字
-F	匹配字符串
-R	递归匹配
-n	显示行号


ctags：

使用ctags：	ctags -R ./*

ctrl + ] 查找具体函数
ctrl + t 返回调用函数处

taglist：
：Tlist		打开Taglist

----------------------------------------------------------------

传文件到u盘： /media

cd sbin/
  709  fuke uhbn 
  710  file uhbn
  711  vi uhbn

 tail -f /var/log/kern.log~
  714  tail -f /var/log/kern.log
  715  lsmod 
  716  ifconfig 
  717  lsusb -v
  718  lsusb~
  719  lsusb
  720  lsusb |wc -l
  721  ls /proc/net/~
  722  ls /proc/net/
  723  ls /proc/net/dev
  724  ls /proc/net/dev -la
  725  cd  /proc/net/
  726  ls -lr~
  727  ls -lr
  728  ls -lr|grep eth
  729  cd /sys/class/net/~
  730  cd /sys/class/net/
  731  ls -lr|grep eth
  732  ls -lr|grep -i wla
  733  lsusb
  734  lsusb -v |tee /tmp/usb.log
  735  vi /tmp/usb.log
  736  uname -r
  737  uname -a
  738  vi /tmp/usb.log
  739  lsusb -v
  740  ~
  741  lsusb -v
  742  tail -f /var/log/kern.log
  743  uname -r
  744  uname
  745  uname -a
  746  lsusb -v



ssh lcd@10.2.65.22

http://forum.ubuntu.com.cn/viewtopic.php?f=116&t=466756
http://my.oschina.net/cuilili/blog/374704




------------------------------------------------
r13测试路径：	http://192.168.233.244/cgi-bin/luci/api/sip
luci.http.prepare_content("application/json")
echo "$@" > /tmp/log.txt


------------------------------------------------
r13编译:	/meizu路径下: ./build.sh
r10编译：	reboot 	or rm /tmp/ cache 	 


rm /tmp/luci-modulecache/ -rf


openwrt交叉编译gcc *.c:
 ./mipsel-openwrt-linux-uclibc-gcc hello.c -o hello
~/my_code/openwrt/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin



find -name “”
编译固件所在目录
/home/rh/my_code/openwrt/bin/ramips
find -name "*up*.bin"
find -name "*dex*"
make V=s -j1
--------------------------------------------------
vim 	下一屏：ctrl + f
    	上一屏：ctrl + b

shell	上一屏：shift + up
	下一屏：shift + down

	切换标签：ctrl + up / down
	创建标签：ctrl +shift + t


grep -n "function" ./*
find -name "index" ./*

watchcat所在目录：scp /home/rh/test/watchcat root@192.168.232.1:/usr/bin





--------------------------------------------------
删除linux内核方法：
sudo apt-get remove linux-image-XXX-generic
sudo apt-get remove linux-headers-generic
dpkg --get-selections |grep linux



tail -f nebula.log
 /etc/init.d/network restart

---------------------------------------------------
local lue = require("luci.util").exec
local t = lue([[date -d "2010-10-10 10:10:10" +%s]])
print(tonumber(t))


---------------------------------------------------
cat nebula.log |grep agai

sshpass -p  mzszR10 scp old root@172.16.1.6:/usr/bin
./apcli_connect.sh disable a_rh a_5g_rh
./apcli_connect.sh restart

cnt=0;while [ $cnt -lt 100 ];do ./socket_client;((cnt++));echo "test:$cnt";done

sshpass -p  mzszR10  ssh root@172.16.1.7
sshpass -p  mzszR10  ssh root@192.168.36.249

killall watchcat


linux命令测试udp广播：
echo sysinfo |ncat  10.16.1.2 51232 -v -u cnt=0;while [ $cnt -lt 100 ];do ./socket_client;((cnt++));echo "test:$cnt";done

ncat  10.16.1.2 51232 -v -u

终端search：ctrl + r



cat /etc/openwrt_version 版本号

make menuconfig

--r13 lan口转wan口：
（1）
cat /etc/config/network 
/etc/init.d/network restart

（2）
uci set network.lan.eth_port=wan
uci commit
uci get network.lan.eth_port
/etc/lucinit.d/network restart
uci set network.lan.eth_port=wan

(3)interface选项 =》 connect

--apt search
apt-cache search ssl|grep -i python



--dd
dd if=abcdef of=2b bs=1 count=2 skip=1

--usb网卡驱动
sudo apt-get install git
git clone https://github.com/abperiasamy/rtl8812AU_8821AU_linux.git
cd rtl8812AU_8821AU_linux
make
sudo make install
sudo modprobe 8812au



















