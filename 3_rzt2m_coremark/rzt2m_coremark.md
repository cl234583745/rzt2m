三、从0开始卷出一个新项目之瑞萨RZT2M双核coremark工程
===
[toc]
# 一、概述
- 构建双核工程，并调试、打印，给出源码
- 通过双核coremark工程，展示双核性能测试、双核通信(信号量、cpu中断、共享内存)的实际效果
- 参考[十一、从0开始卷出一个新项目之瑞萨RZN2Lrzn2l_coremark_fsp200工程构建和gcc .ld链接文件的修改方法](https://mp.weixin.qq.com/s?__biz=MzkxNDQyMTU4Mg==&mid=2247485293&idx=1&sn=dab3ac3d4144489e598472ca9ea362d8&chksm=c16fe54cf6186c5aa655143fc9ce6a6ecaf081a5cf89e8c0566595988c5f92bb0d895ac9b512&cur_album_id=3167963498191110153&scene=190#rd)
# 二、测试结果

- 双核coremark结果为cpu0+cpu1 coremark结果相加

```
hello world!
PI=3.141593
SHARED_MEMORY status.state=1
check script ld first!!!
start coremain!!!

[15:07:53.409]收←◆2K performance run parameters for coremark.
CoreMark Size    : 666
Total ticks      : 13623
Total time (secs): 13.623000
Iterations/Sec   : 2202.158115
Iterations       : 30000
Compiler version : GCC13.2.1 20231009
Compiler flags   : Please put compiler flags here (e.g. -o3)
Memory location  : STACK
seedcrc          : 0xe9f5
[0]crclist       : 0xe714
[0]crcmatrix     : 0x1fd7
[0]crcstate      : 0x8e3a
[0]crcfinal      : 0x5275
Correct operation validated. See README.md for run and reporting rules.
CoreMark 1.0 : 2202.158115 / GCC13.2.1 20231009 Please put compiler flags here (e.g. -o3) / STACK
FSP_PRIV_CLOCK_CPU0=800000000
CPU1:
CoreMark 1.0 : 2716.653083 / GCC13.2.1 20231009 Please put compiler flags here (e.g. -o3) / STACK
FSP_PRIV_CLOCK_CPU0=800000000

```

# 三、总结
- 通过e2studio和fsp2.2.0可以便捷的构建双核工程，fsp增加sharememary可以便捷的双核通信
- 提问：cpu1 sram为什么coremark结果比cpu0 atcm略高