#ifdef __GNUC__  
#define CSET_GBK    "GBK"
#define CSET_UTF8   "UTF-8"
#define LC_NAME_zh_CN   "zh_CN"
// ifdef __GNUC__
#elif defined(_MSC_VER)
#define CSET_GBK    L"936"
#define CSET_UTF8   L"65001"  
#define LC_NAME_zh_CN   L"Chinese_People's Republic of China"
// ifdef _MSC_VER
#endif

#define LC_NAME_zh_CN_GBK       LC_NAME_zh_CN L"." CSET_GBK
#define LC_NAME_zh_CN_UTF8      LC_NAME_zh_CN L"." CSET_UTF8
#define LC_NAME_zh_CN_DEFAULT   LC_NAME_zh_CN_GBK