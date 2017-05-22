# RefLibrary

开发环境：Visual Stdio 2013

演示了vs环境配置静态库和动态库的方法（/MD、/MT）

#. 动态库调试版，依赖支持库
	目标文件名：RefLibraryD
	配置管理器：debug 		
	运行库：	MDd
	配置类型:	动态库(.dll)
	生成文件：	RefLibraryD.dll RefLibraryD.lib
	
#. 静态库调试版，依赖支持库
	目标文件名：RefLibrarySD
	配置管理器：debug_S
	运行库：	MTd
	配置类型：动态库(.dll)
	生成文件：RefLibrarySD.dll RefLibrarySD.lib

#. 动态库调试版，依赖系统支持库
	目标文件名：RefLibrary_MTD
	配置管理器：debug_MT
	运行库：	MDd
	配置类型：静态库(.lib)
	生成文件：RefLibrary_MTD.lib
	预处理器定义：REFLIBRARY_STATIC	
	说明：当主程序使用这个库时，会把该库链接到目标EXE文件中，但还需要系统的运行库支持
	
#. 静态库调试版，不依赖支持库
	目标文件名：RefLibrary_SMTD
	配置管理器：debug_SMT
	运行库：	MTd
	配置类型：静态库(.lib)
	生成文件：RefLibrary_SMTD.lib
	预处理器定义：REFLIBRARY_STATIC
	说明：当主程序使用这个库时，会把系统的运行库链接到目标EXE文件中

