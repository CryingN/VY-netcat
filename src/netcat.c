
#ifndef V_COMMIT_HASH
	#define V_COMMIT_HASH "6b2d527"
#endif

#define V_USE_SIGNAL_H

// V comptime_definitions:
// V compile time defines by -d or -define flags:
//     All custom defines      : gcboehm,gcboehm_full,gcboehm_opt
//     Turned ON custom defines: gcboehm,gcboehm_full,gcboehm_opt
#define CUSTOM_DEFINE_gcboehm
#define CUSTOM_DEFINE_gcboehm_full
#define CUSTOM_DEFINE_gcboehm_opt

#define __VTHREADS__ (1)
#define _VGCBOEHM (1)

// V typedefs:
typedef struct IError IError;
typedef struct io__Reader io__Reader;
typedef struct io__Writer io__Writer;
typedef struct io__RandomReader io__RandomReader;
typedef struct io__ReaderWriter io__ReaderWriter;
typedef struct io__RandomWriter io__RandomWriter;
typedef struct rand__PRNG rand__PRNG;
typedef struct hash__Hasher hash__Hasher;
typedef struct hash__Hash32er hash__Hash32er;
typedef struct hash__Hash64er hash__Hash64er;
typedef struct none none;

// BEGIN_array_fixed_return_typedefs
// END_array_fixed_return_typedefs


// BEGIN_multi_return_typedefs
typedef struct multi_return_u32_u32 multi_return_u32_u32;
typedef struct multi_return_string_string multi_return_string_string;
typedef struct multi_return_int_int multi_return_int_int;
typedef struct multi_return_u32_u32_u32 multi_return_u32_u32_u32;
typedef struct multi_return_strconv__ParserState_strconv__PrepNumber multi_return_strconv__ParserState_strconv__PrepNumber;
typedef struct multi_return_u64_int multi_return_u64_int;
typedef struct multi_return_strconv__Dec32_bool multi_return_strconv__Dec32_bool;
typedef struct multi_return_strconv__Dec64_bool multi_return_strconv__Dec64_bool;
typedef struct multi_return_string_int multi_return_string_int;
typedef struct multi_return_int_bool multi_return_int_bool;
typedef struct multi_return_int_net__Addr multi_return_int_net__Addr;
typedef struct multi_return_string_u16 multi_return_string_u16;
typedef struct multi_return_u64_u64 multi_return_u64_u64;
typedef struct multi_return_f64_int multi_return_f64_int;
typedef struct multi_return_os__File_string multi_return_os__File_string;
typedef struct multi_return_u64_u8 multi_return_u64_u8;
typedef struct multi_return_int_int_int multi_return_int_int_int;
typedef struct multi_return_int_int_int_int_int_i64_bool multi_return_int_int_int_int_int_i64_bool;
typedef struct multi_return_f64_f64 multi_return_f64_f64;
// END_multi_return_typedefs

typedef struct strconv__BF_param strconv__BF_param;
typedef struct strconv__PrepNumber strconv__PrepNumber;
typedef struct strconv__Dec32 strconv__Dec32;
typedef struct strconv__Dec64 strconv__Dec64;
typedef struct strconv__Uint128 strconv__Uint128;
typedef union strconv__Uf32 strconv__Uf32;
typedef union strconv__Uf64 strconv__Uf64;
typedef union strconv__Float64u strconv__Float64u;
typedef union strconv__Float32u strconv__Float32u;
typedef struct array array;
typedef struct GCHeapUsage GCHeapUsage;
typedef struct VCastTypeIndexName VCastTypeIndexName;
typedef struct VAssertMetaInfo VAssertMetaInfo;
typedef struct MethodArgs MethodArgs;
typedef struct FunctionData FunctionData;
typedef struct VariantData VariantData;
typedef struct EnumData EnumData;
typedef struct FieldData FieldData;
typedef struct VAttribute VAttribute;
typedef struct VContext VContext;
typedef struct DenseArray DenseArray;
typedef struct map map;
typedef struct Option Option;
typedef struct _option _option;
typedef struct None__ None__;
typedef struct _result _result;
typedef struct Error Error;
typedef struct MessageError MessageError;
typedef struct SortedMap SortedMap;
typedef struct mapnode mapnode;
typedef struct string string;
typedef struct RepIndex RepIndex;
typedef union StrIntpMem StrIntpMem;
typedef struct StrIntpCgenData StrIntpCgenData;
typedef struct StrIntpData StrIntpData;
typedef struct cmd__CmdOption cmd__CmdOption;
typedef struct strings__textscanner__TextScanner strings__textscanner__TextScanner;
typedef struct term__termios__Termios term__termios__Termios;
typedef union net__conv__ConversionUnion net__conv__ConversionUnion;
typedef struct time__DateTimeParser time__DateTimeParser;
typedef struct time__TimeParseError time__TimeParseError;
typedef struct time__StopWatchOptions time__StopWatchOptions;
typedef struct time__StopWatch time__StopWatch;
typedef struct time__Time time__Time;
typedef struct io__BufferedReader io__BufferedReader;
typedef struct io__BufferedReaderConfig io__BufferedReaderConfig;
typedef struct io__BufferedReadLineConfig io__BufferedReadLineConfig;
typedef struct io__MultiWriter io__MultiWriter;
typedef struct io__Eof io__Eof;
typedef struct io__NotExpected io__NotExpected;
typedef struct io__ReadAllConfig io__ReadAllConfig;
typedef struct io__ReaderWriterImpl io__ReaderWriterImpl;
typedef struct rand__buffer__PRNGBuffer rand__buffer__PRNGBuffer;
typedef struct os__Eof os__Eof;
typedef struct os__NotExpected os__NotExpected;
typedef struct os__File os__File;
typedef struct os__FileNotOpenedError os__FileNotOpenedError;
typedef struct os__SizeOfTypeIs0Error os__SizeOfTypeIs0Error;
typedef struct os__FileMode os__FileMode;
typedef struct os__FileInfo os__FileInfo;
typedef struct os__FilePermission os__FilePermission;
typedef struct os__PathKind os__PathKind;
typedef struct os__SystemError os__SystemError;
typedef struct os__Result os__Result;
typedef struct os__Command os__Command;
typedef struct os__MvParams os__MvParams;
typedef struct os__ExecutableNotFoundError os__ExecutableNotFoundError;
typedef struct os__MkdirParams os__MkdirParams;
typedef struct os__Uname os__Uname;
typedef struct os__Stat os__Stat;
typedef struct os__Process os__Process;
typedef struct rand__config__PRNGConfigStruct rand__config__PRNGConfigStruct;
typedef struct rand__config__NormalConfigStruct rand__config__NormalConfigStruct;
typedef struct rand__config__ShuffleConfigStruct rand__config__ShuffleConfigStruct;
typedef struct rand__wyrand__WyRandRNG rand__wyrand__WyRandRNG;
typedef struct io__util__TempFileOptions io__util__TempFileOptions;
typedef struct io__util__TempDirOptions io__util__TempDirOptions;
typedef union net__AddrData net__AddrData;
typedef struct net__Ip6 net__Ip6;
typedef struct net__Ip net__Ip;
typedef struct net__Unix net__Unix;
typedef struct net__Addr net__Addr;
typedef struct net__ShutdownConfig net__ShutdownConfig;
typedef struct net__Socket net__Socket;
typedef struct net__TcpConn net__TcpConn;
typedef struct net__TcpListener net__TcpListener;
typedef struct net__ListenOptions net__ListenOptions;
typedef struct net__TcpSocket net__TcpSocket;
typedef struct net__UdpSocket net__UdpSocket;
typedef struct net__UdpConn net__UdpConn;
typedef struct _result_int _result_int;
typedef struct _result_f64 _result_f64;
typedef struct _result_u64 _result_u64;
typedef struct _result_i64 _result_i64;
typedef struct _result_void _result_void;
typedef struct _result_rune _result_rune;
typedef struct _result_string _result_string;
typedef struct _result_Array_u8 _result_Array_u8;
typedef struct _result_multi_return_u64_u8 _result_multi_return_u64_u8;
typedef struct _result_Array_string _result_Array_string;
typedef struct _result_time__Time _result_time__Time;
typedef struct _result_multi_return_int_int_int _result_multi_return_int_int_int;
typedef struct _result_multi_return_int_int_int_int_int_i64_bool _result_multi_return_int_int_int_int_int_i64_bool;
typedef struct _result_os__File _result_os__File;
typedef struct _result_FILE_ptr _result_FILE_ptr;
typedef struct _result_os__Stat _result_os__Stat;
typedef struct _result_strings__Builder _result_strings__Builder;
typedef struct _result_os__Result _result_os__Result;
typedef struct _result_anon_fn_os__signal _result_anon_fn_os__signal;
typedef struct _result_u32 _result_u32;
typedef struct _result_f32 _result_f32;
typedef struct _result_bool _result_bool;
typedef struct _result_multi_return_f64_f64 _result_multi_return_f64_f64;
typedef struct _result_multi_return_os__File_string _result_multi_return_os__File_string;
typedef struct _result_multi_return_string_string _result_multi_return_string_string;
typedef struct _result_net__Addr _result_net__Addr;
typedef struct _result_Array_net__Addr _result_Array_net__Addr;
typedef struct _result_u16 _result_u16;
typedef struct _result_multi_return_string_u16 _result_multi_return_string_u16;
typedef struct _result_net__TcpConn_ptr _result_net__TcpConn_ptr;
typedef struct _result_net__TcpSocket _result_net__TcpSocket;
typedef struct _result_net__TcpListener_ptr _result_net__TcpListener_ptr;
typedef struct _result_net__UdpConn_ptr _result_net__UdpConn_ptr;
typedef struct _result_net__UdpSocket_ptr _result_net__UdpSocket_ptr;
typedef struct _result_multi_return_int_net__Addr _result_multi_return_int_net__Addr;
typedef struct _option_string _option_string;
typedef struct _option_multi_return_string_string _option_multi_return_string_string;
typedef struct _option_int _option_int;
typedef struct _option_u8 _option_u8;

 // V preincludes:

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

// V cheaders:
// Generated by the V compiler

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

#if defined(__has_include)

#if __has_include(<inttypes.h>)
#include <inttypes.h>
#else
#error VERROR_MESSAGE The C compiler can not find <inttypes.h>. Please install build-essentials
#endif

#else
#include <inttypes.h>
#endif


#if defined(__has_include)

#if __has_include(<stddef.h>)
#include <stddef.h>
#else
#error VERROR_MESSAGE The C compiler can not find <stddef.h>. Please install build-essentials
#endif

#else
#include <stddef.h>
#endif


//================================== builtin types ================================*/
typedef int64_t i64;
typedef int16_t i16;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint8_t u8;
typedef uint16_t u16;
typedef u8 byte;
typedef int32_t i32;
typedef uint32_t rune;
typedef size_t usize;
typedef ptrdiff_t isize;
#ifndef VNOFLOAT
typedef float f32;
typedef double f64;
#else
typedef int32_t f32;
typedef int64_t f64;
#endif
typedef int64_t int_literal;
#ifndef VNOFLOAT
typedef double float_literal;
#else
typedef int64_t float_literal;
#endif
typedef unsigned char* byteptr;
typedef void* voidptr;
typedef char* charptr;
typedef u8 array_fixed_byte_300 [300];

typedef struct sync__Channel* chan;

#ifndef __cplusplus
	#ifndef bool
		#ifdef CUSTOM_DEFINE_4bytebool
			typedef int bool;
		#else
			typedef u8 bool;
		#endif
		#define true 1
		#define false 0
	#endif
#endif

typedef u64 (*MapHashFn)(voidptr);
typedef bool (*MapEqFn)(voidptr, voidptr);
typedef void (*MapCloneFn)(voidptr, voidptr);
typedef void (*MapFreeFn)(voidptr);

//============================== HELPER C MACROS =============================*/
// _SLIT0 is used as NULL string for literal arguments
// `"" s` is used to enforce a string literal argument
#define _SLIT0 (string){.str=(byteptr)(""), .len=0, .is_lit=1}
#define _SLIT(s) ((string){.str=(byteptr)("" s), .len=(sizeof(s)-1), .is_lit=1})
#define _SLEN(s, n) ((string){.str=(byteptr)("" s), .len=n, .is_lit=1})

// take the address of an rvalue
#define ADDR(type, expr) (&((type[]){expr}[0]))

// copy something to the heap
#define HEAP(type, expr) ((type*)memdup((void*)&((type[]){expr}[0]), sizeof(type)))
#define HEAP_noscan(type, expr) ((type*)memdup_noscan((void*)&((type[]){expr}[0]), sizeof(type)))

#define _PUSH_MANY(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many(arr, tmp.data, tmp.len);}
#define _PUSH_MANY_noscan(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many_noscan(arr, tmp.data, tmp.len);}

// unsigned/signed comparisons
static inline bool _us32_gt(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a > b; }
static inline bool _us32_ge(uint32_t a, int32_t b) { return a >= INT32_MAX || (int32_t)a >= b; }
static inline bool _us32_eq(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a == b; }
static inline bool _us32_ne(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a != b; }
static inline bool _us32_le(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a <= b; }
static inline bool _us32_lt(uint32_t a, int32_t b) { return a < INT32_MAX && (int32_t)a < b; }
static inline bool _us64_gt(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a > b; }
static inline bool _us64_ge(uint64_t a, int64_t b) { return a >= INT64_MAX || (int64_t)a >= b; }
static inline bool _us64_eq(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a == b; }
static inline bool _us64_ne(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a != b; }
static inline bool _us64_le(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a <= b; }
static inline bool _us64_lt(uint64_t a, int64_t b) { return a < INT64_MAX && (int64_t)a < b; }

#define EMPTY_VARG_INITIALIZATION 0
#define EMPTY_STRUCT_DECLARATION
#define EMPTY_STRUCT_INITIALIZATION
// Due to a tcc bug, the length of an array needs to be specified, but GCC crashes if it is...
#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[])
#define TCCSKIP(x) x

#define __NOINLINE __attribute__((noinline))
#define __IRQHANDLER __attribute__((interrupt))

#define __V_architecture 0
#if defined(__x86_64__) || defined(_M_AMD64)
	#define __V_amd64  1
	#undef __V_architecture
	#define __V_architecture 1
#endif

#if defined(__aarch64__) || defined(__arm64__) || defined(_M_ARM64)
	#define __V_arm64  1
	#undef __V_architecture
	#define __V_architecture 2
#endif

#if defined(__arm__) || defined(_M_ARM)
	#define __V_arm32  1
	#undef __V_architecture
	#define __V_architecture 3
#endif

#if defined(__riscv) && __riscv_xlen == 64
	#define __V_rv64  1
	#undef __V_architecture
	#define __V_architecture 4
#endif

#if defined(__riscv) && __riscv_xlen == 32
	#define __V_rv32  1
	#undef __V_architecture
	#define __V_architecture 5
#endif

#if defined(__i386__) || defined(_M_IX86)
	#define __V_x86    1
	#undef __V_architecture
	#define __V_architecture 6
#endif

// Using just __GNUC__ for detecting gcc, is not reliable because other compilers define it too:
#ifdef __GNUC__
	#define __V_GCC__
#endif
#ifdef __TINYC__
	#undef __V_GCC__
#endif
#ifdef __cplusplus
	#undef __V_GCC__
#endif
#ifdef __clang__
	#undef __V_GCC__
#endif

#ifdef _MSC_VER
	#undef __V_GCC__
	#undef EMPTY_STRUCT_DECLARATION
	#undef EMPTY_STRUCT_INITIALIZATION
	#define EMPTY_STRUCT_DECLARATION unsigned char _dummy_pad
	#define EMPTY_STRUCT_INITIALIZATION 0
#endif

#ifndef _WIN32
	#if defined __has_include
		#if __has_include (<execinfo.h>)
			#include <execinfo.h>
		#else
			// On linux: int backtrace(void **__array, int __size);
			// On BSD: size_t backtrace(void **, size_t);
		#endif
	#endif
#endif

#ifdef __TINYC__
	#define _Atomic volatile
	#undef EMPTY_STRUCT_DECLARATION
	#undef EMPTY_STRUCT_INITIALIZATION
	#define EMPTY_STRUCT_DECLARATION unsigned char _dummy_pad
	#define EMPTY_STRUCT_INITIALIZATION 0
	#undef EMPTY_ARRAY_OF_ELEMS
	#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[n])
	#undef __NOINLINE
	#undef __IRQHANDLER
	// tcc does not support inlining at all
	#define __NOINLINE
	#define __IRQHANDLER
	#undef TCCSKIP
	#define TCCSKIP(x)
	// #include <byteswap.h>
	#ifndef _WIN32
		int tcc_backtrace(const char *fmt, ...);
	#endif
#endif

// Use __offsetof_ptr instead of __offset_of, when you *do* have a valid pointer, to avoid UB:
#ifndef __offsetof_ptr
	#define __offsetof_ptr(ptr,PTYPE,FIELDNAME) ((size_t)((byte *)&((PTYPE *)ptr)->FIELDNAME - (byte *)ptr))
#endif

// for __offset_of
#ifndef __offsetof
	#define __offsetof(PTYPE,FIELDNAME) ((size_t)(&((PTYPE *)0)->FIELDNAME))
#endif

#define OPTION_CAST(x) (x)

#ifndef V64_PRINTFORMAT
	#ifdef PRIx64
		#define V64_PRINTFORMAT "0x%"PRIx64
	#elif defined(__WIN32__)
		#define V64_PRINTFORMAT "0x%I64x"
	#elif defined(__linux__) && defined(__LP64__)
		#define V64_PRINTFORMAT "0x%lx"
	#else
		#define V64_PRINTFORMAT "0x%llx"
	#endif
#endif

#if defined(_WIN32) || defined(__CYGWIN__)
	#define VV_EXPORTED_SYMBOL extern __declspec(dllexport)
	#define VV_LOCAL_SYMBOL static
#else
	// 4 < gcc < 5 is used by some older Ubuntu LTS and Centos versions,
	// and does not support __has_attribute(visibility) ...
	#ifndef __has_attribute
		#define __has_attribute(x) 0  // Compatibility with non-clang compilers.
	#endif
	#if (defined(__GNUC__) && (__GNUC__ >= 4)) || (defined(__clang__) && __has_attribute(visibility))
		#ifdef ARM
			#define VV_EXPORTED_SYMBOL  extern __attribute__((externally_visible,visibility("default")))
		#else
			#define VV_EXPORTED_SYMBOL  extern __attribute__((visibility("default")))
		#endif
		#if defined(__clang__) && (defined(_VUSECACHE) || defined(_VBUILDMODULE))
			#define VV_LOCAL_SYMBOL static
		#else
			#define VV_LOCAL_SYMBOL  __attribute__ ((visibility ("hidden")))
		#endif
	#else
		#define VV_EXPORTED_SYMBOL extern
		#define VV_LOCAL_SYMBOL static
	#endif
#endif

#ifdef __cplusplus
	#include <utility>
	#define _MOV std::move
#else
	#define _MOV
#endif

// tcc does not support has_include properly yet, turn it off completely
#if defined(__TINYC__) && defined(__has_include)
#undef __has_include
#endif


#if !defined(VWEAK)
	#define VWEAK __attribute__((weak))
	#ifdef _MSC_VER
		#undef VWEAK
		#define VWEAK
	#endif
	#if defined(__MINGW32__) || defined(__MINGW64__)
		#undef VWEAK
		#define VWEAK
	#endif
#endif

#if !defined(VHIDDEN)
	#define VHIDDEN __attribute__((visibility("hidden")))
	#ifdef _MSC_VER
		#undef VHIDDEN
		#define VHIDDEN
	#endif
	#if defined(__MINGW32__) || defined(__MINGW64__)
		#undef VHIDDEN
		#define VHIDDEN
	#endif
#endif

#if !defined(VNORETURN)
	#if defined(__TINYC__)
		#include <stdnoreturn.h>
		#define VNORETURN noreturn
	#endif
	# if !defined(__TINYC__) && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
	#  define VNORETURN _Noreturn
	# elif !defined(VNORETURN) && defined(__GNUC__) && __GNUC__ >= 2
	#  define VNORETURN __attribute__((noreturn))
	# endif
	#ifndef VNORETURN
		#define VNORETURN
	#endif
#endif

#if !defined(VUNREACHABLE)
	#if defined(__GNUC__) && !defined(__clang__)
		#define V_GCC_VERSION  (__GNUC__ * 10000L + __GNUC_MINOR__ * 100L + __GNUC_PATCHLEVEL__)
		#if (V_GCC_VERSION >= 40500L) && !defined(__TINYC__)
			#define VUNREACHABLE()  do { __builtin_unreachable(); } while (0)
		#endif
	#endif
	#if defined(__clang__) && defined(__has_builtin) && !defined(__TINYC__)
		#if __has_builtin(__builtin_unreachable)
			#define VUNREACHABLE()  do { __builtin_unreachable(); } while (0)
		#endif
	#endif
	#ifndef VUNREACHABLE
		#define VUNREACHABLE() do { } while (0)
	#endif
#endif

//likely and unlikely macros
#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__)
	#define _likely_(x)  __builtin_expect(x,1)
	#define _unlikely_(x)  __builtin_expect(x,0)
#else
	#define _likely_(x) (x)
	#define _unlikely_(x) (x)
#endif


// c_headers
typedef int (*qsort_callback_func)(const void*, const void*);
#include <stdio.h>  // TODO: remove all these includes, define all function signatures and types manually
#include <stdlib.h>
#include <string.h>

#include <stdarg.h> // for va_list

//================================== GLOBALS =================================*/
int load_so(byteptr);
void _vinit(int ___argc, voidptr ___argv);
void _vcleanup(void);
#define sigaction_size sizeof(sigaction);
#define _ARR_LEN(a) ( (sizeof(a)) / (sizeof(a[0])) )

void v_free(voidptr ptr);
//voidptr memdup(voidptr src, isize sz);

#if INTPTR_MAX == INT32_MAX
	#define TARGET_IS_32BIT 1
#elif INTPTR_MAX == INT64_MAX
	#define TARGET_IS_64BIT 1
#else
	#error "The environment is not 32 or 64-bit."
#endif

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)
	#define TARGET_ORDER_IS_BIG 1
#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || defined(_M_AMD64) || defined(_M_ARM64) || defined(_M_X64) || defined(_M_IX86)
	#define TARGET_ORDER_IS_LITTLE 1
#else
	#error "Unknown architecture endianness"
#endif

#ifndef _WIN32
	#include <ctype.h>
	#include <locale.h> // tolower
	#include <sys/time.h>
	#include <unistd.h> // sleep
	extern char **environ;
#endif

#if defined(__CYGWIN__) && !defined(_WIN32)
	#error Cygwin is not supported, please use MinGW or Visual Studio.
#endif

#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__vinix__) || defined(__serenity__) || defined(__sun) || defined(__plan9__)
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __OpenBSD__
	#include <sys/types.h>
	#include <sys/resource.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __FreeBSD__
	#include <signal.h>
	#include <execinfo.h>
#endif

#ifdef __NetBSD__
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef _WIN32
	#define WINVER 0x0600
	#ifdef _WIN32_WINNT
		#undef _WIN32_WINNT
	#endif
	#define _WIN32_WINNT 0x0600
	#ifndef WIN32_FULL
	#define WIN32_LEAN_AND_MEAN
	#endif
	#ifndef _UNICODE
	#define _UNICODE
	#endif
	#ifndef UNICODE
	#define UNICODE
	#endif
	#include <windows.h>

	#include <io.h> // _waccess
	#include <direct.h> // _wgetcwd
	#ifdef V_USE_SIGNAL_H
	#include <signal.h> // signal and SIGSEGV for segmentation fault handler
	#endif

	#ifdef _MSC_VER
		// On MSVC these are the same (as long as /volatile:ms is passed)
		#define _Atomic volatile

		// MSVC cannot parse some things properly
		#undef OPTION_CAST
		#define OPTION_CAST(x)
		#undef __NOINLINE
		#undef __IRQHANDLER
		#define __NOINLINE __declspec(noinline)
		#define __IRQHANDLER __declspec(naked)

		#include <dbghelp.h>
		#pragma comment(lib, "Dbghelp")
	#endif
#else
	#include <pthread.h>
	#ifndef PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP
		// musl does not have that
		#define pthread_rwlockattr_setkind_np(a, b)
	#endif
#endif

// g_live_info is used by live.info()
static void* g_live_info = NULL;

#if defined(__MINGW32__) || defined(__MINGW64__) || (defined(_WIN32) && defined(__TINYC__))
	#undef PRId64
	#undef PRIi64
	#undef PRIo64
	#undef PRIu64
	#undef PRIx64
	#undef PRIX64
	#define PRId64 "lld"
	#define PRIi64 "lli"
	#define PRIo64 "llo"
	#define PRIu64 "llu"
	#define PRIx64 "llx"
	#define PRIX64 "llX"
#endif

#ifdef _VFREESTANDING
#undef _VFREESTANDING
#endif


// ============== wyhash ==============
#ifndef wyhash_final_version_3
#define wyhash_final_version_3

#ifndef WYHASH_CONDOM
// protections that produce different results:
// 1: normal valid behavior
// 2: extra protection against entropy loss (probability=2^-63), aka. "blind multiplication"
#define WYHASH_CONDOM 1
#endif

#ifndef WYHASH_32BIT_MUM
// 0: normal version, slow on 32 bit systems
// 1: faster on 32 bit systems but produces different results, incompatible with wy2u0k function
#define WYHASH_32BIT_MUM 0
#endif

// includes
#include <stdint.h>
#if defined(_MSC_VER) && defined(_M_X64)
	#include <intrin.h>
	#pragma intrinsic(_umul128)
#endif

// 128bit multiply function
static inline uint64_t _wyrot(uint64_t x) { return (x>>32)|(x<<32); }
static inline void _wymum(uint64_t *A, uint64_t *B){
#if(WYHASH_32BIT_MUM)
	uint64_t hh=(*A>>32)*(*B>>32), hl=(*A>>32)*(uint32_t)*B, lh=(uint32_t)*A*(*B>>32), ll=(uint64_t)(uint32_t)*A*(uint32_t)*B;
	#if(WYHASH_CONDOM>1)
	*A^=_wyrot(hl)^hh; *B^=_wyrot(lh)^ll;
	#else
	*A=_wyrot(hl)^hh; *B=_wyrot(lh)^ll;
	#endif
#elif defined(__SIZEOF_INT128__) && !defined(VWASM)
	__uint128_t r=*A; r*=*B;
	#if(WYHASH_CONDOM>1)
	*A^=(uint64_t)r; *B^=(uint64_t)(r>>64);
	#else
	*A=(uint64_t)r; *B=(uint64_t)(r>>64);
	#endif
#elif defined(_MSC_VER) && defined(_M_X64)
	#if(WYHASH_CONDOM>1)
	uint64_t  a,  b;
	a=_umul128(*A,*B,&b);
	*A^=a;  *B^=b;
	#else
	*A=_umul128(*A,*B,B);
	#endif
#else
	uint64_t ha=*A>>32, hb=*B>>32, la=(uint32_t)*A, lb=(uint32_t)*B, hi, lo;
	uint64_t rh=ha*hb, rm0=ha*lb, rm1=hb*la, rl=la*lb, t=rl+(rm0<<32), c=t<rl;
	lo=t+(rm1<<32); c+=lo<t; hi=rh+(rm0>>32)+(rm1>>32)+c;
	#if(WYHASH_CONDOM>1)
	*A^=lo;  *B^=hi;
	#else
	*A=lo;  *B=hi;
	#endif
#endif
}

// multiply and xor mix function, aka MUM
static inline uint64_t _wymix(uint64_t A, uint64_t B){ _wymum(&A,&B); return A^B; }

// endian macros
#ifndef WYHASH_LITTLE_ENDIAN
	#ifdef TARGET_ORDER_IS_LITTLE
		#define WYHASH_LITTLE_ENDIAN 1
	#else
		#define WYHASH_LITTLE_ENDIAN 0
	#endif
#endif

// read functions
#if (WYHASH_LITTLE_ENDIAN)
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v;}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v;}
#elif !defined(__TINYC__) && (defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__))
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return __builtin_bswap64(v);}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return __builtin_bswap32(v);}
#elif defined(_MSC_VER)
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return _byteswap_uint64(v);}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return _byteswap_ulong(v);}
#else
	static inline uint64_t _wyr8(const uint8_t *p) {
		uint64_t v; memcpy(&v, p, 8);
		return (((v >> 56) & 0xff)| ((v >> 40) & 0xff00)| ((v >> 24) & 0xff0000)| ((v >>  8) & 0xff000000)| ((v <<  8) & 0xff00000000)| ((v << 24) & 0xff0000000000)| ((v << 40) & 0xff000000000000)| ((v << 56) & 0xff00000000000000));
	}
	static inline uint64_t _wyr4(const uint8_t *p) {
		uint32_t v; memcpy(&v, p, 4);
		return (((v >> 24) & 0xff)| ((v >>  8) & 0xff00)| ((v <<  8) & 0xff0000)| ((v << 24) & 0xff000000));
	}
#endif
static inline uint64_t _wyr3(const uint8_t *p, size_t k) { return (((uint64_t)p[0])<<16)|(((uint64_t)p[k>>1])<<8)|p[k-1];}
// wyhash main function
static inline uint64_t wyhash(const void *key, size_t len, uint64_t seed, const uint64_t *secret){
	const uint8_t *p=(const uint8_t *)key; seed^=*secret;	uint64_t a, b;
	if (_likely_(len<=16)) {
		if (_likely_(len>=4)) { a=(_wyr4(p)<<32)|_wyr4(p+((len>>3)<<2)); b=(_wyr4(p+len-4)<<32)|_wyr4(p+len-4-((len>>3)<<2)); }
		else if (_likely_(len>0)) { a=_wyr3(p,len); b=0; }
		else a=b=0;
	} else {
		size_t i=len;
		if (_unlikely_(i>48)) {
			uint64_t see1=seed, see2=seed;
			do {
				seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);
				see1=_wymix(_wyr8(p+16)^secret[2],_wyr8(p+24)^see1);
				see2=_wymix(_wyr8(p+32)^secret[3],_wyr8(p+40)^see2);
				p+=48; i-=48;
			} while(_likely_(i>48));
			seed^=see1^see2;
		}
		while(_unlikely_(i>16)) { seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);  i-=16; p+=16; }
		a=_wyr8(p+i-16);  b=_wyr8(p+i-8);
	}
	return _wymix(secret[1]^len,_wymix(a^secret[1],b^seed));
}
// the default secret parameters
static const uint64_t _wyp[4] = {0xa0761d6478bd642f, 0xe7037ed1a0b428db, 0x8ebc6af09c88c6e3, 0x589965cc75374cc3};

// a useful 64bit-64bit mix function to produce deterministic pseudo random numbers that can pass BigCrush and PractRand
static inline uint64_t wyhash64(uint64_t A, uint64_t B){ A^=0xa0761d6478bd642f; B^=0xe7037ed1a0b428db; _wymum(&A,&B); return _wymix(A^0xa0761d6478bd642f,B^0xe7037ed1a0b428db);}

// the wyrand PRNG that pass BigCrush and PractRand
static inline uint64_t wyrand(uint64_t *seed){ *seed+=0xa0761d6478bd642f; return _wymix(*seed,*seed^0xe7037ed1a0b428db);}

#ifndef __vinix__
// convert any 64 bit pseudo random numbers to uniform distribution [0,1). It can be combined with wyrand, wyhash64 or wyhash.
static inline double wy2u01(uint64_t r){ const double _wynorm=1.0/(1ull<<52); return (r>>12)*_wynorm;}

// convert any 64 bit pseudo random numbers to APPROXIMATE Gaussian distribution. It can be combined with wyrand, wyhash64 or wyhash.
static inline double wy2gau(uint64_t r){ const double _wynorm=1.0/(1ull<<20); return ((r&0x1fffff)+((r>>21)&0x1fffff)+((r>>42)&0x1fffff))*_wynorm-3.0;}
#endif

#if(!WYHASH_32BIT_MUM)
// fast range integer random number generation on [0,k) credit to Daniel Lemire. May not work when WYHASH_32BIT_MUM=1. It can be combined with wyrand, wyhash64 or wyhash.
static inline uint64_t wy2u0k(uint64_t r, uint64_t k){ _wymum(&r,&k); return k; }
#endif
#endif

#define _IN_MAP(val, m) map_exists(m, val)



// V includes:

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

// added by module `builtin`, file: builtin_d_gcboehm.c.v:105:

#if defined(__has_include)

#if __has_include(<gc.h>)
#include <gc.h>
#else
#error VERROR_MESSAGE Header file <gc.h>, needed for module `builtin` was not found. Please install the corresponding development headers.
#endif

#else
#include <gc.h>
#endif


// added by module `builtin`, file: float.c.v:10:

#if defined(__has_include)

#if __has_include(<float.h>)
#include <float.h>
#else
#error VERROR_MESSAGE Header file <float.h>, needed for module `builtin` was not found. Please install the corresponding development headers.
#endif

#else
#include <float.h>
#endif


// added by module `term.termios`, file: termios_linux.c.v:10:

#if defined(__has_include)

#if __has_include(<termios.h>)
#include <termios.h>
#else
#error VERROR_MESSAGE Header file <termios.h>, needed for module `term.termios` was not found. Please install the corresponding development headers.
#endif

#else
#include <termios.h>
#endif


// added by module `term.termios`, file: termios_linux.c.v:11:

#if defined(__has_include)

#if __has_include(<sys/ioctl.h>)
#include <sys/ioctl.h>
#else
#error VERROR_MESSAGE Header file <sys/ioctl.h>, needed for module `term.termios` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/ioctl.h>
#endif


// added by module `time`, file: time.c.v:6:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif


// added by module `time`, file: time_nix.c.v:7:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif


// added by module `time`, file: time_nix.c.v:8:
#include <errno.h>

// added by module `os`, file: debugger_linux.c.v:3:

#if defined(__has_include)

#if __has_include(<sys/ptrace.h>)
#include <sys/ptrace.h>
#else
#error VERROR_MESSAGE Header file <sys/ptrace.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/ptrace.h>
#endif


// added by module `os`, file: fd.c.v:6:

#if defined(__has_include)

#if __has_include(<sys/select.h>)
#include <sys/select.h>
#else
#error VERROR_MESSAGE Header file <sys/select.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/select.h>
#endif


// added by module `os`, file: os.c.v:5:

#if defined(__has_include)

#if __has_include(<sys/stat.h>)
#include <sys/stat.h>
#else
#error VERROR_MESSAGE Header file <sys/stat.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/stat.h>
#endif


// added by module `os`, file: os.c.v:6:
#include <errno.h>

// added by module `os`, file: os_nix.c.v:5:

#if defined(__has_include)

#if __has_include(<dirent.h>)
#include <dirent.h>
#else
#error VERROR_MESSAGE Header file <dirent.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <dirent.h>
#endif


// added by module `os`, file: os_nix.c.v:6:

#if defined(__has_include)

#if __has_include(<unistd.h>)
#include <unistd.h>
#else
#error VERROR_MESSAGE Header file <unistd.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <unistd.h>
#endif


// added by module `os`, file: os_nix.c.v:7:

#if defined(__has_include)

#if __has_include(<fcntl.h>)
#include <fcntl.h>
#else
#error VERROR_MESSAGE Header file <fcntl.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <fcntl.h>
#endif


// added by module `os`, file: os_nix.c.v:8:

#if defined(__has_include)

#if __has_include(<sys/utsname.h>)
#include <sys/utsname.h>
#else
#error VERROR_MESSAGE Header file <sys/utsname.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/utsname.h>
#endif


// added by module `os`, file: os_nix.c.v:9:

#if defined(__has_include)

#if __has_include(<sys/types.h>)
#include <sys/types.h>
#else
#error VERROR_MESSAGE Header file <sys/types.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/types.h>
#endif


// added by module `os`, file: os_nix.c.v:10:

#if defined(__has_include)

#if __has_include(<utime.h>)
#include <utime.h>
#else
#error VERROR_MESSAGE Header file <utime.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <utime.h>
#endif


// added by module `os`, file: signal.c.v:3:

#if defined(__has_include)

#if __has_include(<signal.h>)
#include <signal.h>
#else
#error VERROR_MESSAGE Header file <signal.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <signal.h>
#endif


// added by module `os`, file: signal_linux.c.v:5:

#if defined(__has_include)

#if __has_include(<signal.h>)
#include <signal.h>
#else
#error VERROR_MESSAGE Header file <signal.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <signal.h>
#endif


// added by module `net`, file: aasocket.c.v:19:

#if defined(__has_include)

#if __has_include(<sys/un.h>)
#include <sys/un.h>
#else
#error VERROR_MESSAGE Header file <sys/un.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/un.h>
#endif


// added by module `net`, file: net_nix.c.v:3:

#if defined(__has_include)

#if __has_include(<unistd.h>)
#include <unistd.h>
#else
#error VERROR_MESSAGE Header file <unistd.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <unistd.h>
#endif


// added by module `net`, file: net_nix.c.v:4:

#if defined(__has_include)

#if __has_include(<sys/select.h>)
#include <sys/select.h>
#else
#error VERROR_MESSAGE Header file <sys/select.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/select.h>
#endif


// added by module `net`, file: net_nix.c.v:6:

#if defined(__has_include)

#if __has_include(<arpa/inet.h>)
#include <arpa/inet.h>
#else
#error VERROR_MESSAGE Header file <arpa/inet.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <arpa/inet.h>
#endif


// added by module `net`, file: net_nix.c.v:7:

#if defined(__has_include)

#if __has_include(<netdb.h>)
#include <netdb.h>
#else
#error VERROR_MESSAGE Header file <netdb.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <netdb.h>
#endif


// added by module `net`, file: net_nix.c.v:8:
#include <errno.h>

// added by module `net`, file: net_nix.c.v:9:

#if defined(__has_include)

#if __has_include(<fcntl.h>)
#include <fcntl.h>
#else
#error VERROR_MESSAGE Header file <fcntl.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <fcntl.h>
#endif


// added by module `net`, file: net_nix.c.v:10:

#if defined(__has_include)

#if __has_include(<netinet/tcp.h>)
#include <netinet/tcp.h>
#else
#error VERROR_MESSAGE Header file <netinet/tcp.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <netinet/tcp.h>
#endif


// Enum definitions:

typedef enum {
	strconv__ParserState__ok, // 
	strconv__ParserState__pzero, // +1
	strconv__ParserState__mzero, // +2
	strconv__ParserState__pinf, // +3
	strconv__ParserState__minf, // +4
	strconv__ParserState__invalid_number, // +5
}  strconv__ParserState;

typedef enum {
	strconv__Align_text__right = 0, // 0
	strconv__Align_text__left, // 0+1
	strconv__Align_text__center, // 0+2
}  strconv__Align_text;

typedef enum {
	strconv__Char_parse_state__start, // 
	strconv__Char_parse_state__norm_char, // +1
	strconv__Char_parse_state__field_char, // +2
	strconv__Char_parse_state__pad_ch, // +3
	strconv__Char_parse_state__len_set_start, // +4
	strconv__Char_parse_state__len_set_in, // +5
	strconv__Char_parse_state__check_type, // +6
	strconv__Char_parse_state__check_float, // +7
	strconv__Char_parse_state__check_float_in, // +8
	strconv__Char_parse_state__reset_params, // +9
}  strconv__Char_parse_state;

typedef enum {
	ArrayFlags__noslices = 1U, // u64(1) << 0
	ArrayFlags__noshrink = 2U, // u64(1) << 1
	ArrayFlags__nogrow = 4U, // u64(1) << 2
	ArrayFlags__nofree = 8U, // u64(1) << 3
}  ArrayFlags;

typedef enum {
	AttributeKind__plain, // 
	AttributeKind__string, // +1
	AttributeKind__number, // +2
	AttributeKind__comptime_define, // +3
}  AttributeKind;

typedef enum {
	ChanState__success, // 
	ChanState__not_ready, // +1
	ChanState__closed, // +2
}  ChanState;

typedef enum {
	StrIntpType__si_no_str = 0, // 0
	StrIntpType__si_c, // 0+1
	StrIntpType__si_u8, // 0+2
	StrIntpType__si_i8, // 0+3
	StrIntpType__si_u16, // 0+4
	StrIntpType__si_i16, // 0+5
	StrIntpType__si_u32, // 0+6
	StrIntpType__si_i32, // 0+7
	StrIntpType__si_u64, // 0+8
	StrIntpType__si_i64, // 0+9
	StrIntpType__si_e32, // 0+10
	StrIntpType__si_e64, // 0+11
	StrIntpType__si_f32, // 0+12
	StrIntpType__si_f64, // 0+13
	StrIntpType__si_g32, // 0+14
	StrIntpType__si_g64, // 0+15
	StrIntpType__si_s, // 0+16
	StrIntpType__si_p, // 0+17
	StrIntpType__si_r, // 0+18
	StrIntpType__si_vp, // 0+19
}  StrIntpType;

typedef enum {
	time__FormatTime__hhmm12, // 
	time__FormatTime__hhmm24, // +1
	time__FormatTime__hhmmss12, // +2
	time__FormatTime__hhmmss24, // +3
	time__FormatTime__hhmmss24_milli, // +4
	time__FormatTime__hhmmss24_micro, // +5
	time__FormatTime__hhmmss24_nano, // +6
	time__FormatTime__no_time, // +7
}  time__FormatTime;

typedef enum {
	time__FormatDate__ddmmyy, // 
	time__FormatDate__ddmmyyyy, // +1
	time__FormatDate__mmddyy, // +2
	time__FormatDate__mmddyyyy, // +3
	time__FormatDate__mmmd, // +4
	time__FormatDate__mmmdd, // +5
	time__FormatDate__mmmddyy, // +6
	time__FormatDate__mmmddyyyy, // +7
	time__FormatDate__no_date, // +8
	time__FormatDate__yyyymmdd, // +9
	time__FormatDate__yymmdd, // +10
}  time__FormatDate;

typedef enum {
	time__FormatDelimiter__dot, // 
	time__FormatDelimiter__hyphen, // +1
	time__FormatDelimiter__slash, // +2
	time__FormatDelimiter__space, // +3
	time__FormatDelimiter__no_delimiter, // +4
}  time__FormatDelimiter;

typedef enum {
	os__SeekMode__start, // 
	os__SeekMode__current, // +1
	os__SeekMode__end, // +2
}  os__SeekMode;

typedef enum {
	os__FileBufferMode__fully_buffered = _IOFBF, // _IOFBF
	os__FileBufferMode__line_buffered = _IOLBF, // _IOLBF
	os__FileBufferMode__not_buffered = _IONBF, // _IONBF
}  os__FileBufferMode;

typedef enum {
	os__FileType__unknown, // 
	os__FileType__regular, // +1
	os__FileType__directory, // +2
	os__FileType__character_device, // +3
	os__FileType__block_device, // +4
	os__FileType__fifo, // +5
	os__FileType__symbolic_link, // +6
	os__FileType__socket, // +7
}  os__FileType;

typedef enum {
	os__GlobMatch__exact, // 
	os__GlobMatch__ends_with, // +1
	os__GlobMatch__starts_with, // +2
	os__GlobMatch__start_and_ends_with, // +3
	os__GlobMatch__contains, // +4
	os__GlobMatch__any, // +5
}  os__GlobMatch;

typedef enum {
	os__ChildProcessPipeKind__stdin, // 
	os__ChildProcessPipeKind__stdout, // +1
	os__ChildProcessPipeKind__stderr, // +2
}  os__ChildProcessPipeKind;

typedef enum {
	os__ProcessState__not_started, // 
	os__ProcessState__running, // +1
	os__ProcessState__stopped, // +2
	os__ProcessState__exited, // +3
	os__ProcessState__aborted, // +4
	os__ProcessState__closed, // +5
}  os__ProcessState;

typedef enum {
	os__Signal__hup = 1, // 1
	os__Signal__int = 2, // 2
	os__Signal__quit = 3, // 3
	os__Signal__ill = 4, // 4
	os__Signal__trap = 5, // 5
	os__Signal__abrt = 6, // 6
	os__Signal__bus = 7, // 7
	os__Signal__fpe = 8, // 8
	os__Signal__kill = 9, // 9
	os__Signal__usr1 = 10, // 10
	os__Signal__segv = 11, // 11
	os__Signal__usr2 = 12, // 12
	os__Signal__pipe = 13, // 13
	os__Signal__alrm = 14, // 14
	os__Signal__term = 15, // 15
	os__Signal__stkflt = 16, // 16
	os__Signal__chld = 17, // 17
	os__Signal__cont = 18, // 18
	os__Signal__stop = 19, // 19
	os__Signal__tstp = 20, // 20
	os__Signal__ttin = 21, // 21
	os__Signal__ttou = 22, // 22
	os__Signal__urg = 23, // 23
	os__Signal__xcpu = 24, // 24
	os__Signal__xfsz = 25, // 25
	os__Signal__vtalrm = 26, // 26
	os__Signal__prof = 27, // 27
	os__Signal__winch = 28, // 28
	os__Signal__poll = 29, // 29
	os__Signal__pwr = 30, // 30
	os__Signal__sys = 31, // 31
}  os__Signal;

typedef enum {
	net__Select__read, // 
	net__Select__write, // +1
	net__Select__except, // +2
}  net__Select;

typedef enum {
	net__SocketType__udp = SOCK_DGRAM, // SOCK_DGRAM
	net__SocketType__tcp = SOCK_STREAM, // SOCK_STREAM
	net__SocketType__seqpacket = SOCK_SEQPACKET, // SOCK_SEQPACKET
}  net__SocketType;

typedef enum {
	net__AddrFamily__unix = AF_UNIX, // AF_UNIX
	net__AddrFamily__ip = AF_INET, // AF_INET
	net__AddrFamily__ip6 = AF_INET6, // AF_INET6
	net__AddrFamily__unspec = AF_UNSPEC, // AF_UNSPEC
}  net__AddrFamily;

typedef enum {
	net__ShutdownDirection__read, // 
	net__ShutdownDirection__write, // +1
	net__ShutdownDirection__read_and_write, // +2
}  net__ShutdownDirection;

typedef enum {
	net__SocketOption__broadcast = SO_BROADCAST, // SO_BROADCAST
	net__SocketOption__debug = SO_DEBUG, // SO_DEBUG
	net__SocketOption__dont_route = SO_DONTROUTE, // SO_DONTROUTE
	net__SocketOption__error = SO_ERROR, // SO_ERROR
	net__SocketOption__keep_alive = SO_KEEPALIVE, // SO_KEEPALIVE
	net__SocketOption__linger = SO_LINGER, // SO_LINGER
	net__SocketOption__oob_inline = SO_OOBINLINE, // SO_OOBINLINE
	net__SocketOption__reuse_addr = SO_REUSEADDR, // SO_REUSEADDR
	net__SocketOption__receive_buf_size = SO_RCVBUF, // SO_RCVBUF
	net__SocketOption__receive_low_size = SO_RCVLOWAT, // SO_RCVLOWAT
	net__SocketOption__receive_timeout = SO_RCVTIMEO, // SO_RCVTIMEO
	net__SocketOption__send_buf_size = SO_SNDBUF, // SO_SNDBUF
	net__SocketOption__send_low_size = SO_SNDLOWAT, // SO_SNDLOWAT
	net__SocketOption__send_timeout = SO_SNDTIMEO, // SO_SNDTIMEO
	net__SocketOption__socket_type = SO_TYPE, // SO_TYPE
	net__SocketOption__ipv6_only = IPV6_V6ONLY, // IPV6_V6ONLY
}  net__SocketOption;

// Thread definitions:
typedef pthread_t __v_thread;

// V type definitions:
struct IError {
	union {
		void* _object;
		None__* _None__;
		voidptr* _voidptr;
		Error* _Error;
		MessageError* _MessageError;
		time__TimeParseError* _time__TimeParseError;
		io__Eof* _io__Eof;
		io__NotExpected* _io__NotExpected;
		os__Eof* _os__Eof;
		os__NotExpected* _os__NotExpected;
		os__FileNotOpenedError* _os__FileNotOpenedError;
		os__SizeOfTypeIs0Error* _os__SizeOfTypeIs0Error;
		os__ExecutableNotFoundError* _os__ExecutableNotFoundError;
	};
	int _typ;
	string* msg;
	int* code;
};

struct string {
	u8* str;
	int len;
	int is_lit;
};

struct array {
	voidptr data;
	int offset;
	int len;
	int cap;
	ArrayFlags flags;
	int element_size;
};

struct DenseArray {
	int key_bytes;
	int value_bytes;
	int cap;
	int len;
	u32 deletes;
	u8* all_deleted;
	u8* keys;
	u8* values;
};

struct map {
	int key_bytes;
	int value_bytes;
	u32 even_index;
	u8 cached_hashbits;
	u8 shift;
	DenseArray key_values;
	u32* metas;
	u32 extra_metas;
	bool has_string_keys;
	MapHashFn hash_fn;
	MapEqFn key_eq_fn;
	MapCloneFn clone_fn;
	MapFreeFn free_fn;
	int len;
};

struct Error {
	EMPTY_STRUCT_DECLARATION;
};

struct _option {
	u8 state;
	IError err;
};

struct _result {
	bool is_error;
	IError err;
};
typedef array Array_string;
typedef array Array_u8;
typedef array Array_voidptr;
typedef array Array_VCastTypeIndexName;
typedef array Array_MethodArgs;
typedef array Array_u8_ptr;
typedef array Array_rune;
typedef string Array_fixed_string_11 [11];
typedef voidptr Array_fixed_voidptr_11 [11];
typedef array Array_RepIndex;
typedef array Array_int;
typedef array Array_cmd__CmdOption;
typedef array Array_u16;
typedef map Map_string_int;
typedef map Map_string_string;
typedef array Array_char_ptr;
typedef int Array_fixed_int_3 [3];
typedef array Array_os__Signal;
typedef char Array_fixed_char_256 [256];
typedef u8 Array_fixed_u8_16 [16];
typedef u8 Array_fixed_u8_4 [4];
typedef array Array_net__Addr;
typedef u32 Array_fixed_u32_4 [4];
typedef char Array_fixed_char_108 [108];
typedef u8 Array_fixed_u8_8 [8];
typedef u8 Array_fixed_u8_108 [108];
typedef array Array_IError;
typedef array Array_io__Writer;
typedef array Array_u32;
typedef u8 Array_fixed_u8_5 [5];
typedef u8 Array_fixed_u8_25 [25];
typedef u8 Array_fixed_u8_32 [32];
typedef u8 Array_fixed_u8_64 [64];
typedef u8 Array_fixed_u8_256 [256];
typedef u64 Array_fixed_u64_309 [309];
typedef u64 Array_fixed_u64_324 [324];
typedef u32 Array_fixed_u32_10 [10];
typedef u64 Array_fixed_u64_20 [20];
typedef u64 Array_fixed_u64_584 [584];
typedef u64 Array_fixed_u64_652 [652];
typedef f64 Array_fixed_f64_20 [20];
typedef u8 Array_fixed_u8_26 [26];
typedef u64 Array_fixed_u64_18 [18];
typedef u64 Array_fixed_u64_47 [47];
typedef u64 Array_fixed_u64_31 [31];
typedef voidptr Array_fixed_voidptr_100 [100];
typedef u8 Array_fixed_u8_1000 [1000];
typedef u8 Array_fixed_u8_17 [17];
typedef int Array_fixed_int_10 [10];
typedef int Array_fixed_int_20 [20];
typedef array Array_StrIntpType;
typedef string Array_fixed_string_7 [7];
typedef map Map_string_i64;
typedef int Array_fixed_int_13 [13];
typedef char Array_fixed_char_1024 [1024];
typedef int Array_fixed_int_12 [12];
typedef u8 Array_fixed_u8_4096 [4096];
typedef u8 Array_fixed_u8_1024 [1024];
typedef array Array_os__ProcessState;
typedef int Array_fixed_int_6 [6];
typedef char Array_fixed_char_24 [24];
typedef char Array_fixed_char_46 [46];
typedef array Array_net__SocketOption;
typedef u8 Array_fixed_u8_400 [400];
typedef voidptr C__intptr_t;
typedef Array_u8 strings__Builder;
typedef i64 time__Duration;
typedef int term__termios__TcFlag;
typedef int term__termios__Speed;
typedef u8 term__termios__Cc;
typedef i64 C__time_t;
typedef bool (*anon_fn_voidptr__bool)(voidptr);
typedef voidptr (*anon_fn_voidptr__voidptr)(voidptr);
typedef int (*anon_fn_voidptr_voidptr__int)(voidptr,voidptr);
typedef void (*FnExitCb)();
typedef void (*anon_fn_voidptr_voidptr)(voidptr,voidptr);
typedef void (*FnGC_WarnCB)(char*,usize);
typedef int (*FnSortCB)(voidptr,voidptr);
typedef void (*anon_fn_string)(string);
typedef void (*os__FnWalkContextCB)(voidptr,string);
typedef void (*os__SignalHandler)(os__Signal);
typedef void (*os__FN_SA_Handler)(int);
struct io__Reader {
	union {
		void* _object;
		net__TcpConn* _net__TcpConn;
		voidptr* _voidptr;
		os__File* _os__File;
		io__BufferedReader* _io__BufferedReader;
		io__ReaderWriterImpl* _io__ReaderWriterImpl;
	};
	int _typ;
};
struct io__Writer {
	union {
		void* _object;
		io__MultiWriter* _io__MultiWriter;
		voidptr* _voidptr;
		net__TcpConn* _net__TcpConn;
		os__File* _os__File;
		net__UdpConn* _net__UdpConn;
		io__ReaderWriterImpl* _io__ReaderWriterImpl;
	};
	int _typ;
};
struct io__RandomReader {
	union {
		void* _object;
		os__File* _os__File;
		voidptr* _voidptr;
	};
	int _typ;
};
struct io__ReaderWriter {
	union {
		void* _object;
		io__ReaderWriterImpl* _io__ReaderWriterImpl;
		voidptr* _voidptr;
	};
	int _typ;
};
struct io__RandomWriter {
	union {
		void* _object;
	};
	int _typ;
};
struct rand__PRNG {
	union {
		void* _object;
		rand__wyrand__WyRandRNG* _rand__wyrand__WyRandRNG;
		voidptr* _voidptr;
	};
	int _typ;
};
struct hash__Hasher {
	union {
		void* _object;
	};
	int _typ;
};
struct hash__Hash32er {
	union {
		void* _object;
	};
	int _typ;
};
struct hash__Hash64er {
	union {
		void* _object;
	};
	int _typ;
};
// #start sorted_symbols
struct none {
	EMPTY_STRUCT_DECLARATION;
};

struct None__ {
	Error Error;
};

struct StrIntpCgenData {
	string str;
	string fmt;
	string d;
};

struct cmd__CmdOption {
	string abbr;
	string full;
	string vari;
	string defa;
	string desc;
};

struct os__Eof {
	Error Error;
};

struct os__FileNotOpenedError {
	Error Error;
};

struct os__SizeOfTypeIs0Error {
	Error Error;
};

struct os__ExecutableNotFoundError {
	Error Error;
};

struct os__Uname {
	string sysname;
	string nodename;
	string release;
	string version;
	string machine;
};

struct io__util__TempFileOptions {
	string path;
	string pattern;
};

struct io__util__TempDirOptions {
	string path;
	string pattern;
};

struct io__Eof {
	Error Error;
};

struct GCHeapUsage {
	usize heap_size;
	usize free_bytes;
	usize total_bytes;
	usize unmapped_bytes;
	usize bytes_since_gc;
};

struct VCastTypeIndexName {
	int tindex;
	string tname;
};

struct VAssertMetaInfo {
	string fpath;
	int line_nr;
	string fn_name;
	string src;
	string op;
	string llabel;
	string rlabel;
	string lvalue;
	string rvalue;
	string message;
	bool has_msg;
};

struct MethodArgs {
	int typ;
	string name;
};

struct FunctionData {
	string name;
	Array_string attrs;
	Array_MethodArgs args;
	int return_type;
	int typ;
};

struct VariantData {
	int typ;
};

struct EnumData {
	string name;
	i64 value;
	Array_string attrs;
};

struct FieldData {
	string name;
	int typ;
	int unaliased_typ;
	Array_string attrs;
	bool is_pub;
	bool is_mut;
	bool is_shared;
	bool is_atomic;
	bool is_option;
	bool is_array;
	bool is_map;
	bool is_chan;
	bool is_enum;
	bool is_struct;
	bool is_alias;
	u8 indirections;
};

struct VAttribute {
	string name;
	bool has_arg;
	string arg;
	AttributeKind kind;
};

union strconv__Float64u {
	f64 f;
	u64 u;
};

union strconv__Float32u {
	f32 f;
	u32 u;
};

struct VContext {
	int allocator;
};

struct Option {
	u8 state;
	IError err;
};

struct MessageError {
	string msg;
	int code;
};

struct SortedMap {
	int value_bytes;
	mapnode* root;
	int len;
};

struct RepIndex {
	int idx;
	int val_idx;
};

union StrIntpMem {
	u32 d_c;
	u8 d_u8;
	i8 d_i8;
	u16 d_u16;
	i16 d_i16;
	u32 d_u32;
	int d_i32;
	u64 d_u64;
	i64 d_i64;
	f32 d_f32;
	f64 d_f64;
	string d_s;
	string d_r;
	voidptr d_p;
	voidptr d_vp;
};

struct strconv__BF_param {
	u8 pad_ch;
	int len0;
	int len1;
	bool positive;
	bool sign_flag;
	strconv__Align_text align;
	strconv__Align_text allign;
	bool rm_tail_zero;
};

struct strconv__PrepNumber {
	bool negative;
	int exponent;
	u64 mantissa;
};

struct strconv__Dec32 {
	u32 m;
	int e;
};

union strconv__Uf32 {
	f32 f;
	u32 u;
};

struct strconv__Dec64 {
	u64 m;
	int e;
};

struct strconv__Uint128 {
	u64 lo;
	u64 hi;
};

union strconv__Uf64 {
	f64 f;
	u64 u;
};

struct os__NotExpected {
	string cause;
	int code;
};

struct os__File {
	voidptr cfile;
	int fd;
	bool is_opened;
};

struct os__FilePermission {
	bool read;
	bool write;
	bool execute;
};

struct os__Stat {
	u64 dev;
	u64 inode;
	u32 mode;
	u64 nlink;
	u32 uid;
	u32 gid;
	u64 rdev;
	u64 size;
	i64 atime;
	i64 mtime;
	i64 ctime;
};

struct os__PathKind {
	bool is_file;
	bool is_dir;
	bool is_link;
};

struct os__SystemError {
	string msg;
	int code;
};

struct os__Result {
	int exit_code;
	string output;
};

struct os__Command {
	voidptr f;
	bool eof;
	int exit_code;
	string path;
	bool redirect_stdout;
};

struct os__MvParams {
	bool overwrite;
};

struct os__MkdirParams {
	u32 mode;
};

struct net__ShutdownConfig {
	net__ShutdownDirection how;
};

struct time__Time {
	i64 __v_unix;
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int nanosecond;
	bool is_local;
	int microsecond;
};

struct net__Socket {
	int handle;
};

struct net__ListenOptions {
	bool dualstack;
	int backlog;
};

struct strings__textscanner__TextScanner {
	string input;
	int ilen;
	int pos;
};
typedef term__termios__Cc Array_fixed_term__termios__Cc_32 [32];

union net__conv__ConversionUnion {
	u64 as_int64;
	u32 as_int32;
	f64 as_double64;
	f32 as_double32;
};

struct time__DateTimeParser {
	string datetime;
	string format;
	int current_pos_datetime;
};

struct time__TimeParseError {
	Error Error;
	int code;
	string message;
};

struct time__StopWatchOptions {
	bool auto_start;
};

struct time__StopWatch {
	u64 elapsed;
	u64 start;
	u64 end;
};

struct io__BufferedReader {
	io__Reader reader;
	Array_u8 buf;
	int offset;
	int len;
	int fails;
	int mfails;
	bool end_of_stream;
	int total_read;
};

struct io__BufferedReaderConfig {
	io__Reader reader;
	int cap;
	int retries;
};

struct io__BufferedReadLineConfig {
	u8 delim;
};

struct io__NotExpected {
	string cause;
	int code;
};

struct io__MultiWriter {
	Array_io__Writer writers;
};

struct io__ReadAllConfig {
	bool read_to_end_of_stream;
	io__Reader reader;
};

struct io__ReaderWriterImpl {
	io__Reader r;
	io__Writer w;
};

struct rand__config__NormalConfigStruct {
	f64 mu;
	f64 sigma;
};

struct rand__config__ShuffleConfigStruct {
	int start;
	int end;
};

struct rand__config__PRNGConfigStruct {
	Array_u32 seed_;
};

struct rand__buffer__PRNGBuffer {
	int bytes_left;
	u64 buffer;
};

struct mapnode {
	voidptr* children;
	int len;
	Array_fixed_string_11 keys;
	Array_fixed_voidptr_11 values;
};

struct StrIntpData {
	string str;
	u32 fmt;
	StrIntpMem d;
};

struct os__FileMode {
	os__FileType typ;
	os__FilePermission owner;
	os__FilePermission group;
	os__FilePermission others;
};

struct term__termios__Termios {
	term__termios__TcFlag c_iflag;
	term__termios__TcFlag c_oflag;
	term__termios__TcFlag c_cflag;
	term__termios__TcFlag c_lflag;
	term__termios__Cc c_line;
	Array_fixed_term__termios__Cc_32 c_cc;
	term__termios__Speed c_ispeed;
	term__termios__Speed c_ospeed;
};

struct os__Process {
	string filename;
	int pid;
	int code;
	os__ProcessState status;
	string err;
	Array_string args;
	string work_folder;
	bool env_is_custom;
	Array_string env;
	bool use_stdio_ctl;
	bool use_pgroup;
	Array_fixed_int_3 stdio_fd;
	voidptr wdata;
	bool create_no_window;
};

struct net__Unix {
	Array_fixed_u8_108 path;
};
#pragma pack(push, 1)

struct net__Ip {
	u16 port;
	Array_fixed_u8_4 addr;
	Array_fixed_u8_8 sin_pad;
};
#pragma pack(pop)
#pragma pack(push, 1)

struct net__Ip6 {
	u16 port;
	u32 flow_info;
	Array_fixed_u8_16 addr;
	u32 scope_id;
};
#pragma pack(pop)

struct net__TcpSocket {
	net__Socket Socket;
};

struct rand__wyrand__WyRandRNG {
	rand__buffer__PRNGBuffer PRNGBuffer;
	u64 state;
	int bytes_left;
	u64 buffer;
};

struct net__TcpConn {
	net__TcpSocket sock;
	int handle;
	time__Time write_deadline;
	time__Time read_deadline;
	time__Duration read_timeout;
	time__Duration write_timeout;
	bool is_blocking;
};

struct os__FileInfo {
	os__FileMode FileMode;
	u64 size;
	i64 mtime;
};

union net__AddrData {
	net__Unix Unix;
	net__Ip Ip;
	net__Ip6 Ip6;
};

struct net__TcpListener {
	net__TcpSocket sock;
	time__Duration accept_timeout;
	time__Time accept_deadline;
	bool is_blocking;
};
#pragma pack(push, 1)

struct net__Addr {
	u16 f;
	net__AddrData addr;
};
#pragma pack(pop)

struct net__UdpSocket {
	net__Socket Socket;
	net__Addr l;
	bool has_r;
	net__Addr r;
};

struct net__UdpConn {
	net__UdpSocket sock;
	time__Time write_deadline;
	time__Time read_deadline;
	time__Duration read_timeout;
	time__Duration write_timeout;
};
// #end sorted_symbols

// BEGIN_array_fixed_return_structs
// END_array_fixed_return_structs


// BEGIN_multi_return_structs
struct multi_return_u32_u32 {
	u32 arg0;
	u32 arg1;
};

struct multi_return_string_string {
	string arg0;
	string arg1;
};

struct multi_return_int_int {
	int arg0;
	int arg1;
};

struct multi_return_u32_u32_u32 {
	u32 arg0;
	u32 arg1;
	u32 arg2;
};

struct multi_return_strconv__ParserState_strconv__PrepNumber {
	strconv__ParserState arg0;
	strconv__PrepNumber arg1;
};

struct multi_return_u64_int {
	u64 arg0;
	int arg1;
};

struct multi_return_strconv__Dec32_bool {
	strconv__Dec32 arg0;
	bool arg1;
};

struct multi_return_strconv__Dec64_bool {
	strconv__Dec64 arg0;
	bool arg1;
};

struct multi_return_string_int {
	string arg0;
	int arg1;
};

struct multi_return_int_bool {
	int arg0;
	bool arg1;
};

struct multi_return_int_net__Addr {
	int arg0;
	net__Addr arg1;
};

struct multi_return_string_u16 {
	string arg0;
	u16 arg1;
};

struct multi_return_u64_u64 {
	u64 arg0;
	u64 arg1;
};

struct multi_return_f64_int {
	f64 arg0;
	int arg1;
};

struct multi_return_os__File_string {
	os__File arg0;
	string arg1;
};

struct multi_return_u64_u8 {
	u64 arg0;
	u8 arg1;
};

struct multi_return_int_int_int {
	int arg0;
	int arg1;
	int arg2;
};

struct multi_return_int_int_int_int_int_i64_bool {
	int arg0;
	int arg1;
	int arg2;
	int arg3;
	int arg4;
	i64 arg5;
	bool arg6;
};

struct multi_return_f64_f64 {
	f64 arg0;
	f64 arg1;
};

// END_multi_return_structs


typedef struct thread_arg_client__handle_client {
	void (*fn) (net__TcpConn*);
	net__TcpConn* arg1;
} thread_arg_client__handle_client;
 void* client__handle_client_thread_wrapper(thread_arg_client__handle_client *arg);

typedef struct thread_arg_client__send_message {
	void (*fn) (net__TcpConn*);
	net__TcpConn* arg1;
} thread_arg_client__send_message;
 void* client__send_message_thread_wrapper(thread_arg_client__send_message *arg);

typedef struct thread_arg_main__load_data {
	void (*fn) (net__TcpConn*);
	net__TcpConn* arg1;
} thread_arg_main__load_data;
 void* main__load_data_thread_wrapper(thread_arg_main__load_data *arg);
static bool Array_u8_contains(Array_u8 a, u8 v); // auto
static bool Array_string_contains(Array_string a, string v); // auto
static int Array_string_index(Array_string a, string v); // auto

// V alias definitions:

// V shared types:

// V Option_xxx definitions:
struct _option_string {
	byte state;
	IError err;
	byte data[sizeof(string) > 1 ? sizeof(string) : 1];
};

struct _option_multi_return_string_string {
	byte state;
	IError err;
	byte data[sizeof(multi_return_string_string) > 1 ? sizeof(multi_return_string_string) : 1];
};

struct _option_int {
	byte state;
	IError err;
	byte data[sizeof(int) > 1 ? sizeof(int) : 1];
};

struct _option_u8 {
	byte state;
	IError err;
	byte data[sizeof(u8) > 1 ? sizeof(u8) : 1];
};


// V result_xxx definitions:
struct _result_int {
	bool is_error;
	IError err;
	byte data[sizeof(int) > 1 ? sizeof(int) : 1];
};

struct _result_f64 {
	bool is_error;
	IError err;
	byte data[sizeof(f64) > 1 ? sizeof(f64) : 1];
};

struct _result_u64 {
	bool is_error;
	IError err;
	byte data[sizeof(u64) > 1 ? sizeof(u64) : 1];
};

struct _result_i64 {
	bool is_error;
	IError err;
	byte data[sizeof(i64) > 1 ? sizeof(i64) : 1];
};

struct _result_void {
	bool is_error;
	IError err;
	byte data[sizeof(u8) > 1 ? sizeof(u8) : 1];
};

struct _result_rune {
	bool is_error;
	IError err;
	byte data[sizeof(rune) > 1 ? sizeof(rune) : 1];
};

struct _result_string {
	bool is_error;
	IError err;
	byte data[sizeof(string) > 1 ? sizeof(string) : 1];
};

struct _result_Array_u8 {
	bool is_error;
	IError err;
	byte data[sizeof(Array_u8) > 1 ? sizeof(Array_u8) : 1];
};

struct _result_multi_return_u64_u8 {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_u64_u8) > 1 ? sizeof(multi_return_u64_u8) : 1];
};

struct _result_Array_string {
	bool is_error;
	IError err;
	byte data[sizeof(Array_string) > 1 ? sizeof(Array_string) : 1];
};

struct _result_time__Time {
	bool is_error;
	IError err;
	byte data[sizeof(time__Time) > 1 ? sizeof(time__Time) : 1];
};

struct _result_multi_return_int_int_int {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_int_int_int) > 1 ? sizeof(multi_return_int_int_int) : 1];
};

struct _result_multi_return_int_int_int_int_int_i64_bool {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_int_int_int_int_int_i64_bool) > 1 ? sizeof(multi_return_int_int_int_int_int_i64_bool) : 1];
};

struct _result_os__File {
	bool is_error;
	IError err;
	byte data[sizeof(os__File) > 1 ? sizeof(os__File) : 1];
};

struct _result_FILE_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(FILE*) > 1 ? sizeof(FILE*) : 1];
};

struct _result_os__Stat {
	bool is_error;
	IError err;
	byte data[sizeof(os__Stat) > 1 ? sizeof(os__Stat) : 1];
};

struct _result_strings__Builder {
	bool is_error;
	IError err;
	byte data[sizeof(strings__Builder) > 1 ? sizeof(strings__Builder) : 1];
};

struct _result_os__Result {
	bool is_error;
	IError err;
	byte data[sizeof(os__Result) > 1 ? sizeof(os__Result) : 1];
};

struct _result_anon_fn_os__signal {
	bool is_error;
	IError err;
	byte data[sizeof(void*) > 1 ? sizeof(void*) : 1];
};

struct _result_u32 {
	bool is_error;
	IError err;
	byte data[sizeof(u32) > 1 ? sizeof(u32) : 1];
};

struct _result_f32 {
	bool is_error;
	IError err;
	byte data[sizeof(f32) > 1 ? sizeof(f32) : 1];
};

struct _result_bool {
	bool is_error;
	IError err;
	byte data[sizeof(bool) > 1 ? sizeof(bool) : 1];
};

struct _result_multi_return_f64_f64 {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_f64_f64) > 1 ? sizeof(multi_return_f64_f64) : 1];
};

struct _result_multi_return_os__File_string {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_os__File_string) > 1 ? sizeof(multi_return_os__File_string) : 1];
};

struct _result_multi_return_string_string {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_string_string) > 1 ? sizeof(multi_return_string_string) : 1];
};

struct _result_net__Addr {
	bool is_error;
	IError err;
	byte data[sizeof(net__Addr) > 1 ? sizeof(net__Addr) : 1];
};

struct _result_Array_net__Addr {
	bool is_error;
	IError err;
	byte data[sizeof(Array_net__Addr) > 1 ? sizeof(Array_net__Addr) : 1];
};

struct _result_u16 {
	bool is_error;
	IError err;
	byte data[sizeof(u16) > 1 ? sizeof(u16) : 1];
};

struct _result_multi_return_string_u16 {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_string_u16) > 1 ? sizeof(multi_return_string_u16) : 1];
};

struct _result_net__TcpConn_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(net__TcpConn*) > 1 ? sizeof(net__TcpConn*) : 1];
};

struct _result_net__TcpSocket {
	bool is_error;
	IError err;
	byte data[sizeof(net__TcpSocket) > 1 ? sizeof(net__TcpSocket) : 1];
};

struct _result_net__TcpListener_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(net__TcpListener*) > 1 ? sizeof(net__TcpListener*) : 1];
};

struct _result_net__UdpConn_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(net__UdpConn*) > 1 ? sizeof(net__UdpConn*) : 1];
};

struct _result_net__UdpSocket_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(net__UdpSocket*) > 1 ? sizeof(net__UdpSocket*) : 1];
};

struct _result_multi_return_int_net__Addr {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_int_net__Addr) > 1 ? sizeof(multi_return_int_net__Addr) : 1];
};


// V json forward decls:

// V definitions:
static char * v_typeof_interface_IError(int sidx);
static char * v_typeof_interface_io__Reader(int sidx);
static char * v_typeof_interface_io__Writer(int sidx);
static char * v_typeof_interface_io__RandomReader(int sidx);
static char * v_typeof_interface_io__ReaderWriter(int sidx);
static char * v_typeof_interface_io__RandomWriter(int sidx);
static char * v_typeof_interface_rand__PRNG(int sidx);
static char * v_typeof_interface_hash__Hasher(int sidx);
static char * v_typeof_interface_hash__Hash32er(int sidx);
static char * v_typeof_interface_hash__Hash64er(int sidx);
// end of definitions #endif
strings__Builder strings__new_builder(int initial_size);
Array_u8 strings__Builder_reuse_as_plain_u8_array(strings__Builder* b);
void strings__Builder_write_ptr(strings__Builder* b, u8* ptr, int len);
void strings__Builder_write_rune(strings__Builder* b, rune r);
void strings__Builder_write_runes(strings__Builder* b, Array_rune runes);
void strings__Builder_clear(strings__Builder* b);
void strings__Builder_write_u8(strings__Builder* b, u8 data);
void strings__Builder_write_byte(strings__Builder* b, u8 data);
void strings__Builder_write_decimal(strings__Builder* b, i64 n);
_result_int strings__Builder_write(strings__Builder* b, Array_u8 data);
void strings__Builder_drain_builder(strings__Builder* b, strings__Builder* other, int other_new_cap);
u8 strings__Builder_byte_at(strings__Builder* b, int n);
void strings__Builder_write_string(strings__Builder* b, string s);
void strings__Builder_writeln_string(strings__Builder* b, string s);
void strings__Builder_go_back(strings__Builder* b, int n);
string strings__Builder_spart(strings__Builder* b, int start_pos, int n);
string strings__Builder_cut_last(strings__Builder* b, int n);
string strings__Builder_cut_to(strings__Builder* b, int pos);
void strings__Builder_go_back_to(strings__Builder* b, int pos);
void strings__Builder_writeln(strings__Builder* b, string s);
string strings__Builder_last_n(strings__Builder* b, int n);
string strings__Builder_after(strings__Builder* b, int n);
string strings__Builder_str(strings__Builder* b);
void strings__Builder_ensure_cap(strings__Builder* b, int n);
void strings__Builder_grow_len(strings__Builder* b, int n);
void strings__Builder_free(strings__Builder* b);
VV_LOCAL_SYMBOL u16 strings__min(u16 a, u16 b, u16 c);
int strings__levenshtein_distance(string a, string b);
f32 strings__levenshtein_distance_percentage(string a, string b);
f32 strings__dice_coefficient(string s1, string s2);
string strings__repeat(u8 c, int n);
string strings__repeat_string(string s, int n);
string strings__find_between_pair_u8(string input, u8 start, u8 end);
string strings__find_between_pair_rune(string input, rune start, rune end);
string strings__find_between_pair_string(string input, string start, string end);
Array_string strings__split_capital(string s);
int math__bits__leading_zeros_8(u8 x);
int math__bits__leading_zeros_16(u16 x);
int math__bits__leading_zeros_32(u32 x);
int math__bits__leading_zeros_64(u64 x);
int math__bits__trailing_zeros_8(u8 x);
int math__bits__trailing_zeros_16(u16 x);
int math__bits__trailing_zeros_32(u32 x);
int math__bits__trailing_zeros_64(u64 x);
int math__bits__ones_count_8(u8 x);
int math__bits__ones_count_16(u16 x);
int math__bits__ones_count_32(u32 x);
int math__bits__ones_count_64(u64 x);
u8 math__bits__rotate_left_8(u8 x, int k);
u16 math__bits__rotate_left_16(u16 x, int k);
u32 math__bits__rotate_left_32(u32 x, int k);
u64 math__bits__rotate_left_64(u64 x, int k);
u8 math__bits__reverse_8(u8 x);
u16 math__bits__reverse_16(u16 x);
u32 math__bits__reverse_32(u32 x);
u64 math__bits__reverse_64(u64 x);
u16 math__bits__reverse_bytes_16(u16 x);
u32 math__bits__reverse_bytes_32(u32 x);
u64 math__bits__reverse_bytes_64(u64 x);
int math__bits__len_8(u8 x);
int math__bits__len_16(u16 x);
int math__bits__len_32(u32 x);
int math__bits__len_64(u64 x);
multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry);
multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry);
multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow);
multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow);
multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y);
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y);
multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y);
multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1);
u32 math__bits__rem_32(u32 hi, u32 lo, u32 y);
u64 math__bits__rem_64(u64 hi, u64 lo, u64 y);
multi_return_f64_int math__bits__normalize(f64 x);
u32 math__bits__f32_bits(f32 f);
f32 math__bits__f32_from_bits(u32 b);
u64 math__bits__f64_bits(f64 f);
f64 math__bits__f64_from_bits(u64 b);
VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0);
VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0);
VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
VV_LOCAL_SYMBOL bool strconv__is_digit(u8 x);
VV_LOCAL_SYMBOL bool strconv__is_space(u8 x);
VV_LOCAL_SYMBOL bool strconv__is_exp(u8 x);
VV_LOCAL_SYMBOL multi_return_strconv__ParserState_strconv__PrepNumber strconv__parser(string s);
VV_LOCAL_SYMBOL u64 strconv__converter(strconv__PrepNumber* pn);
_result_f64 strconv__atof64(string s);
f64 strconv__atof_quick(string s);
u8 strconv__byte_to_lower(u8 c);
_result_u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size);
_result_u64 strconv__parse_uint(string s, int _base, int _bit_size);
_result_i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
_result_i64 strconv__parse_int(string _s, int base, int _bit_size);
_result_int strconv__atoi(string s);
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit);
VV_LOCAL_SYMBOL multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp);
VV_LOCAL_SYMBOL strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp);
string strconv__f32_to_str(f32 f, int n_digit);
string strconv__f32_to_str_pad(f32 f, int n_digit);
VV_LOCAL_SYMBOL string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit);
VV_LOCAL_SYMBOL multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp);
VV_LOCAL_SYMBOL strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp);
string strconv__f64_to_str(f64 f, int n_digit);
string strconv__f64_to_str_pad(f64 f, int n_digit);
string strconv__format_str(string s, strconv__BF_param p);
void strconv__format_str_sb(string s, strconv__BF_param p, strings__Builder* sb);
void strconv__format_dec_sb(u64 d, strconv__BF_param p, strings__Builder* res);
string strconv__f64_to_str_lnd1(f64 f, int dec_digit);
string strconv__format_fl(f64 f, strconv__BF_param p);
string strconv__format_es(f64 f, strconv__BF_param p);
string strconv__remove_tail_zeros(string s);
string strconv__ftoa_64(f64 f);
string strconv__ftoa_long_64(f64 f);
string strconv__ftoa_32(f32 f);
string strconv__ftoa_long_32(f32 f);
string strconv__format_int(i64 n, int radix);
string strconv__format_uint(u64 n, int radix);
string strconv__f32_to_str_l(f32 f);
string strconv__f32_to_str_l_with_dot(f32 f);
string strconv__f64_to_str_l(f64 f);
string strconv__f64_to_str_l_with_dot(f64 f);
string strconv__fxx_to_str_l_parse(string s);
string strconv__fxx_to_str_l_parse_with_dot(string s);
VV_LOCAL_SYMBOL int strconv__bool_to_int(bool b);
VV_LOCAL_SYMBOL u32 strconv__bool_to_u32(bool b);
VV_LOCAL_SYMBOL u64 strconv__bool_to_u64(bool b);
VV_LOCAL_SYMBOL string strconv__get_string_special(bool neg, bool expZero, bool mantZero);
VV_LOCAL_SYMBOL u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift);
VV_LOCAL_SYMBOL u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j);
VV_LOCAL_SYMBOL u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j);
VV_LOCAL_SYMBOL u32 strconv__pow5_factor_32(u32 i_v);
VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_five_32(u32 v, u32 p);
VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_two_32(u32 v, u32 p);
VV_LOCAL_SYMBOL u32 strconv__log10_pow2(int e);
VV_LOCAL_SYMBOL u32 strconv__log10_pow5(int e);
VV_LOCAL_SYMBOL int strconv__pow5_bits(int e);
VV_LOCAL_SYMBOL u64 strconv__shift_right_128(strconv__Uint128 v, int shift);
VV_LOCAL_SYMBOL u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift);
VV_LOCAL_SYMBOL u32 strconv__pow5_factor_64(u64 v_i);
VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_five_64(u64 v, u32 p);
VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_two_64(u64 v, u32 p);
int strconv__dec_digits(u64 n);
void strconv__v_printf(string str, Array_voidptr pt);
string strconv__v_sprintf(string str, Array_voidptr pt);
VV_LOCAL_SYMBOL void strconv__v_sprintf_panic(int idx, int len);
VV_LOCAL_SYMBOL f64 strconv__fabs(f64 x);
string strconv__format_fl_old(f64 f, strconv__BF_param p);
VV_LOCAL_SYMBOL string strconv__format_es_old(f64 f, strconv__BF_param p);
VV_LOCAL_SYMBOL string strconv__remove_tail_zeros_old(string s);
string strconv__format_dec_old(u64 d, strconv__BF_param p);
VV_LOCAL_SYMBOL array __new_array(int mylen, int cap, int elm_size);
VV_LOCAL_SYMBOL array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val);
VV_LOCAL_SYMBOL array __new_array_with_multi_default(int mylen, int cap, int elm_size, voidptr val);
VV_LOCAL_SYMBOL array __new_array_with_array_default(int mylen, int cap, int elm_size, array val, int depth);
VV_LOCAL_SYMBOL array __new_array_with_map_default(int mylen, int cap, int elm_size, map val);
VV_LOCAL_SYMBOL array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array);
VV_LOCAL_SYMBOL array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array);
VV_LOCAL_SYMBOL void array_ensure_cap(array* a, int required);
array array_repeat(array a, int count);
array array_repeat_to_depth(array a, int count, int depth);
void array_insert(array* a, int i, voidptr val);
VV_LOCAL_SYMBOL void array_insert_many(array* a, int i, voidptr val, int size);
void array_prepend(array* a, voidptr val);
VV_LOCAL_SYMBOL void array_prepend_many(array* a, voidptr val, int size);
void array_delete(array* a, int i);
void array_delete_many(array* a, int i, int size);
void array_clear(array* a);
void array_reset(array* a);
void array_trim(array* a, int index);
void array_drop(array* a, int num);
VV_LOCAL_SYMBOL voidptr array_get_unsafe(array a, int i);
VV_LOCAL_SYMBOL voidptr array_get(array a, int i);
VV_LOCAL_SYMBOL voidptr array_get_with_check(array a, int i);
voidptr array_first(array a);
voidptr array_last(array a);
voidptr array_pop(array* a);
void array_delete_last(array* a);
VV_LOCAL_SYMBOL array array_slice(array a, int start, int _end);
VV_LOCAL_SYMBOL array array_slice_ni(array a, int _start, int _end);
VV_LOCAL_SYMBOL array array_clone_static_to_depth(array a, int depth);
array array_clone(array* a);
array array_clone_to_depth(array* a, int depth);
VV_LOCAL_SYMBOL void array_set_unsafe(array* a, int i, voidptr val);
VV_LOCAL_SYMBOL void array_set(array* a, int i, voidptr val);
VV_LOCAL_SYMBOL void array_push(array* a, voidptr val);
void array_push_many(array* a3, voidptr val, int size);
void array_reverse_in_place(array* a);
array array_reverse(array a);
void array_free(array* a);
array array_filter(array a, bool (*predicate)(voidptr ));
bool array_any(array a, bool (*predicate)(voidptr ));
bool array_all(array a, bool (*predicate)(voidptr ));
array array_map(array a, voidptr (*callback)(voidptr ));
void array_sort(array* a, int (*callback)(voidptr , voidptr ));
array array_sorted(array* a, int (*callback)(voidptr , voidptr ));
void array_sort_with_compare(array* a, int (*callback)(voidptr , voidptr ));
array array_sorted_with_compare(array* a, int (*callback)(voidptr , voidptr ));
bool array_contains(array a, voidptr value);
int array_index(array a, voidptr value);
void Array_string_free(Array_string* a);
string Array_string_str(Array_string a);
string Array_u8_hex(Array_u8 b);
int copy(Array_u8* dst, Array_u8 src);
void array_grow_cap(array* a, int amount);
void array_grow_len(array* a, int amount);
Array_voidptr array_pointers(array a);
Array_u8 voidptr_vbytes(voidptr data, int len);
Array_u8 u8_vbytes(u8* data, int len);
VV_LOCAL_SYMBOL array __new_array_noscan(int mylen, int cap, int elm_size);
VV_LOCAL_SYMBOL array __new_array_with_default_noscan(int mylen, int cap, int elm_size, voidptr val);
VV_LOCAL_SYMBOL array __new_array_with_multi_default_noscan(int mylen, int cap, int elm_size, voidptr val);
VV_LOCAL_SYMBOL array __new_array_with_array_default_noscan(int mylen, int cap, int elm_size, array val);
VV_LOCAL_SYMBOL array new_array_from_c_array_noscan(int len, int cap, int elm_size, voidptr c_array);
VV_LOCAL_SYMBOL void array_ensure_cap_noscan(array* a, int required);
VV_LOCAL_SYMBOL array array_repeat_to_depth_noscan(array a, int count, int depth);
VV_LOCAL_SYMBOL void array_insert_noscan(array* a, int i, voidptr val);
VV_LOCAL_SYMBOL void array_insert_many_noscan(array* a, int i, voidptr val, int size);
VV_LOCAL_SYMBOL void array_prepend_noscan(array* a, voidptr val);
VV_LOCAL_SYMBOL void array_prepend_many_noscan(array* a, voidptr val, int size);
VV_LOCAL_SYMBOL voidptr array_pop_noscan(array* a);
VV_LOCAL_SYMBOL array array_clone_static_to_depth_noscan(array a, int depth);
VV_LOCAL_SYMBOL array array_clone_to_depth_noscan(array* a, int depth);
VV_LOCAL_SYMBOL void array_push_noscan(array* a, voidptr val);
VV_LOCAL_SYMBOL void array_push_many_noscan(array* a3, voidptr val, int size);
VV_LOCAL_SYMBOL array array_reverse_noscan(array a);
VV_LOCAL_SYMBOL void array_grow_cap_noscan(array* a, int amount);
VV_LOCAL_SYMBOL void array_grow_len_noscan(array* a, int amount);
void print_backtrace(void);
bool print_backtrace_skipping_top_frames(int xskipframes);
VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames_bsd(int skipframes);
VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames_linux(int skipframes);
VV_LOCAL_SYMBOL void vhalt(void);
VV_LOCAL_SYMBOL void v_segmentation_fault_handler(int signal_number);
void _v_exit(int code);
_result_void at_exit(void (*cb)());
VV_LOCAL_SYMBOL void panic_debug(int line_no, string file, string mod, string fn_name, string s);
void panic_option_not_set(string s);
void panic_result_not_set(string s);
void _v_panic(string s);
string c_error_number_str(int errnum);
void panic_error_number(string basestr, int errnum);
void eprintln(string s);
void eprint(string s);
void flush_stdout(void);
void flush_stderr(void);
void unbuffer_stdout(void);
void print(string s);
void println(string s);
VV_LOCAL_SYMBOL void _writeln_to_fd(int fd, string s);
VV_LOCAL_SYMBOL void _write_buf_to_fd(int fd, u8* buf, int buf_len);
u8* _v_malloc(isize n);
u8* malloc_noscan(isize n);
VV_LOCAL_SYMBOL u64 __at_least_one(u64 how_many);
u8* malloc_uncollectable(isize n);
u8* v_realloc(u8* b, isize n);
u8* realloc_data(u8* old_data, int old_size, int new_size);
u8* vcalloc(isize n);
u8* vcalloc_noscan(isize n);
void _v_free(voidptr ptr);
voidptr memdup(voidptr src, isize sz);
voidptr memdup_noscan(voidptr src, isize sz);
voidptr memdup_uncollectable(voidptr src, isize sz);
GCHeapUsage gc_heap_usage(void);
usize gc_memory_use(void);
VV_LOCAL_SYMBOL int v_fixed_index(int i, int len);
bool isnil(voidptr v);
VV_LOCAL_SYMBOL voidptr __as_cast(voidptr obj, int obj_type, int expected_type);
void VAssertMetaInfo_free(VAssertMetaInfo* ami);
VV_LOCAL_SYMBOL void __print_assert_failure(VAssertMetaInfo* i);
bool gc_is_enabled(void);
void gc_collect(void);
void gc_enable(void);
void gc_disable(void);
void gc_check_leaks(void);
FnGC_WarnCB gc_get_warn_proc(void);
void gc_set_warn_proc(void (*cb)(char* msg, usize arg));
VV_LOCAL_SYMBOL void internal_gc_warn_proc_none(char* msg, usize arg);
VV_LOCAL_SYMBOL void builtin_init(void);
VV_LOCAL_SYMBOL void break_if_debugger_attached(void);
void panic_lasterr(string base);
VV_LOCAL_SYMBOL void print_libbacktrace(int frames_to_skip);
VV_LOCAL_SYMBOL void eprint_libbacktrace(int frames_to_skip);
int proc_pidpath(int , voidptr , int );
int vstrlen(u8* s);
int vstrlen_char(char* s);
voidptr vmemcpy(voidptr dest, const voidptr const_src, isize n);
voidptr vmemmove(voidptr dest, const voidptr const_src, isize n);
int vmemcmp(const voidptr const_s1, const voidptr const_s2, isize n);
voidptr vmemset(voidptr s, int c, isize n);
VV_LOCAL_SYMBOL void vqsort(voidptr base, usize nmemb, usize size, int (*sort_cb)(const voidptr const_a, const voidptr const_b));
void chan_close(chan ch);
ChanState chan_try_pop(chan ch, voidptr obj);
ChanState chan_try_push(chan ch, voidptr obj);
int input_character(void);
int print_character(u8 ch);
string f64_str(f64 x);
string f64_strg(f64 x);
string float_literal_str(float_literal d);
string f64_strsci(f64 x, int digit_num);
string f64_strlong(f64 x);
string f32_str(f32 x);
string f32_strg(f32 x);
string f32_strsci(f32 x, int digit_num);
string f32_strlong(f32 x);
f32 f32_abs(f32 a);
VV_LOCAL_SYMBOL f64 f64_abs(f64 a);
f32 f32_max(f32 a, f32 b);
f32 f32_min(f32 a, f32 b);
f64 f64_max(f64 a, f64 b);
VV_LOCAL_SYMBOL f64 f64_min(f64 a, f64 b);
bool f32_eq_epsilon(f32 a, f32 b);
bool f64_eq_epsilon(f64 a, f64 b);
VV_LOCAL_SYMBOL void float_test(void);
string ptr_str(voidptr ptr);
string isize_str(isize x);
string usize_str(usize x);
string char_str(char* cptr);
VV_LOCAL_SYMBOL string int_str_l(int nn, int max);
string i8_str(i8 n);
string i16_str(i16 n);
string u16_str(u16 n);
string i32_str(i32 n);
string int_hex_full(int nn);
string int_str(int n);
string u32_str(u32 nn);
string int_literal_str(int_literal n);
string i64_str(i64 nn);
string u64_str(u64 nn);
string bool_str(bool b);
VV_LOCAL_SYMBOL string u64_to_hex(u64 nn, u8 len);
VV_LOCAL_SYMBOL string u64_to_hex_no_leading_zeros(u64 nn, u8 len);
string u8_hex(u8 nn);
string i8_hex(i8 nn);
string u16_hex(u16 nn);
string i16_hex(i16 nn);
string u32_hex(u32 nn);
string int_hex(int nn);
string int_hex2(int n);
string u64_hex(u64 nn);
string i64_hex(i64 nn);
string int_literal_hex(int_literal nn);
string voidptr_str(voidptr nn);
string byteptr_str(byteptr nn);
string charptr_str(charptr nn);
string u8_hex_full(u8 nn);
string i8_hex_full(i8 nn);
string u16_hex_full(u16 nn);
string i16_hex_full(i16 nn);
string u32_hex_full(u32 nn);
string i64_hex_full(i64 nn);
string voidptr_hex_full(voidptr nn);
string int_literal_hex_full(int_literal nn);
string u64_hex_full(u64 nn);
string u8_str(u8 b);
string u8_ascii_str(u8 b);
string u8_str_escaped(u8 b);
bool u8_is_capital(u8 c);
string Array_u8_bytestr(Array_u8 b);
_result_rune Array_u8_byterune(Array_u8 b);
string u8_repeat(u8 b, int count);
VV_LOCAL_SYMBOL string _Atomic__int_str(int x);
VV_LOCAL_SYMBOL bool fast_string_eq(string a, string b);
VV_LOCAL_SYMBOL u64 map_hash_string(voidptr pkey);
VV_LOCAL_SYMBOL u64 map_hash_int_1(voidptr pkey);
VV_LOCAL_SYMBOL u64 map_hash_int_2(voidptr pkey);
VV_LOCAL_SYMBOL u64 map_hash_int_4(voidptr pkey);
VV_LOCAL_SYMBOL u64 map_hash_int_8(voidptr pkey);
VV_LOCAL_SYMBOL void DenseArray_zeros_to_end(DenseArray* d);
VV_LOCAL_SYMBOL DenseArray new_dense_array(int key_bytes, int value_bytes);
VV_LOCAL_SYMBOL voidptr DenseArray_key(DenseArray* d, int i);
VV_LOCAL_SYMBOL voidptr DenseArray_value(DenseArray* d, int i);
VV_LOCAL_SYMBOL bool DenseArray_has_index(DenseArray* d, int i);
VV_LOCAL_SYMBOL int DenseArray_expand(DenseArray* d);
VV_LOCAL_SYMBOL bool map_eq_string(voidptr a, voidptr b);
VV_LOCAL_SYMBOL bool map_eq_int_1(voidptr a, voidptr b);
VV_LOCAL_SYMBOL bool map_eq_int_2(voidptr a, voidptr b);
VV_LOCAL_SYMBOL bool map_eq_int_4(voidptr a, voidptr b);
VV_LOCAL_SYMBOL bool map_eq_int_8(voidptr a, voidptr b);
VV_LOCAL_SYMBOL void map_clone_string(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_clone_int_1(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_clone_int_2(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_clone_int_4(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_clone_int_8(voidptr dest, voidptr pkey);
VV_LOCAL_SYMBOL void map_free_string(voidptr pkey);
VV_LOCAL_SYMBOL void map_free_nop(voidptr _d1);
VV_LOCAL_SYMBOL map new_map(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOCAL_SYMBOL map new_map_init(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
VV_LOCAL_SYMBOL map new_map_update_init(map* update, int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
map map_move(map* m);
void map_clear(map* m);
VV_LOCAL_SYMBOL multi_return_u32_u32 map_key_to_index(map* m, voidptr pkey);
VV_LOCAL_SYMBOL multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas);
VV_LOCAL_SYMBOL void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi);
VV_LOCAL_SYMBOL void map_ensure_extra_metas(map* m, u32 probe_count);
VV_LOCAL_SYMBOL void map_set(map* m, voidptr key, voidptr value);
VV_LOCAL_SYMBOL void map_expand(map* m);
VV_LOCAL_SYMBOL void map_rehash(map* m);
void map_reserve(map* m, u32 meta_bytes);
VV_LOCAL_SYMBOL void map_cached_rehash(map* m, u32 old_cap);
VV_LOCAL_SYMBOL voidptr map_get_and_set(map* m, voidptr key, voidptr zero);
VV_LOCAL_SYMBOL voidptr map_get(map* m, voidptr key, voidptr zero);
VV_LOCAL_SYMBOL voidptr map_get_check(map* m, voidptr key);
VV_LOCAL_SYMBOL bool map_exists(map* m, voidptr key);
VV_LOCAL_SYMBOL void DenseArray_delete(DenseArray* d, int i);
void map_delete(map* m, voidptr key);
array map_keys(map* m);
array map_values(map* m);
VV_LOCAL_SYMBOL DenseArray DenseArray_clone(DenseArray* d);
map map_clone(map* m);
void map_free(map* m);
VV_LOCAL_SYMBOL u8* __malloc_at_least_one(u64 how_many_bytes, bool noscan);
VV_LOCAL_SYMBOL DenseArray new_dense_array_noscan(int key_bytes, bool key_noscan, int value_bytes, bool value_noscan);
VV_LOCAL_SYMBOL map new_map_noscan_key(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOCAL_SYMBOL map new_map_noscan_value(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOCAL_SYMBOL map new_map_noscan_key_value(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOCAL_SYMBOL map new_map_init_noscan_key(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
VV_LOCAL_SYMBOL map new_map_init_noscan_value(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
VV_LOCAL_SYMBOL map new_map_init_noscan_key_value(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
void IError_free(IError* ie);
VV_LOCAL_SYMBOL void _option_none(voidptr data, _option* option, int size);
VV_LOCAL_SYMBOL void _option_ok(voidptr data, _option* option, int size);
VV_LOCAL_SYMBOL string None___str(None__ _d1);
string none_str(none _d2);
VV_LOCAL_SYMBOL void _result_ok(voidptr data, _result* res, int size);
string IError_str(IError err);
string Error_msg(Error err);
int Error_code(Error err);
string MessageError_str(MessageError err);
string MessageError_msg(MessageError err);
int MessageError_code(MessageError err);
void MessageError_free(MessageError* err);
IError _v_error(string message);
IError error_with_code(string message, int code);
string rune_str(rune c);
string Array_rune_string(Array_rune ra);
string rune_repeat(rune c, int count);
Array_u8 rune_bytes(rune c);
int rune_length_in_bytes(rune c);
VV_LOCAL_SYMBOL SortedMap new_sorted_map(int n, int value_bytes);
VV_LOCAL_SYMBOL SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values);
VV_LOCAL_SYMBOL mapnode* new_node(void);
VV_LOCAL_SYMBOL void SortedMap_set(SortedMap* m, string key, voidptr value);
VV_LOCAL_SYMBOL void mapnode_split_child(mapnode* n, int child_index, mapnode* y);
VV_LOCAL_SYMBOL bool SortedMap_get(SortedMap m, string key, voidptr out);
VV_LOCAL_SYMBOL bool SortedMap_exists(SortedMap m, string key);
VV_LOCAL_SYMBOL int mapnode_find_key(mapnode* n, string k);
VV_LOCAL_SYMBOL bool mapnode_remove_key(mapnode* n, string k);
VV_LOCAL_SYMBOL void mapnode_remove_from_leaf(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_remove_from_non_leaf(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_fill(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_borrow_from_prev(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_borrow_from_next(mapnode* n, int idx);
VV_LOCAL_SYMBOL void mapnode_merge(mapnode* n, int idx);
void SortedMap_delete(SortedMap* m, string key);
VV_LOCAL_SYMBOL int mapnode_subkeys(mapnode* n, Array_string* keys, int at);
Array_string SortedMap_keys(SortedMap* m);
VV_LOCAL_SYMBOL void mapnode_free(mapnode* n);
void SortedMap_free(SortedMap* m);
void SortedMap_print(SortedMap m);
Array_rune string_runes(string s);
string cstring_to_vstring(char* s);
string tos_clone(u8* s);
string tos(u8* s, int len);
string tos2(u8* s);
string tos3(char* s);
string tos4(u8* s);
string tos5(char* s);
string u8_vstring(u8* bp);
string u8_vstring_with_len(u8* bp, int len);
string char_vstring(char* cp);
string char_vstring_with_len(char* cp, int len);
string u8_vstring_literal(u8* bp);
string u8_vstring_literal_with_len(u8* bp, int len);
string char_vstring_literal(char* cp);
string char_vstring_literal_with_len(char* cp, int len);
int string_len_utf8(string s);
VV_LOCAL_SYMBOL string string_clone_static(string a);
VV_LOCAL_SYMBOL _option_string string_option_clone_static(string a);
string string_clone(string a);
string string_replace_once(string s, string rep, string with);
string string_replace(string s, string rep, string with);
string string_replace_each(string s, Array_string vals);
VV_LOCAL_SYMBOL  int compare_3040552254790933403_RepIndex_by_idx(RepIndex* a, RepIndex* b) {
	if (a->idx < b->idx) return -1;
	else return 1;
}

string string_replace_char(string s, u8 rep, u8 with, int repeat);
string string_normalize_tabs(string s, int tab_len);
bool string_bool(string s);
i8 string_i8(string s);
i16 string_i16(string s);
i32 string_i32(string s);
int string_int(string s);
i64 string_i64(string s);
f32 string_f32(string s);
f64 string_f64(string s);
Array_u8 string_u8_array(string s);
u8 string_u8(string s);
u16 string_u16(string s);
u32 string_u32(string s);
u64 string_u64(string s);
_result_u64 string_parse_uint(string s, int _base, int _bit_size);
_result_i64 string_parse_int(string s, int _base, int _bit_size);
VV_LOCAL_SYMBOL bool string__eq(string s, string a);
int string_compare(string s, string a);
VV_LOCAL_SYMBOL bool string__lt(string s, string a);
VV_LOCAL_SYMBOL string string__plus(string s, string a);
Array_string string_split_any(string s, string delim);
Array_string string_rsplit_any(string s, string delim);
Array_string string_split(string s, string delim);
Array_string string_rsplit(string s, string delim);
_option_multi_return_string_string string_split_once(string s, string delim);
_option_multi_return_string_string string_rsplit_once(string s, string delim);
Array_string string_split_nth(string s, string delim, int nth);
Array_string string_rsplit_nth(string s, string delim, int nth);
Array_string string_split_into_lines(string s);
string string_substr(string s, int start, int _end);
string string_substr_unsafe(string s, int start, int _end);
_result_string string_substr_with_check(string s, int start, int _end);
string string_substr_ni(string s, int _start, int _end);
VV_LOCAL_SYMBOL int string_index_(string s, string p);
_option_int string_index(string s, string p);
_option_int string_index_last(string s, string needle);
_option_int string_last_index(string s, string needle);
VV_LOCAL_SYMBOL int string_index_kmp(string s, string p);
int string_index_any(string s, string chars);
VV_LOCAL_SYMBOL int string_index_last_(string s, string p);
int string_index_after(string s, string p, int start);
int string_index_u8(string s, u8 c);
int string_index_u8_last(string s, u8 c);
int string_last_index_u8(string s, u8 c);
int string_count(string s, string substr);
bool string_contains_u8(string s, u8 x);
bool string_contains(string s, string substr);
bool string_contains_any(string s, string chars);
bool string_contains_only(string s, string chars);
bool string_contains_any_substr(string s, Array_string substrs);
bool string_starts_with(string s, string p);
bool string_ends_with(string s, string p);
string string_to_lower(string s);
bool string_is_lower(string s);
string string_to_upper(string s);
bool string_is_upper(string s);
string string_capitalize(string s);
string string_uncapitalize(string s);
bool string_is_capital(string s);
bool string_starts_with_capital(string s);
string string_title(string s);
bool string_is_title(string s);
string string_find_between(string s, string start, string end);
string string_trim_space(string s);
string string_trim(string s, string cutset);
multi_return_int_int string_trim_indexes(string s, string cutset);
string string_trim_left(string s, string cutset);
string string_trim_right(string s, string cutset);
string string_trim_string_left(string s, string str);
string string_trim_string_right(string s, string str);
int compare_strings(string* a, string* b);
VV_LOCAL_SYMBOL int compare_strings_by_len(string* a, string* b);
VV_LOCAL_SYMBOL int compare_lower_strings(string* a, string* b);
void Array_string_sort_ignore_case(Array_string* s);
void Array_string_sort_by_len(Array_string* s);
string string_str(string s);
VV_LOCAL_SYMBOL u8 string_at(string s, int idx);
VV_LOCAL_SYMBOL _option_u8 string_at_with_check(string s, int idx);
bool string_is_oct(string str);
bool string_is_bin(string str);
bool string_is_hex(string str);
bool string_is_int(string str);
bool u8_is_space(u8 c);
bool u8_is_digit(u8 c);
bool u8_is_hex_digit(u8 c);
bool u8_is_oct_digit(u8 c);
bool u8_is_bin_digit(u8 c);
bool u8_is_letter(u8 c);
bool u8_is_alnum(u8 c);
void string_free(string* s);
string string_before(string s, string sub);
string string_all_before(string s, string sub);
string string_all_before_last(string s, string sub);
string string_all_after(string s, string sub);
string string_all_after_last(string s, string sub);
string string_all_after_first(string s, string sub);
string string_after(string s, string sub);
string string_after_char(string s, u8 sub);
string Array_string_join(Array_string a, string sep);
string Array_string_join_lines(Array_string s);
string string_reverse(string s);
string string_limit(string s, int max);
int string_hash(string s);
Array_u8 string_bytes(string s);
string string_repeat(string s, int count);
Array_string string_fields(string s);
string string_strip_margin(string s);
string string_strip_margin_custom(string s, u8 del);
string string_trim_indent(string s);
int string_indent_width(string s);
bool string_is_blank(string s);
bool string_match_glob(string name, string pattern);
bool string_is_ascii(string s);
Array_u8 byteptr_vbytes(byteptr data, int len);
string byteptr_vstring(byteptr bp);
string byteptr_vstring_with_len(byteptr bp, int len);
string charptr_vstring(charptr cp);
string charptr_vstring_with_len(charptr cp, int len);
string byteptr_vstring_literal(byteptr bp);
string byteptr_vstring_literal_with_len(byteptr bp, int len);
string charptr_vstring_literal(charptr cp);
string charptr_vstring_literal_with_len(charptr cp, int len);
string StrIntpType_str(StrIntpType x);
VV_LOCAL_SYMBOL f32 fabs32(f32 x);
VV_LOCAL_SYMBOL f64 fabs64(f64 x);
VV_LOCAL_SYMBOL u64 abs64(i64 x);
u64 get_str_intp_u64_format(StrIntpType fmt_type, int in_width, int in_precision, bool in_tail_zeros, bool in_sign, u8 in_pad_ch, int in_base, bool in_upper_case);
u32 get_str_intp_u32_format(StrIntpType fmt_type, int in_width, int in_precision, bool in_tail_zeros, bool in_sign, u8 in_pad_ch, int in_base, bool in_upper_case);
VV_LOCAL_SYMBOL void StrIntpData_process_str_intp_data(StrIntpData* data, strings__Builder* sb);
string str_intp(int data_len, StrIntpData* input_base);
string str_intp_sq(string in_str);
string str_intp_rune(string in_str);
string str_intp_g32(string in_str);
string str_intp_g64(string in_str);
string str_intp_sub(string base_str, string in_str);
u16* string_to_wide(string _str);
string string_from_wide(u16* _wstr);
string string_from_wide2(u16* _wstr, int len);
int utf8_char_len(u8 b);
string utf32_to_str(u32 code);
string utf32_to_str_no_malloc(u32 code, u8* buf);
int utf32_decode_to_buffer(u32 code, u8* buf);
int string_utf32_code(string _rune);
_result_rune Array_u8_utf8_to_utf32(Array_u8 _bytes);
int utf8_str_visible_length(string s);
bool ArrayFlags_is_empty(ArrayFlags* e);
bool ArrayFlags_has(ArrayFlags* e, ArrayFlags flag);
bool ArrayFlags_all(ArrayFlags* e, ArrayFlags flag);
void ArrayFlags_set(ArrayFlags* e, ArrayFlags flag);
void ArrayFlags_set_all(ArrayFlags* e);
void ArrayFlags_clear(ArrayFlags* e, ArrayFlags flag);
void ArrayFlags_clear_all(ArrayFlags* e);
void ArrayFlags_toggle(ArrayFlags* e, ArrayFlags flag);
ArrayFlags ArrayFlags__static__zero(void);
string cmd__options(Array_string args, cmd__CmdOption long_option);
bool cmd__set_options(Array_string args, cmd__CmdOption long_option);
strings__textscanner__TextScanner strings__textscanner__new(string input);
void strings__textscanner__TextScanner_free(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_remaining(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_next(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_skip(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_skip_n(strings__textscanner__TextScanner* ss, int n);
int strings__textscanner__TextScanner_peek(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_peek_n(strings__textscanner__TextScanner* ss, int n);
void strings__textscanner__TextScanner_back(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_back_n(strings__textscanner__TextScanner* ss, int n);
int strings__textscanner__TextScanner_peek_back(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_peek_back_n(strings__textscanner__TextScanner* ss, int n);
int strings__textscanner__TextScanner_current(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_reset(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_goto_end(strings__textscanner__TextScanner* ss);
term__termios__TcFlag term__termios__flag(int value);
term__termios__TcFlag term__termios__invert(term__termios__TcFlag value);
int term__termios__tcgetattr(int fd, term__termios__Termios* termios_p);
int term__termios__tcsetattr(int fd, int optional_actions, term__termios__Termios* termios_p);
int term__termios__ioctl(int fd, u64 request, voidptr arg);
int term__termios__set_state(int fd, term__termios__Termios new_state);
void term__termios__Termios_disable_echo(term__termios__Termios* t);
u64 net__conv__htn64(u64 host);
f32 net__conv__htonf32(f32 host);
f64 net__conv__htonf64(f64 host);
u64 net__conv__hton64(u64 host);
u32 net__conv__htn32(u32 host);
u32 net__conv__hton32(u32 host);
u16 net__conv__htn16(u16 host);
u16 net__conv__hton16(u16 host);
u64 net__conv__nth64(u64 net);
u64 net__conv__ntoh64(u64 net);
u32 net__conv__nth32(u32 net);
u32 net__conv__ntoh32(u32 net);
u16 net__conv__nth16(u16 net);
u16 net__conv__ntoh16(u16 net);
_result_Array_u8 net__conv__u64tovarint(u64 n);
_result_multi_return_u64_u8 net__conv__varinttou64(Array_u8 b);
i64 time__portable_timegm(struct tm* t);
int time__days_from_unix_epoch(int year, int month, int day);
int time__Time_days_from_unix_epoch(time__Time t);
time__Time time__date_from_days_after_unix_epoch(int days);
VV_LOCAL_SYMBOL time__DateTimeParser time__new_date_time_parser(string datetime, string format);
VV_LOCAL_SYMBOL _result_string time__DateTimeParser_next(time__DateTimeParser* p, int length);
VV_LOCAL_SYMBOL _result_string time__DateTimeParser_peek(time__DateTimeParser* p, int length);
VV_LOCAL_SYMBOL _result_int time__DateTimeParser_must_be_int(time__DateTimeParser* p, int length);
VV_LOCAL_SYMBOL _result_int time__DateTimeParser_must_be_int_with_minimum_length(time__DateTimeParser* p, int min, int max, bool allow_leading_zero);
VV_LOCAL_SYMBOL _result_void time__DateTimeParser_must_be_string(time__DateTimeParser* p, string must);
VV_LOCAL_SYMBOL _result_string time__DateTimeParser_must_be_string_one_of(time__DateTimeParser* p, Array_string oneof);
VV_LOCAL_SYMBOL _result_int time__DateTimeParser_must_be_valid_month(time__DateTimeParser* p);
VV_LOCAL_SYMBOL _result_int time__DateTimeParser_must_be_valid_three_letter_month(time__DateTimeParser* p);
VV_LOCAL_SYMBOL _result_string time__DateTimeParser_must_be_valid_week_day(time__DateTimeParser* p, int letters);
VV_LOCAL_SYMBOL _result_Array_string time__extract_tokens(string s);
VV_LOCAL_SYMBOL _result_time__Time time__DateTimeParser_parse(time__DateTimeParser* p);
i64 time__Duration_nanoseconds(time__Duration d);
i64 time__Duration_microseconds(time__Duration d);
i64 time__Duration_milliseconds(time__Duration d);
f64 time__Duration_seconds(time__Duration d);
f64 time__Duration_minutes(time__Duration d);
f64 time__Duration_hours(time__Duration d);
f64 time__Duration_days(time__Duration d);
string time__Duration_str(time__Duration d);
string time__Duration_debug(time__Duration d);
VV_LOCAL_SYMBOL void time__int_to_byte_array_no_pad(int value, Array_u8* arr, int size);
string time__Time_format(time__Time t);
string time__Time_format_ss(time__Time t);
string time__Time_format_ss_milli(time__Time t);
string time__Time_format_ss_micro(time__Time t);
string time__Time_format_ss_nano(time__Time t);
string time__Time_format_rfc3339(time__Time t);
string time__Time_format_rfc3339_nano(time__Time t);
string time__Time_hhmm(time__Time t);
string time__Time_hhmmss(time__Time t);
string time__Time_hhmm12(time__Time t);
string time__Time_ymmdd(time__Time t);
string time__Time_ddmmy(time__Time t);
string time__Time_md(time__Time t);
VV_LOCAL_SYMBOL string time__ordinal_suffix(int n);
string time__Time_custom_format(time__Time t, string s);
string time__Time_clean(time__Time t);
string time__Time_clean12(time__Time t);
string time__Time_get_fmt_time_str(time__Time t, time__FormatTime fmt_time);
string time__Time_get_fmt_date_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatDate fmt_date);
string time__Time_get_fmt_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatTime fmt_time, time__FormatDate fmt_date);
string time__Time_utc_string(time__Time t);
string time__Time_http_header_string(time__Time t);
VV_LOCAL_SYMBOL f64 time__mceil(f64 x);
bool time__Time__eq(time__Time t1, time__Time t2);
bool time__Time__lt(time__Time t1, time__Time t2);
time__Duration time__Time__minus(time__Time lhs, time__Time rhs);
_result_time__Time time__parse_rfc3339(string s);
_result_time__Time time__parse(string s);
_result_time__Time time__parse_format(string s, string format);
_result_time__Time time__parse_iso8601(string s);
_result_time__Time time__parse_rfc2822(string s);
VV_LOCAL_SYMBOL _result_multi_return_int_int_int time__parse_iso8601_date(string s);
VV_LOCAL_SYMBOL _result_multi_return_int_int_int_int_int_i64_bool time__parse_iso8601_time(string s);
string time__TimeParseError_msg(time__TimeParseError err);
VV_LOCAL_SYMBOL IError time__error_invalid_time(int code, string message);
time__StopWatch time__new_stopwatch(time__StopWatchOptions opts);
void time__StopWatch_start(time__StopWatch* t);
void time__StopWatch_restart(time__StopWatch* t);
void time__StopWatch_stop(time__StopWatch* t);
void time__StopWatch_pause(time__StopWatch* t);
time__Duration time__StopWatch_elapsed(time__StopWatch t);
time__Time time__now(void);
time__Time time__utc(void);
time__Time time__new_time(time__Time t);
VV_LOCAL_SYMBOL time__Time time__time_with_unix(time__Time t);
i64 time__ticks(void);
string time__Time_str(time__Time t);
VV_LOCAL_SYMBOL time__Time time__convert_ctime(struct tm t, int nanosecond);
string time__Time_strftime(time__Time t, string fmt);
int time__Duration_sys_milliseconds(time__Duration d);
time__Time time__Time__static__new(time__Time t);
time__Time time__new(time__Time t);
string time__Time_smonth(time__Time* t);
i64 time__Time_unix(time__Time* t);
i64 time__Time_unix_milli(time__Time* t);
i64 time__Time_unix_micro(time__Time* t);
i64 time__Time_unix_nano(time__Time* t);
i64 time__Time_unix_time(time__Time* t);
i64 time__Time_unix_time_milli(time__Time* t);
i64 time__Time_unix_time_micro(time__Time* t);
i64 time__Time_unix_time_nano(time__Time* t);
time__Time time__Time_add(time__Time* t, time__Duration duration_in_nanosecond);
time__Time time__Time_add_seconds(time__Time* t, int seconds);
time__Time time__Time_add_days(time__Time* t, int days);
time__Duration time__since(time__Time t);
string time__Time_relative(time__Time* t);
string time__Time_relative_short(time__Time* t);
int time__day_of_week(int y, int m, int d);
int time__Time_day_of_week(time__Time* t);
int time__Time_year_day(time__Time* t);
string time__Time_weekday_str(time__Time* t);
string time__Time_long_weekday_str(time__Time* t);
bool time__is_leap_year(int year);
_result_int time__days_in_month(int month, int year);
string time__Time_debug(time__Time* t);
int time__offset(void);
time__Time time__Time_local_to_utc(time__Time* t);
time__Time time__Time_utc_to_local(time__Time* u);
time__Time time__Time_as_local(time__Time* t);
time__Time time__Time_as_utc(time__Time* t);
bool time__Time_is_utc(time__Time* t);
VV_LOCAL_SYMBOL u64 time__sys_mono_now_darwin(void);
VV_LOCAL_SYMBOL time__Time time__darwin_now(void);
VV_LOCAL_SYMBOL time__Time time__solaris_now(void);
VV_LOCAL_SYMBOL time__Time time__darwin_utc(void);
VV_LOCAL_SYMBOL time__Time time__solaris_utc(void);
VV_LOCAL_SYMBOL i64 time__make_unix_time(struct tm t);
time__Time time__Time_local(time__Time* t);
u64 time__sys_mono_now(void);
VV_LOCAL_SYMBOL u64 time__vpc_now(void);
VV_LOCAL_SYMBOL time__Time time__linux_now(void);
VV_LOCAL_SYMBOL time__Time time__linux_utc(void);
VV_LOCAL_SYMBOL time__Time time__win_now(void);
VV_LOCAL_SYMBOL time__Time time__win_utc(void);
struct timespec time__Duration_timespec(time__Duration d);
void time__sleep(time__Duration duration);
time__Time time__unix(i64 epoch);
time__Time time__unix2(i64 epoch, int microsecond);
time__Time time__unix_microsecond(i64 epoch, int microsecond);
time__Time time__unix_nanosecond(i64 abs_unix_timestamp, int nanosecond);
VV_LOCAL_SYMBOL multi_return_int_int_int time__calculate_date_from_day_offset(i64 day_offset_);
VV_LOCAL_SYMBOL multi_return_int_int_int time__calculate_time_from_second_offset(i64 second_offset_);
io__BufferedReader* io__new_buffered_reader(io__BufferedReaderConfig o);
_result_int io__BufferedReader_read(io__BufferedReader* r, Array_u8* buf);
void io__BufferedReader_free(io__BufferedReader* r);
VV_LOCAL_SYMBOL bool io__BufferedReader_fill_buffer(io__BufferedReader* r);
VV_LOCAL_SYMBOL bool io__BufferedReader_needs_fill(io__BufferedReader r);
bool io__BufferedReader_end_of_stream(io__BufferedReader r);
_result_string io__BufferedReader_read_line(io__BufferedReader* r, io__BufferedReadLineConfig config);
_result_void io__cp(io__Reader* src, io__Writer* dst);
io__Writer io__new_multi_writer(Array_io__Writer writers);
_result_int io__MultiWriter_write(io__MultiWriter* m, Array_u8 buf);
VV_LOCAL_SYMBOL string io__NotExpected_msg(io__NotExpected err);
VV_LOCAL_SYMBOL int io__NotExpected_code(io__NotExpected err);
_result_Array_u8 io__read_all(io__ReadAllConfig config);
_result_Array_u8 io__read_any(io__Reader* r);
_result_int io__ReaderWriterImpl_read(io__ReaderWriterImpl* r, Array_u8* buf);
_result_int io__ReaderWriterImpl_write(io__ReaderWriterImpl* r, Array_u8 buf);
io__ReaderWriterImpl io__make_readerwriter(io__Reader r, io__Writer w);
u64 hash__wyhash_c(u8* key, u64 len, u64 seed);
u64 hash__wyhash64_c(u64 a, u64 b);
u64 hash__sum64_string(string key, u64 seed);
u64 hash__sum64(Array_u8 key, u64 seed);
VV_LOCAL_SYMBOL u64 hash__wyrotr(u64 v, u32 k);
u64 hash__wymum(u64 a, u64 b);
VV_LOCAL_SYMBOL u64 hash__wyr3(u8* p, u64 k);
VV_LOCAL_SYMBOL u64 hash__wyr4(u8* p);
VV_LOCAL_SYMBOL u64 hash__wyr8(u8* p);
Array_string os__args_after(string cut_word);
Array_string os__args_before(string cut_word);
bool os__debugger_present(void);
string os__getenv(string key);
_option_string os__getenv_opt(string key);
int os__setenv(string name, string value, bool overwrite);
int os__unsetenv(string name);
Map_string_string os__environ(void);
int os__fd_close(int fd);
void os__fd_write(int fd, string s);
Array_string os__fd_slurp(int fd);
multi_return_string_int os__fd_read(int fd, int maxbytes);
bool os__fd_is_pending(int fd);
VV_LOCAL_SYMBOL string os__NotExpected_msg(os__NotExpected err);
VV_LOCAL_SYMBOL int os__NotExpected_code(os__NotExpected err);
VV_LOCAL_SYMBOL string os__fix_windows_path(string path);
_result_os__File os__open_file(string path, string mode, Array_int options);
_result_os__File os__open(string path);
_result_os__File os__create(string path);
os__File os__stdin(void);
os__File os__stdout(void);
os__File os__stderr(void);
bool os__File_eof(os__File* f);
_result_void os__File_reopen(os__File* f, string path, string mode);
_result_int os__File_read(os__File* f, Array_u8* buf);
_result_int os__File_write(os__File* f, Array_u8 buf);
_result_int os__File_writeln(os__File* f, string s);
_result_int os__File_write_string(os__File* f, string s);
_result_int os__File_write_to(os__File* f, u64 pos, Array_u8 buf);
int os__File_write_ptr(os__File* f, voidptr data, int size);
_result_void os__File_write_full_buffer(os__File* f, voidptr buffer, usize buffer_len);
int os__File_write_ptr_at(os__File* f, voidptr data, int size, u64 pos);
VV_LOCAL_SYMBOL _result_int os__fread(voidptr ptr, int item_size, int items, FILE* stream);
Array_u8 os__File_read_bytes(os__File* f, int size);
Array_u8 os__File_read_bytes_at(os__File* f, int size, u64 pos);
_result_int os__File_read_bytes_into_newline(os__File* f, Array_u8* buf);
_result_int os__File_read_bytes_with_newline(os__File* f, Array_u8* buf);
_result_int os__File_read_bytes_into(os__File* f, u64 pos, Array_u8* buf);
_result_int os__File_read_from(os__File* f, u64 pos, Array_u8* buf);
_result_int os__File_read_into_ptr(os__File* f, u8* ptr, int max_size);
void os__File_flush(os__File* f);
string os__FileNotOpenedError_msg(os__FileNotOpenedError err);
string os__SizeOfTypeIs0Error_msg(os__SizeOfTypeIs0Error err);
VV_LOCAL_SYMBOL IError os__error_file_not_opened(void);
VV_LOCAL_SYMBOL IError os__error_size_of_type_0(void);
_result_void os__File_seek(os__File* f, i64 pos, os__SeekMode mode);
_result_i64 os__File_tell(os__File* f);
int os__File_setvbuf(os__File* f, char* buffer, os__FileBufferMode mode, usize size);
int os__File_set_buffer(os__File* f, Array_u8* buffer, os__FileBufferMode mode);
void os__File_set_line_buffered(os__File* f);
void os__File_set_unbuffered(os__File* f);
bool os__is_abs_path(string path);
string os__abs_path(string path);
string os__norm_path(string path);
_result_string os__existing_path(string path);
VV_LOCAL_SYMBOL string os__clean_path(string path);
string os__to_slash(string path);
string os__from_slash(string path);
VV_LOCAL_SYMBOL int os__win_volume_len(string path);
VV_LOCAL_SYMBOL bool os__is_slash(u8 b);
VV_LOCAL_SYMBOL bool os__is_unc_path(string path);
VV_LOCAL_SYMBOL bool os__has_drive_letter(string path);
VV_LOCAL_SYMBOL bool os__starts_w_slash_slash(string path);
VV_LOCAL_SYMBOL bool os__is_drive_rooted(string path);
VV_LOCAL_SYMBOL bool os__is_normal_path(string path);
VV_LOCAL_SYMBOL bool os__is_curr_dir_ref(int byte_one, int byte_two, int byte_three);
u32 os__FilePermission_bitmask(os__FilePermission p);
u32 os__FileMode_bitmask(os__FileMode m);
os__FileInfo os__inode(string path);
_result_Array_u8 os__read_bytes(string path);
VV_LOCAL_SYMBOL _result_int os__find_cfile_size(FILE* fp);
VV_LOCAL_SYMBOL _result_strings__Builder os__slurp_file_in_builder(FILE* fp);
_result_string os__read_file(string path);
_result_void os__truncate(string path, u64 len);
u64 os__file_size(string path);
_result_void os__rename_dir(string src, string dst);
_result_void os__rename(string src, string dst);
_result_void os__cp(string src, string dst);
_result_FILE_ptr os__vfopen(string path, string mode);
int os__fileno(voidptr cfile);
VV_LOCAL_SYMBOL voidptr os__vpopen(string path);
VV_LOCAL_SYMBOL multi_return_int_bool os__posix_wait4_to_exit_status(int waitret);
string os__posix_get_error_msg(int code);
VV_LOCAL_SYMBOL int os__vpclose(voidptr f);
int os__system(string cmd);
bool os__exists(string path);
bool os__is_executable(string path);
bool os__is_writable(string path);
bool os__is_readable(string path);
_result_void os__rm(string path);
_result_void os__rmdir(string path);
VV_LOCAL_SYMBOL void os__print_c_errno(void);
string os__get_raw_line(void);
Array_u8 os__get_raw_stdin(void);
string os__executable(void);
_result_void os__chdir(string path);
string os__getwd(void);
string os__real_path(string fpath);
VV_LOCAL_SYMBOL void os__normalize_drive_letter(string path);
int os__fork(void);
int os__wait(void);
i64 os__file_last_mod_unix(string path);
void os__flush(void);
_result_void os__chmod(string path, int mode);
_result_void os__chown(string path, int owner, int group);
_result_os__File os__open_append(string path);
_result_void os__execvp(string cmdpath, Array_string cmdargs);
_result_void os__execve(string cmdpath, Array_string cmdargs, Array_string envs);
int os__is_atty(int fd);
_result_void os__write_file_array(string path, array buffer);
_result_Array_string os__glob(Array_string patterns);
VV_LOCAL_SYMBOL  int compare_16388169492333377668_string(string* a, string* b) {
	if (string__lt(*a, *b)) return -1;
	else return 1;
}

IError os__last_error(void);
IError os__error_posix(os__SystemError e);
IError os__error_win32(os__SystemError e);
void os__Result_free(os__Result* result);
VV_LOCAL_SYMBOL string os__executable_fallback(void);
_result_void os__cp_all(string src, string dst, bool overwrite);
_result_void os__mv_by_cp(string source, string target, os__MvParams opts);
_result_void os__mv(string source, string target, os__MvParams opts);
_result_Array_string os__read_lines(string path);
_result_void os__write_lines(string path, Array_string lines);
string os__sigint_to_signal_name(int si);
_result_void os__rmdir_all(string path);
bool os__is_dir_empty(string path);
string os__file_ext(string opath);
string os__dir(string opath);
string os__base(string opath);
string os__file_name(string opath);
_option_string os__input_opt(string prompt);
string os__input(string prompt);
string os__get_line(void);
Array_string os__get_lines(void);
string os__get_lines_joined(void);
string os__get_raw_lines_joined(void);
string os__user_os(void);
_result_Array_string os__user_names(void);
string os__home_dir(void);
string os__expand_tilde_to_home(string path);
_result_void os__write_file(string path, string text);
string os__ExecutableNotFoundError_msg(os__ExecutableNotFoundError err);
VV_LOCAL_SYMBOL IError os__error_failed_to_find_executable(void);
_result_string os__find_abs_path_of_executable(string exe_name);
bool os__exists_in_system_path(string prog);
bool os__is_file(string path);
string os__join_path(string base, Array_string dirs);
string os__join_path_single(string base, string elem);
VV_LOCAL_SYMBOL void os__normalize_path_in_builder(strings__Builder* sb);
Array_string os__walk_ext(string path, string ext);
VV_LOCAL_SYMBOL void os__impl_walk_ext(string path, string ext, Array_string* out);
void os__walk(string path, void (*f)(string ));
void os__walk_with_context(string path, voidptr context, void (*fcb)(voidptr , string ));
void os__log(string s);
_result_void os__mkdir_all(string opath, os__MkdirParams params);
VV_LOCAL_SYMBOL void os__create_folder_when_it_does_not_exist(string path);
string os__cache_dir(void);
string os__temp_dir(void);
string os__vtmp_dir(void);
VV_LOCAL_SYMBOL string os__default_vmodules_path(void);
string os__vmodules_dir(void);
Array_string os__vmodules_paths(void);
string os__resource_abs_path(string path);
os__Result os__execute_or_panic(string cmd);
os__Result os__execute_or_exit(string cmd);
_result_os__Result os__execute_opt(string cmd);
string os__quoted_path(string path);
_result_string os__config_dir(void);
VV_LOCAL_SYMBOL Array_string os__glob_match(string dir, string pattern, string next_pattern, Array_string* matches);
VV_LOCAL_SYMBOL _result_void os__native_glob_pattern(string pattern, Array_string* matches);
_result_void os__utime(string path, int actime, int modtime);
os__Uname os__uname(void);
_result_string os__hostname(void);
_result_string os__loginname(void);
VV_LOCAL_SYMBOL Array_string os__init_os_args(int argc, u8** argv);
_result_Array_string os__ls(string path);
_result_void os__mkdir(string path, os__MkdirParams params);
os__Result os__execute(string cmd);
os__Result os__raw_execute(string cmd);
_result_void os__Command_start(os__Command* c);
string os__Command_read_line(os__Command* c);
_result_void os__Command_close(os__Command* c);
_result_void os__symlink(string origin, string target);
_result_void os__link(string origin, string target);
string os__get_error_msg(int code);
void os__File_close(os__File* f);
_result_void os__ensure_folder_is_writable(string folder);
int os__getpid(void);
int os__getppid(void);
int os__getuid(void);
int os__geteuid(void);
int os__getgid(void);
int os__getegid(void);
void os__posix_set_permission_bit(string path_s, u32 mode, bool enable);
VV_LOCAL_SYMBOL _result_string os__get_long_path(string path);
int os__page_size(void);
_result_string os__input_password(string prompt);
void os__Process_signal_kill(os__Process* p);
void os__Process_signal_term(os__Process* p);
void os__Process_signal_pgkill(os__Process* p);
void os__Process_signal_stop(os__Process* p);
void os__Process_signal_continue(os__Process* p);
void os__Process_wait(os__Process* p);
void os__Process_close(os__Process* p);
void os__Process_free(os__Process* p);
VV_LOCAL_SYMBOL int os__Process__spawn(os__Process* p);
bool os__Process_is_alive(os__Process* p);
void os__Process_set_redirect_stdio(os__Process* p);
void os__Process_stdin_write(os__Process* p, string s);
string os__Process_stdout_slurp(os__Process* p);
string os__Process_stderr_slurp(os__Process* p);
string os__Process_stdout_read(os__Process* p);
string os__Process_stderr_read(os__Process* p);
_option_string os__Process_pipe_read(os__Process* p, os__ChildProcessPipeKind pkind);
bool os__Process_is_pending(os__Process* p, os__ChildProcessPipeKind pkind);
VV_LOCAL_SYMBOL string os__Process__read_from(os__Process* p, os__ChildProcessPipeKind pkind);
VV_LOCAL_SYMBOL string os__Process__slurp_from(os__Process* p, os__ChildProcessPipeKind pkind);
VV_LOCAL_SYMBOL void os__Process__write_to(os__Process* p, os__ChildProcessPipeKind pkind, string s);
VV_LOCAL_SYMBOL bool os__Process__is_pending(os__Process* p, os__ChildProcessPipeKind pkind);
VV_LOCAL_SYMBOL void os__Process__check_redirection_call(os__Process* p, string fn_name);
VV_LOCAL_SYMBOL void os__Process__signal_stop(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__signal_continue(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__signal_kill(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__signal_term(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__signal_pgkill(os__Process* p);
VV_LOCAL_SYMBOL void os__Process__wait(os__Process* p);
VV_LOCAL_SYMBOL bool os__Process__is_alive(os__Process* p);
void os__Process_run(os__Process* p);
os__Process* os__new_process(string filename);
void os__Process_set_args(os__Process* p, Array_string pargs);
void os__Process_set_work_folder(os__Process* p, string path);
void os__Process_set_environment(os__Process* p, Map_string_string envs);
VV_LOCAL_SYMBOL int os__Process_unix_spawn_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_stop_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_resume_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_term_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_kill_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_kill_pgroup(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_unix_wait(os__Process* p);
VV_LOCAL_SYMBOL bool os__Process_unix_is_alive(os__Process* p);
VV_LOCAL_SYMBOL bool os__Process_impl_check_pid_status(os__Process* p, bool exit_early_on_ret0, int waitpid_options);
VV_LOCAL_SYMBOL int os__Process_win_spawn_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_stop_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_resume_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_term_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_kill_process(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_kill_pgroup(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_wait(os__Process* p);
VV_LOCAL_SYMBOL bool os__Process_win_is_alive(os__Process* p);
VV_LOCAL_SYMBOL void os__Process_win_write_string(os__Process* p, int idx, string s);
VV_LOCAL_SYMBOL multi_return_string_int os__Process_win_read_string(os__Process* p, int idx, int maxbytes);
VV_LOCAL_SYMBOL string os__Process_win_slurp(os__Process* p, int idx);
_result_anon_fn_os__signal os__signal_opt(os__Signal signum, void (*handler)(os__Signal ));
VV_LOCAL_SYMBOL void os__ignore_signal_handler(os__Signal signal);
void os__signal_ignore(Array_os__Signal args);
bool os__is_main_thread(void);
VV_LOCAL_SYMBOL void os__signal_ignore_internal(Array_os__Signal args);
_result_void os__open_uri(string uri);
_result_os__Stat os__stat(string path);
_result_os__Stat os__lstat(string path);
os__FileType os__Stat_get_filetype(os__Stat* st);
os__FileMode os__Stat_get_mode(os__Stat* st);
bool os__is_dir(string path);
bool os__is_link(string path);
VV_LOCAL_SYMBOL os__PathKind os__kind_of_existing_path(string path);
VV_LOCAL_SYMBOL u32 rand__seed__nr_next(u32 prev);
Array_u32 rand__seed__time_seed_array(int count);
u32 rand__seed__time_seed_32(void);
u64 rand__seed__time_seed_64(void);
void rand__wyrand__WyRandRNG_seed(rand__wyrand__WyRandRNG* rng, Array_u32 seed_data);
u8 rand__wyrand__WyRandRNG_u8(rand__wyrand__WyRandRNG* rng);
u16 rand__wyrand__WyRandRNG_u16(rand__wyrand__WyRandRNG* rng);
u32 rand__wyrand__WyRandRNG_u32(rand__wyrand__WyRandRNG* rng);
u64 rand__wyrand__WyRandRNG_u64(rand__wyrand__WyRandRNG* rng);
int rand__wyrand__WyRandRNG_block_size(rand__wyrand__WyRandRNG* rng);
void rand__wyrand__WyRandRNG_free(rand__wyrand__WyRandRNG* rng);
VV_LOCAL_SYMBOL f64 rand__msqrt(f64 a);
VV_LOCAL_SYMBOL f64 rand__mlog(f64 a);
VV_LOCAL_SYMBOL multi_return_f64_int rand__frexp(f64 x);
VV_LOCAL_SYMBOL f64 rand__scalbn(f64 x, int n_);
VV_LOCAL_SYMBOL f64 rand__f64_from_bits(u64 b);
VV_LOCAL_SYMBOL u64 rand__f64_bits(f64 f);
string rand__uuid_v4(void);
VV_LOCAL_SYMBOL string rand__internal_uuid_v4(rand__PRNG* rng);
VV_LOCAL_SYMBOL string rand__internal_ulid_at_millisecond(rand__PRNG* rng, u64 unix_time_milli);
VV_LOCAL_SYMBOL string rand__internal_string_from_set(rand__PRNG* rng, string charset, int len);
VV_LOCAL_SYMBOL void rand__internal_fill_buffer_from_set(rand__PRNG* rng, string charset, Array_u8* buf);
VV_LOCAL_SYMBOL void rand__deinit(void);
VV_LOCAL_SYMBOL void rand__init(void);
VV_LOCAL_SYMBOL void rand__read_32(rand__PRNG* rng, Array_u8* buf);
VV_LOCAL_SYMBOL void rand__read_64(rand__PRNG* rng, Array_u8* buf);
VV_LOCAL_SYMBOL void rand__read_internal(rand__PRNG* rng, Array_u8* buf);
_result_Array_u8 rand__PRNG_bytes(rand__PRNG* rng, int bytes_needed);
void rand__PRNG_read(rand__PRNG* rng, Array_u8* buf);
_result_u32 rand__PRNG_u32n(rand__PRNG* rng, u32 max);
_result_u64 rand__PRNG_u64n(rand__PRNG* rng, u64 max);
_result_u32 rand__PRNG_u32_in_range(rand__PRNG* rng, u32 min, u32 max);
_result_u64 rand__PRNG_u64_in_range(rand__PRNG* rng, u64 min, u64 max);
i8 rand__PRNG_i8(rand__PRNG* rng);
i16 rand__PRNG_i16(rand__PRNG* rng);
int rand__PRNG_int(rand__PRNG* rng);
i64 rand__PRNG_i64(rand__PRNG* rng);
int rand__PRNG_int31(rand__PRNG* rng);
i64 rand__PRNG_int63(rand__PRNG* rng);
_result_int rand__PRNG_intn(rand__PRNG* rng, int max);
_result_i64 rand__PRNG_i64n(rand__PRNG* rng, i64 max);
_result_int rand__PRNG_int_in_range(rand__PRNG* rng, int min, int max);
_result_i64 rand__PRNG_i64_in_range(rand__PRNG* rng, i64 min, i64 max);
f32 rand__PRNG_f32(rand__PRNG* rng);
f32 rand__PRNG_f32cp(rand__PRNG* rng);
f64 rand__PRNG_f64(rand__PRNG* rng);
f64 rand__PRNG_f64cp(rand__PRNG* rng);
_result_f32 rand__PRNG_f32n(rand__PRNG* rng, f32 max);
_result_f64 rand__PRNG_f64n(rand__PRNG* rng, f64 max);
_result_f32 rand__PRNG_f32_in_range(rand__PRNG* rng, f32 min, f32 max);
_result_f64 rand__PRNG_f64_in_range(rand__PRNG* rng, f64 min, f64 max);
string rand__PRNG_ulid(rand__PRNG* rng);
string rand__PRNG_ulid_at_millisecond(rand__PRNG* rng, u64 unix_time_milli);
string rand__PRNG_string_from_set(rand__PRNG* rng, string charset, int len);
string rand__PRNG_string(rand__PRNG* rng, int len);
string rand__PRNG_hex(rand__PRNG* rng, int len);
string rand__PRNG_ascii(rand__PRNG* rng, int len);
void rand__PRNG_fill_buffer_from_set(rand__PRNG* rng, string charset, Array_u8* buf);
_result_bool rand__PRNG_bernoulli(rand__PRNG* rng, f64 p);
_result_f64 rand__PRNG_normal(rand__PRNG* rng, rand__config__NormalConfigStruct conf);
_result_multi_return_f64_f64 rand__PRNG_normal_pair(rand__PRNG* rng, rand__config__NormalConfigStruct conf);
_result_int rand__PRNG_binomial(rand__PRNG* rng, int n, f64 p);
f64 rand__PRNG_exponential(rand__PRNG* rng, f64 lambda);
rand__PRNG* rand__new_default(rand__config__PRNGConfigStruct config_);
rand__PRNG* rand__get_current_rng(void);
void rand__set_rng(rand__PRNG* rng);
void rand__seed(Array_u32 seed);
u8 rand__u8(void);
u16 rand__u16(void);
u32 rand__u32(void);
u64 rand__u64(void);
_result_u32 rand__u32n(u32 max);
_result_u64 rand__u64n(u64 max);
_result_u32 rand__u32_in_range(u32 min, u32 max);
_result_u64 rand__u64_in_range(u64 min, u64 max);
i16 rand__i16(void);
int rand__int(void);
_result_int rand__intn(int max);
_result_int rand__int_in_range(int min, int max);
int rand__int31(void);
i64 rand__i64(void);
_result_i64 rand__i64n(i64 max);
_result_i64 rand__i64_in_range(i64 min, i64 max);
i64 rand__int63(void);
f32 rand__f32(void);
f32 rand__f32cp(void);
f64 rand__f64(void);
f64 rand__f64cp(void);
_result_f32 rand__f32n(f32 max);
_result_f64 rand__f64n(f64 max);
_result_f32 rand__f32_in_range(f32 min, f32 max);
_result_f64 rand__f64_in_range(f64 min, f64 max);
_result_Array_u8 rand__bytes(int bytes_needed);
void rand__read(Array_u8* buf);
string rand__ulid(void);
string rand__ulid_at_millisecond(u64 unix_time_milli);
string rand__string_from_set(string charset, int len);
void rand__fill_buffer_from_set(string charset, Array_u8* buf);
string rand__string(int len);
string rand__hex(int len);
string rand__ascii(int len);
_result_bool rand__bernoulli(f64 p);
_result_f64 rand__normal(rand__config__NormalConfigStruct config_);
_result_multi_return_f64_f64 rand__normal_pair(rand__config__NormalConfigStruct config_);
_result_int rand__binomial(int n, f64 p);
f64 rand__exponential(f64 lambda);
_result_multi_return_os__File_string io__util__temp_file(io__util__TempFileOptions tfo);
VV_LOCAL_SYMBOL _result_string io__util__error_for_temporary_folder(string fn_name, string d);
_result_string io__util__temp_dir(io__util__TempFileOptions tdo);
VV_LOCAL_SYMBOL string io__util__random_number(void);
VV_LOCAL_SYMBOL _result_multi_return_string_string io__util__prefix_and_suffix(string pattern);
net__Addr net__new_ip6(u16 port, Array_fixed_u8_16 addr);
net__Addr net__new_ip(u16 port, Array_fixed_u8_4 addr);
VV_LOCAL_SYMBOL _result_net__Addr net__temp_unix(void);
net__AddrFamily net__Addr_family(net__Addr a);
_result_u16 net__Addr_port(net__Addr a);
string net__Ip_str(net__Ip a);
string net__Ip6_str(net__Ip6 a);
u32 net__Addr_len(net__Addr a);
_result_Array_net__Addr net__resolve_addrs(string addr, net__AddrFamily family, net__SocketType type);
_result_Array_net__Addr net__resolve_addrs_fuzzy(string addr, net__SocketType type);
_result_Array_net__Addr net__resolve_ipaddrs(string addr, net__AddrFamily family, net__SocketType typ);
string net__Addr_str(net__Addr a);
net__Addr net__addr_from_socket_handle(int handle);
_result_net__Addr net__peer_addr_from_socket_handle(int handle);
int net__shutdown(int handle, net__ShutdownConfig config);
_result_void net__close(int handle);
VV_LOCAL_SYMBOL _result_bool net__select(int handle, net__Select test, time__Duration timeout);
VV_LOCAL_SYMBOL _result_bool net__select_deadline(int handle, net__Select test, time__Time deadline);
VV_LOCAL_SYMBOL _result_void net__wait_for_common(int handle, time__Time deadline, time__Duration timeout, net__Select test);
VV_LOCAL_SYMBOL _result_void net__wait_for_write(int handle, time__Time deadline, time__Duration timeout);
VV_LOCAL_SYMBOL _result_void net__wait_for_read(int handle, time__Time deadline, time__Duration timeout);
_result_int net__socket_error_message(int potential_code, string s);
_result_int net__socket_error(int potential_code);
_result_void net__wrap_error(int error_code);
VV_LOCAL_SYMBOL _result_int net__wrap_read_result(int result);
VV_LOCAL_SYMBOL _result_int net__wrap_write_result(int result);
int net__error_code(void);
VV_LOCAL_SYMBOL void net__init(void);
_result_net__Addr net__Socket_address(net__Socket* s);
_result_void net__set_blocking(int handle, bool state);
_result_net__TcpConn_ptr net__dial_tcp(string oaddress);
_result_net__TcpConn_ptr net__dial_tcp_with_bind(string saddr, string laddr);
_result_void net__TcpConn_close(net__TcpConn* c);
_result_int net__TcpConn_read_ptr(net__TcpConn _v_toheap_c, u8* buf_ptr, int len);
_result_int net__TcpConn_read(net__TcpConn _v_toheap_c, Array_u8* buf);
_result_time__Time net__TcpConn_read_deadline(net__TcpConn* c);
_result_int net__TcpConn_write_ptr(net__TcpConn* c, u8* b, int len);
_result_int net__TcpConn_write(net__TcpConn* c, Array_u8 bytes);
_result_int net__TcpConn_write_string(net__TcpConn* c, string s);
void net__TcpConn_set_read_deadline(net__TcpConn* c, time__Time deadline);
_result_time__Time net__TcpConn_write_deadline(net__TcpConn* c);
void net__TcpConn_set_write_deadline(net__TcpConn* c, time__Time deadline);
time__Duration net__TcpConn_read_timeout(net__TcpConn* c);
void net__TcpConn_set_read_timeout(net__TcpConn* c, time__Duration t);
time__Duration net__TcpConn_write_timeout(net__TcpConn* c);
void net__TcpConn_set_write_timeout(net__TcpConn* c, time__Duration t);
_result_void net__TcpConn_wait_for_read(net__TcpConn _v_toheap_c);
_result_void net__TcpConn_wait_for_write(net__TcpConn* c);
_result_void net__TcpConn_set_sock(net__TcpConn* c);
_result_net__Addr net__TcpConn_peer_addr(net__TcpConn* c);
_result_string net__TcpConn_peer_ip(net__TcpConn* c);
_result_net__Addr net__TcpConn_addr(net__TcpConn* c);
string net__TcpConn_str(net__TcpConn _v_toheap_c);
_result_net__TcpListener_ptr net__listen_tcp(net__AddrFamily family, string saddr, net__ListenOptions options);
_result_net__TcpConn_ptr net__TcpListener_accept(net__TcpListener* l);
_result_net__TcpConn_ptr net__TcpListener_accept_only(net__TcpListener* l);
_result_time__Time net__TcpListener_accept_deadline(net__TcpListener* c);
void net__TcpListener_set_accept_deadline(net__TcpListener* c, time__Time deadline);
time__Duration net__TcpListener_accept_timeout(net__TcpListener* c);
void net__TcpListener_set_accept_timeout(net__TcpListener* c, time__Duration t);
_result_void net__TcpListener_wait_for_accept(net__TcpListener* c);
_result_void net__TcpListener_close(net__TcpListener* c);
_result_net__Addr net__TcpListener_addr(net__TcpListener* c);
VV_LOCAL_SYMBOL _result_net__TcpSocket net__new_tcp_socket(net__AddrFamily family);
VV_LOCAL_SYMBOL _result_net__TcpSocket net__tcp_socket_from_handle(int sockfd);
net__TcpSocket net__tcp_socket_from_handle_raw(int sockfd);
VV_LOCAL_SYMBOL _result_void net__TcpSocket_set_option(net__TcpSocket* s, int level, int opt, int value);
_result_void net__TcpSocket_set_option_bool(net__TcpSocket* s, net__SocketOption opt, bool value);
_result_void net__TcpSocket_set_option_int(net__TcpSocket* s, net__SocketOption opt, int value);
_result_void net__TcpSocket_set_dualstack(net__TcpSocket* s, bool on);
VV_LOCAL_SYMBOL _result_void net__TcpSocket_set_default_options(net__TcpSocket* s);
_result_void net__TcpSocket_bind(net__TcpSocket* s, string addr);
VV_LOCAL_SYMBOL _result_void net__TcpSocket_close(net__TcpSocket* s);
VV_LOCAL_SYMBOL _result_void net__TcpSocket_connect(net__TcpSocket* s, net__Addr a);
bool net__TcpConn_get_blocking(net__TcpConn* con);
_result_void net__TcpConn_set_blocking(net__TcpConn* con, bool state);
string net__TcpConn_read_line(net__TcpConn* con);
string net__TcpConn_read_line_max(net__TcpConn* con, int max_line_len);
_result_net__UdpConn_ptr net__dial_udp(string raddr);
_result_int net__UdpConn_write_ptr(net__UdpConn* c, u8* b, int len);
_result_int net__UdpConn_write(net__UdpConn* c, Array_u8 buf);
_result_int net__UdpConn_write_string(net__UdpConn* c, string s);
_result_int net__UdpConn_write_to_ptr(net__UdpConn* c, net__Addr addr, u8* b, int len);
_result_int net__UdpConn_write_to(net__UdpConn* c, net__Addr addr, Array_u8 buf);
_result_int net__UdpConn_write_to_string(net__UdpConn* c, net__Addr addr, string s);
_result_multi_return_int_net__Addr net__UdpConn_read(net__UdpConn* c, Array_u8* buf);
_result_time__Time net__UdpConn_read_deadline(net__UdpConn* c);
void net__UdpConn_set_read_deadline(net__UdpConn* c, time__Time deadline);
_result_time__Time net__UdpConn_write_deadline(net__UdpConn* c);
void net__UdpConn_set_write_deadline(net__UdpConn* c, time__Time deadline);
time__Duration net__UdpConn_read_timeout(net__UdpConn* c);
void net__UdpConn_set_read_timeout(net__UdpConn* c, time__Duration t);
time__Duration net__UdpConn_write_timeout(net__UdpConn* c);
void net__UdpConn_set_write_timeout(net__UdpConn* c, time__Duration t);
_result_void net__UdpConn_wait_for_read(net__UdpConn* c);
_result_void net__UdpConn_wait_for_write(net__UdpConn* c);
string net__UdpConn_str(net__UdpConn* c);
_result_void net__UdpConn_close(net__UdpConn* c);
_result_net__UdpConn_ptr net__listen_udp(string laddr);
VV_LOCAL_SYMBOL _result_net__UdpSocket_ptr net__new_udp_socket(net__Addr local_addr);
VV_LOCAL_SYMBOL _result_net__UdpSocket_ptr net__new_udp_socket_for_remote(net__Addr raddr);
_result_void net__UdpSocket_set_option_bool(net__UdpSocket* s, net__SocketOption opt, bool value);
_result_void net__UdpSocket_set_dualstack(net__UdpSocket* s, bool on);
VV_LOCAL_SYMBOL _result_void net__UdpSocket_close(net__UdpSocket* s);
VV_LOCAL_SYMBOL _result_bool net__UdpSocket_select(net__UdpSocket* s, net__Select test, time__Duration timeout);
VV_LOCAL_SYMBOL _result_net__Addr net__UdpSocket_remote(net__UdpSocket* s);
_result_u16 net__validate_port(int port);
_result_multi_return_string_u16 net__split_address(string addr);
void client__set_sever(string port, bool keep);
VV_LOCAL_SYMBOL void client__handle_client(net__TcpConn* socket);
void client__send_message(net__TcpConn* socket);
void client__for_free(string data, net__TcpConn* socket);
VV_LOCAL_SYMBOL void main__main(void);
VV_LOCAL_SYMBOL void main__load_data(net__TcpConn* socket);
VV_LOCAL_SYMBOL void main__help(Array_cmd__CmdOption long_options, string version);

static string time__FormatTime_str(time__FormatTime it); // auto
static string time__FormatDate_str(time__FormatDate it); // auto
static string net__TcpSocket_str(net__TcpSocket it); // auto
static string indent_net__TcpSocket_str(net__TcpSocket it, int indent_count); // auto
static string net__Socket_str(net__Socket it); // auto
static string indent_net__Socket_str(net__Socket it, int indent_count); // auto
static bool Array_rune_arr_eq(Array_rune a, Array_rune b); // auto
static bool time__Duration_alias_eq(time__Duration a, time__Duration b); // auto

// V global/const definitions:
string _const_math__bits__overflow_error; // a string literal, inited later
string _const_math__bits__divide_error; // a string literal, inited later
#define _const_strconv__digits 18
#define _const_strconv__c_dpoint '.'
#define _const_strconv__c_plus '+'
#define _const_strconv__c_minus '-'
#define _const_strconv__c_zero '0'
#define _const_strconv__c_nine '9'
#define _const_strconv__int_size 32
#define _const_strconv__bias32 127
#define _const_strconv__maxexp32 255
#define _const_strconv__bias64 1023
#define _const_strconv__maxexp64 2047
#define _const_strconv__max_size_f64_char 32
string _const_strconv__digit_pairs; // a string literal, inited later
string _const_strconv__base_digits; // a string literal, inited later
#define _const_strconv__pow5_num_bits_32 61
#define _const_strconv__pow5_inv_num_bits_32 59
#define _const_strconv__pow5_num_bits_64 121
#define _const_strconv__pow5_inv_num_bits_64 122
string _const_digit_pairs; // a string literal, inited later
#define _const_hashbits 24
#define _const_max_cached_hashbits 16
#define _const_init_log_capicity 5
#define _const_init_capicity 32
#define _const_init_even_index 30
#define _const_extra_metas_inc 4
#define _const_degree 6
#define _const_mid_index 5
#define _const_max_len 11
#define _const_replace_stack_buffer_size 10
#define _const_kmp_stack_buffer_size 20
string _const_si_s_code; // a string literal, inited later
string _const_si_g32_code; // a string literal, inited later
string _const_si_g64_code; // a string literal, inited later
#define _const_cp_utf8 65001
string _const_log__false_log; // a string literal, inited later
string _const_log__true_log; // a string literal, inited later
string _const_log__warn_log; // a string literal, inited later
#define _const_term__termios__cclen 32
string _const_time__days_string; // a string literal, inited later
string _const_time__months_string; // a string literal, inited later
#define _const_time__seconds_per_minute 60
#define _const_time__seconds_per_hour 3600
#define _const_time__seconds_per_day 86400
#define _const_time__seconds_per_week 604800
#define _const_time__days_per_400_years 146097
#define _const_time__days_per_100_years 36524
#define _const_time__days_per_4_years 1461
#define _const_time__days_in_year 365
#define _const_io__buf_max_len 1024
#define _const_io__read_all_len 10240
#define _const_io__read_all_grow_len 1024
#define _const_os__max_path_buffer_size 4096
#define _const_os__o_binary 0
#define _const_os__fslash '/'
#define _const_os__bslash '\\'
#define _const_os__dot '.'
#define _const_os__qmark '?'
string _const_os__fslash_str; // a string literal, inited later
string _const_os__dot_dot; // a string literal, inited later
string _const_os__empty_str; // a string literal, inited later
string _const_os__dot_str; // a string literal, inited later
#define _const_os__buf_size 4096
#define _const_os__error_code_not_set 2130640638
#define _const_os__max_path_len 4096
#define _const_os__f_ok 0
#define _const_os__x_ok 1
#define _const_os__w_ok 2
#define _const_os__r_ok 4
#define _const_os__prot_read 1
#define _const_os__prot_write 2
#define _const_os__map_private 2
#define _const_os__map_anonymous 32
#define _const_os__sys_write 1
#define _const_os__sys_open 2
#define _const_os__sys_close 3
#define _const_os__sys_mkdir 83
#define _const_os__sys_creat 85
string _const_os__path_separator; // a string literal, inited later
string _const_os__path_delimiter; // a string literal, inited later
string _const_os__path_devnull; // a string literal, inited later
#define _const_os__stdin_value 0
#define _const_os__stdout_value 1
#define _const_os__stderr_value 2
#define _const_os__s_ifmt 61440
#define _const_os__s_ifdir 16384
#define _const_os__s_ifreg 32768
#define _const_os__s_iflnk 40960
#define _const_os__s_isuid 2048
#define _const_os__s_isgid 1024
#define _const_os__s_isvtx 512
#define _const_os__s_irusr 256
#define _const_os__s_iwusr 128
#define _const_os__s_ixusr 64
#define _const_os__s_irgrp 32
#define _const_os__s_iwgrp 16
#define _const_os__s_ixgrp 8
#define _const_os__s_iroth 4
#define _const_os__s_iwoth 2
#define _const_os__s_ixoth 1
#define _const_rand__wyrand__seed_len 2
string _const_rand__ulid_encoding; // a string literal, inited later
string _const_rand__english_letters; // a string literal, inited later
string _const_rand__hex_chars; // a string literal, inited later
string _const_rand__ascii_chars; // a string literal, inited later
#define _const_io__util__retries 10000
#define _const_net__max_ip_len 24
#define _const_net__max_ip6_len 46
#define _const_net__max_unix_path 108
#define _const_net__errors_base 0
#define _const_net__err_timed_out_code 9
#define _const_net__msg_nosignal 16384
string _const_net__crlf; // a string literal, inited later
#define _const_net__msg_peek 2
#define _const_net__max_read 400
#define _const_net__max_read_line_len 1048576
 const u32 _const_math__bits__de_bruijn32 = 125613361; // precomputed2
Array_fixed_u8_32 _const_math__bits__de_bruijn32tab = {((u8)(0)), 1, 28, 2, 29, 14, 24, 3, 30, 22, 20, 15, 25, 17, 4, 8, 31, 27, 13, 23, 21, 19, 16, 7, 26, 12, 18, 6, 11, 5, 10, 9}; // fixed array const
 const u64 _const_math__bits__de_bruijn64 = 285870213051353865U; // precomputed2
Array_fixed_u8_64 _const_math__bits__de_bruijn64tab = {((u8)(0)), 1, 56, 2, 57, 49, 28, 3, 61, 58, 42, 50, 38, 29, 17, 4, 62, 47, 59, 36, 45, 43, 51, 22, 53, 39, 33, 30, 24, 18, 12, 5, 63, 55, 48, 27, 60, 41, 37, 16, 46, 35, 44, 21, 52, 32, 23, 11, 54, 26, 40, 15, 34, 20, 31, 10, 25, 14, 19, 9, 13, 8, 7, 6}; // fixed array const
 const u64 _const_math__bits__m0 = 6148914691236517205U; // precomputed2
 const u64 _const_math__bits__m1 = 3689348814741910323U; // precomputed2
 const u64 _const_math__bits__m2 = 1085102592571150095U; // precomputed2
 const u64 _const_math__bits__m3 = 71777214294589695U; // precomputed2
 const u64 _const_math__bits__m4 = 281470681808895U; // precomputed2
 const u8 _const_math__bits__n8 = 8; // precomputed2
 const u16 _const_math__bits__n16 = 16; // precomputed2
 const u32 _const_math__bits__n32 = 32; // precomputed2
 const u64 _const_math__bits__n64 = 64U; // precomputed2
 const u64 _const_math__bits__two32 = 4294967296U; // precomputed2
 const u64 _const_math__bits__mask32 = 4294967295U; // precomputed2
Array_fixed_u8_256 _const_math__bits__ntz_8_tab = {((u8)(0x08)), 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x07, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00}; // fixed array const
Array_fixed_u8_256 _const_math__bits__pop_8_tab = {((u8)(0x00)), 0x01, 0x01, 0x02, 0x01, 0x02, 0x02, 0x03, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x05, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, 0x08}; // fixed array const
Array_fixed_u8_256 _const_math__bits__rev_8_tab = {((u8)(0x00)), 0x80, 0x40, 0xc0, 0x20, 0xa0, 0x60, 0xe0, 0x10, 0x90, 0x50, 0xd0, 0x30, 0xb0, 0x70, 0xf0, 0x08, 0x88, 0x48, 0xc8, 0x28, 0xa8, 0x68, 0xe8, 0x18, 0x98, 0x58, 0xd8, 0x38, 0xb8, 0x78, 0xf8, 0x04, 0x84, 0x44, 0xc4, 0x24, 0xa4, 0x64, 0xe4, 0x14, 0x94, 0x54, 0xd4, 0x34, 0xb4, 0x74, 0xf4, 0x0c, 0x8c, 0x4c, 0xcc, 0x2c, 0xac, 0x6c, 0xec, 0x1c, 0x9c, 0x5c, 0xdc, 0x3c, 0xbc, 0x7c, 0xfc, 0x02, 0x82, 0x42, 0xc2, 0x22, 0xa2, 0x62, 0xe2, 0x12, 0x92, 0x52, 0xd2, 0x32, 0xb2, 0x72, 0xf2, 0x0a, 0x8a, 0x4a, 0xca, 0x2a, 0xaa, 0x6a, 0xea, 0x1a, 0x9a, 0x5a, 0xda, 0x3a, 0xba, 0x7a, 0xfa, 0x06, 0x86, 0x46, 0xc6, 0x26, 0xa6, 0x66, 0xe6, 0x16, 0x96, 0x56, 0xd6, 0x36, 0xb6, 0x76, 0xf6, 0x0e, 0x8e, 0x4e, 0xce, 0x2e, 0xae, 0x6e, 0xee, 0x1e, 0x9e, 0x5e, 0xde, 0x3e, 0xbe, 0x7e, 0xfe, 0x01, 0x81, 0x41, 0xc1, 0x21, 0xa1, 0x61, 0xe1, 0x11, 0x91, 0x51, 0xd1, 0x31, 0xb1, 0x71, 0xf1, 0x09, 0x89, 0x49, 0xc9, 0x29, 0xa9, 0x69, 0xe9, 0x19, 0x99, 0x59, 0xd9, 0x39, 0xb9, 0x79, 0xf9, 0x05, 0x85, 0x45, 0xc5, 0x25, 0xa5, 0x65, 0xe5, 0x15, 0x95, 0x55, 0xd5, 0x35, 0xb5, 0x75, 0xf5, 0x0d, 0x8d, 0x4d, 0xcd, 0x2d, 0xad, 0x6d, 0xed, 0x1d, 0x9d, 0x5d, 0xdd, 0x3d, 0xbd, 0x7d, 0xfd, 0x03, 0x83, 0x43, 0xc3, 0x23, 0xa3, 0x63, 0xe3, 0x13, 0x93, 0x53, 0xd3, 0x33, 0xb3, 0x73, 0xf3, 0x0b, 0x8b, 0x4b, 0xcb, 0x2b, 0xab, 0x6b, 0xeb, 0x1b, 0x9b, 0x5b, 0xdb, 0x3b, 0xbb, 0x7b, 0xfb, 0x07, 0x87, 0x47, 0xc7, 0x27, 0xa7, 0x67, 0xe7, 0x17, 0x97, 0x57, 0xd7, 0x37, 0xb7, 0x77, 0xf7, 0x0f, 0x8f, 0x4f, 0xcf, 0x2f, 0xaf, 0x6f, 0xef, 0x1f, 0x9f, 0x5f, 0xdf, 0x3f, 0xbf, 0x7f, 0xff}; // fixed array const
Array_fixed_u8_256 _const_math__bits__len_8_tab = {((u8)(0x00)), 0x01, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08}; // fixed array const
 const u32 _const_strconv__single_plus_zero = 0; // precomputed2
 const u32 _const_strconv__single_minus_zero = 2147483648; // precomputed2
 const u32 _const_strconv__single_plus_infinity = 2139095040; // precomputed2
 const u32 _const_strconv__single_minus_infinity = 4286578688; // precomputed2
 const u64 _const_strconv__double_plus_zero = 0U; // precomputed2
 const u64 _const_strconv__double_minus_zero = 9223372036854775808U; // precomputed2
 const u64 _const_strconv__double_plus_infinity = 9218868437227405312U; // precomputed2
 const u64 _const_strconv__double_minus_infinity = 18442240474082181120U; // precomputed2
 const u32 _const_strconv__c_ten = 10; // precomputed2
Array_fixed_u64_309 _const_strconv__pos_exp = {((u64)(0x3ff0000000000000U)), ((u64)(0x4024000000000000U)), ((u64)(0x4059000000000000U)), ((u64)(0x408f400000000000U)), ((u64)(0x40c3880000000000U)), ((u64)(0x40f86a0000000000U)), ((u64)(0x412e848000000000U)), ((u64)(0x416312d000000000U)), ((u64)(0x4197d78400000000U)), ((u64)(0x41cdcd6500000000U)), ((u64)(0x4202a05f20000000U)), ((u64)(0x42374876e8000000U)), ((u64)(0x426d1a94a2000000U)), ((u64)(0x42a2309ce5400000U)), ((u64)(0x42d6bcc41e900000U)), ((u64)(0x430c6bf526340000U)), ((u64)(0x4341c37937e08000U)), ((u64)(0x4376345785d8a000U)), ((u64)(0x43abc16d674ec800U)), ((u64)(0x43e158e460913d00U)), ((u64)(0x4415af1d78b58c40U)), ((u64)(0x444b1ae4d6e2ef50U)), ((u64)(0x4480f0cf064dd592U)), ((u64)(0x44b52d02c7e14af6U)), ((u64)(0x44ea784379d99db4U)), ((u64)(0x45208b2a2c280291U)), ((u64)(0x4554adf4b7320335U)), ((u64)(0x4589d971e4fe8402U)), ((u64)(0x45c027e72f1f1281U)), ((u64)(0x45f431e0fae6d721U)), ((u64)(0x46293e5939a08ceaU)), ((u64)(0x465f8def8808b024U)), ((u64)(0x4693b8b5b5056e17U)), ((u64)(0x46c8a6e32246c99cU)), ((u64)(0x46fed09bead87c03U)), ((u64)(0x4733426172c74d82U)), ((u64)(0x476812f9cf7920e3U)), ((u64)(0x479e17b84357691bU)), ((u64)(0x47d2ced32a16a1b1U)), ((u64)(0x48078287f49c4a1dU)), ((u64)(0x483d6329f1c35ca5U)), ((u64)(0x48725dfa371a19e7U)), ((u64)(0x48a6f578c4e0a061U)), ((u64)(0x48dcb2d6f618c879U)), ((u64)(0x4911efc659cf7d4cU)), ((u64)(0x49466bb7f0435c9eU)), ((u64)(0x497c06a5ec5433c6U)), ((u64)(0x49b18427b3b4a05cU)), ((u64)(0x49e5e531a0a1c873U)), ((u64)(0x4a1b5e7e08ca3a8fU)), ((u64)(0x4a511b0ec57e649aU)), ((u64)(0x4a8561d276ddfdc0U)), ((u64)(0x4ababa4714957d30U)), ((u64)(0x4af0b46c6cdd6e3eU)), ((u64)(0x4b24e1878814c9ceU)), ((u64)(0x4b5a19e96a19fc41U)), ((u64)(0x4b905031e2503da9U)), ((u64)(0x4bc4643e5ae44d13U)), ((u64)(0x4bf97d4df19d6057U)), ((u64)(0x4c2fdca16e04b86dU)), ((u64)(0x4c63e9e4e4c2f344U)), ((u64)(0x4c98e45e1df3b015U)), ((u64)(0x4ccf1d75a5709c1bU)), ((u64)(0x4d03726987666191U)), ((u64)(0x4d384f03e93ff9f5U)), ((u64)(0x4d6e62c4e38ff872U)), ((u64)(0x4da2fdbb0e39fb47U)), ((u64)(0x4dd7bd29d1c87a19U)), ((u64)(0x4e0dac74463a989fU)), ((u64)(0x4e428bc8abe49f64U)), ((u64)(0x4e772ebad6ddc73dU)), ((u64)(0x4eacfa698c95390cU)), ((u64)(0x4ee21c81f7dd43a7U)), ((u64)(0x4f16a3a275d49491U)), ((u64)(0x4f4c4c8b1349b9b5U)), ((u64)(0x4f81afd6ec0e1411U)), ((u64)(0x4fb61bcca7119916U)), ((u64)(0x4feba2bfd0d5ff5bU)), ((u64)(0x502145b7e285bf99U)), ((u64)(0x50559725db272f7fU)), ((u64)(0x508afcef51f0fb5fU)), ((u64)(0x50c0de1593369d1bU)), ((u64)(0x50f5159af8044462U)), ((u64)(0x512a5b01b605557bU)), ((u64)(0x516078e111c3556dU)), ((u64)(0x5194971956342ac8U)), ((u64)(0x51c9bcdfabc1357aU)), ((u64)(0x5200160bcb58c16cU)), ((u64)(0x52341b8ebe2ef1c7U)), ((u64)(0x526922726dbaae39U)), ((u64)(0x529f6b0f092959c7U)), ((u64)(0x52d3a2e965b9d81dU)), ((u64)(0x53088ba3bf284e24U)), ((u64)(0x533eae8caef261adU)), ((u64)(0x53732d17ed577d0cU)), ((u64)(0x53a7f85de8ad5c4fU)), ((u64)(0x53ddf67562d8b363U)), ((u64)(0x5412ba095dc7701eU)), ((u64)(0x5447688bb5394c25U)), ((u64)(0x547d42aea2879f2eU)), ((u64)(0x54b249ad2594c37dU)), ((u64)(0x54e6dc186ef9f45cU)), ((u64)(0x551c931e8ab87173U)), ((u64)(0x5551dbf316b346e8U)), ((u64)(0x558652efdc6018a2U)), ((u64)(0x55bbe7abd3781ecaU)), ((u64)(0x55f170cb642b133fU)), ((u64)(0x5625ccfe3d35d80eU)), ((u64)(0x565b403dcc834e12U)), ((u64)(0x569108269fd210cbU)), ((u64)(0x56c54a3047c694feU)), ((u64)(0x56fa9cbc59b83a3dU)), ((u64)(0x5730a1f5b8132466U)), ((u64)(0x5764ca732617ed80U)), ((u64)(0x5799fd0fef9de8e0U)), ((u64)(0x57d03e29f5c2b18cU)), ((u64)(0x58044db473335defU)), ((u64)(0x583961219000356bU)), ((u64)(0x586fb969f40042c5U)), ((u64)(0x58a3d3e2388029bbU)), ((u64)(0x58d8c8dac6a0342aU)), ((u64)(0x590efb1178484135U)), ((u64)(0x59435ceaeb2d28c1U)), ((u64)(0x59783425a5f872f1U)), ((u64)(0x59ae412f0f768fadU)), ((u64)(0x59e2e8bd69aa19ccU)), ((u64)(0x5a17a2ecc414a03fU)), ((u64)(0x5a4d8ba7f519c84fU)), ((u64)(0x5a827748f9301d32U)), ((u64)(0x5ab7151b377c247eU)), ((u64)(0x5aecda62055b2d9eU)), ((u64)(0x5b22087d4358fc82U)), ((u64)(0x5b568a9c942f3ba3U)), ((u64)(0x5b8c2d43b93b0a8cU)), ((u64)(0x5bc19c4a53c4e697U)), ((u64)(0x5bf6035ce8b6203dU)), ((u64)(0x5c2b843422e3a84dU)), ((u64)(0x5c6132a095ce4930U)), ((u64)(0x5c957f48bb41db7cU)), ((u64)(0x5ccadf1aea12525bU)), ((u64)(0x5d00cb70d24b7379U)), ((u64)(0x5d34fe4d06de5057U)), ((u64)(0x5d6a3de04895e46dU)), ((u64)(0x5da066ac2d5daec4U)), ((u64)(0x5dd4805738b51a75U)), ((u64)(0x5e09a06d06e26112U)), ((u64)(0x5e400444244d7cabU)), ((u64)(0x5e7405552d60dbd6U)), ((u64)(0x5ea906aa78b912ccU)), ((u64)(0x5edf485516e7577fU)), ((u64)(0x5f138d352e5096afU)), ((u64)(0x5f48708279e4bc5bU)), ((u64)(0x5f7e8ca3185deb72U)), ((u64)(0x5fb317e5ef3ab327U)), ((u64)(0x5fe7dddf6b095ff1U)), ((u64)(0x601dd55745cbb7edU)), ((u64)(0x6052a5568b9f52f4U)), ((u64)(0x60874eac2e8727b1U)), ((u64)(0x60bd22573a28f19dU)), ((u64)(0x60f2357684599702U)), ((u64)(0x6126c2d4256ffcc3U)), ((u64)(0x615c73892ecbfbf4U)), ((u64)(0x6191c835bd3f7d78U)), ((u64)(0x61c63a432c8f5cd6U)), ((u64)(0x61fbc8d3f7b3340cU)), ((u64)(0x62315d847ad00087U)), ((u64)(0x6265b4e5998400a9U)), ((u64)(0x629b221effe500d4U)), ((u64)(0x62d0f5535fef2084U)), ((u64)(0x630532a837eae8a5U)), ((u64)(0x633a7f5245e5a2cfU)), ((u64)(0x63708f936baf85c1U)), ((u64)(0x63a4b378469b6732U)), ((u64)(0x63d9e056584240feU)), ((u64)(0x64102c35f729689fU)), ((u64)(0x6444374374f3c2c6U)), ((u64)(0x647945145230b378U)), ((u64)(0x64af965966bce056U)), ((u64)(0x64e3bdf7e0360c36U)), ((u64)(0x6518ad75d8438f43U)), ((u64)(0x654ed8d34e547314U)), ((u64)(0x6583478410f4c7ecU)), ((u64)(0x65b819651531f9e8U)), ((u64)(0x65ee1fbe5a7e7861U)), ((u64)(0x6622d3d6f88f0b3dU)), ((u64)(0x665788ccb6b2ce0cU)), ((u64)(0x668d6affe45f818fU)), ((u64)(0x66c262dfeebbb0f9U)), ((u64)(0x66f6fb97ea6a9d38U)), ((u64)(0x672cba7de5054486U)), ((u64)(0x6761f48eaf234ad4U)), ((u64)(0x679671b25aec1d89U)), ((u64)(0x67cc0e1ef1a724ebU)), ((u64)(0x680188d357087713U)), ((u64)(0x6835eb082cca94d7U)), ((u64)(0x686b65ca37fd3a0dU)), ((u64)(0x68a11f9e62fe4448U)), ((u64)(0x68d56785fbbdd55aU)), ((u64)(0x690ac1677aad4ab1U)), ((u64)(0x6940b8e0acac4eafU)), ((u64)(0x6974e718d7d7625aU)), ((u64)(0x69aa20df0dcd3af1U)), ((u64)(0x69e0548b68a044d6U)), ((u64)(0x6a1469ae42c8560cU)), ((u64)(0x6a498419d37a6b8fU)), ((u64)(0x6a7fe52048590673U)), ((u64)(0x6ab3ef342d37a408U)), ((u64)(0x6ae8eb0138858d0aU)), ((u64)(0x6b1f25c186a6f04cU)), ((u64)(0x6b537798f4285630U)), ((u64)(0x6b88557f31326bbbU)), ((u64)(0x6bbe6adefd7f06aaU)), ((u64)(0x6bf302cb5e6f642aU)), ((u64)(0x6c27c37e360b3d35U)), ((u64)(0x6c5db45dc38e0c82U)), ((u64)(0x6c9290ba9a38c7d1U)), ((u64)(0x6cc734e940c6f9c6U)), ((u64)(0x6cfd022390f8b837U)), ((u64)(0x6d3221563a9b7323U)), ((u64)(0x6d66a9abc9424febU)), ((u64)(0x6d9c5416bb92e3e6U)), ((u64)(0x6dd1b48e353bce70U)), ((u64)(0x6e0621b1c28ac20cU)), ((u64)(0x6e3baa1e332d728fU)), ((u64)(0x6e714a52dffc6799U)), ((u64)(0x6ea59ce797fb817fU)), ((u64)(0x6edb04217dfa61dfU)), ((u64)(0x6f10e294eebc7d2cU)), ((u64)(0x6f451b3a2a6b9c76U)), ((u64)(0x6f7a6208b5068394U)), ((u64)(0x6fb07d457124123dU)), ((u64)(0x6fe49c96cd6d16ccU)), ((u64)(0x7019c3bc80c85c7fU)), ((u64)(0x70501a55d07d39cfU)), ((u64)(0x708420eb449c8843U)), ((u64)(0x70b9292615c3aa54U)), ((u64)(0x70ef736f9b3494e9U)), ((u64)(0x7123a825c100dd11U)), ((u64)(0x7158922f31411456U)), ((u64)(0x718eb6bafd91596bU)), ((u64)(0x71c33234de7ad7e3U)), ((u64)(0x71f7fec216198ddcU)), ((u64)(0x722dfe729b9ff153U)), ((u64)(0x7262bf07a143f6d4U)), ((u64)(0x72976ec98994f489U)), ((u64)(0x72cd4a7bebfa31abU)), ((u64)(0x73024e8d737c5f0bU)), ((u64)(0x7336e230d05b76cdU)), ((u64)(0x736c9abd04725481U)), ((u64)(0x73a1e0b622c774d0U)), ((u64)(0x73d658e3ab795204U)), ((u64)(0x740bef1c9657a686U)), ((u64)(0x74417571ddf6c814U)), ((u64)(0x7475d2ce55747a18U)), ((u64)(0x74ab4781ead1989eU)), ((u64)(0x74e10cb132c2ff63U)), ((u64)(0x75154fdd7f73bf3cU)), ((u64)(0x754aa3d4df50af0bU)), ((u64)(0x7580a6650b926d67U)), ((u64)(0x75b4cffe4e7708c0U)), ((u64)(0x75ea03fde214caf1U)), ((u64)(0x7620427ead4cfed6U)), ((u64)(0x7654531e58a03e8cU)), ((u64)(0x768967e5eec84e2fU)), ((u64)(0x76bfc1df6a7a61bbU)), ((u64)(0x76f3d92ba28c7d15U)), ((u64)(0x7728cf768b2f9c5aU)), ((u64)(0x775f03542dfb8370U)), ((u64)(0x779362149cbd3226U)), ((u64)(0x77c83a99c3ec7eb0U)), ((u64)(0x77fe494034e79e5cU)), ((u64)(0x7832edc82110c2f9U)), ((u64)(0x7867a93a2954f3b8U)), ((u64)(0x789d9388b3aa30a5U)), ((u64)(0x78d27c35704a5e67U)), ((u64)(0x79071b42cc5cf601U)), ((u64)(0x793ce2137f743382U)), ((u64)(0x79720d4c2fa8a031U)), ((u64)(0x79a6909f3b92c83dU)), ((u64)(0x79dc34c70a777a4dU)), ((u64)(0x7a11a0fc668aac70U)), ((u64)(0x7a46093b802d578cU)), ((u64)(0x7a7b8b8a6038ad6fU)), ((u64)(0x7ab137367c236c65U)), ((u64)(0x7ae585041b2c477fU)), ((u64)(0x7b1ae64521f7595eU)), ((u64)(0x7b50cfeb353a97dbU)), ((u64)(0x7b8503e602893dd2U)), ((u64)(0x7bba44df832b8d46U)), ((u64)(0x7bf06b0bb1fb384cU)), ((u64)(0x7c2485ce9e7a065fU)), ((u64)(0x7c59a742461887f6U)), ((u64)(0x7c9008896bcf54faU)), ((u64)(0x7cc40aabc6c32a38U)), ((u64)(0x7cf90d56b873f4c7U)), ((u64)(0x7d2f50ac6690f1f8U)), ((u64)(0x7d63926bc01a973bU)), ((u64)(0x7d987706b0213d0aU)), ((u64)(0x7dce94c85c298c4cU)), ((u64)(0x7e031cfd3999f7b0U)), ((u64)(0x7e37e43c8800759cU)), ((u64)(0x7e6ddd4baa009303U)), ((u64)(0x7ea2aa4f4a405be2U)), ((u64)(0x7ed754e31cd072daU)), ((u64)(0x7f0d2a1be4048f90U)), ((u64)(0x7f423a516e82d9baU)), ((u64)(0x7f76c8e5ca239029U)), ((u64)(0x7fac7b1f3cac7433U)), ((u64)(0x7fe1ccf385ebc8a0U))}; // fixed array const
Array_fixed_u64_324 _const_strconv__neg_exp = {((u64)(0x3ff0000000000000U)), ((u64)(0x3fb999999999999aU)), ((u64)(0x3f847ae147ae147bU)), ((u64)(0x3f50624dd2f1a9fcU)), ((u64)(0x3f1a36e2eb1c432dU)), ((u64)(0x3ee4f8b588e368f1U)), ((u64)(0x3eb0c6f7a0b5ed8dU)), ((u64)(0x3e7ad7f29abcaf48U)), ((u64)(0x3e45798ee2308c3aU)), ((u64)(0x3e112e0be826d695U)), ((u64)(0x3ddb7cdfd9d7bdbbU)), ((u64)(0x3da5fd7fe1796495U)), ((u64)(0x3d719799812dea11U)), ((u64)(0x3d3c25c268497682U)), ((u64)(0x3d06849b86a12b9bU)), ((u64)(0x3cd203af9ee75616U)), ((u64)(0x3c9cd2b297d889bcU)), ((u64)(0x3c670ef54646d497U)), ((u64)(0x3c32725dd1d243acU)), ((u64)(0x3bfd83c94fb6d2acU)), ((u64)(0x3bc79ca10c924223U)), ((u64)(0x3b92e3b40a0e9b4fU)), ((u64)(0x3b5e392010175ee6U)), ((u64)(0x3b282db34012b251U)), ((u64)(0x3af357c299a88ea7U)), ((u64)(0x3abef2d0f5da7dd9U)), ((u64)(0x3a88c240c4aecb14U)), ((u64)(0x3a53ce9a36f23c10U)), ((u64)(0x3a1fb0f6be506019U)), ((u64)(0x39e95a5efea6b347U)), ((u64)(0x39b4484bfeebc2a0U)), ((u64)(0x398039d665896880U)), ((u64)(0x3949f623d5a8a733U)), ((u64)(0x3914c4e977ba1f5cU)), ((u64)(0x38e09d8792fb4c49U)), ((u64)(0x38aa95a5b7f87a0fU)), ((u64)(0x38754484932d2e72U)), ((u64)(0x3841039d428a8b8fU)), ((u64)(0x380b38fb9daa78e4U)), ((u64)(0x37d5c72fb1552d83U)), ((u64)(0x37a16c262777579cU)), ((u64)(0x376be03d0bf225c7U)), ((u64)(0x37364cfda3281e39U)), ((u64)(0x3701d7314f534b61U)), ((u64)(0x36cc8b8218854567U)), ((u64)(0x3696d601ad376ab9U)), ((u64)(0x366244ce242c5561U)), ((u64)(0x362d3ae36d13bbceU)), ((u64)(0x35f7624f8a762fd8U)), ((u64)(0x35c2b50c6ec4f313U)), ((u64)(0x358dee7a4ad4b81fU)), ((u64)(0x3557f1fb6f10934cU)), ((u64)(0x352327fc58da0f70U)), ((u64)(0x34eea6608e29b24dU)), ((u64)(0x34b8851a0b548ea4U)), ((u64)(0x34839dae6f76d883U)), ((u64)(0x344f62b0b257c0d2U)), ((u64)(0x34191bc08eac9a41U)), ((u64)(0x33e41633a556e1ceU)), ((u64)(0x33b011c2eaabe7d8U)), ((u64)(0x3379b604aaaca626U)), ((u64)(0x3344919d5556eb52U)), ((u64)(0x3310747ddddf22a8U)), ((u64)(0x32da53fc9631d10dU)), ((u64)(0x32a50ffd44f4a73dU)), ((u64)(0x3270d9976a5d5297U)), ((u64)(0x323af5bf109550f2U)), ((u64)(0x32059165a6ddda5bU)), ((u64)(0x31d1411e1f17e1e3U)), ((u64)(0x319b9b6364f30304U)), ((u64)(0x316615e91d8f359dU)), ((u64)(0x3131ab20e472914aU)), ((u64)(0x30fc45016d841baaU)), ((u64)(0x30c69d9abe034955U)), ((u64)(0x309217aefe690777U)), ((u64)(0x305cf2b1970e7258U)), ((u64)(0x3027288e1271f513U)), ((u64)(0x2ff286d80ec190dcU)), ((u64)(0x2fbda48ce468e7c7U)), ((u64)(0x2f87b6d71d20b96cU)), ((u64)(0x2f52f8ac174d6123U)), ((u64)(0x2f1e5aacf2156838U)), ((u64)(0x2ee8488a5b445360U)), ((u64)(0x2eb36d3b7c36a91aU)), ((u64)(0x2e7f152bf9f10e90U)), ((u64)(0x2e48ddbcc7f40ba6U)), ((u64)(0x2e13e497065cd61fU)), ((u64)(0x2ddfd424d6faf031U)), ((u64)(0x2da97683df2f268dU)), ((u64)(0x2d745ecfe5bf520bU)), ((u64)(0x2d404bd984990e6fU)), ((u64)(0x2d0a12f5a0f4e3e5U)), ((u64)(0x2cd4dbf7b3f71cb7U)), ((u64)(0x2ca0aff95cc5b092U)), ((u64)(0x2c6ab328946f80eaU)), ((u64)(0x2c355c2076bf9a55U)), ((u64)(0x2c0116805effaeaaU)), ((u64)(0x2bcb5733cb32b111U)), ((u64)(0x2b95df5ca28ef40dU)), ((u64)(0x2b617f7d4ed8c33eU)), ((u64)(0x2b2bff2ee48e0530U)), ((u64)(0x2af665bf1d3e6a8dU)), ((u64)(0x2ac1eaff4a98553dU)), ((u64)(0x2a8cab3210f3bb95U)), ((u64)(0x2a56ef5b40c2fc77U)), ((u64)(0x2a225915cd68c9f9U)), ((u64)(0x29ed5b561574765bU)), ((u64)(0x29b77c44ddf6c516U)), ((u64)(0x2982c9d0b1923745U)), ((u64)(0x294e0fb44f50586eU)), ((u64)(0x29180c903f7379f2U)), ((u64)(0x28e33d4032c2c7f5U)), ((u64)(0x28aec866b79e0cbaU)), ((u64)(0x2878a0522c7e7095U)), ((u64)(0x2843b374f06526deU)), ((u64)(0x280f8587e7083e30U)), ((u64)(0x27d9379fec069826U)), ((u64)(0x27a42c7ff0054685U)), ((u64)(0x277023998cd10537U)), ((u64)(0x2739d28f47b4d525U)), ((u64)(0x2704a8729fc3ddb7U)), ((u64)(0x26d086c219697e2cU)), ((u64)(0x269a71368f0f3047U)), ((u64)(0x2665275ed8d8f36cU)), ((u64)(0x2630ec4be0ad8f89U)), ((u64)(0x25fb13ac9aaf4c0fU)), ((u64)(0x25c5a956e225d672U)), ((u64)(0x2591544581b7dec2U)), ((u64)(0x255bba08cf8c979dU)), ((u64)(0x25262e6d72d6dfb0U)), ((u64)(0x24f1bebdf578b2f4U)), ((u64)(0x24bc6463225ab7ecU)), ((u64)(0x2486b6b5b5155ff0U)), ((u64)(0x24522bc490dde65aU)), ((u64)(0x241d12d41afca3c3U)), ((u64)(0x23e7424348ca1c9cU)), ((u64)(0x23b29b69070816e3U)), ((u64)(0x237dc574d80cf16bU)), ((u64)(0x2347d12a4670c123U)), ((u64)(0x23130dbb6b8d674fU)), ((u64)(0x22de7c5f127bd87eU)), ((u64)(0x22a8637f41fcad32U)), ((u64)(0x227382cc34ca2428U)), ((u64)(0x223f37ad21436d0cU)), ((u64)(0x2208f9574dcf8a70U)), ((u64)(0x21d3faac3e3fa1f3U)), ((u64)(0x219ff779fd329cb9U)), ((u64)(0x216992c7fdc216faU)), ((u64)(0x2134756ccb01abfbU)), ((u64)(0x21005df0a267bcc9U)), ((u64)(0x20ca2fe76a3f9475U)), ((u64)(0x2094f31f8832dd2aU)), ((u64)(0x2060c27fa028b0efU)), ((u64)(0x202ad0cc33744e4bU)), ((u64)(0x1ff573d68f903ea2U)), ((u64)(0x1fc1297872d9cbb5U)), ((u64)(0x1f8b758d848fac55U)), ((u64)(0x1f55f7a46a0c89ddU)), ((u64)(0x1f2192e9ee706e4bU)), ((u64)(0x1eec1e43171a4a11U)), ((u64)(0x1eb67e9c127b6e74U)), ((u64)(0x1e81fee341fc585dU)), ((u64)(0x1e4ccb0536608d61U)), ((u64)(0x1e1708d0f84d3de7U)), ((u64)(0x1de26d73f9d764b9U)), ((u64)(0x1dad7becc2f23ac2U)), ((u64)(0x1d779657025b6235U)), ((u64)(0x1d42deac01e2b4f7U)), ((u64)(0x1d0e3113363787f2U)), ((u64)(0x1cd8274291c6065bU)), ((u64)(0x1ca3529ba7d19eafU)), ((u64)(0x1c6eea92a61c3118U)), ((u64)(0x1c38bba884e35a7aU)), ((u64)(0x1c03c9539d82aec8U)), ((u64)(0x1bcfa885c8d117a6U)), ((u64)(0x1b99539e3a40dfb8U)), ((u64)(0x1b6442e4fb671960U)), ((u64)(0x1b303583fc527ab3U)), ((u64)(0x1af9ef3993b72ab8U)), ((u64)(0x1ac4bf6142f8eefaU)), ((u64)(0x1a90991a9bfa58c8U)), ((u64)(0x1a5a8e90f9908e0dU)), ((u64)(0x1a253eda614071a4U)), ((u64)(0x19f0ff151a99f483U)), ((u64)(0x19bb31bb5dc320d2U)), ((u64)(0x1985c162b168e70eU)), ((u64)(0x1951678227871f3eU)), ((u64)(0x191bd8d03f3e9864U)), ((u64)(0x18e6470cff6546b6U)), ((u64)(0x18b1d270cc51055fU)), ((u64)(0x187c83e7ad4e6efeU)), ((u64)(0x1846cfec8aa52598U)), ((u64)(0x18123ff06eea847aU)), ((u64)(0x17dd331a4b10d3f6U)), ((u64)(0x17a75c1508da432bU)), ((u64)(0x1772b010d3e1cf56U)), ((u64)(0x173de6815302e556U)), ((u64)(0x1707eb9aa8cf1ddeU)), ((u64)(0x16d322e220a5b17eU)), ((u64)(0x169e9e369aa2b597U)), ((u64)(0x16687e92154ef7acU)), ((u64)(0x16339874ddd8c623U)), ((u64)(0x15ff5a549627a36cU)), ((u64)(0x15c91510781fb5f0U)), ((u64)(0x159410d9f9b2f7f3U)), ((u64)(0x15600d7b2e28c65cU)), ((u64)(0x1529af2b7d0e0a2dU)), ((u64)(0x14f48c22ca71a1bdU)), ((u64)(0x14c0701bd527b498U)), ((u64)(0x148a4cf9550c5426U)), ((u64)(0x14550a6110d6a9b8U)), ((u64)(0x1420d51a73deee2dU)), ((u64)(0x13eaee90b964b047U)), ((u64)(0x13b58ba6fab6f36cU)), ((u64)(0x13813c85955f2923U)), ((u64)(0x134b9408eefea839U)), ((u64)(0x1316100725988694U)), ((u64)(0x12e1a66c1e139eddU)), ((u64)(0x12ac3d79c9b8fe2eU)), ((u64)(0x12769794a160cb58U)), ((u64)(0x124212dd4de70913U)), ((u64)(0x120ceafbafd80e85U)), ((u64)(0x11d72262f3133ed1U)), ((u64)(0x11a281e8c275cbdaU)), ((u64)(0x116d9ca79d89462aU)), ((u64)(0x1137b08617a104eeU)), ((u64)(0x1102f39e794d9d8bU)), ((u64)(0x10ce5297287c2f45U)), ((u64)(0x1098421286c9bf6bU)), ((u64)(0x1063680ed23aff89U)), ((u64)(0x102f0ce4839198dbU)), ((u64)(0x0ff8d71d360e13e2U)), ((u64)(0x0fc3df4a91a4dcb5U)), ((u64)(0x0f8fcbaa82a16121U)), ((u64)(0x0f596fbb9bb44db4U)), ((u64)(0x0f245962e2f6a490U)), ((u64)(0x0ef047824f2bb6daU)), ((u64)(0x0eba0c03b1df8af6U)), ((u64)(0x0e84d6695b193bf8U)), ((u64)(0x0e50ab877c142ffaU)), ((u64)(0x0e1aac0bf9b9e65cU)), ((u64)(0x0de5566ffafb1eb0U)), ((u64)(0x0db111f32f2f4bc0U)), ((u64)(0x0d7b4feb7eb212cdU)), ((u64)(0x0d45d98932280f0aU)), ((u64)(0x0d117ad428200c08U)), ((u64)(0x0cdbf7b9d9cce00dU)), ((u64)(0x0ca65fc7e170b33eU)), ((u64)(0x0c71e6398126f5cbU)), ((u64)(0x0c3ca38f350b22dfU)), ((u64)(0x0c06e93f5da2824cU)), ((u64)(0x0bd25432b14ecea3U)), ((u64)(0x0b9d53844ee47dd1U)), ((u64)(0x0b677603725064a8U)), ((u64)(0x0b32c4cf8ea6b6ecU)), ((u64)(0x0afe07b27dd78b14U)), ((u64)(0x0ac8062864ac6f43U)), ((u64)(0x0a9338205089f29cU)), ((u64)(0x0a5ec033b40fea93U)), ((u64)(0x0a2899c2f6732210U)), ((u64)(0x09f3ae3591f5b4d9U)), ((u64)(0x09bf7d228322baf5U)), ((u64)(0x098930e868e89591U)), ((u64)(0x0954272053ed4474U)), ((u64)(0x09201f4d0ff10390U)), ((u64)(0x08e9cbae7fe805b3U)), ((u64)(0x08b4a2f1ffecd15cU)), ((u64)(0x0880825b3323dab0U)), ((u64)(0x084a6a2b85062ab3U)), ((u64)(0x081521bc6a6b555cU)), ((u64)(0x07e0e7c9eebc444aU)), ((u64)(0x07ab0c764ac6d3a9U)), ((u64)(0x0775a391d56bdc87U)), ((u64)(0x07414fa7ddefe3a0U)), ((u64)(0x070bb2a62fe638ffU)), ((u64)(0x06d62884f31e93ffU)), ((u64)(0x06a1ba03f5b21000U)), ((u64)(0x066c5cd322b67fffU)), ((u64)(0x0636b0a8e891ffffU)), ((u64)(0x060226ed86db3333U)), ((u64)(0x05cd0b15a491eb84U)), ((u64)(0x05973c115074bc6aU)), ((u64)(0x05629674405d6388U)), ((u64)(0x052dbd86cd6238d9U)), ((u64)(0x04f7cad23de82d7bU)), ((u64)(0x04c308a831868ac9U)), ((u64)(0x048e74404f3daadbU)), ((u64)(0x04585d003f6488afU)), ((u64)(0x04237d99cc506d59U)), ((u64)(0x03ef2f5c7a1a488eU)), ((u64)(0x03b8f2b061aea072U)), ((u64)(0x0383f559e7bee6c1U)), ((u64)(0x034feef63f97d79cU)), ((u64)(0x03198bf832dfdfb0U)), ((u64)(0x02e46ff9c24cb2f3U)), ((u64)(0x02b059949b708f29U)), ((u64)(0x027a28edc580e50eU)), ((u64)(0x0244ed8b04671da5U)), ((u64)(0x0210be08d0527e1dU)), ((u64)(0x01dac9a7b3b7302fU)), ((u64)(0x01a56e1fc2f8f359U)), ((u64)(0x017124e63593f5e1U)), ((u64)(0x013b6e3d22865634U)), ((u64)(0x0105f1ca820511c3U)), ((u64)(0x00d18e3b9b374169U)), ((u64)(0x009c16c5c5253575U)), ((u64)(0x0066789e3750f791U)), ((u64)(0x0031fa182c40c60dU)), ((u64)(0x000730d67819e8d2U)), ((u64)(0x0000b8157268fdafU)), ((u64)(0x000012688b70e62bU)), ((u64)(0x000001d74124e3d1U)), ((u64)(0x0000002f201d49fbU)), ((u64)(0x00000004b6695433U)), ((u64)(0x0000000078a42205U)), ((u64)(0x000000000c1069cdU)), ((u64)(0x000000000134d761U)), ((u64)(0x00000000001ee257U)), ((u64)(0x00000000000316a2U)), ((u64)(0x0000000000004f10U)), ((u64)(0x00000000000007e8U)), ((u64)(0x00000000000000caU)), ((u64)(0x0000000000000014U)), ((u64)(0x0000000000000002U))}; // fixed array const
 const u64 _const_strconv__max_u64 = 18446744073709551615U; // precomputed2
Array_fixed_u32_10 _const_strconv__ten_pow_table_32 = {((u32)(1U)), ((u32)(10U)), ((u32)(100U)), ((u32)(1000U)), ((u32)(10000U)), ((u32)(100000U)), ((u32)(1000000U)), ((u32)(10000000U)), ((u32)(100000000U)), ((u32)(1000000000U))}; // fixed array const
 const u32 _const_strconv__mantbits32 = 23; // precomputed2
 const u32 _const_strconv__expbits32 = 8; // precomputed2
Array_fixed_u64_20 _const_strconv__ten_pow_table_64 = {((u64)(1U)), ((u64)(10U)), ((u64)(100U)), ((u64)(1000U)), ((u64)(10000U)), ((u64)(100000U)), ((u64)(1000000U)), ((u64)(10000000U)), ((u64)(100000000U)), ((u64)(1000000000U)), ((u64)(10000000000U)), ((u64)(100000000000U)), ((u64)(1000000000000U)), ((u64)(10000000000000U)), ((u64)(100000000000000U)), ((u64)(1000000000000000U)), ((u64)(10000000000000000U)), ((u64)(100000000000000000U)), ((u64)(1000000000000000000U)), ((u64)(10000000000000000000U))}; // fixed array const
 const u32 _const_strconv__mantbits64 = 52; // precomputed2
 const u32 _const_strconv__expbits64 = 11; // precomputed2
Array_fixed_f64_20 _const_strconv__dec_round = {((f64)(0.5)), 0.05, 0.005, 0.0005, 0.00005, 0.000005, 0.0000005, 0.00000005, 0.000000005, 0.0000000005, 0.00000000005, 0.000000000005, 0.0000000000005, 0.00000000000005, 0.000000000000005, 0.0000000000000005, 0.00000000000000005, 0.000000000000000005, 0.0000000000000000005, 0.00000000000000000005}; // fixed array const
Array_fixed_u64_18 _const_strconv__powers_of_10 = {((u64)(1e0)), ((u64)(1e1)), ((u64)(1e2)), ((u64)(1e3)), ((u64)(1e4)), ((u64)(1e5)), ((u64)(1e6)), ((u64)(1e7)), ((u64)(1e8)), ((u64)(1e9)), ((u64)(1e10)), ((u64)(1e11)), ((u64)(1e12)), ((u64)(1e13)), ((u64)(1e14)), ((u64)(1e15)), ((u64)(1e16)), ((u64)(1e17))}; // fixed array const
Array_fixed_u64_47 _const_strconv__pow5_split_32 = {((u64)(1152921504606846976U)), ((u64)(1441151880758558720U)), ((u64)(1801439850948198400U)), ((u64)(2251799813685248000U)), ((u64)(1407374883553280000U)), ((u64)(1759218604441600000U)), ((u64)(2199023255552000000U)), ((u64)(1374389534720000000U)), ((u64)(1717986918400000000U)), ((u64)(2147483648000000000U)), ((u64)(1342177280000000000U)), ((u64)(1677721600000000000U)), ((u64)(2097152000000000000U)), ((u64)(1310720000000000000U)), ((u64)(1638400000000000000U)), ((u64)(2048000000000000000U)), ((u64)(1280000000000000000U)), ((u64)(1600000000000000000U)), ((u64)(2000000000000000000U)), ((u64)(1250000000000000000U)), ((u64)(1562500000000000000U)), ((u64)(1953125000000000000U)), ((u64)(1220703125000000000U)), ((u64)(1525878906250000000U)), ((u64)(1907348632812500000U)), ((u64)(1192092895507812500U)), ((u64)(1490116119384765625U)), ((u64)(1862645149230957031U)), ((u64)(1164153218269348144U)), ((u64)(1455191522836685180U)), ((u64)(1818989403545856475U)), ((u64)(2273736754432320594U)), ((u64)(1421085471520200371U)), ((u64)(1776356839400250464U)), ((u64)(2220446049250313080U)), ((u64)(1387778780781445675U)), ((u64)(1734723475976807094U)), ((u64)(2168404344971008868U)), ((u64)(1355252715606880542U)), ((u64)(1694065894508600678U)), ((u64)(2117582368135750847U)), ((u64)(1323488980084844279U)), ((u64)(1654361225106055349U)), ((u64)(2067951531382569187U)), ((u64)(1292469707114105741U)), ((u64)(1615587133892632177U)), ((u64)(2019483917365790221U))}; // fixed array const
Array_fixed_u64_31 _const_strconv__pow5_inv_split_32 = {((u64)(576460752303423489U)), ((u64)(461168601842738791U)), ((u64)(368934881474191033U)), ((u64)(295147905179352826U)), ((u64)(472236648286964522U)), ((u64)(377789318629571618U)), ((u64)(302231454903657294U)), ((u64)(483570327845851670U)), ((u64)(386856262276681336U)), ((u64)(309485009821345069U)), ((u64)(495176015714152110U)), ((u64)(396140812571321688U)), ((u64)(316912650057057351U)), ((u64)(507060240091291761U)), ((u64)(405648192073033409U)), ((u64)(324518553658426727U)), ((u64)(519229685853482763U)), ((u64)(415383748682786211U)), ((u64)(332306998946228969U)), ((u64)(531691198313966350U)), ((u64)(425352958651173080U)), ((u64)(340282366920938464U)), ((u64)(544451787073501542U)), ((u64)(435561429658801234U)), ((u64)(348449143727040987U)), ((u64)(557518629963265579U)), ((u64)(446014903970612463U)), ((u64)(356811923176489971U)), ((u64)(570899077082383953U)), ((u64)(456719261665907162U)), ((u64)(365375409332725730U))}; // fixed array const
Array_fixed_u64_652 _const_strconv__pow5_split_64_x = {((u64)(0x0000000000000000U)), ((u64)(0x0100000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0140000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0190000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01f4000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0138800000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0186a00000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01e8480000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01312d0000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x017d784000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01dcd65000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x012a05f200000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0174876e80000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01d1a94a20000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x012309ce54000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x016bcc41e9000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01c6bf5263400000U)), ((u64)(0x0000000000000000U)), ((u64)(0x011c37937e080000U)), ((u64)(0x0000000000000000U)), ((u64)(0x016345785d8a0000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01bc16d674ec8000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01158e460913d000U)), ((u64)(0x0000000000000000U)), ((u64)(0x015af1d78b58c400U)), ((u64)(0x0000000000000000U)), ((u64)(0x01b1ae4d6e2ef500U)), ((u64)(0x0000000000000000U)), ((u64)(0x010f0cf064dd5920U)), ((u64)(0x0000000000000000U)), ((u64)(0x0152d02c7e14af68U)), ((u64)(0x0000000000000000U)), ((u64)(0x01a784379d99db42U)), ((u64)(0x4000000000000000U)), ((u64)(0x0108b2a2c2802909U)), ((u64)(0x9000000000000000U)), ((u64)(0x014adf4b7320334bU)), ((u64)(0x7400000000000000U)), ((u64)(0x019d971e4fe8401eU)), ((u64)(0x0880000000000000U)), ((u64)(0x01027e72f1f12813U)), ((u64)(0xcaa0000000000000U)), ((u64)(0x01431e0fae6d7217U)), ((u64)(0xbd48000000000000U)), ((u64)(0x0193e5939a08ce9dU)), ((u64)(0x2c9a000000000000U)), ((u64)(0x01f8def8808b0245U)), ((u64)(0x3be0400000000000U)), ((u64)(0x013b8b5b5056e16bU)), ((u64)(0x0ad8500000000000U)), ((u64)(0x018a6e32246c99c6U)), ((u64)(0x8d8e640000000000U)), ((u64)(0x01ed09bead87c037U)), ((u64)(0xb878fe8000000000U)), ((u64)(0x013426172c74d822U)), ((u64)(0x66973e2000000000U)), ((u64)(0x01812f9cf7920e2bU)), ((u64)(0x403d0da800000000U)), ((u64)(0x01e17b84357691b6U)), ((u64)(0xe826288900000000U)), ((u64)(0x012ced32a16a1b11U)), ((u64)(0x622fb2ab40000000U)), ((u64)(0x0178287f49c4a1d6U)), ((u64)(0xfabb9f5610000000U)), ((u64)(0x01d6329f1c35ca4bU)), ((u64)(0x7cb54395ca000000U)), ((u64)(0x0125dfa371a19e6fU)), ((u64)(0x5be2947b3c800000U)), ((u64)(0x016f578c4e0a060bU)), ((u64)(0x32db399a0ba00000U)), ((u64)(0x01cb2d6f618c878eU)), ((u64)(0xdfc9040047440000U)), ((u64)(0x011efc659cf7d4b8U)), ((u64)(0x17bb450059150000U)), ((u64)(0x0166bb7f0435c9e7U)), ((u64)(0xddaa16406f5a4000U)), ((u64)(0x01c06a5ec5433c60U)), ((u64)(0x8a8a4de845986800U)), ((u64)(0x0118427b3b4a05bcU)), ((u64)(0xad2ce16256fe8200U)), ((u64)(0x015e531a0a1c872bU)), ((u64)(0x987819baecbe2280U)), ((u64)(0x01b5e7e08ca3a8f6U)), ((u64)(0x1f4b1014d3f6d590U)), ((u64)(0x0111b0ec57e6499aU)), ((u64)(0xa71dd41a08f48af4U)), ((u64)(0x01561d276ddfdc00U)), ((u64)(0xd0e549208b31adb1U)), ((u64)(0x01aba4714957d300U)), ((u64)(0x828f4db456ff0c8eU)), ((u64)(0x010b46c6cdd6e3e0U)), ((u64)(0xa33321216cbecfb2U)), ((u64)(0x014e1878814c9cd8U)), ((u64)(0xcbffe969c7ee839eU)), ((u64)(0x01a19e96a19fc40eU)), ((u64)(0x3f7ff1e21cf51243U)), ((u64)(0x0105031e2503da89U)), ((u64)(0x8f5fee5aa43256d4U)), ((u64)(0x014643e5ae44d12bU)), ((u64)(0x7337e9f14d3eec89U)), ((u64)(0x0197d4df19d60576U)), ((u64)(0x1005e46da08ea7abU)), ((u64)(0x01fdca16e04b86d4U)), ((u64)(0x8a03aec4845928cbU)), ((u64)(0x013e9e4e4c2f3444U)), ((u64)(0xac849a75a56f72fdU)), ((u64)(0x018e45e1df3b0155U)), ((u64)(0x17a5c1130ecb4fbdU)), ((u64)(0x01f1d75a5709c1abU)), ((u64)(0xeec798abe93f11d6U)), ((u64)(0x013726987666190aU)), ((u64)(0xaa797ed6e38ed64bU)), ((u64)(0x0184f03e93ff9f4dU)), ((u64)(0x1517de8c9c728bdeU)), ((u64)(0x01e62c4e38ff8721U)), ((u64)(0xad2eeb17e1c7976bU)), ((u64)(0x012fdbb0e39fb474U)), ((u64)(0xd87aa5ddda397d46U)), ((u64)(0x017bd29d1c87a191U)), ((u64)(0x4e994f5550c7dc97U)), ((u64)(0x01dac74463a989f6U)), ((u64)(0xf11fd195527ce9deU)), ((u64)(0x0128bc8abe49f639U)), ((u64)(0x6d67c5faa71c2456U)), ((u64)(0x0172ebad6ddc73c8U)), ((u64)(0x88c1b77950e32d6cU)), ((u64)(0x01cfa698c95390baU)), ((u64)(0x957912abd28dfc63U)), ((u64)(0x0121c81f7dd43a74U)), ((u64)(0xbad75756c7317b7cU)), ((u64)(0x016a3a275d494911U)), ((u64)(0x298d2d2c78fdda5bU)), ((u64)(0x01c4c8b1349b9b56U)), ((u64)(0xd9f83c3bcb9ea879U)), ((u64)(0x011afd6ec0e14115U)), ((u64)(0x50764b4abe865297U)), ((u64)(0x0161bcca7119915bU)), ((u64)(0x2493de1d6e27e73dU)), ((u64)(0x01ba2bfd0d5ff5b2U)), ((u64)(0x56dc6ad264d8f086U)), ((u64)(0x01145b7e285bf98fU)), ((u64)(0x2c938586fe0f2ca8U)), ((u64)(0x0159725db272f7f3U)), ((u64)(0xf7b866e8bd92f7d2U)), ((u64)(0x01afcef51f0fb5efU)), ((u64)(0xfad34051767bdae3U)), ((u64)(0x010de1593369d1b5U)), ((u64)(0x79881065d41ad19cU)), ((u64)(0x015159af80444623U)), ((u64)(0x57ea147f49218603U)), ((u64)(0x01a5b01b605557acU)), ((u64)(0xb6f24ccf8db4f3c1U)), ((u64)(0x01078e111c3556cbU)), ((u64)(0xa4aee003712230b2U)), ((u64)(0x014971956342ac7eU)), ((u64)(0x4dda98044d6abcdfU)), ((u64)(0x019bcdfabc13579eU)), ((u64)(0xf0a89f02b062b60bU)), ((u64)(0x010160bcb58c16c2U)), ((u64)(0xacd2c6c35c7b638eU)), ((u64)(0x0141b8ebe2ef1c73U)), ((u64)(0x98077874339a3c71U)), ((u64)(0x01922726dbaae390U)), ((u64)(0xbe0956914080cb8eU)), ((u64)(0x01f6b0f092959c74U)), ((u64)(0xf6c5d61ac8507f38U)), ((u64)(0x013a2e965b9d81c8U)), ((u64)(0x34774ba17a649f07U)), ((u64)(0x0188ba3bf284e23bU)), ((u64)(0x01951e89d8fdc6c8U)), ((u64)(0x01eae8caef261acaU)), ((u64)(0x40fd3316279e9c3dU)), ((u64)(0x0132d17ed577d0beU)), ((u64)(0xd13c7fdbb186434cU)), ((u64)(0x017f85de8ad5c4edU)), ((u64)(0x458b9fd29de7d420U)), ((u64)(0x01df67562d8b3629U)), ((u64)(0xcb7743e3a2b0e494U)), ((u64)(0x012ba095dc7701d9U)), ((u64)(0x3e5514dc8b5d1db9U)), ((u64)(0x017688bb5394c250U)), ((u64)(0x4dea5a13ae346527U)), ((u64)(0x01d42aea2879f2e4U)), ((u64)(0xb0b2784c4ce0bf38U)), ((u64)(0x01249ad2594c37ceU)), ((u64)(0x5cdf165f6018ef06U)), ((u64)(0x016dc186ef9f45c2U)), ((u64)(0xf416dbf7381f2ac8U)), ((u64)(0x01c931e8ab871732U)), ((u64)(0xd88e497a83137abdU)), ((u64)(0x011dbf316b346e7fU)), ((u64)(0xceb1dbd923d8596cU)), ((u64)(0x01652efdc6018a1fU)), ((u64)(0xc25e52cf6cce6fc7U)), ((u64)(0x01be7abd3781eca7U)), ((u64)(0xd97af3c1a40105dcU)), ((u64)(0x01170cb642b133e8U)), ((u64)(0x0fd9b0b20d014754U)), ((u64)(0x015ccfe3d35d80e3U)), ((u64)(0xd3d01cde90419929U)), ((u64)(0x01b403dcc834e11bU)), ((u64)(0x6462120b1a28ffb9U)), ((u64)(0x01108269fd210cb1U)), ((u64)(0xbd7a968de0b33fa8U)), ((u64)(0x0154a3047c694fddU)), ((u64)(0x2cd93c3158e00f92U)), ((u64)(0x01a9cbc59b83a3d5U)), ((u64)(0x3c07c59ed78c09bbU)), ((u64)(0x010a1f5b81324665U)), ((u64)(0x8b09b7068d6f0c2aU)), ((u64)(0x014ca732617ed7feU)), ((u64)(0x2dcc24c830cacf34U)), ((u64)(0x019fd0fef9de8dfeU)), ((u64)(0xdc9f96fd1e7ec180U)), ((u64)(0x0103e29f5c2b18beU)), ((u64)(0x93c77cbc661e71e1U)), ((u64)(0x0144db473335deeeU)), ((u64)(0x38b95beb7fa60e59U)), ((u64)(0x01961219000356aaU)), ((u64)(0xc6e7b2e65f8f91efU)), ((u64)(0x01fb969f40042c54U)), ((u64)(0xfc50cfcffbb9bb35U)), ((u64)(0x013d3e2388029bb4U)), ((u64)(0x3b6503c3faa82a03U)), ((u64)(0x018c8dac6a0342a2U)), ((u64)(0xca3e44b4f9523484U)), ((u64)(0x01efb1178484134aU)), ((u64)(0xbe66eaf11bd360d2U)), ((u64)(0x0135ceaeb2d28c0eU)), ((u64)(0x6e00a5ad62c83907U)), ((u64)(0x0183425a5f872f12U)), ((u64)(0x0980cf18bb7a4749U)), ((u64)(0x01e412f0f768fad7U)), ((u64)(0x65f0816f752c6c8dU)), ((u64)(0x012e8bd69aa19cc6U)), ((u64)(0xff6ca1cb527787b1U)), ((u64)(0x017a2ecc414a03f7U)), ((u64)(0xff47ca3e2715699dU)), ((u64)(0x01d8ba7f519c84f5U)), ((u64)(0xbf8cde66d86d6202U)), ((u64)(0x0127748f9301d319U)), ((u64)(0x2f7016008e88ba83U)), ((u64)(0x017151b377c247e0U)), ((u64)(0x3b4c1b80b22ae923U)), ((u64)(0x01cda62055b2d9d8U)), ((u64)(0x250f91306f5ad1b6U)), ((u64)(0x012087d4358fc827U)), ((u64)(0xee53757c8b318623U)), ((u64)(0x0168a9c942f3ba30U)), ((u64)(0x29e852dbadfde7acU)), ((u64)(0x01c2d43b93b0a8bdU)), ((u64)(0x3a3133c94cbeb0ccU)), ((u64)(0x0119c4a53c4e6976U)), ((u64)(0xc8bd80bb9fee5cffU)), ((u64)(0x016035ce8b6203d3U)), ((u64)(0xbaece0ea87e9f43eU)), ((u64)(0x01b843422e3a84c8U)), ((u64)(0x74d40c9294f238a7U)), ((u64)(0x01132a095ce492fdU)), ((u64)(0xd2090fb73a2ec6d1U)), ((u64)(0x0157f48bb41db7bcU)), ((u64)(0x068b53a508ba7885U)), ((u64)(0x01adf1aea12525acU)), ((u64)(0x8417144725748b53U)), ((u64)(0x010cb70d24b7378bU)), ((u64)(0x651cd958eed1ae28U)), ((u64)(0x014fe4d06de5056eU)), ((u64)(0xfe640faf2a8619b2U)), ((u64)(0x01a3de04895e46c9U)), ((u64)(0x3efe89cd7a93d00fU)), ((u64)(0x01066ac2d5daec3eU)), ((u64)(0xcebe2c40d938c413U)), ((u64)(0x014805738b51a74dU)), ((u64)(0x426db7510f86f518U)), ((u64)(0x019a06d06e261121U)), ((u64)(0xc9849292a9b4592fU)), ((u64)(0x0100444244d7cab4U)), ((u64)(0xfbe5b73754216f7aU)), ((u64)(0x01405552d60dbd61U)), ((u64)(0x7adf25052929cb59U)), ((u64)(0x01906aa78b912cbaU)), ((u64)(0x1996ee4673743e2fU)), ((u64)(0x01f485516e7577e9U)), ((u64)(0xaffe54ec0828a6ddU)), ((u64)(0x0138d352e5096af1U)), ((u64)(0x1bfdea270a32d095U)), ((u64)(0x018708279e4bc5aeU)), ((u64)(0xa2fd64b0ccbf84baU)), ((u64)(0x01e8ca3185deb719U)), ((u64)(0x05de5eee7ff7b2f4U)), ((u64)(0x01317e5ef3ab3270U)), ((u64)(0x0755f6aa1ff59fb1U)), ((u64)(0x017dddf6b095ff0cU)), ((u64)(0x092b7454a7f3079eU)), ((u64)(0x01dd55745cbb7ecfU)), ((u64)(0x65bb28b4e8f7e4c3U)), ((u64)(0x012a5568b9f52f41U)), ((u64)(0xbf29f2e22335ddf3U)), ((u64)(0x0174eac2e8727b11U)), ((u64)(0x2ef46f9aac035570U)), ((u64)(0x01d22573a28f19d6U)), ((u64)(0xdd58c5c0ab821566U)), ((u64)(0x0123576845997025U)), ((u64)(0x54aef730d6629ac0U)), ((u64)(0x016c2d4256ffcc2fU)), ((u64)(0x29dab4fd0bfb4170U)), ((u64)(0x01c73892ecbfbf3bU)), ((u64)(0xfa28b11e277d08e6U)), ((u64)(0x011c835bd3f7d784U)), ((u64)(0x38b2dd65b15c4b1fU)), ((u64)(0x0163a432c8f5cd66U)), ((u64)(0xc6df94bf1db35de7U)), ((u64)(0x01bc8d3f7b3340bfU)), ((u64)(0xdc4bbcf772901ab0U)), ((u64)(0x0115d847ad000877U)), ((u64)(0xd35eac354f34215cU)), ((u64)(0x015b4e5998400a95U)), ((u64)(0x48365742a30129b4U)), ((u64)(0x01b221effe500d3bU)), ((u64)(0x0d21f689a5e0ba10U)), ((u64)(0x010f5535fef20845U)), ((u64)(0x506a742c0f58e894U)), ((u64)(0x01532a837eae8a56U)), ((u64)(0xe4851137132f22b9U)), ((u64)(0x01a7f5245e5a2cebU)), ((u64)(0x6ed32ac26bfd75b4U)), ((u64)(0x0108f936baf85c13U)), ((u64)(0x4a87f57306fcd321U)), ((u64)(0x014b378469b67318U)), ((u64)(0x5d29f2cfc8bc07e9U)), ((u64)(0x019e056584240fdeU)), ((u64)(0xfa3a37c1dd7584f1U)), ((u64)(0x0102c35f729689eaU)), ((u64)(0xb8c8c5b254d2e62eU)), ((u64)(0x014374374f3c2c65U)), ((u64)(0x26faf71eea079fb9U)), ((u64)(0x01945145230b377fU)), ((u64)(0xf0b9b4e6a48987a8U)), ((u64)(0x01f965966bce055eU)), ((u64)(0x5674111026d5f4c9U)), ((u64)(0x013bdf7e0360c35bU)), ((u64)(0x2c111554308b71fbU)), ((u64)(0x018ad75d8438f432U)), ((u64)(0xb7155aa93cae4e7aU)), ((u64)(0x01ed8d34e547313eU)), ((u64)(0x326d58a9c5ecf10cU)), ((u64)(0x013478410f4c7ec7U)), ((u64)(0xff08aed437682d4fU)), ((u64)(0x01819651531f9e78U)), ((u64)(0x3ecada89454238a3U)), ((u64)(0x01e1fbe5a7e78617U)), ((u64)(0x873ec895cb496366U)), ((u64)(0x012d3d6f88f0b3ceU)), ((u64)(0x290e7abb3e1bbc3fU)), ((u64)(0x01788ccb6b2ce0c2U)), ((u64)(0xb352196a0da2ab4fU)), ((u64)(0x01d6affe45f818f2U)), ((u64)(0xb0134fe24885ab11U)), ((u64)(0x01262dfeebbb0f97U)), ((u64)(0x9c1823dadaa715d6U)), ((u64)(0x016fb97ea6a9d37dU)), ((u64)(0x031e2cd19150db4bU)), ((u64)(0x01cba7de5054485dU)), ((u64)(0x21f2dc02fad2890fU)), ((u64)(0x011f48eaf234ad3aU)), ((u64)(0xaa6f9303b9872b53U)), ((u64)(0x01671b25aec1d888U)), ((u64)(0xd50b77c4a7e8f628U)), ((u64)(0x01c0e1ef1a724eaaU)), ((u64)(0xc5272adae8f199d9U)), ((u64)(0x01188d357087712aU)), ((u64)(0x7670f591a32e004fU)), ((u64)(0x015eb082cca94d75U)), ((u64)(0xd40d32f60bf98063U)), ((u64)(0x01b65ca37fd3a0d2U)), ((u64)(0xc4883fd9c77bf03eU)), ((u64)(0x0111f9e62fe44483U)), ((u64)(0xb5aa4fd0395aec4dU)), ((u64)(0x0156785fbbdd55a4U)), ((u64)(0xe314e3c447b1a760U)), ((u64)(0x01ac1677aad4ab0dU)), ((u64)(0xaded0e5aaccf089cU)), ((u64)(0x010b8e0acac4eae8U)), ((u64)(0xd96851f15802cac3U)), ((u64)(0x014e718d7d7625a2U)), ((u64)(0x8fc2666dae037d74U)), ((u64)(0x01a20df0dcd3af0bU)), ((u64)(0x39d980048cc22e68U)), ((u64)(0x010548b68a044d67U)), ((u64)(0x084fe005aff2ba03U)), ((u64)(0x01469ae42c8560c1U)), ((u64)(0x4a63d8071bef6883U)), ((u64)(0x0198419d37a6b8f1U)), ((u64)(0x9cfcce08e2eb42a4U)), ((u64)(0x01fe52048590672dU)), ((u64)(0x821e00c58dd309a7U)), ((u64)(0x013ef342d37a407cU)), ((u64)(0xa2a580f6f147cc10U)), ((u64)(0x018eb0138858d09bU)), ((u64)(0x8b4ee134ad99bf15U)), ((u64)(0x01f25c186a6f04c2U)), ((u64)(0x97114cc0ec80176dU)), ((u64)(0x0137798f428562f9U)), ((u64)(0xfcd59ff127a01d48U)), ((u64)(0x018557f31326bbb7U)), ((u64)(0xfc0b07ed7188249aU)), ((u64)(0x01e6adefd7f06aa5U)), ((u64)(0xbd86e4f466f516e0U)), ((u64)(0x01302cb5e6f642a7U)), ((u64)(0xace89e3180b25c98U)), ((u64)(0x017c37e360b3d351U)), ((u64)(0x1822c5bde0def3beU)), ((u64)(0x01db45dc38e0c826U)), ((u64)(0xcf15bb96ac8b5857U)), ((u64)(0x01290ba9a38c7d17U)), ((u64)(0xc2db2a7c57ae2e6dU)), ((u64)(0x01734e940c6f9c5dU)), ((u64)(0x3391f51b6d99ba08U)), ((u64)(0x01d022390f8b8375U)), ((u64)(0x403b393124801445U)), ((u64)(0x01221563a9b73229U)), ((u64)(0x904a077d6da01956U)), ((u64)(0x016a9abc9424feb3U)), ((u64)(0x745c895cc9081facU)), ((u64)(0x01c5416bb92e3e60U)), ((u64)(0x48b9d5d9fda513cbU)), ((u64)(0x011b48e353bce6fcU)), ((u64)(0x5ae84b507d0e58beU)), ((u64)(0x01621b1c28ac20bbU)), ((u64)(0x31a25e249c51eeeeU)), ((u64)(0x01baa1e332d728eaU)), ((u64)(0x5f057ad6e1b33554U)), ((u64)(0x0114a52dffc67992U)), ((u64)(0xf6c6d98c9a2002aaU)), ((u64)(0x0159ce797fb817f6U)), ((u64)(0xb4788fefc0a80354U)), ((u64)(0x01b04217dfa61df4U)), ((u64)(0xf0cb59f5d8690214U)), ((u64)(0x010e294eebc7d2b8U)), ((u64)(0x2cfe30734e83429aU)), ((u64)(0x0151b3a2a6b9c767U)), ((u64)(0xf83dbc9022241340U)), ((u64)(0x01a6208b50683940U)), ((u64)(0x9b2695da15568c08U)), ((u64)(0x0107d457124123c8U)), ((u64)(0xc1f03b509aac2f0aU)), ((u64)(0x0149c96cd6d16cbaU)), ((u64)(0x726c4a24c1573acdU)), ((u64)(0x019c3bc80c85c7e9U)), ((u64)(0xe783ae56f8d684c0U)), ((u64)(0x0101a55d07d39cf1U)), ((u64)(0x616499ecb70c25f0U)), ((u64)(0x01420eb449c8842eU)), ((u64)(0xf9bdc067e4cf2f6cU)), ((u64)(0x019292615c3aa539U)), ((u64)(0x782d3081de02fb47U)), ((u64)(0x01f736f9b3494e88U)), ((u64)(0x4b1c3e512ac1dd0cU)), ((u64)(0x013a825c100dd115U)), ((u64)(0x9de34de57572544fU)), ((u64)(0x018922f31411455aU)), ((u64)(0x455c215ed2cee963U)), ((u64)(0x01eb6bafd91596b1U)), ((u64)(0xcb5994db43c151deU)), ((u64)(0x0133234de7ad7e2eU)), ((u64)(0x7e2ffa1214b1a655U)), ((u64)(0x017fec216198ddbaU)), ((u64)(0x1dbbf89699de0febU)), ((u64)(0x01dfe729b9ff1529U)), ((u64)(0xb2957b5e202ac9f3U)), ((u64)(0x012bf07a143f6d39U)), ((u64)(0x1f3ada35a8357c6fU)), ((u64)(0x0176ec98994f4888U)), ((u64)(0x270990c31242db8bU)), ((u64)(0x01d4a7bebfa31aaaU)), ((u64)(0x5865fa79eb69c937U)), ((u64)(0x0124e8d737c5f0aaU)), ((u64)(0xee7f791866443b85U)), ((u64)(0x016e230d05b76cd4U)), ((u64)(0x2a1f575e7fd54a66U)), ((u64)(0x01c9abd04725480aU)), ((u64)(0x5a53969b0fe54e80U)), ((u64)(0x011e0b622c774d06U)), ((u64)(0xf0e87c41d3dea220U)), ((u64)(0x01658e3ab7952047U)), ((u64)(0xed229b5248d64aa8U)), ((u64)(0x01bef1c9657a6859U)), ((u64)(0x3435a1136d85eea9U)), ((u64)(0x0117571ddf6c8138U)), ((u64)(0x4143095848e76a53U)), ((u64)(0x015d2ce55747a186U)), ((u64)(0xd193cbae5b2144e8U)), ((u64)(0x01b4781ead1989e7U)), ((u64)(0xe2fc5f4cf8f4cb11U)), ((u64)(0x0110cb132c2ff630U)), ((u64)(0x1bbb77203731fdd5U)), ((u64)(0x0154fdd7f73bf3bdU)), ((u64)(0x62aa54e844fe7d4aU)), ((u64)(0x01aa3d4df50af0acU)), ((u64)(0xbdaa75112b1f0e4eU)), ((u64)(0x010a6650b926d66bU)), ((u64)(0xad15125575e6d1e2U)), ((u64)(0x014cffe4e7708c06U)), ((u64)(0x585a56ead360865bU)), ((u64)(0x01a03fde214caf08U)), ((u64)(0x37387652c41c53f8U)), ((u64)(0x010427ead4cfed65U)), ((u64)(0x850693e7752368f7U)), ((u64)(0x014531e58a03e8beU)), ((u64)(0x264838e1526c4334U)), ((u64)(0x01967e5eec84e2eeU)), ((u64)(0xafda4719a7075402U)), ((u64)(0x01fc1df6a7a61ba9U)), ((u64)(0x0de86c7008649481U)), ((u64)(0x013d92ba28c7d14aU)), ((u64)(0x9162878c0a7db9a1U)), ((u64)(0x018cf768b2f9c59cU)), ((u64)(0xb5bb296f0d1d280aU)), ((u64)(0x01f03542dfb83703U)), ((u64)(0x5194f9e568323906U)), ((u64)(0x01362149cbd32262U)), ((u64)(0xe5fa385ec23ec747U)), ((u64)(0x0183a99c3ec7eafaU)), ((u64)(0x9f78c67672ce7919U)), ((u64)(0x01e494034e79e5b9U)), ((u64)(0x03ab7c0a07c10bb0U)), ((u64)(0x012edc82110c2f94U)), ((u64)(0x04965b0c89b14e9cU)), ((u64)(0x017a93a2954f3b79U)), ((u64)(0x45bbf1cfac1da243U)), ((u64)(0x01d9388b3aa30a57U)), ((u64)(0x8b957721cb92856aU)), ((u64)(0x0127c35704a5e676U)), ((u64)(0x2e7ad4ea3e7726c4U)), ((u64)(0x0171b42cc5cf6014U)), ((u64)(0x3a198a24ce14f075U)), ((u64)(0x01ce2137f7433819U)), ((u64)(0xc44ff65700cd1649U)), ((u64)(0x0120d4c2fa8a030fU)), ((u64)(0xb563f3ecc1005bdbU)), ((u64)(0x016909f3b92c83d3U)), ((u64)(0xa2bcf0e7f14072d2U)), ((u64)(0x01c34c70a777a4c8U)), ((u64)(0x65b61690f6c847c3U)), ((u64)(0x011a0fc668aac6fdU)), ((u64)(0xbf239c35347a59b4U)), ((u64)(0x016093b802d578bcU)), ((u64)(0xeeec83428198f021U)), ((u64)(0x01b8b8a6038ad6ebU)), ((u64)(0x7553d20990ff9615U)), ((u64)(0x01137367c236c653U)), ((u64)(0x52a8c68bf53f7b9aU)), ((u64)(0x01585041b2c477e8U)), ((u64)(0x6752f82ef28f5a81U)), ((u64)(0x01ae64521f7595e2U)), ((u64)(0x8093db1d57999890U)), ((u64)(0x010cfeb353a97dadU)), ((u64)(0xe0b8d1e4ad7ffeb4U)), ((u64)(0x01503e602893dd18U)), ((u64)(0x18e7065dd8dffe62U)), ((u64)(0x01a44df832b8d45fU)), ((u64)(0x6f9063faa78bfefdU)), ((u64)(0x0106b0bb1fb384bbU)), ((u64)(0x4b747cf9516efebcU)), ((u64)(0x01485ce9e7a065eaU)), ((u64)(0xde519c37a5cabe6bU)), ((u64)(0x019a742461887f64U)), ((u64)(0x0af301a2c79eb703U)), ((u64)(0x01008896bcf54f9fU)), ((u64)(0xcdafc20b798664c4U)), ((u64)(0x0140aabc6c32a386U)), ((u64)(0x811bb28e57e7fdf5U)), ((u64)(0x0190d56b873f4c68U)), ((u64)(0xa1629f31ede1fd72U)), ((u64)(0x01f50ac6690f1f82U)), ((u64)(0xa4dda37f34ad3e67U)), ((u64)(0x013926bc01a973b1U)), ((u64)(0x0e150c5f01d88e01U)), ((u64)(0x0187706b0213d09eU)), ((u64)(0x919a4f76c24eb181U)), ((u64)(0x01e94c85c298c4c5U)), ((u64)(0x7b0071aa39712ef1U)), ((u64)(0x0131cfd3999f7afbU)), ((u64)(0x59c08e14c7cd7aadU)), ((u64)(0x017e43c8800759baU)), ((u64)(0xf030b199f9c0d958U)), ((u64)(0x01ddd4baa0093028U)), ((u64)(0x961e6f003c1887d7U)), ((u64)(0x012aa4f4a405be19U)), ((u64)(0xfba60ac04b1ea9cdU)), ((u64)(0x01754e31cd072d9fU)), ((u64)(0xfa8f8d705de65440U)), ((u64)(0x01d2a1be4048f907U)), ((u64)(0xfc99b8663aaff4a8U)), ((u64)(0x0123a516e82d9ba4U)), ((u64)(0x3bc0267fc95bf1d2U)), ((u64)(0x016c8e5ca239028eU)), ((u64)(0xcab0301fbbb2ee47U)), ((u64)(0x01c7b1f3cac74331U)), ((u64)(0x1eae1e13d54fd4ecU)), ((u64)(0x011ccf385ebc89ffU)), ((u64)(0xe659a598caa3ca27U)), ((u64)(0x01640306766bac7eU)), ((u64)(0x9ff00efefd4cbcb1U)), ((u64)(0x01bd03c81406979eU)), ((u64)(0x23f6095f5e4ff5efU)), ((u64)(0x0116225d0c841ec3U)), ((u64)(0xecf38bb735e3f36aU)), ((u64)(0x015baaf44fa52673U)), ((u64)(0xe8306ea5035cf045U)), ((u64)(0x01b295b1638e7010U)), ((u64)(0x911e4527221a162bU)), ((u64)(0x010f9d8ede39060aU)), ((u64)(0x3565d670eaa09bb6U)), ((u64)(0x015384f295c7478dU)), ((u64)(0x82bf4c0d2548c2a3U)), ((u64)(0x01a8662f3b391970U)), ((u64)(0x51b78f88374d79a6U)), ((u64)(0x01093fdd8503afe6U)), ((u64)(0xe625736a4520d810U)), ((u64)(0x014b8fd4e6449bdfU)), ((u64)(0xdfaed044d6690e14U)), ((u64)(0x019e73ca1fd5c2d7U)), ((u64)(0xebcd422b0601a8ccU)), ((u64)(0x0103085e53e599c6U)), ((u64)(0xa6c092b5c78212ffU)), ((u64)(0x0143ca75e8df0038U)), ((u64)(0xd070b763396297bfU)), ((u64)(0x0194bd136316c046U)), ((u64)(0x848ce53c07bb3dafU)), ((u64)(0x01f9ec583bdc7058U)), ((u64)(0x52d80f4584d5068dU)), ((u64)(0x013c33b72569c637U)), ((u64)(0x278e1316e60a4831U)), ((u64)(0x018b40a4eec437c5U))}; // fixed array const
Array_fixed_u64_584 _const_strconv__pow5_inv_split_64_x = {((u64)(0x0000000000000001U)), ((u64)(0x0400000000000000U)), ((u64)(0x3333333333333334U)), ((u64)(0x0333333333333333U)), ((u64)(0x28f5c28f5c28f5c3U)), ((u64)(0x028f5c28f5c28f5cU)), ((u64)(0xed916872b020c49cU)), ((u64)(0x020c49ba5e353f7cU)), ((u64)(0xaf4f0d844d013a93U)), ((u64)(0x0346dc5d63886594U)), ((u64)(0x8c3f3e0370cdc876U)), ((u64)(0x029f16b11c6d1e10U)), ((u64)(0xd698fe69270b06c5U)), ((u64)(0x0218def416bdb1a6U)), ((u64)(0xf0f4ca41d811a46eU)), ((u64)(0x035afe535795e90aU)), ((u64)(0xf3f70834acdae9f1U)), ((u64)(0x02af31dc4611873bU)), ((u64)(0x5cc5a02a23e254c1U)), ((u64)(0x0225c17d04dad296U)), ((u64)(0xfad5cd10396a2135U)), ((u64)(0x036f9bfb3af7b756U)), ((u64)(0xfbde3da69454e75eU)), ((u64)(0x02bfaffc2f2c92abU)), ((u64)(0x2fe4fe1edd10b918U)), ((u64)(0x0232f33025bd4223U)), ((u64)(0x4ca19697c81ac1bfU)), ((u64)(0x0384b84d092ed038U)), ((u64)(0x3d4e1213067bce33U)), ((u64)(0x02d09370d4257360U)), ((u64)(0x643e74dc052fd829U)), ((u64)(0x024075f3dceac2b3U)), ((u64)(0x6d30baf9a1e626a7U)), ((u64)(0x039a5652fb113785U)), ((u64)(0x2426fbfae7eb5220U)), ((u64)(0x02e1dea8c8da92d1U)), ((u64)(0x1cebfcc8b9890e80U)), ((u64)(0x024e4bba3a487574U)), ((u64)(0x94acc7a78f41b0ccU)), ((u64)(0x03b07929f6da5586U)), ((u64)(0xaa23d2ec729af3d7U)), ((u64)(0x02f394219248446bU)), ((u64)(0xbb4fdbf05baf2979U)), ((u64)(0x025c768141d369efU)), ((u64)(0xc54c931a2c4b758dU)), ((u64)(0x03c7240202ebdcb2U)), ((u64)(0x9dd6dc14f03c5e0bU)), ((u64)(0x0305b66802564a28U)), ((u64)(0x4b1249aa59c9e4d6U)), ((u64)(0x026af8533511d4edU)), ((u64)(0x44ea0f76f60fd489U)), ((u64)(0x03de5a1ebb4fbb15U)), ((u64)(0x6a54d92bf80caa07U)), ((u64)(0x0318481895d96277U)), ((u64)(0x21dd7a89933d54d2U)), ((u64)(0x0279d346de4781f9U)), ((u64)(0x362f2a75b8622150U)), ((u64)(0x03f61ed7ca0c0328U)), ((u64)(0xf825bb91604e810dU)), ((u64)(0x032b4bdfd4d668ecU)), ((u64)(0xc684960de6a5340bU)), ((u64)(0x0289097fdd7853f0U)), ((u64)(0xd203ab3e521dc33cU)), ((u64)(0x02073accb12d0ff3U)), ((u64)(0xe99f7863b696052cU)), ((u64)(0x033ec47ab514e652U)), ((u64)(0x87b2c6b62bab3757U)), ((u64)(0x02989d2ef743eb75U)), ((u64)(0xd2f56bc4efbc2c45U)), ((u64)(0x0213b0f25f69892aU)), ((u64)(0x1e55793b192d13a2U)), ((u64)(0x0352b4b6ff0f41deU)), ((u64)(0x4b77942f475742e8U)), ((u64)(0x02a8909265a5ce4bU)), ((u64)(0xd5f9435905df68baU)), ((u64)(0x022073a8515171d5U)), ((u64)(0x565b9ef4d6324129U)), ((u64)(0x03671f73b54f1c89U)), ((u64)(0xdeafb25d78283421U)), ((u64)(0x02b8e5f62aa5b06dU)), ((u64)(0x188c8eb12cecf681U)), ((u64)(0x022d84c4eeeaf38bU)), ((u64)(0x8dadb11b7b14bd9bU)), ((u64)(0x037c07a17e44b8deU)), ((u64)(0x7157c0e2c8dd647cU)), ((u64)(0x02c99fb46503c718U)), ((u64)(0x8ddfcd823a4ab6caU)), ((u64)(0x023ae629ea696c13U)), ((u64)(0x1632e269f6ddf142U)), ((u64)(0x0391704310a8acecU)), ((u64)(0x44f581ee5f17f435U)), ((u64)(0x02dac035a6ed5723U)), ((u64)(0x372ace584c1329c4U)), ((u64)(0x024899c4858aac1cU)), ((u64)(0xbeaae3c079b842d3U)), ((u64)(0x03a75c6da27779c6U)), ((u64)(0x6555830061603576U)), ((u64)(0x02ec49f14ec5fb05U)), ((u64)(0xb7779c004de6912bU)), ((u64)(0x0256a18dd89e626aU)), ((u64)(0xf258f99a163db512U)), ((u64)(0x03bdcf495a9703ddU)), ((u64)(0x5b7a614811caf741U)), ((u64)(0x02fe3f6de212697eU)), ((u64)(0xaf951aa00e3bf901U)), ((u64)(0x0264ff8b1b41edfeU)), ((u64)(0x7f54f7667d2cc19bU)), ((u64)(0x03d4cc11c5364997U)), ((u64)(0x32aa5f8530f09ae3U)), ((u64)(0x0310a3416a91d479U)), ((u64)(0xf55519375a5a1582U)), ((u64)(0x0273b5cdeedb1060U)), ((u64)(0xbbbb5b8bc3c3559dU)), ((u64)(0x03ec56164af81a34U)), ((u64)(0x2fc916096969114aU)), ((u64)(0x03237811d593482aU)), ((u64)(0x596dab3ababa743cU)), ((u64)(0x0282c674aadc39bbU)), ((u64)(0x478aef622efb9030U)), ((u64)(0x0202385d557cfafcU)), ((u64)(0xd8de4bd04b2c19e6U)), ((u64)(0x0336c0955594c4c6U)), ((u64)(0xad7ea30d08f014b8U)), ((u64)(0x029233aaaadd6a38U)), ((u64)(0x24654f3da0c01093U)), ((u64)(0x020e8fbbbbe454faU)), ((u64)(0x3a3bb1fc346680ebU)), ((u64)(0x034a7f92c63a2190U)), ((u64)(0x94fc8e635d1ecd89U)), ((u64)(0x02a1ffa89e94e7a6U)), ((u64)(0xaa63a51c4a7f0ad4U)), ((u64)(0x021b32ed4baa52ebU)), ((u64)(0xdd6c3b607731aaedU)), ((u64)(0x035eb7e212aa1e45U)), ((u64)(0x1789c919f8f488bdU)), ((u64)(0x02b22cb4dbbb4b6bU)), ((u64)(0xac6e3a7b2d906d64U)), ((u64)(0x022823c3e2fc3c55U)), ((u64)(0x13e390c515b3e23aU)), ((u64)(0x03736c6c9e606089U)), ((u64)(0xdcb60d6a77c31b62U)), ((u64)(0x02c2bd23b1e6b3a0U)), ((u64)(0x7d5e7121f968e2b5U)), ((u64)(0x0235641c8e52294dU)), ((u64)(0xc8971b698f0e3787U)), ((u64)(0x0388a02db0837548U)), ((u64)(0xa078e2bad8d82c6cU)), ((u64)(0x02d3b357c0692aa0U)), ((u64)(0xe6c71bc8ad79bd24U)), ((u64)(0x0242f5dfcd20eee6U)), ((u64)(0x0ad82c7448c2c839U)), ((u64)(0x039e5632e1ce4b0bU)), ((u64)(0x3be023903a356cfaU)), ((u64)(0x02e511c24e3ea26fU)), ((u64)(0x2fe682d9c82abd95U)), ((u64)(0x0250db01d8321b8cU)), ((u64)(0x4ca4048fa6aac8eeU)), ((u64)(0x03b4919c8d1cf8e0U)), ((u64)(0x3d5003a61eef0725U)), ((u64)(0x02f6dae3a4172d80U)), ((u64)(0x9773361e7f259f51U)), ((u64)(0x025f1582e9ac2466U)), ((u64)(0x8beb89ca6508fee8U)), ((u64)(0x03cb559e42ad070aU)), ((u64)(0x6fefa16eb73a6586U)), ((u64)(0x0309114b688a6c08U)), ((u64)(0xf3261abef8fb846bU)), ((u64)(0x026da76f86d52339U)), ((u64)(0x51d691318e5f3a45U)), ((u64)(0x03e2a57f3e21d1f6U)), ((u64)(0x0e4540f471e5c837U)), ((u64)(0x031bb798fe8174c5U)), ((u64)(0xd8376729f4b7d360U)), ((u64)(0x027c92e0cb9ac3d0U)), ((u64)(0xf38bd84321261effU)), ((u64)(0x03fa849adf5e061aU)), ((u64)(0x293cad0280eb4bffU)), ((u64)(0x032ed07be5e4d1afU)), ((u64)(0xedca240200bc3cccU)), ((u64)(0x028bd9fcb7ea4158U)), ((u64)(0xbe3b50019a3030a4U)), ((u64)(0x02097b309321cde0U)), ((u64)(0xc9f88002904d1a9fU)), ((u64)(0x03425eb41e9c7c9aU)), ((u64)(0x3b2d3335403daee6U)), ((u64)(0x029b7ef67ee396e2U)), ((u64)(0x95bdc291003158b8U)), ((u64)(0x0215ff2b98b6124eU)), ((u64)(0x892f9db4cd1bc126U)), ((u64)(0x035665128df01d4aU)), ((u64)(0x07594af70a7c9a85U)), ((u64)(0x02ab840ed7f34aa2U)), ((u64)(0x6c476f2c0863aed1U)), ((u64)(0x0222d00bdff5d54eU)), ((u64)(0x13a57eacda3917b4U)), ((u64)(0x036ae67966562217U)), ((u64)(0x0fb7988a482dac90U)), ((u64)(0x02bbeb9451de81acU)), ((u64)(0xd95fad3b6cf156daU)), ((u64)(0x022fefa9db1867bcU)), ((u64)(0xf565e1f8ae4ef15cU)), ((u64)(0x037fe5dc91c0a5faU)), ((u64)(0x911e4e608b725ab0U)), ((u64)(0x02ccb7e3a7cd5195U)), ((u64)(0xda7ea51a0928488dU)), ((u64)(0x023d5fe9530aa7aaU)), ((u64)(0xf7310829a8407415U)), ((u64)(0x039566421e7772aaU)), ((u64)(0x2c2739baed005cdeU)), ((u64)(0x02ddeb68185f8eefU)), ((u64)(0xbcec2e2f24004a4bU)), ((u64)(0x024b22b9ad193f25U)), ((u64)(0x94ad16b1d333aa11U)), ((u64)(0x03ab6ac2ae8ecb6fU)), ((u64)(0xaa241227dc2954dbU)), ((u64)(0x02ef889bbed8a2bfU)), ((u64)(0x54e9a81fe35443e2U)), ((u64)(0x02593a163246e899U)), ((u64)(0x2175d9cc9eed396aU)), ((u64)(0x03c1f689ea0b0dc2U)), ((u64)(0xe7917b0a18bdc788U)), ((u64)(0x03019207ee6f3e34U)), ((u64)(0xb9412f3b46fe393aU)), ((u64)(0x0267a8065858fe90U)), ((u64)(0xf535185ed7fd285cU)), ((u64)(0x03d90cd6f3c1974dU)), ((u64)(0xc42a79e57997537dU)), ((u64)(0x03140a458fce12a4U)), ((u64)(0x03552e512e12a931U)), ((u64)(0x02766e9e0ca4dbb7U)), ((u64)(0x9eeeb081e3510eb4U)), ((u64)(0x03f0b0fce107c5f1U)), ((u64)(0x4bf226ce4f740bc3U)), ((u64)(0x0326f3fd80d304c1U)), ((u64)(0xa3281f0b72c33c9cU)), ((u64)(0x02858ffe00a8d09aU)), ((u64)(0x1c2018d5f568fd4aU)), ((u64)(0x020473319a20a6e2U)), ((u64)(0xf9ccf48988a7fba9U)), ((u64)(0x033a51e8f69aa49cU)), ((u64)(0xfb0a5d3ad3b99621U)), ((u64)(0x02950e53f87bb6e3U)), ((u64)(0x2f3b7dc8a96144e7U)), ((u64)(0x0210d8432d2fc583U)), ((u64)(0xe52bfc7442353b0cU)), ((u64)(0x034e26d1e1e608d1U)), ((u64)(0xb756639034f76270U)), ((u64)(0x02a4ebdb1b1e6d74U)), ((u64)(0x2c451c735d92b526U)), ((u64)(0x021d897c15b1f12aU)), ((u64)(0x13a1c71efc1deea3U)), ((u64)(0x0362759355e981ddU)), ((u64)(0x761b05b2634b2550U)), ((u64)(0x02b52adc44bace4aU)), ((u64)(0x91af37c1e908eaa6U)), ((u64)(0x022a88b036fbd83bU)), ((u64)(0x82b1f2cfdb417770U)), ((u64)(0x03774119f192f392U)), ((u64)(0xcef4c23fe29ac5f3U)), ((u64)(0x02c5cdae5adbf60eU)), ((u64)(0x3f2a34ffe87bd190U)), ((u64)(0x0237d7beaf165e72U)), ((u64)(0x984387ffda5fb5b2U)), ((u64)(0x038c8c644b56fd83U)), ((u64)(0xe0360666484c915bU)), ((u64)(0x02d6d6b6a2abfe02U)), ((u64)(0x802b3851d3707449U)), ((u64)(0x024578921bbccb35U)), ((u64)(0x99dec082ebe72075U)), ((u64)(0x03a25a835f947855U)), ((u64)(0xae4bcd358985b391U)), ((u64)(0x02e8486919439377U)), ((u64)(0xbea30a913ad15c74U)), ((u64)(0x02536d20e102dc5fU)), ((u64)(0xfdd1aa81f7b560b9U)), ((u64)(0x03b8ae9b019e2d65U)), ((u64)(0x97daeece5fc44d61U)), ((u64)(0x02fa2548ce182451U)), ((u64)(0xdfe258a51969d781U)), ((u64)(0x0261b76d71ace9daU)), ((u64)(0x996a276e8f0fbf34U)), ((u64)(0x03cf8be24f7b0fc4U)), ((u64)(0xe121b9253f3fcc2aU)), ((u64)(0x030c6fe83f95a636U)), ((u64)(0xb41afa8432997022U)), ((u64)(0x02705986994484f8U)), ((u64)(0xecf7f739ea8f19cfU)), ((u64)(0x03e6f5a4286da18dU)), ((u64)(0x23f99294bba5ae40U)), ((u64)(0x031f2ae9b9f14e0bU)), ((u64)(0x4ffadbaa2fb7be99U)), ((u64)(0x027f5587c7f43e6fU)), ((u64)(0x7ff7c5dd1925fdc2U)), ((u64)(0x03feef3fa6539718U)), ((u64)(0xccc637e4141e649bU)), ((u64)(0x033258ffb842df46U)), ((u64)(0xd704f983434b83afU)), ((u64)(0x028ead9960357f6bU)), ((u64)(0x126a6135cf6f9c8cU)), ((u64)(0x020bbe144cf79923U)), ((u64)(0x83dd685618b29414U)), ((u64)(0x0345fced47f28e9eU)), ((u64)(0x9cb12044e08edcddU)), ((u64)(0x029e63f1065ba54bU)), ((u64)(0x16f419d0b3a57d7dU)), ((u64)(0x02184ff405161dd6U)), ((u64)(0x8b20294dec3bfbfbU)), ((u64)(0x035a19866e89c956U)), ((u64)(0x3c19baa4bcfcc996U)), ((u64)(0x02ae7ad1f207d445U)), ((u64)(0xc9ae2eea30ca3adfU)), ((u64)(0x02252f0e5b39769dU)), ((u64)(0x0f7d17dd1add2afdU)), ((u64)(0x036eb1b091f58a96U)), ((u64)(0x3f97464a7be42264U)), ((u64)(0x02bef48d41913babU)), ((u64)(0xcc790508631ce850U)), ((u64)(0x02325d3dce0dc955U)), ((u64)(0xe0c1a1a704fb0d4dU)), ((u64)(0x0383c862e3494222U)), ((u64)(0x4d67b4859d95a43eU)), ((u64)(0x02cfd3824f6dce82U)), ((u64)(0x711fc39e17aae9cbU)), ((u64)(0x023fdc683f8b0b9bU)), ((u64)(0xe832d2968c44a945U)), ((u64)(0x039960a6cc11ac2bU)), ((u64)(0xecf575453d03ba9eU)), ((u64)(0x02e11a1f09a7bcefU)), ((u64)(0x572ac4376402fbb1U)), ((u64)(0x024dae7f3aec9726U)), ((u64)(0x58446d256cd192b5U)), ((u64)(0x03af7d985e47583dU)), ((u64)(0x79d0575123dadbc4U)), ((u64)(0x02f2cae04b6c4697U)), ((u64)(0x94a6ac40e97be303U)), ((u64)(0x025bd5803c569edfU)), ((u64)(0x8771139b0f2c9e6cU)), ((u64)(0x03c62266c6f0fe32U)), ((u64)(0x9f8da948d8f07ebdU)), ((u64)(0x0304e85238c0cb5bU)), ((u64)(0xe60aedd3e0c06564U)), ((u64)(0x026a5374fa33d5e2U)), ((u64)(0xa344afb9679a3bd2U)), ((u64)(0x03dd5254c3862304U)), ((u64)(0xe903bfc78614fca8U)), ((u64)(0x031775109c6b4f36U)), ((u64)(0xba6966393810ca20U)), ((u64)(0x02792a73b055d8f8U)), ((u64)(0x2a423d2859b4769aU)), ((u64)(0x03f510b91a22f4c1U)), ((u64)(0xee9b642047c39215U)), ((u64)(0x032a73c7481bf700U)), ((u64)(0xbee2b680396941aaU)), ((u64)(0x02885c9f6ce32c00U)), ((u64)(0xff1bc53361210155U)), ((u64)(0x0206b07f8a4f5666U)), ((u64)(0x31c6085235019bbbU)), ((u64)(0x033de73276e5570bU)), ((u64)(0x27d1a041c4014963U)), ((u64)(0x0297ec285f1ddf3cU)), ((u64)(0xeca7b367d0010782U)), ((u64)(0x021323537f4b18fcU)), ((u64)(0xadd91f0c8001a59dU)), ((u64)(0x0351d21f3211c194U)), ((u64)(0xf17a7f3d3334847eU)), ((u64)(0x02a7db4c280e3476U)), ((u64)(0x279532975c2a0398U)), ((u64)(0x021fe2a3533e905fU)), ((u64)(0xd8eeb75893766c26U)), ((u64)(0x0366376bb8641a31U)), ((u64)(0x7a5892ad42c52352U)), ((u64)(0x02b82c562d1ce1c1U)), ((u64)(0xfb7a0ef102374f75U)), ((u64)(0x022cf044f0e3e7cdU)), ((u64)(0xc59017e8038bb254U)), ((u64)(0x037b1a07e7d30c7cU)), ((u64)(0x37a67986693c8eaaU)), ((u64)(0x02c8e19feca8d6caU)), ((u64)(0xf951fad1edca0bbbU)), ((u64)(0x023a4e198a20abd4U)), ((u64)(0x28832ae97c76792bU)), ((u64)(0x03907cf5a9cddfbbU)), ((u64)(0x2068ef21305ec756U)), ((u64)(0x02d9fd9154a4b2fcU)), ((u64)(0x19ed8c1a8d189f78U)), ((u64)(0x0247fe0ddd508f30U)), ((u64)(0x5caf4690e1c0ff26U)), ((u64)(0x03a66349621a7eb3U)), ((u64)(0x4a25d20d81673285U)), ((u64)(0x02eb82a11b48655cU)), ((u64)(0x3b5174d79ab8f537U)), ((u64)(0x0256021a7c39eab0U)), ((u64)(0x921bee25c45b21f1U)), ((u64)(0x03bcd02a605caab3U)), ((u64)(0xdb498b5169e2818eU)), ((u64)(0x02fd735519e3bbc2U)), ((u64)(0x15d46f7454b53472U)), ((u64)(0x02645c4414b62fcfU)), ((u64)(0xefba4bed545520b6U)), ((u64)(0x03d3c6d35456b2e4U)), ((u64)(0xf2fb6ff110441a2bU)), ((u64)(0x030fd242a9def583U)), ((u64)(0x8f2f8cc0d9d014efU)), ((u64)(0x02730e9bbb18c469U)), ((u64)(0xb1e5ae015c80217fU)), ((u64)(0x03eb4a92c4f46d75U)), ((u64)(0xc1848b344a001accU)), ((u64)(0x0322a20f03f6bdf7U)), ((u64)(0xce03a2903b3348a3U)), ((u64)(0x02821b3f365efe5fU)), ((u64)(0xd802e873628f6d4fU)), ((u64)(0x0201af65c518cb7fU)), ((u64)(0x599e40b89db2487fU)), ((u64)(0x0335e56fa1c14599U)), ((u64)(0xe14b66fa17c1d399U)), ((u64)(0x029184594e3437adU)), ((u64)(0x81091f2e7967dc7aU)), ((u64)(0x020e037aa4f692f1U)), ((u64)(0x9b41cb7d8f0c93f6U)), ((u64)(0x03499f2aa18a84b5U)), ((u64)(0xaf67d5fe0c0a0ff8U)), ((u64)(0x02a14c221ad536f7U)), ((u64)(0xf2b977fe70080cc7U)), ((u64)(0x021aa34e7bddc592U)), ((u64)(0x1df58cca4cd9ae0bU)), ((u64)(0x035dd2172c9608ebU)), ((u64)(0xe4c470a1d7148b3cU)), ((u64)(0x02b174df56de6d88U)), ((u64)(0x83d05a1b1276d5caU)), ((u64)(0x022790b2abe5246dU)), ((u64)(0x9fb3c35e83f1560fU)), ((u64)(0x0372811ddfd50715U)), ((u64)(0xb2f635e5365aab3fU)), ((u64)(0x02c200e4b310d277U)), ((u64)(0xf591c4b75eaeef66U)), ((u64)(0x0234cd83c273db92U)), ((u64)(0xef4fa125644b18a3U)), ((u64)(0x0387af39371fc5b7U)), ((u64)(0x8c3fb41de9d5ad4fU)), ((u64)(0x02d2f2942c196af9U)), ((u64)(0x3cffc34b2177bdd9U)), ((u64)(0x02425ba9bce12261U)), ((u64)(0x94cc6bab68bf9628U)), ((u64)(0x039d5f75fb01d09bU)), ((u64)(0x10a38955ed6611b9U)), ((u64)(0x02e44c5e6267da16U)), ((u64)(0xda1c6dde5784dafbU)), ((u64)(0x02503d184eb97b44U)), ((u64)(0xf693e2fd58d49191U)), ((u64)(0x03b394f3b128c53aU)), ((u64)(0xc5431bfde0aa0e0eU)), ((u64)(0x02f610c2f4209dc8U)), ((u64)(0x6a9c1664b3bb3e72U)), ((u64)(0x025e73cf29b3b16dU)), ((u64)(0x10f9bd6dec5eca4fU)), ((u64)(0x03ca52e50f85e8afU)), ((u64)(0xda616457f04bd50cU)), ((u64)(0x03084250d937ed58U)), ((u64)(0xe1e783798d09773dU)), ((u64)(0x026d01da475ff113U)), ((u64)(0x030c058f480f252eU)), ((u64)(0x03e19c9072331b53U)), ((u64)(0x68d66ad906728425U)), ((u64)(0x031ae3a6c1c27c42U)), ((u64)(0x8711ef14052869b7U)), ((u64)(0x027be952349b969bU)), ((u64)(0x0b4fe4ecd50d75f2U)), ((u64)(0x03f97550542c242cU)), ((u64)(0xa2a650bd773df7f5U)), ((u64)(0x032df7737689b689U)), ((u64)(0xb551da312c31932aU)), ((u64)(0x028b2c5c5ed49207U)), ((u64)(0x5ddb14f4235adc22U)), ((u64)(0x0208f049e576db39U)), ((u64)(0x2fc4ee536bc49369U)), ((u64)(0x034180763bf15ec2U)), ((u64)(0xbfd0bea92303a921U)), ((u64)(0x029acd2b63277f01U)), ((u64)(0x9973cbba8269541aU)), ((u64)(0x021570ef8285ff34U)), ((u64)(0x5bec792a6a42202aU)), ((u64)(0x0355817f373ccb87U)), ((u64)(0xe3239421ee9b4cefU)), ((u64)(0x02aacdff5f63d605U)), ((u64)(0xb5b6101b25490a59U)), ((u64)(0x02223e65e5e97804U)), ((u64)(0x22bce691d541aa27U)), ((u64)(0x0369fd6fd64259a1U)), ((u64)(0xb563eba7ddce21b9U)), ((u64)(0x02bb31264501e14dU)), ((u64)(0xf78322ecb171b494U)), ((u64)(0x022f5a850401810aU)), ((u64)(0x259e9e47824f8753U)), ((u64)(0x037ef73b399c01abU)), ((u64)(0x1e187e9f9b72d2a9U)), ((u64)(0x02cbf8fc2e1667bcU)), ((u64)(0x4b46cbb2e2c24221U)), ((u64)(0x023cc73024deb963U)), ((u64)(0x120adf849e039d01U)), ((u64)(0x039471e6a1645bd2U)), ((u64)(0xdb3be603b19c7d9aU)), ((u64)(0x02dd27ebb4504974U)), ((u64)(0x7c2feb3627b0647cU)), ((u64)(0x024a865629d9d45dU)), ((u64)(0x2d197856a5e7072cU)), ((u64)(0x03aa7089dc8fba2fU)), ((u64)(0x8a7ac6abb7ec05bdU)), ((u64)(0x02eec06e4a0c94f2U)), ((u64)(0xd52f05562cbcd164U)), ((u64)(0x025899f1d4d6dd8eU)), ((u64)(0x21e4d556adfae8a0U)), ((u64)(0x03c0f64fbaf1627eU)), ((u64)(0xe7ea444557fbed4dU)), ((u64)(0x0300c50c958de864U)), ((u64)(0xecbb69d1132ff10aU)), ((u64)(0x0267040a113e5383U)), ((u64)(0xadf8a94e851981aaU)), ((u64)(0x03d8067681fd526cU)), ((u64)(0x8b2d543ed0e13488U)), ((u64)(0x0313385ece6441f0U)), ((u64)(0xd5bddcff0d80f6d3U)), ((u64)(0x0275c6b23eb69b26U)), ((u64)(0x892fc7fe7c018aebU)), ((u64)(0x03efa45064575ea4U)), ((u64)(0x3a8c9ffec99ad589U)), ((u64)(0x03261d0d1d12b21dU)), ((u64)(0xc8707fff07af113bU)), ((u64)(0x0284e40a7da88e7dU)), ((u64)(0x39f39998d2f2742fU)), ((u64)(0x0203e9a1fe2071feU)), ((u64)(0x8fec28f484b7204bU)), ((u64)(0x033975cffd00b663U)), ((u64)(0xd989ba5d36f8e6a2U)), ((u64)(0x02945e3ffd9a2b82U)), ((u64)(0x47a161e42bfa521cU)), ((u64)(0x02104b66647b5602U)), ((u64)(0x0c35696d132a1cf9U)), ((u64)(0x034d4570a0c5566aU)), ((u64)(0x09c454574288172dU)), ((u64)(0x02a4378d4d6aab88U)), ((u64)(0xa169dd129ba0128bU)), ((u64)(0x021cf93dd7888939U)), ((u64)(0x0242fb50f9001dabU)), ((u64)(0x03618ec958da7529U)), ((u64)(0x9b68c90d940017bcU)), ((u64)(0x02b4723aad7b90edU)), ((u64)(0x4920a0d7a999ac96U)), ((u64)(0x0229f4fbbdfc73f1U)), ((u64)(0x750101590f5c4757U)), ((u64)(0x037654c5fcc71fe8U)), ((u64)(0x2a6734473f7d05dfU)), ((u64)(0x02c5109e63d27fedU)), ((u64)(0xeeb8f69f65fd9e4cU)), ((u64)(0x0237407eb641fff0U)), ((u64)(0xe45b24323cc8fd46U)), ((u64)(0x038b9a6456cfffe7U)), ((u64)(0xb6af502830a0ca9fU)), ((u64)(0x02d6151d123fffecU)), ((u64)(0xf88c402026e7087fU)), ((u64)(0x0244ddb0db666656U)), ((u64)(0x2746cd003e3e73feU)), ((u64)(0x03a162b4923d708bU)), ((u64)(0x1f6bd73364fec332U)), ((u64)(0x02e7822a0e978d3cU)), ((u64)(0xe5efdf5c50cbcf5bU)), ((u64)(0x0252ce880bac70fcU)), ((u64)(0x3cb2fefa1adfb22bU)), ((u64)(0x03b7b0d9ac471b2eU)), ((u64)(0x308f3261af195b56U)), ((u64)(0x02f95a47bd05af58U)), ((u64)(0x5a0c284e25ade2abU)), ((u64)(0x0261150630d15913U)), ((u64)(0x29ad0d49d5e30445U)), ((u64)(0x03ce8809e7b55b52U)), ((u64)(0x548a7107de4f369dU)), ((u64)(0x030ba007ec9115dbU)), ((u64)(0xdd3b8d9fe50c2bb1U)), ((u64)(0x026fb3398a0dab15U)), ((u64)(0x952c15cca1ad12b5U)), ((u64)(0x03e5eb8f434911bcU)), ((u64)(0x775677d6e7bda891U)), ((u64)(0x031e560c35d40e30U)), ((u64)(0xc5dec645863153a7U)), ((u64)(0x027eab3cf7dcd826U))}; // fixed array const
 i64  total_m = ((i64)(0)); // global4

 int  g_main_argc = ((int)(0)); // global4

 voidptr  g_main_argv = ((void*)0); // global4

 Array_VCastTypeIndexName  as_cast_type_indexes; // global4

 const i8 _const_min_i8 = -128; // precomputed2
 const i8 _const_max_i8 = 127; // precomputed2
 const i16 _const_min_i16 = -32768; // precomputed2
 const i16 _const_max_i16 = 32767; // precomputed2
 const i32 _const_min_i32 = -2147483648; // precomputed2
 const i32 _const_max_i32 = 2147483647; // precomputed2
 const i32 _const_min_int = -2147483648; // precomputed2
 const i32 _const_max_int = 2147483647; // precomputed2
i64 _const_min_i64; // inited later
i64 _const_max_i64; // inited later
 const u8 _const_min_u8 = 0; // precomputed2
 const u8 _const_max_u8 = 255; // precomputed2
 const u16 _const_min_u16 = 0; // precomputed2
 const u16 _const_max_u16 = 65535; // precomputed2
 const u32 _const_min_u32 = 0; // precomputed2
 const u32 _const_max_u32 = 4294967295; // precomputed2
 const u64 _const_min_u64 = 0U; // precomputed2
 const u64 _const_max_u64 = 18446744073709551615U; // precomputed2
 const f64 _const_max_load_factor = 0.8; // precomputed2
 const u32 _const_hash_mask = 16777215; // precomputed2
 const u32 _const_probe_inc = 16777216; // precomputed2
IError _const_none__; // inited later
 const u32 _const_children_bytes = 96; // precomputed2
time__Duration _const_time__nanosecond; // inited later
time__Duration _const_time__infinite; // inited later
Array_string _const_time__tokens_2; // inited later
Array_string _const_time__tokens_3; // inited later
Array_string _const_time__tokens_4; // inited later
Array_fixed_string_7 _const_time__long_days = {_SLIT("Monday"), _SLIT("Tuesday"), _SLIT("Wednesday"), _SLIT("Thursday"), _SLIT("Friday"), _SLIT("Saturday"), _SLIT("Sunday")}; // fixed array const
Array_fixed_int_12 _const_time__month_days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // fixed array const
Array_string _const_time__long_months; // inited later
i64 _const_time__absolute_zero_year; // inited later
Array_fixed_int_13 _const_time__days_before = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365}; // fixed array const
 const u64 _const_rand__constants__lower_mask = 4294967295U; // precomputed2
 const u32 _const_rand__constants__max_u32 = 4294967295; // precomputed2
 const u64 _const_rand__constants__max_u64 = 18446744073709551615U; // precomputed2
 const u32 _const_rand__constants__u31_mask = 2147483647; // precomputed2
 const u64 _const_rand__constants__u63_mask = 9223372036854775807U; // precomputed2
u32 _const_rand__constants__ieee754_mantissa_f32_mask; // inited later
 const u64 _const_rand__constants__ieee754_mantissa_f64_mask = 4503599627370495U; // precomputed2
f64 _const_rand__constants__reciprocal_2_23rd; // inited later
f64 _const_rand__constants__reciprocal_2_52nd; // inited later
 const u64 _const_hash__wyp0 = 11562461410679940143U; // precomputed2
 const u64 _const_hash__wyp1 = 16646288086500911323U; // precomputed2
 const u64 _const_hash__wyp2 = 10285213230658275043U; // precomputed2
 const u64 _const_hash__wyp3 = 6384245875588680899U; // precomputed2
 const u64 _const_hash__wyp4 = 2129725606500045391U; // precomputed2
int _const_os__o_rdonly; // inited later
int _const_os__o_wronly; // inited later
int _const_os__o_rdwr; // inited later
int _const_os__o_create; // inited later
int _const_os__o_excl; // inited later
int _const_os__o_noctty; // inited later
int _const_os__o_trunc; // inited later
int _const_os__o_append; // inited later
int _const_os__o_nonblock; // inited later
int _const_os__o_sync; // inited later
Array_string _const_os__args; // inited later
string _const_os__wd_at_startup; // inited later
Array_string _const_os__executable_suffixes; // inited later
 u64  g_main_thread_id; // global4

 const u64 _const_rand__wyrand__wyp0 = 11562461410679940143U; // precomputed2
 const u64 _const_rand__wyrand__wyp1 = 16646288086500911323U; // precomputed2
 const f64 _const_rand__sqrt2 = 1.4142135623730951; // precomputed2
Array_rune _const_rand__clock_seq_hi_and_reserved_valid_values; // inited later
 rand__PRNG*  default_rng; // global4

Array_fixed_u8_16 _const_net__addr_ip6_any = {((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0))}; // fixed array const
Array_fixed_u8_4 _const_net__addr_ip_any = {((u8)(0)), ((u8)(0)), ((u8)(0)), ((u8)(0))}; // fixed array const
u32 _const_net__aoffset; // inited later
time__Duration _const_net__no_timeout; // inited later
bool _const_net__is_windows; // inited later
int _const_net__msg_dontwait; // inited later
int _const_net__error_ewouldblock; // inited later
int _const_net__error_einprogress; // inited later
int _const_net__error_eagain; // inited later
int _const_net__error_eintr; // inited later
Array_net__SocketOption _const_net__opts_bool; // inited later
Array_net__SocketOption _const_net__opts_int; // inited later
Array_net__SocketOption _const_net__opts_can_set; // inited later
 const u16 _const_net__socket_max_port = 65535; // precomputed2
time__Duration _const_time__microsecond; // inited later
time__Time _const_net__no_deadline; // inited later
time__Duration _const_net__infinite_timeout; // inited later
IError _const_net__err_new_socket_failed; // inited later
IError _const_net__err_option_not_settable; // inited later
IError _const_net__err_option_wrong_type; // inited later
IError _const_net__err_port_out_of_range; // inited later
IError _const_net__err_no_udp_remote; // inited later
IError _const_net__err_connect_failed; // inited later
IError _const_net__err_connect_timed_out; // inited later
IError _const_net__err_timed_out; // inited later
IError _const_net__err_connection_refused; // inited later
time__Duration _const_time__millisecond; // inited later
time__Duration _const_time__second; // inited later
time__Duration _const_time__minute; // inited later
i64 _const_net__tcp_default_read_timeout; // inited later
i64 _const_net__tcp_default_write_timeout; // inited later
i64 _const_net__connect_timeout; // inited later
i64 _const_net__udp_default_read_timeout; // inited later
i64 _const_net__udp_default_write_timeout; // inited later
time__Duration _const_time__hour; // inited later

// V interface table:
static IError I_None___to_Interface_IError(None__* x);
 const int _IError_None___index = 0;
static IError I_voidptr_to_Interface_IError(voidptr* x);
 const int _IError_voidptr_index = 1;
static IError I_Error_to_Interface_IError(Error* x);
 const int _IError_Error_index = 2;
static IError I_MessageError_to_Interface_IError(MessageError* x);
 const int _IError_MessageError_index = 3;
static IError I_time__TimeParseError_to_Interface_IError(time__TimeParseError* x);
 const int _IError_time__TimeParseError_index = 4;
static IError I_io__Eof_to_Interface_IError(io__Eof* x);
 const int _IError_io__Eof_index = 5;
static IError I_io__NotExpected_to_Interface_IError(io__NotExpected* x);
 const int _IError_io__NotExpected_index = 6;
static IError I_os__Eof_to_Interface_IError(os__Eof* x);
 const int _IError_os__Eof_index = 7;
static IError I_os__NotExpected_to_Interface_IError(os__NotExpected* x);
 const int _IError_os__NotExpected_index = 8;
static IError I_os__FileNotOpenedError_to_Interface_IError(os__FileNotOpenedError* x);
 const int _IError_os__FileNotOpenedError_index = 9;
static IError I_os__SizeOfTypeIs0Error_to_Interface_IError(os__SizeOfTypeIs0Error* x);
 const int _IError_os__SizeOfTypeIs0Error_index = 10;
static IError I_os__ExecutableNotFoundError_to_Interface_IError(os__ExecutableNotFoundError* x);
 const int _IError_os__ExecutableNotFoundError_index = 11;
// ^^^ number of types for interface IError: 12

// Methods wrapper for interface "IError"
static inline string None___msg_Interface_IError_method_wrapper(None__* err) {
	return Error_msg(err->Error);
}
static inline int None___code_Interface_IError_method_wrapper(None__* err) {
	return Error_code(err->Error);
}
static inline string Error_msg_Interface_IError_method_wrapper(Error* err) {
	return Error_msg(*err);
}
static inline int Error_code_Interface_IError_method_wrapper(Error* err) {
	return Error_code(*err);
}
static inline string MessageError_msg_Interface_IError_method_wrapper(MessageError* err) {
	return MessageError_msg(*err);
}
static inline int MessageError_code_Interface_IError_method_wrapper(MessageError* err) {
	return MessageError_code(*err);
}
static inline string time__TimeParseError_msg_Interface_IError_method_wrapper(time__TimeParseError* err) {
	return time__TimeParseError_msg(*err);
}
static inline int time__TimeParseError_code_Interface_IError_method_wrapper(time__TimeParseError* err) {
	return Error_code(err->Error);
}
static inline string io__Eof_msg_Interface_IError_method_wrapper(io__Eof* err) {
	return Error_msg(err->Error);
}
static inline int io__Eof_code_Interface_IError_method_wrapper(io__Eof* err) {
	return Error_code(err->Error);
}
static inline string io__NotExpected_msg_Interface_IError_method_wrapper(io__NotExpected* err) {
	return io__NotExpected_msg(*err);
}
static inline int io__NotExpected_code_Interface_IError_method_wrapper(io__NotExpected* err) {
	return io__NotExpected_code(*err);
}
static inline string os__Eof_msg_Interface_IError_method_wrapper(os__Eof* err) {
	return Error_msg(err->Error);
}
static inline int os__Eof_code_Interface_IError_method_wrapper(os__Eof* err) {
	return Error_code(err->Error);
}
static inline string os__NotExpected_msg_Interface_IError_method_wrapper(os__NotExpected* err) {
	return os__NotExpected_msg(*err);
}
static inline int os__NotExpected_code_Interface_IError_method_wrapper(os__NotExpected* err) {
	return os__NotExpected_code(*err);
}
static inline string os__FileNotOpenedError_msg_Interface_IError_method_wrapper(os__FileNotOpenedError* err) {
	return os__FileNotOpenedError_msg(*err);
}
static inline int os__FileNotOpenedError_code_Interface_IError_method_wrapper(os__FileNotOpenedError* err) {
	return Error_code(err->Error);
}
static inline string os__SizeOfTypeIs0Error_msg_Interface_IError_method_wrapper(os__SizeOfTypeIs0Error* err) {
	return os__SizeOfTypeIs0Error_msg(*err);
}
static inline int os__SizeOfTypeIs0Error_code_Interface_IError_method_wrapper(os__SizeOfTypeIs0Error* err) {
	return Error_code(err->Error);
}
static inline string os__ExecutableNotFoundError_msg_Interface_IError_method_wrapper(os__ExecutableNotFoundError* err) {
	return os__ExecutableNotFoundError_msg(*err);
}
static inline int os__ExecutableNotFoundError_code_Interface_IError_method_wrapper(os__ExecutableNotFoundError* err) {
	return Error_code(err->Error);
}

struct _IError_interface_methods {
	string (*_method_msg)(void* _);
	int (*_method_code)(void* _);
};

 struct _IError_interface_methods IError_name_table[12] = {
	{
		._method_msg = (void*) None___msg_Interface_IError_method_wrapper,
		._method_code = (void*) None___code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) 0,
		._method_code = (void*) 0,
	},
	{
		._method_msg = (void*) Error_msg_Interface_IError_method_wrapper,
		._method_code = (void*) Error_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) MessageError_msg_Interface_IError_method_wrapper,
		._method_code = (void*) MessageError_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) time__TimeParseError_msg_Interface_IError_method_wrapper,
		._method_code = (void*) time__TimeParseError_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) io__Eof_msg_Interface_IError_method_wrapper,
		._method_code = (void*) io__Eof_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) io__NotExpected_msg_Interface_IError_method_wrapper,
		._method_code = (void*) io__NotExpected_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__Eof_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__Eof_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__NotExpected_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__NotExpected_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__FileNotOpenedError_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__FileNotOpenedError_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__SizeOfTypeIs0Error_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__SizeOfTypeIs0Error_code_Interface_IError_method_wrapper,
	},
	{
		._method_msg = (void*) os__ExecutableNotFoundError_msg_Interface_IError_method_wrapper,
		._method_code = (void*) os__ExecutableNotFoundError_code_Interface_IError_method_wrapper,
	},
};


// Casting functions for converting "None__" to interface "IError"
static inline IError I_None___to_Interface_IError(None__* x) {
	return (IError) {
		._None__ = x,
		._typ = _IError_None___index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "voidptr" to interface "IError"
static inline IError I_voidptr_to_Interface_IError(voidptr* x) {
	return (IError) {
		._voidptr = x,
		._typ = _IError_voidptr_index,
		.msg = (string*)((char*)x/*.... ast.voidptr_type */),
		.code = (int*)((char*)x/*.... ast.voidptr_type */),
	};
}

// Casting functions for converting "Error" to interface "IError"
static inline IError I_Error_to_Interface_IError(Error* x) {
	return (IError) {
		._Error = x,
		._typ = _IError_Error_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "MessageError" to interface "IError"
static inline IError I_MessageError_to_Interface_IError(MessageError* x) {
	return (IError) {
		._MessageError = x,
		._typ = _IError_MessageError_index,
		.msg = (string*)((char*)x + __offsetof_ptr(x, MessageError, msg)),
		.code = (int*)((char*)x + __offsetof_ptr(x, MessageError, code)),
	};
}

// Casting functions for converting "time__TimeParseError" to interface "IError"
static inline IError I_time__TimeParseError_to_Interface_IError(time__TimeParseError* x) {
	return (IError) {
		._time__TimeParseError = x,
		._typ = _IError_time__TimeParseError_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x + __offsetof_ptr(x, time__TimeParseError, code)),
	};
}

// Casting functions for converting "io__Eof" to interface "IError"
static inline IError I_io__Eof_to_Interface_IError(io__Eof* x) {
	return (IError) {
		._io__Eof = x,
		._typ = _IError_io__Eof_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "io__NotExpected" to interface "IError"
static inline IError I_io__NotExpected_to_Interface_IError(io__NotExpected* x) {
	return (IError) {
		._io__NotExpected = x,
		._typ = _IError_io__NotExpected_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x + __offsetof_ptr(x, io__NotExpected, code)),
	};
}

// Casting functions for converting "os__Eof" to interface "IError"
static inline IError I_os__Eof_to_Interface_IError(os__Eof* x) {
	return (IError) {
		._os__Eof = x,
		._typ = _IError_os__Eof_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "os__NotExpected" to interface "IError"
static inline IError I_os__NotExpected_to_Interface_IError(os__NotExpected* x) {
	return (IError) {
		._os__NotExpected = x,
		._typ = _IError_os__NotExpected_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x + __offsetof_ptr(x, os__NotExpected, code)),
	};
}

// Casting functions for converting "os__FileNotOpenedError" to interface "IError"
static inline IError I_os__FileNotOpenedError_to_Interface_IError(os__FileNotOpenedError* x) {
	return (IError) {
		._os__FileNotOpenedError = x,
		._typ = _IError_os__FileNotOpenedError_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "os__SizeOfTypeIs0Error" to interface "IError"
static inline IError I_os__SizeOfTypeIs0Error_to_Interface_IError(os__SizeOfTypeIs0Error* x) {
	return (IError) {
		._os__SizeOfTypeIs0Error = x,
		._typ = _IError_os__SizeOfTypeIs0Error_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

// Casting functions for converting "os__ExecutableNotFoundError" to interface "IError"
static inline IError I_os__ExecutableNotFoundError_to_Interface_IError(os__ExecutableNotFoundError* x) {
	return (IError) {
		._os__ExecutableNotFoundError = x,
		._typ = _IError_os__ExecutableNotFoundError_index,
		.msg = (string*)((char*)x),
		.code = (int*)((char*)x),
	};
}

static io__Reader I_net__TcpConn_to_Interface_io__Reader(net__TcpConn* x);
 const int _io__Reader_net__TcpConn_index = 0;
static io__Reader I_voidptr_to_Interface_io__Reader(voidptr* x);
 const int _io__Reader_voidptr_index = 1;
static io__Reader I_os__File_to_Interface_io__Reader(os__File* x);
 const int _io__Reader_os__File_index = 2;
static io__Reader I_io__BufferedReader_to_Interface_io__Reader(io__BufferedReader* x);
 const int _io__Reader_io__BufferedReader_index = 3;
static io__Reader I_io__ReaderWriterImpl_to_Interface_io__Reader(io__ReaderWriterImpl* x);
 const int _io__Reader_io__ReaderWriterImpl_index = 4;
// ^^^ number of types for interface io__Reader: 5

// Methods wrapper for interface "io__Reader"
static inline _result_int net__TcpConn_read_Interface_io__Reader_method_wrapper(net__TcpConn* c, Array_u8* buf) {
	return net__TcpConn_read(*c, buf);
}

struct _io__Reader_interface_methods {
	_result_int (*_method_read)(void* _, Array_u8* buf);
};

 struct _io__Reader_interface_methods io__Reader_name_table[5] = {
	{
		._method_read = (void*) net__TcpConn_read_Interface_io__Reader_method_wrapper,
	},
	{
		._method_read = (void*) 0,
	},
	{
		._method_read = (void*) os__File_read,
	},
	{
		._method_read = (void*) io__BufferedReader_read,
	},
	{
		._method_read = (void*) io__ReaderWriterImpl_read,
	},
};


// Casting functions for converting "net__TcpConn" to interface "io__Reader"
static inline io__Reader I_net__TcpConn_to_Interface_io__Reader(net__TcpConn* x) {
	return (io__Reader) {
		._net__TcpConn = x,
		._typ = _io__Reader_net__TcpConn_index,
	};
}

// Casting functions for converting "voidptr" to interface "io__Reader"
static inline io__Reader I_voidptr_to_Interface_io__Reader(voidptr* x) {
	return (io__Reader) {
		._voidptr = x,
		._typ = _io__Reader_voidptr_index,
	};
}

// Casting functions for converting "os__File" to interface "io__Reader"
static inline io__Reader I_os__File_to_Interface_io__Reader(os__File* x) {
	return (io__Reader) {
		._os__File = x,
		._typ = _io__Reader_os__File_index,
	};
}

// Casting functions for converting "io__BufferedReader" to interface "io__Reader"
static inline io__Reader I_io__BufferedReader_to_Interface_io__Reader(io__BufferedReader* x) {
	return (io__Reader) {
		._io__BufferedReader = x,
		._typ = _io__Reader_io__BufferedReader_index,
	};
}

// Casting functions for converting "io__ReaderWriterImpl" to interface "io__Reader"
static inline io__Reader I_io__ReaderWriterImpl_to_Interface_io__Reader(io__ReaderWriterImpl* x) {
	return (io__Reader) {
		._io__ReaderWriterImpl = x,
		._typ = _io__Reader_io__ReaderWriterImpl_index,
	};
}

static io__Writer I_io__MultiWriter_to_Interface_io__Writer(io__MultiWriter* x);
 const int _io__Writer_io__MultiWriter_index = 0;
static io__Writer I_voidptr_to_Interface_io__Writer(voidptr* x);
 const int _io__Writer_voidptr_index = 1;
static io__Writer I_net__TcpConn_to_Interface_io__Writer(net__TcpConn* x);
 const int _io__Writer_net__TcpConn_index = 2;
static io__Writer I_os__File_to_Interface_io__Writer(os__File* x);
 const int _io__Writer_os__File_index = 3;
static io__Writer I_net__UdpConn_to_Interface_io__Writer(net__UdpConn* x);
 const int _io__Writer_net__UdpConn_index = 4;
static io__Writer I_io__ReaderWriterImpl_to_Interface_io__Writer(io__ReaderWriterImpl* x);
 const int _io__Writer_io__ReaderWriterImpl_index = 5;
// ^^^ number of types for interface io__Writer: 6

// Methods wrapper for interface "io__Writer"

struct _io__Writer_interface_methods {
	_result_int (*_method_write)(void* _, Array_u8 buf);
};

 struct _io__Writer_interface_methods io__Writer_name_table[6] = {
	{
		._method_write = (void*) io__MultiWriter_write,
	},
	{
		._method_write = (void*) 0,
	},
	{
		._method_write = (void*) net__TcpConn_write,
	},
	{
		._method_write = (void*) os__File_write,
	},
	{
		._method_write = (void*) net__UdpConn_write,
	},
	{
		._method_write = (void*) io__ReaderWriterImpl_write,
	},
};


// Casting functions for converting "io__MultiWriter" to interface "io__Writer"
static inline io__Writer I_io__MultiWriter_to_Interface_io__Writer(io__MultiWriter* x) {
	return (io__Writer) {
		._io__MultiWriter = x,
		._typ = _io__Writer_io__MultiWriter_index,
	};
}

// Casting functions for converting "voidptr" to interface "io__Writer"
static inline io__Writer I_voidptr_to_Interface_io__Writer(voidptr* x) {
	return (io__Writer) {
		._voidptr = x,
		._typ = _io__Writer_voidptr_index,
	};
}

// Casting functions for converting "net__TcpConn" to interface "io__Writer"
static inline io__Writer I_net__TcpConn_to_Interface_io__Writer(net__TcpConn* x) {
	return (io__Writer) {
		._net__TcpConn = x,
		._typ = _io__Writer_net__TcpConn_index,
	};
}

// Casting functions for converting "os__File" to interface "io__Writer"
static inline io__Writer I_os__File_to_Interface_io__Writer(os__File* x) {
	return (io__Writer) {
		._os__File = x,
		._typ = _io__Writer_os__File_index,
	};
}

// Casting functions for converting "net__UdpConn" to interface "io__Writer"
static inline io__Writer I_net__UdpConn_to_Interface_io__Writer(net__UdpConn* x) {
	return (io__Writer) {
		._net__UdpConn = x,
		._typ = _io__Writer_net__UdpConn_index,
	};
}

// Casting functions for converting "io__ReaderWriterImpl" to interface "io__Writer"
static inline io__Writer I_io__ReaderWriterImpl_to_Interface_io__Writer(io__ReaderWriterImpl* x) {
	return (io__Writer) {
		._io__ReaderWriterImpl = x,
		._typ = _io__Writer_io__ReaderWriterImpl_index,
	};
}

static io__RandomReader I_os__File_to_Interface_io__RandomReader(os__File* x);
 const int _io__RandomReader_os__File_index = 0;
static io__RandomReader I_voidptr_to_Interface_io__RandomReader(voidptr* x);
 const int _io__RandomReader_voidptr_index = 1;
// ^^^ number of types for interface io__RandomReader: 2

// Methods wrapper for interface "io__RandomReader"

struct _io__RandomReader_interface_methods {
	_result_int (*_method_read_from)(void* _, u64 pos, Array_u8* buf);
};

 struct _io__RandomReader_interface_methods io__RandomReader_name_table[2] = {
	{
		._method_read_from = (void*) os__File_read_from,
	},
	{
		._method_read_from = (void*) 0,
	},
};


// Casting functions for converting "os__File" to interface "io__RandomReader"
static inline io__RandomReader I_os__File_to_Interface_io__RandomReader(os__File* x) {
	return (io__RandomReader) {
		._os__File = x,
		._typ = _io__RandomReader_os__File_index,
	};
}

// Casting functions for converting "voidptr" to interface "io__RandomReader"
static inline io__RandomReader I_voidptr_to_Interface_io__RandomReader(voidptr* x) {
	return (io__RandomReader) {
		._voidptr = x,
		._typ = _io__RandomReader_voidptr_index,
	};
}

static io__ReaderWriter I_io__ReaderWriterImpl_to_Interface_io__ReaderWriter(io__ReaderWriterImpl* x);
 const int _io__ReaderWriter_io__ReaderWriterImpl_index = 0;
static io__ReaderWriter I_voidptr_to_Interface_io__ReaderWriter(voidptr* x);
 const int _io__ReaderWriter_voidptr_index = 1;
// ^^^ number of types for interface io__ReaderWriter: 2

// Methods wrapper for interface "io__ReaderWriter"

struct _io__ReaderWriter_interface_methods {
	_result_int (*_method_read)(void* _, Array_u8* buf);
	_result_int (*_method_write)(void* _, Array_u8 buf);
};

 struct _io__ReaderWriter_interface_methods io__ReaderWriter_name_table[2] = {
	{
		._method_read = (void*) io__ReaderWriterImpl_read,
		._method_write = (void*) io__ReaderWriterImpl_write,
	},
	{
		._method_read = (void*) 0,
		._method_write = (void*) 0,
	},
};


// Casting functions for converting "io__ReaderWriterImpl" to interface "io__ReaderWriter"
static inline io__ReaderWriter I_io__ReaderWriterImpl_to_Interface_io__ReaderWriter(io__ReaderWriterImpl* x) {
	return (io__ReaderWriter) {
		._io__ReaderWriterImpl = x,
		._typ = _io__ReaderWriter_io__ReaderWriterImpl_index,
	};
}

// Casting functions for converting "voidptr" to interface "io__ReaderWriter"
static inline io__ReaderWriter I_voidptr_to_Interface_io__ReaderWriter(voidptr* x) {
	return (io__ReaderWriter) {
		._voidptr = x,
		._typ = _io__ReaderWriter_voidptr_index,
	};
}

// ^^^ number of types for interface io__RandomWriter: 0

// Methods wrapper for interface "io__RandomWriter"

struct _io__RandomWriter_interface_methods {
	_result_int (*_method_write_to)(void* _, u64 pos, Array_u8 buf);
};

 struct _io__RandomWriter_interface_methods io__RandomWriter_name_table[1];



static rand__PRNG I_rand__wyrand__WyRandRNG_to_Interface_rand__PRNG(rand__wyrand__WyRandRNG* x);
 const int _rand__PRNG_rand__wyrand__WyRandRNG_index = 0;
static rand__PRNG I_voidptr_to_Interface_rand__PRNG(voidptr* x);
 const int _rand__PRNG_voidptr_index = 1;
// ^^^ number of types for interface rand__PRNG: 2

// Methods wrapper for interface "rand__PRNG"

struct _rand__PRNG_interface_methods {
	void (*_method_seed)(void* _, Array_u32 seed_data);
	u8 (*_method_u8)(void* _);
	u16 (*_method_u16)(void* _);
	u32 (*_method_u32)(void* _);
	u64 (*_method_u64)(void* _);
	int (*_method_block_size)(void* _);
	void (*_method__v_free)(void* _);
};

 struct _rand__PRNG_interface_methods rand__PRNG_name_table[2] = {
	{
		._method_seed = (void*) rand__wyrand__WyRandRNG_seed,
		._method_u8 = (void*) rand__wyrand__WyRandRNG_u8,
		._method_u16 = (void*) rand__wyrand__WyRandRNG_u16,
		._method_u32 = (void*) rand__wyrand__WyRandRNG_u32,
		._method_u64 = (void*) rand__wyrand__WyRandRNG_u64,
		._method_block_size = (void*) rand__wyrand__WyRandRNG_block_size,
		._method__v_free = (void*) rand__wyrand__WyRandRNG_free,
	},
	{
		._method_seed = (void*) 0,
		._method_u8 = (void*) 0,
		._method_u16 = (void*) 0,
		._method_u32 = (void*) 0,
		._method_u64 = (void*) 0,
		._method_block_size = (void*) 0,
		._method__v_free = (void*) 0,
	},
};


// Casting functions for converting "rand__wyrand__WyRandRNG" to interface "rand__PRNG"
static inline rand__PRNG I_rand__wyrand__WyRandRNG_to_Interface_rand__PRNG(rand__wyrand__WyRandRNG* x) {
	return (rand__PRNG) {
		._rand__wyrand__WyRandRNG = x,
		._typ = _rand__PRNG_rand__wyrand__WyRandRNG_index,
	};
}

// Casting functions for converting "voidptr" to interface "rand__PRNG"
static inline rand__PRNG I_voidptr_to_Interface_rand__PRNG(voidptr* x) {
	return (rand__PRNG) {
		._voidptr = x,
		._typ = _rand__PRNG_voidptr_index,
	};
}

// ^^^ number of types for interface hash__Hasher: 0

// Methods wrapper for interface "hash__Hasher"

struct _hash__Hasher_interface_methods {
	Array_u8 (*_method_sum)(void* _, Array_u8 b);
	int (*_method_size)(void* _);
	int (*_method_block_size)(void* _);
};

 struct _hash__Hasher_interface_methods hash__Hasher_name_table[1];



// ^^^ number of types for interface hash__Hash32er: 0

// Methods wrapper for interface "hash__Hash32er"

struct _hash__Hash32er_interface_methods {
	u32 (*_method_sum32)(void* _);
};

 struct _hash__Hash32er_interface_methods hash__Hash32er_name_table[1];



// ^^^ number of types for interface hash__Hash64er: 0

// Methods wrapper for interface "hash__Hash64er"

struct _hash__Hash64er_interface_methods {
	u64 (*_method_sum64)(void* _);
};

 struct _hash__Hash64er_interface_methods hash__Hash64er_name_table[1];





// V gowrappers:
void* client__handle_client_thread_wrapper(thread_arg_client__handle_client *arg) {
	arg->fn(arg->arg1);
	_v_free(arg);
	return 0;
}
void* client__send_message_thread_wrapper(thread_arg_client__send_message *arg) {
	arg->fn(arg->arg1);
	_v_free(arg);
	return 0;
}
void* main__load_data_thread_wrapper(thread_arg_main__load_data *arg) {
	arg->fn(arg->arg1);
	_v_free(arg);
	return 0;
}

// V auto str functions:
static string time__FormatTime_str(time__FormatTime it) { /* gen_str_for_enum */
	switch(it) {
		case time__FormatTime__hhmm12: return _SLIT("hhmm12");
		case time__FormatTime__hhmm24: return _SLIT("hhmm24");
		case time__FormatTime__hhmmss12: return _SLIT("hhmmss12");
		case time__FormatTime__hhmmss24: return _SLIT("hhmmss24");
		case time__FormatTime__hhmmss24_milli: return _SLIT("hhmmss24_milli");
		case time__FormatTime__hhmmss24_micro: return _SLIT("hhmmss24_micro");
		case time__FormatTime__hhmmss24_nano: return _SLIT("hhmmss24_nano");
		case time__FormatTime__no_time: return _SLIT("no_time");
		default: return _SLIT("unknown enum value");
	}
}
static string time__FormatDate_str(time__FormatDate it) { /* gen_str_for_enum */
	switch(it) {
		case time__FormatDate__ddmmyy: return _SLIT("ddmmyy");
		case time__FormatDate__ddmmyyyy: return _SLIT("ddmmyyyy");
		case time__FormatDate__mmddyy: return _SLIT("mmddyy");
		case time__FormatDate__mmddyyyy: return _SLIT("mmddyyyy");
		case time__FormatDate__mmmd: return _SLIT("mmmd");
		case time__FormatDate__mmmdd: return _SLIT("mmmdd");
		case time__FormatDate__mmmddyy: return _SLIT("mmmddyy");
		case time__FormatDate__mmmddyyyy: return _SLIT("mmmddyyyy");
		case time__FormatDate__no_date: return _SLIT("no_date");
		case time__FormatDate__yyyymmdd: return _SLIT("yyyymmdd");
		case time__FormatDate__yymmdd: return _SLIT("yymmdd");
		default: return _SLIT("unknown enum value");
	}
}
static string net__TcpSocket_str(net__TcpSocket it) { return indent_net__TcpSocket_str(it, 0);}
static string net__Socket_str(net__Socket it) { return indent_net__Socket_str(it, 0);}

// V dump functions:


// V auto functions:
static string indent_net__TcpSocket_str(net__TcpSocket it, int indent_count) {
	string indents = string_repeat(_SLIT("    "), indent_count);
	string _t1 = indent_net__Socket_str(it.Socket, indent_count + 1);
	string res = str_intp( 7, _MOV((StrIntpData[]){
		{_SLIT("net.TcpSocket{\n"), 0, {.d_c=0}},
		{_SLIT0, 0xfe10, {.d_s=indents}}, {_SLIT("    Socket: "), 0, {.d_c=0}}, {_SLIT(""), 16, {.d_s=_t1}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("}"), 0, {.d_c=0}},
	}));
	string_free(&_t1);
	string_free(&indents);
	return res;
}

static string indent_net__Socket_str(net__Socket it, int indent_count) {
	string indents = string_repeat(_SLIT("    "), indent_count);
	string res = str_intp( 7, _MOV((StrIntpData[]){
		{_SLIT("net.Socket{\n"), 0, {.d_c=0}},
		{_SLIT0, 0xfe10, {.d_s=indents}}, {_SLIT("    handle: "), 0, {.d_c=0}}, {_SLIT(""), 7, {.d_i32=it.handle}}, {_SLIT(""), 0, {.d_c=0}},
		{_SLIT("\n"), 0xfe10, {.d_s=indents}}, {_SLIT("}"), 0, {.d_c=0}},
	}));
	string_free(&indents);
	return res;
}

static bool Array_u8_contains(Array_u8 a, u8 v) {
	for (int i = 0; i < a.len; ++i) {
		if (((u8*)a.data)[i] == v) {
			return true;
		}
	}
	return false;
}

static bool Array_string_contains(Array_string a, string v) {
	for (int i = 0; i < a.len; ++i) {
		if (fast_string_eq(((string*)a.data)[i], v)) {
			return true;
		}
	}
	return false;
}

static int Array_string_index(Array_string a, string v) {
	string* pelem = a.data;
	for (int i = 0; i < a.len; ++i, ++pelem) {
		if (fast_string_eq(*pelem, v)) {
			return i;
		}
	}
	return -1;
}

static bool Array_rune_arr_eq(Array_rune a, Array_rune b) {
	if (a.len != b.len) {
		return false;
	}
	for (int i = 0; i < a.len; ++i) {
		if (*((rune*)((byte*)a.data+(i*a.element_size))) != *((rune*)((byte*)b.data+(i*b.element_size)))) {
			return false;
		}
	}
	return true;
}

static bool time__Duration_alias_eq(time__Duration a, time__Duration b) {
	return a == b;
}


// end of V out

// >> typeof() support for sum types / interfaces
static char * v_typeof_interface_IError(int sidx) { /* IError */ 
	if (sidx == _IError_None___index) return "None__";
	if (sidx == _IError_voidptr_index) return "voidptr";
	if (sidx == _IError_Error_index) return "Error";
	if (sidx == _IError_MessageError_index) return "MessageError";
	if (sidx == _IError_time__TimeParseError_index) return "time.TimeParseError";
	if (sidx == _IError_io__Eof_index) return "io.Eof";
	if (sidx == _IError_io__NotExpected_index) return "io.NotExpected";
	if (sidx == _IError_os__Eof_index) return "os.Eof";
	if (sidx == _IError_os__NotExpected_index) return "os.NotExpected";
	if (sidx == _IError_os__FileNotOpenedError_index) return "os.FileNotOpenedError";
	if (sidx == _IError_os__SizeOfTypeIs0Error_index) return "os.SizeOfTypeIs0Error";
	if (sidx == _IError_os__ExecutableNotFoundError_index) return "os.ExecutableNotFoundError";
	return "unknown IError";
}

static int v_typeof_interface_idx_IError(int sidx) { /* IError */ 
	if (sidx == _IError_None___index) return 81;
	if (sidx == _IError_voidptr_index) return 2;
	if (sidx == _IError_Error_index) return 82;
	if (sidx == _IError_MessageError_index) return 84;
	if (sidx == _IError_time__TimeParseError_index) return 220;
	if (sidx == _IError_io__Eof_index) return 229;
	if (sidx == _IError_io__NotExpected_index) return 230;
	if (sidx == _IError_os__Eof_index) return 123;
	if (sidx == _IError_os__NotExpected_index) return 124;
	if (sidx == _IError_os__FileNotOpenedError_index) return 126;
	if (sidx == _IError_os__SizeOfTypeIs0Error_index) return 127;
	if (sidx == _IError_os__ExecutableNotFoundError_index) return 145;
	return 30;
}
static char * v_typeof_interface_io__Reader(int sidx) { /* io.Reader */ 
	if (sidx == _io__Reader_net__TcpConn_index) return "net.TcpConn";
	if (sidx == _io__Reader_voidptr_index) return "voidptr";
	if (sidx == _io__Reader_os__File_index) return "os.File";
	if (sidx == _io__Reader_io__BufferedReader_index) return "io.BufferedReader";
	if (sidx == _io__Reader_io__ReaderWriterImpl_index) return "io.ReaderWriterImpl";
	return "unknown io.Reader";
}

static int v_typeof_interface_idx_io__Reader(int sidx) { /* io.Reader */ 
	if (sidx == _io__Reader_net__TcpConn_index) return 102;
	if (sidx == _io__Reader_voidptr_index) return 2;
	if (sidx == _io__Reader_os__File_index) return 125;
	if (sidx == _io__Reader_io__BufferedReader_index) return 226;
	if (sidx == _io__Reader_io__ReaderWriterImpl_index) return 237;
	return 225;
}
static char * v_typeof_interface_io__Writer(int sidx) { /* io.Writer */ 
	if (sidx == _io__Writer_io__MultiWriter_index) return "io.MultiWriter";
	if (sidx == _io__Writer_voidptr_index) return "voidptr";
	if (sidx == _io__Writer_net__TcpConn_index) return "net.TcpConn";
	if (sidx == _io__Writer_os__File_index) return "os.File";
	if (sidx == _io__Writer_net__UdpConn_index) return "net.UdpConn";
	if (sidx == _io__Writer_io__ReaderWriterImpl_index) return "io.ReaderWriterImpl";
	return "unknown io.Writer";
}

static int v_typeof_interface_idx_io__Writer(int sidx) { /* io.Writer */ 
	if (sidx == _io__Writer_io__MultiWriter_index) return 233;
	if (sidx == _io__Writer_voidptr_index) return 2;
	if (sidx == _io__Writer_net__TcpConn_index) return 102;
	if (sidx == _io__Writer_os__File_index) return 125;
	if (sidx == _io__Writer_net__UdpConn_index) return 197;
	if (sidx == _io__Writer_io__ReaderWriterImpl_index) return 237;
	return 231;
}
static char * v_typeof_interface_io__RandomReader(int sidx) { /* io.RandomReader */ 
	if (sidx == _io__RandomReader_os__File_index) return "os.File";
	if (sidx == _io__RandomReader_voidptr_index) return "voidptr";
	return "unknown io.RandomReader";
}

static int v_typeof_interface_idx_io__RandomReader(int sidx) { /* io.RandomReader */ 
	if (sidx == _io__RandomReader_os__File_index) return 125;
	if (sidx == _io__RandomReader_voidptr_index) return 2;
	return 235;
}
static char * v_typeof_interface_io__ReaderWriter(int sidx) { /* io.ReaderWriter */ 
	if (sidx == _io__ReaderWriter_io__ReaderWriterImpl_index) return "io.ReaderWriterImpl";
	if (sidx == _io__ReaderWriter_voidptr_index) return "voidptr";
	return "unknown io.ReaderWriter";
}

static int v_typeof_interface_idx_io__ReaderWriter(int sidx) { /* io.ReaderWriter */ 
	if (sidx == _io__ReaderWriter_io__ReaderWriterImpl_index) return 237;
	if (sidx == _io__ReaderWriter_voidptr_index) return 2;
	return 236;
}
static char * v_typeof_interface_io__RandomWriter(int sidx) { /* io.RandomWriter */ 
	return "unknown io.RandomWriter";
}

static int v_typeof_interface_idx_io__RandomWriter(int sidx) { /* io.RandomWriter */ 
	return 238;
}
static char * v_typeof_interface_rand__PRNG(int sidx) { /* rand.PRNG */ 
	if (sidx == _rand__PRNG_rand__wyrand__WyRandRNG_index) return "rand.wyrand.WyRandRNG";
	if (sidx == _rand__PRNG_voidptr_index) return "voidptr";
	return "unknown rand.PRNG";
}

static int v_typeof_interface_idx_rand__PRNG(int sidx) { /* rand.PRNG */ 
	if (sidx == _rand__PRNG_rand__wyrand__WyRandRNG_index) return 245;
	if (sidx == _rand__PRNG_voidptr_index) return 2;
	return 239;
}
static char * v_typeof_interface_hash__Hasher(int sidx) { /* hash.Hasher */ 
	return "unknown hash.Hasher";
}

static int v_typeof_interface_idx_hash__Hasher(int sidx) { /* hash.Hasher */ 
	return 247;
}
static char * v_typeof_interface_hash__Hash32er(int sidx) { /* hash.Hash32er */ 
	return "unknown hash.Hash32er";
}

static int v_typeof_interface_idx_hash__Hash32er(int sidx) { /* hash.Hash32er */ 
	return 248;
}
static char * v_typeof_interface_hash__Hash64er(int sidx) { /* hash.Hash64er */ 
	return "unknown hash.Hash64er";
}

static int v_typeof_interface_idx_hash__Hash64er(int sidx) { /* hash.Hash64er */ 
	return 249;
}
// << typeof() support for sum types

// TypeDecl
strings__Builder strings__new_builder(int initial_size) {
	strings__Builder res = ((__new_array_with_default_noscan(0, initial_size, sizeof(u8), 0)));
	ArrayFlags_set(&res.flags, ArrayFlags__noslices);
	return res;
}

// Attr: [unsafe]
Array_u8 strings__Builder_reuse_as_plain_u8_array(strings__Builder* b) {
	ArrayFlags_clear(&b->flags, ArrayFlags__noslices);
	return *b;
}

// Attr: [unsafe]
void strings__Builder_write_ptr(strings__Builder* b, u8* ptr, int len) {
	if (len == 0) {
		return;
	}
	array_push_many(b, ptr, len);
}

// Attr: [manualfree]
void strings__Builder_write_rune(strings__Builder* b, rune r) {
	Array_fixed_u8_5 buffer = {0, 0, 0, 0, 0};
	string res = utf32_to_str_no_malloc(((u32)(r)), &buffer[0]);
	if (res.len == 0) {
		return;
	}
	array_push_many(b, res.str, res.len);
}

void strings__Builder_write_runes(strings__Builder* b, Array_rune runes) {
	Array_fixed_u8_5 buffer = {0, 0, 0, 0, 0};
	for (int _t1 = 0; _t1 < runes.len; ++_t1) {
		rune r = ((rune*)runes.data)[_t1];
		string res = utf32_to_str_no_malloc(((u32)(r)), &buffer[0]);
		if (res.len == 0) {
			continue;
		}
		array_push_many(b, res.str, res.len);
	}
}

void strings__Builder_clear(strings__Builder* b) {
	*b = __new_array_with_default_noscan(0, b->cap, sizeof(u8), 0);
}

// Attr: [inline]
inline void strings__Builder_write_u8(strings__Builder* b, u8 data) {
	array_push_noscan((array*)b, _MOV((u8[]){ data }));
}

// Attr: [inline]
inline void strings__Builder_write_byte(strings__Builder* b, u8 data) {
	array_push_noscan((array*)b, _MOV((u8[]){ data }));
}

// Attr: [direct_array_access]
void strings__Builder_write_decimal(strings__Builder* b, i64 n) {
	if (n == 0) {
		strings__Builder_write_u8(b, 0x30);
		return;
	}
	Array_fixed_u8_25 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	i64 x = (n < 0 ? (-n) : (n));
	int i = 24;
	for (;;) {
		if (!(x != 0)) break;
		i64 nextx = (i64)(x / 10);
		i64 r = (i64)(x % 10);
		buf[i] = (u8)(((u8)(r)) + 0x30);
		x = nextx;
		i--;
	}
	if (n < 0) {
		buf[i] = '-';
		i--;
	}
	strings__Builder_write_ptr(b, &buf[(int)(i + 1)], (int)(24 - i));
}

_result_int strings__Builder_write(strings__Builder* b, Array_u8 data) {
	if (data.len == 0) {
		_result_int _t1;
		_result_ok(&(int[]) { 0 }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	_PUSH_MANY_noscan(b, (data), _t2, strings__Builder);
	_result_int _t3;
	_result_ok(&(int[]) { data.len }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

// Attr: [manualfree]
void strings__Builder_drain_builder(strings__Builder* b, strings__Builder* other, int other_new_cap) {
	if (other->len > 0) {
		_PUSH_MANY_noscan(b, (*other), _t1, strings__Builder);
	}
	strings__Builder_free(other);
	*other = strings__new_builder(other_new_cap);
}

// Attr: [inline]
inline u8 strings__Builder_byte_at(strings__Builder* b, int n) {
	return (*(u8*)array_get(*(((Array_u8*)(b))), n));
}

// Attr: [inline]
inline void strings__Builder_write_string(strings__Builder* b, string s) {
	if (s.len == 0) {
		return;
	}
	array_push_many(b, s.str, s.len);
}

// Attr: [deprecated]
// Attr: [deprecated_after]
// Attr: [inline]
inline void strings__Builder_writeln_string(strings__Builder* b, string s) {
	strings__Builder_writeln(b, s);
}

void strings__Builder_go_back(strings__Builder* b, int n) {
	array_trim(b, (int)(b->len - n));
}

// Attr: [inline]
inline string strings__Builder_spart(strings__Builder* b, int start_pos, int n) {
	{ // Unsafe block
		u8* x = malloc_noscan((int)(n + 1));
		vmemcpy(x, ((u8*)(b->data)) + start_pos, n);
		x[n] = 0;
		return tos(x, n);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string strings__Builder_cut_last(strings__Builder* b, int n) {
	int cut_pos = (int)(b->len - n);
	string res = strings__Builder_spart(b, cut_pos, n);
	array_trim(b, cut_pos);
	return res;
}

string strings__Builder_cut_to(strings__Builder* b, int pos) {
	if (pos > b->len) {
		return _SLIT("");
	}
	return strings__Builder_cut_last(b, (int)(b->len - pos));
}

void strings__Builder_go_back_to(strings__Builder* b, int pos) {
	array_trim(b, pos);
}

// Attr: [inline]
inline void strings__Builder_writeln(strings__Builder* b, string s) {
	if ((s).len != 0) {
		array_push_many(b, s.str, s.len);
	}
	array_push_noscan((array*)b, _MOV((u8[]){ ((u8)('\n')) }));
}

string strings__Builder_last_n(strings__Builder* b, int n) {
	if (n > b->len) {
		return _SLIT("");
	}
	return strings__Builder_spart(b, (int)(b->len - n), n);
}

string strings__Builder_after(strings__Builder* b, int n) {
	if (n >= b->len) {
		return _SLIT("");
	}
	return strings__Builder_spart(b, n, (int)(b->len - n));
}

string strings__Builder_str(strings__Builder* b) {
	array_push_noscan((array*)b, _MOV((u8[]){ ((u8)(0)) }));
	u8* bcopy = ((u8*)(memdup_noscan(b->data, b->len)));
	string s = u8_vstring_with_len(bcopy, (int)(b->len - 1));
	array_trim(b, 0);
	return s;
}

void strings__Builder_ensure_cap(strings__Builder* b, int n) {
	if (n <= b->cap) {
		return;
	}
	u8* new_data = vcalloc((int)(n * b->element_size));
	if (b->data != ((void*)0)) {
		vmemcpy(new_data, b->data, (int)(b->len * b->element_size));
		if (ArrayFlags_has(&b->flags, ArrayFlags__noslices)) {
			_v_free(b->data);
		}
	}
	{ // Unsafe block
		b->data = new_data;
		b->offset = 0;
		b->cap = n;
	}
}

// Attr: [unsafe]
void strings__Builder_grow_len(strings__Builder* b, int n) {
	if (n <= 0) {
		return;
	}
	int new_len = (int)(b->len + n);
	strings__Builder_ensure_cap(b, new_len);
	{ // Unsafe block
		b->len = new_len;
	}
}

// Attr: [unsafe]
void strings__Builder_free(strings__Builder* b) {
	if (b->data != 0) {
		_v_free(b->data);
		{ // Unsafe block
			b->data = ((void*)0);
		}
	}
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u16 strings__min(u16 a, u16 b, u16 c) {
	u16 m = a;
	if (b < m) {
		m = b;
	}
	if (c < m) {
		m = c;
	}
	return m;
}

// Attr: [direct_array_access]
int strings__levenshtein_distance(string a, string b) {
	if (a.len == 0) {
		return b.len;
	}
	if (b.len == 0) {
		return a.len;
	}
	if (string__eq(a, b)) {
		return 0;
	}
	Array_u16 row = 	__new_array_with_default_noscan((int)(a.len + 1), 0, sizeof(u16), 0);
	{
		u16* pelem = (u16*)row.data;
		for (int index=0; index<row.len; index++, pelem++) {
			int it = index;
			*pelem = ((u16)(index));
		}
	}
	;
	for (int i = 1; i < (int)(b.len + 1); i++) {
		u16 prev = ((u16)(i));
		for (int j = 1; j < (int)(a.len + 1); j++) {
			u16 current = ((u16*)row.data)[(int)(j - 1)];
			if (b.str[ (int)(i - 1)] != a.str[ (int)(j - 1)]) {
				current = strings__min((u16)(((u16*)row.data)[(int)(j - 1)] + 1U), (u16)(prev + 1U), (u16)(((u16*)row.data)[j] + 1U));
			}
			((u16*)row.data)[(int)(j - 1)] = prev;
			prev = current;
		}
		((u16*)row.data)[a.len] = prev;
	}
	return ((u16*)row.data)[a.len];
}

f32 strings__levenshtein_distance_percentage(string a, string b) {
	int d = strings__levenshtein_distance(a, b);
	int l = (a.len >= b.len ? (a.len) : (b.len));
	return (f32)(((f32)(((f32)(1.00)) - (f32)(((f32)(d)) / ((f32)(l))))) * ((f32)(100.00)));
}

f32 strings__dice_coefficient(string s1, string s2) {
	if (s1.len == 0 || s2.len == 0) {
		return 0.0;
	}
	if (string__eq(s1, s2)) {
		return 1.0;
	}
	if (s1.len < 2 || s2.len < 2) {
		return 0.0;
	}
	string a = (s1.len > s2.len ? (s1) : (s2));
	string b = (string__eq(a, s1) ? (s2) : (s1));
	Map_string_int first_bigrams = new_map_noscan_value(sizeof(string), sizeof(int), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string)
	;
	for (int i = 0; i < (int)(a.len - 1); ++i) {
		string bigram = string_substr(a, i, (int_literal)(i + 2));
		int q = (_IN_MAP(ADDR(string, bigram), ADDR(map, first_bigrams)) ? ((int)((*(int*)map_get(ADDR(map, first_bigrams), &(string[]){bigram}, &(int[]){ 0 })) + 1)) : (1));
		map_set(&first_bigrams, &(string[]){bigram}, &(int[]) { q });
	}
	int intersection_size = 0;
	for (int i = 0; i < (int)(b.len - 1); ++i) {
		string bigram = string_substr(b, i, (int_literal)(i + 2));
		int count = (_IN_MAP(ADDR(string, bigram), ADDR(map, first_bigrams)) ? ((*(int*)map_get(ADDR(map, first_bigrams), &(string[]){bigram}, &(int[]){ 0 }))) : (0));
		if (count > 0) {
			map_set(&first_bigrams, &(string[]){bigram}, &(int[]) { (int)(count - 1) });
			intersection_size++;
		}
	}
	return (f32)(((f32)(((f32)(2.0)) * ((f32)(intersection_size)))) / ((f32)((f32)(((f32)(a.len)) + ((f32)(b.len))) - 2)));
}

// Attr: [direct_array_access]
string strings__repeat(u8 c, int n) {
	if (n <= 0) {
		return _SLIT("");
	}
	u8* bytes = malloc_noscan((int)(n + 1));
	{ // Unsafe block
		memset(bytes, c, n);
		bytes[n] = '0';
	}
	return u8_vstring_with_len(bytes, n);
}

// Attr: [direct_array_access]
string strings__repeat_string(string s, int n) {
	if (n <= 0 || s.len == 0) {
		return _SLIT("");
	}
	int slen = s.len;
	int blen = (int)(slen * n);
	u8* bytes = malloc_noscan((int)(blen + 1));
	for (int bi = 0; bi < n; ++bi) {
		int bislen = (int)(bi * slen);
		for (int si = 0; si < slen; ++si) {
			{ // Unsafe block
				bytes[(int)(bislen + si)] = s.str[ si];
			}
		}
	}
	{ // Unsafe block
		bytes[blen] = '0';
	}
	return u8_vstring_with_len(bytes, blen);
}

string strings__find_between_pair_u8(string input, u8 start, u8 end) {
	int marks = 0;
	int start_index = -1;
	for (int i = 0; i < input.len; ++i) {
		u8 b = input.str[i];
		if (b == start) {
			if (start_index == -1) {
				start_index = (int)(i + 1);
			}
			marks++;
			continue;
		}
		if (start_index > 0) {
			if (b == end) {
				marks--;
				if (marks == 0) {
					return string_substr(input, start_index, i);
				}
			}
		}
	}
	return _SLIT("");
}

string strings__find_between_pair_rune(string input, rune start, rune end) {
	int marks = 0;
	int start_index = -1;
	Array_rune runes = string_runes(input);
	for (int i = 0; i < runes.len; ++i) {
		rune r = ((rune*)runes.data)[i];
		if (r == start) {
			if (start_index == -1) {
				start_index = (int)(i + 1);
			}
			marks++;
			continue;
		}
		if (start_index > 0) {
			if (r == end) {
				marks--;
				if (marks == 0) {
					return Array_rune_string(array_slice(runes, start_index, i));
				}
			}
		}
	}
	return _SLIT("");
}

string strings__find_between_pair_string(string input, string start, string end) {
	int start_index = -1;
	int marks = 0;
	Array_rune start_runes = string_runes(start);
	Array_rune end_runes = string_runes(end);
	Array_rune runes = string_runes(input);
	int i = 0;
	for (; i < runes.len; i++) {
		Array_rune start_slice = array_slice_ni(runes, i, (int)(i + start_runes.len));
		if (Array_rune_arr_eq(start_slice, start_runes)) {
			i = (int)((int)(i + start_runes.len) - 1);
			if (start_index < 0) {
				start_index = (int)(i + 1);
			}
			marks++;
			continue;
		}
		if (start_index > 0) {
			Array_rune end_slice = array_slice_ni(runes, i, (int)(i + end_runes.len));
			if (Array_rune_arr_eq(end_slice, end_runes)) {
				marks--;
				if (marks == 0) {
					return Array_rune_string(array_slice(runes, start_index, i));
				}
				i = (int)((int)(i + end_runes.len) - 1);
				continue;
			}
		}
	}
	return _SLIT("");
}

Array_string strings__split_capital(string s) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int word_start = 0;
	for (int idx = 0; idx < s.len; ++idx) {
		u8 c = s.str[idx];
		if (c >= 'A' && c <= 'Z') {
			if (word_start != idx) {
				array_push((array*)&res, _MOV((string[]){ string_substr_ni(s, word_start, idx) }));
			}
			word_start = idx;
			continue;
		}
	}
	if (word_start != s.len) {
		array_push((array*)&res, _MOV((string[]){ string_substr_ni(s, word_start, 2147483647) }));
	}
	return res;
}

int math__bits__leading_zeros_8(u8 x) {
	return (int)(8 - math__bits__len_8(x));
}

int math__bits__leading_zeros_16(u16 x) {
	return (int)(16 - math__bits__len_16(x));
}

int math__bits__leading_zeros_32(u32 x) {
	return (int)(32 - math__bits__len_32(x));
}

int math__bits__leading_zeros_64(u64 x) {
	return (int)(64 - math__bits__len_64(x));
}

int math__bits__trailing_zeros_8(u8 x) {
	return ((int)(_const_math__bits__ntz_8_tab[v_fixed_index(x, 256)]));
}

int math__bits__trailing_zeros_16(u16 x) {
	if (x == 0U) {
		return 16;
	}
	return ((int)(_const_math__bits__de_bruijn32tab[v_fixed_index(((u32)(((u32)((x & -x))) * _const_math__bits__de_bruijn32) >> (27)), 32)]));
}

int math__bits__trailing_zeros_32(u32 x) {
	if (x == 0U) {
		return 32;
	}
	return ((int)(_const_math__bits__de_bruijn32tab[v_fixed_index(((u32)(((x & -x)) * _const_math__bits__de_bruijn32) >> (27)), 32)]));
}

int math__bits__trailing_zeros_64(u64 x) {
	if (x == 0U) {
		return 64;
	}
	return ((int)(_const_math__bits__de_bruijn64tab[v_fixed_index(((u64)(((x & -x)) * _const_math__bits__de_bruijn64) >> (58)), 64)]));
}

int math__bits__ones_count_8(u8 x) {
	return ((int)(_const_math__bits__pop_8_tab[v_fixed_index(x, 256)]));
}

int math__bits__ones_count_16(u16 x) {
	return ((int)((u8)(_const_math__bits__pop_8_tab[v_fixed_index((x >> 8U), 256)] + _const_math__bits__pop_8_tab[v_fixed_index((x & ((u16)(0xffU))), 256)])));
}

int math__bits__ones_count_32(u32 x) {
	return ((int)((u8)((u8)((u8)(_const_math__bits__pop_8_tab[v_fixed_index((x >> 24U), 256)] + _const_math__bits__pop_8_tab[v_fixed_index(((x >> 16U) & 0xffU), 256)]) + _const_math__bits__pop_8_tab[v_fixed_index(((x >> 8U) & 0xffU), 256)]) + _const_math__bits__pop_8_tab[v_fixed_index((x & ((u32)(0xffU))), 256)])));
}

int math__bits__ones_count_64(u64 x) {
	u64 y = (u64)((((x >> ((u64)(1U))) & ((_const_math__bits__m0 & _const_max_u64)))) + ((x & ((_const_math__bits__m0 & _const_max_u64)))));
	y = (u64)((((y >> ((u64)(2U))) & ((_const_math__bits__m1 & _const_max_u64)))) + ((y & ((_const_math__bits__m1 & _const_max_u64)))));
	y = (((u64)(((y >> 4U)) + y)) & ((_const_math__bits__m2 & _const_max_u64)));
	y += (y >> 8U);
	y += (y >> 16U);
	y += (y >> 32U);
	return (((int)(y)) & ((int_literal)((128) - 1)));
}

// Attr: [inline]
inline u8 math__bits__rotate_left_8(u8 x, int k) {
	u8 s = (((u8)(k)) & ((u8)(_const_math__bits__n8 - ((u8)(1)))));
	return (((x << s)) | ((x >> ((u8)(_const_math__bits__n8 - s)))));
}

// Attr: [inline]
inline u16 math__bits__rotate_left_16(u16 x, int k) {
	u16 s = (((u16)(k)) & ((u16)(_const_math__bits__n16 - ((u16)(1U)))));
	return (((x << s)) | ((x >> ((u16)(_const_math__bits__n16 - s)))));
}

// Attr: [inline]
inline u32 math__bits__rotate_left_32(u32 x, int k) {
	u32 s = (((u32)(k)) & ((u32)(_const_math__bits__n32 - ((u32)(1U)))));
	return (((x << s)) | ((x >> ((u32)(_const_math__bits__n32 - s)))));
}

// Attr: [inline]
inline u64 math__bits__rotate_left_64(u64 x, int k) {
	u64 s = (((u64)(k)) & ((u64)(_const_math__bits__n64 - ((u64)(1U)))));
	return (((x << s)) | ((x >> ((u64)(_const_math__bits__n64 - s)))));
}

// Attr: [inline]
inline u8 math__bits__reverse_8(u8 x) {
	return _const_math__bits__rev_8_tab[v_fixed_index(x, 256)];
}

// Attr: [inline]
inline u16 math__bits__reverse_16(u16 x) {
	return (((u16)(_const_math__bits__rev_8_tab[v_fixed_index((x >> 8U), 256)])) | ((((u16)(_const_math__bits__rev_8_tab[v_fixed_index((x & ((u16)(0xffU))), 256)])) << 8U)));
}

// Attr: [inline]
inline u32 math__bits__reverse_32(u32 x) {
	u64 y = (((((x >> ((u32)(1U))) & ((_const_math__bits__m0 & _const_max_u32)))) | ((((x & ((_const_math__bits__m0 & _const_max_u32)))) << 1U))));
	y = (((((y >> ((u32)(2U))) & ((_const_math__bits__m1 & _const_max_u32)))) | ((((y & ((_const_math__bits__m1 & _const_max_u32)))) << ((u32)(2U))))));
	y = (((((y >> ((u32)(4U))) & ((_const_math__bits__m2 & _const_max_u32)))) | ((((y & ((_const_math__bits__m2 & _const_max_u32)))) << ((u32)(4U))))));
	return math__bits__reverse_bytes_32(((u32)(y)));
}

// Attr: [inline]
inline u64 math__bits__reverse_64(u64 x) {
	u64 y = (((((x >> ((u64)(1U))) & ((_const_math__bits__m0 & _const_max_u64)))) | ((((x & ((_const_math__bits__m0 & _const_max_u64)))) << 1U))));
	y = (((((y >> ((u64)(2U))) & ((_const_math__bits__m1 & _const_max_u64)))) | ((((y & ((_const_math__bits__m1 & _const_max_u64)))) << 2U))));
	y = (((((y >> ((u64)(4U))) & ((_const_math__bits__m2 & _const_max_u64)))) | ((((y & ((_const_math__bits__m2 & _const_max_u64)))) << 4U))));
	return math__bits__reverse_bytes_64(y);
}

// Attr: [inline]
inline u16 math__bits__reverse_bytes_16(u16 x) {
	return (((x >> 8U)) | ((x << 8U)));
}

// Attr: [inline]
inline u32 math__bits__reverse_bytes_32(u32 x) {
	u64 y = (((((x >> ((u32)(8U))) & ((_const_math__bits__m3 & _const_max_u32)))) | ((((x & ((_const_math__bits__m3 & _const_max_u32)))) << ((u32)(8U))))));
	return ((u32)((((y >> 16U)) | ((y << 16U)))));
}

// Attr: [inline]
inline u64 math__bits__reverse_bytes_64(u64 x) {
	u64 y = (((((x >> ((u64)(8U))) & ((_const_math__bits__m3 & _const_max_u64)))) | ((((x & ((_const_math__bits__m3 & _const_max_u64)))) << ((u64)(8U))))));
	y = (((((y >> ((u64)(16U))) & ((_const_math__bits__m4 & _const_max_u64)))) | ((((y & ((_const_math__bits__m4 & _const_max_u64)))) << ((u64)(16U))))));
	return (((y >> 32U)) | ((y << 32U)));
}

int math__bits__len_8(u8 x) {
	return ((int)(_const_math__bits__len_8_tab[v_fixed_index(x, 256)]));
}

int math__bits__len_16(u16 x) {
	u16 y = x;
	int n = 0;
	if (y >= 256U) {
		y >>= 8U;
		n = 8;
	}
	return (int)(n + ((int)(_const_math__bits__len_8_tab[v_fixed_index(y, 256)])));
}

int math__bits__len_32(u32 x) {
	u32 y = x;
	int n = 0;
	if (y >= (65536)) {
		y >>= 16U;
		n = 16;
	}
	if (y >= (256)) {
		y >>= 8U;
		n += 8;
	}
	return (int)(n + ((int)(_const_math__bits__len_8_tab[v_fixed_index(y, 256)])));
}

int math__bits__len_64(u64 x) {
	u64 y = x;
	int n = 0;
	if (y >= (((u64)(1U)) << ((u64)(32U)))) {
		y >>= 32U;
		n = 32;
	}
	if (y >= (((u64)(1U)) << ((u64)(16U)))) {
		y >>= 16U;
		n += 16;
	}
	if (y >= (((u64)(1U)) << ((u64)(8U)))) {
		y >>= 8U;
		n += 8;
	}
	return (int)(n + ((int)(_const_math__bits__len_8_tab[v_fixed_index(y, 256)])));
}

multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry) {
	u64 sum64 = (u64)((u64)(((u64)(x)) + ((u64)(y))) + ((u64)(carry)));
	u32 sum = ((u32)(sum64));
	u32 carry_out = ((u32)((sum64 >> 32U)));
	return (multi_return_u32_u32){.arg0=sum, .arg1=carry_out};
}

multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry) {
	u64 sum = (u64)((u64)(x + y) + carry);
	u64 carry_out = (((((x & y)) | ((((x | y)) & ~sum)))) >> 63U);
	return (multi_return_u64_u64){.arg0=sum, .arg1=carry_out};
}

multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow) {
	u32 diff = (u32)((u32)(x - y) - borrow);
	u32 borrow_out = (((((~x & y)) | ((~((x ^ y)) & diff)))) >> 31U);
	return (multi_return_u32_u32){.arg0=diff, .arg1=borrow_out};
}

multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow) {
	u64 diff = (u64)((u64)(x - y) - borrow);
	u64 borrow_out = (((((~x & y)) | ((~((x ^ y)) & diff)))) >> 63U);
	return (multi_return_u64_u64){.arg0=diff, .arg1=borrow_out};
}

multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y) {
	u64 tmp = (u64)(((u64)(x)) * ((u64)(y)));
	u32 hi = ((u32)((tmp >> 32U)));
	u32 lo = ((u32)(tmp));
	return (multi_return_u32_u32){.arg0=hi, .arg1=lo};
}

multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y) {
	u64 x0 = (x & _const_math__bits__mask32);
	u64 x1 = (x >> 32U);
	u64 y0 = (y & _const_math__bits__mask32);
	u64 y1 = (y >> 32U);
	u64 w0 = (u64)(x0 * y0);
	u64 t = (u64)((u64)(x1 * y0) + ((w0 >> 32U)));
	u64 w1 = (t & _const_math__bits__mask32);
	u64 w2 = (t >> 32U);
	w1 += (u64)(x0 * y1);
	u64 hi = (u64)((u64)((u64)(x1 * y1) + w2) + ((w1 >> 32U)));
	u64 lo = (u64)(x * y);
	return (multi_return_u64_u64){.arg0=hi, .arg1=lo};
}

multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y) {
	if (y != 0U && y <= hi) {
		_v_panic(_const_math__bits__overflow_error);
		VUNREACHABLE();
	}
	u64 z = (((((u64)(hi)) << 32U)) | ((u64)(lo)));
	u32 quo = ((u32)((u64)(z / ((u64)(y)))));
	u32 rem = ((u32)((u64)(z % ((u64)(y)))));
	return (multi_return_u32_u32){.arg0=quo, .arg1=rem};
}

multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1) {
	u64 y = y1;
	if (y == 0U) {
		_v_panic(_const_math__bits__overflow_error);
		VUNREACHABLE();
	}
	if (y <= hi) {
		_v_panic(_const_math__bits__overflow_error);
		VUNREACHABLE();
	}
	u32 s = ((u32)(math__bits__leading_zeros_64(y)));
	y <<= s;
	u64 yn1 = (y >> 32U);
	u64 yn0 = (y & _const_math__bits__mask32);
	u64 ss1 = ((hi << s));
	u32 xxx = (u32)(64 - s);
	u64 ss2 = (lo >> xxx);
	if (xxx == 64U) {
		ss2 = 0U;
	}
	u64 un32 = (ss1 | ss2);
	u64 un10 = (lo << s);
	u64 un1 = (un10 >> 32U);
	u64 un0 = (un10 & _const_math__bits__mask32);
	u64 q1 = (u64)(un32 / yn1);
	u64 rhat = (u64)(un32 - ((u64)(q1 * yn1)));
	for (;;) {
		if (!(q1 >= _const_math__bits__two32 || ((u64)(q1 * yn0)) > ((u64)(((u64)(_const_math__bits__two32 * rhat)) + un1)))) break;
		q1--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	u64 un21 = (u64)(((u64)(un32 * _const_math__bits__two32)) + ((u64)(un1 - ((u64)(q1 * y)))));
	u64 q0 = (u64)(un21 / yn1);
	rhat = (u64)(un21 - (u64)(q0 * yn1));
	for (;;) {
		if (!(q0 >= _const_math__bits__two32 || ((u64)(q0 * yn0)) > ((u64)(((u64)(_const_math__bits__two32 * rhat)) + un0)))) break;
		q0--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	u64 qq = ((u64)(((u64)(q1 * _const_math__bits__two32)) + q0));
	u64 rr = (((u64)((u64)(((u64)(un21 * _const_math__bits__two32)) + un0) - ((u64)(q0 * y)))) >> s);
	return (multi_return_u64_u64){.arg0=qq, .arg1=rr};
}

u32 math__bits__rem_32(u32 hi, u32 lo, u32 y) {
	return ((u32)((u64)(((((((u64)(hi)) << 32U)) | ((u64)(lo)))) % ((u64)(y)))));
}

u64 math__bits__rem_64(u64 hi, u64 lo, u64 y) {
	multi_return_u64_u64 mr_16453 = math__bits__div_64((u64)(hi % y), lo, y);
	u64 rem = mr_16453.arg1;
	return rem;
}

multi_return_f64_int math__bits__normalize(f64 x) {
	f64 smallest_normal = 2.2250738585072014e-308;
	if (((x > ((f64)(0.0)) ? (x) : (-x))) < smallest_normal) {
		return (multi_return_f64_int){.arg0=(f64)(x * ((((u64)(1U)) << ((u64)(52U))))), .arg1=-52};
	}
	return (multi_return_f64_int){.arg0=x, .arg1=0};
}

// Attr: [inline]
inline u32 math__bits__f32_bits(f32 f) {
	u32 p = *((u32*)(&f));
	return p;
}

// Attr: [inline]
inline f32 math__bits__f32_from_bits(u32 b) {
	f32 p = *((f32*)(&b));
	return p;
}

// Attr: [inline]
inline u64 math__bits__f64_bits(f64 f) {
	u64 p = *((u64*)(&f));
	return p;
}

// Attr: [inline]
inline f64 math__bits__f64_from_bits(u64 b) {
	f64 p = *((f64*)(&b));
	return p;
}

VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0) {
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	r0 = (((s0 >> 1U)) | ((((s1 & ((u32)(1U)))) << 31U)));
	r1 = (((s1 >> 1U)) | ((((s2 & ((u32)(1U)))) << 31U)));
	r2 = (s2 >> 1U);
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0) {
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	r2 = (((s2 << 1U)) | ((((s1 & ((((u32)(1U)) << 31U)))) >> 31U)));
	r1 = (((s1 << 1U)) | ((((s0 & ((((u32)(1U)) << 31U)))) >> 31U)));
	r0 = (s0 << 1U);
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) {
	u64 w = ((u64)(0U));
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	w = (u64)(((u64)(s0)) + ((u64)(d0)));
	r0 = ((u32)(w));
	w >>= 32U;
	w += (u64)(((u64)(s1)) + ((u64)(d1)));
	r1 = ((u32)(w));
	w >>= 32U;
	w += (u64)(((u64)(s2)) + ((u64)(d2)));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

VV_LOCAL_SYMBOL multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) {
	u64 w = ((u64)(0U));
	u32 r0 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	w = (u64)(((u64)(s0)) - ((u64)(d0)));
	r0 = ((u32)(w));
	w >>= 32U;
	w += (u64)(((u64)(s1)) - ((u64)(d1)));
	r1 = ((u32)(w));
	w >>= 32U;
	w += (u64)(((u64)(s2)) - ((u64)(d2)));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2, .arg1=r1, .arg2=r0};
}

VV_LOCAL_SYMBOL bool strconv__is_digit(u8 x) {
	return x >= _const_strconv__c_zero && x <= _const_strconv__c_nine;
}

VV_LOCAL_SYMBOL bool strconv__is_space(u8 x) {
	return x == '\t' || x == '\n' || x == '\v' || x == '\f' || x == '\r' || x == ' ';
}

VV_LOCAL_SYMBOL bool strconv__is_exp(u8 x) {
	return x == 'E' || x == 'e';
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL multi_return_strconv__ParserState_strconv__PrepNumber strconv__parser(string s) {
	int digx = 0;
	strconv__ParserState result = strconv__ParserState__ok;
	bool expneg = false;
	int expexp = 0;
	int i = 0;
	strconv__PrepNumber pn = ((strconv__PrepNumber){.negative = 0,.exponent = 0,.mantissa = 0,});
	for (;;) {
		if (!(i < s.len && u8_is_space(s.str[ i]))) break;
		i++;
	}
	if (s.str[ i] == '-') {
		pn.negative = true;
		i++;
	}
	if (s.str[ i] == '+') {
		i++;
	}
	for (;;) {
		if (!(i < s.len && u8_is_digit(s.str[ i]))) break;
		if (digx < _const_strconv__digits) {
			pn.mantissa *= 10U;
			pn.mantissa += ((u64)((rune)(s.str[ i] - _const_strconv__c_zero)));
			digx++;
		} else if (pn.exponent < 2147483647) {
			pn.exponent++;
		}
		i++;
	}
	if (i < s.len && s.str[ i] == '.') {
		i++;
		for (;;) {
			if (!(i < s.len && u8_is_digit(s.str[ i]))) break;
			if (digx < _const_strconv__digits) {
				pn.mantissa *= 10U;
				pn.mantissa += ((u64)((rune)(s.str[ i] - _const_strconv__c_zero)));
				pn.exponent--;
				digx++;
			}
			i++;
		}
	}
	if (i < s.len && (s.str[ i] == 'e' || s.str[ i] == 'E')) {
		i++;
		if (i < s.len) {
			if (s.str[ i] == _const_strconv__c_plus) {
				i++;
			} else if (s.str[ i] == _const_strconv__c_minus) {
				expneg = true;
				i++;
			}
			for (;;) {
				if (!(i < s.len && u8_is_digit(s.str[ i]))) break;
				if (expexp < 214748364) {
					expexp *= 10;
					expexp += ((int)((rune)(s.str[ i] - _const_strconv__c_zero)));
				}
				i++;
			}
		}
	}
	if (expneg) {
		expexp = -expexp;
	}
	pn.exponent += expexp;
	if (pn.mantissa == 0U) {
		if (pn.negative) {
			result = strconv__ParserState__mzero;
		} else {
			result = strconv__ParserState__pzero;
		}
	} else if (pn.exponent > 309) {
		if (pn.negative) {
			result = strconv__ParserState__minf;
		} else {
			result = strconv__ParserState__pinf;
		}
	} else if (pn.exponent < -328) {
		if (pn.negative) {
			result = strconv__ParserState__mzero;
		} else {
			result = strconv__ParserState__pzero;
		}
	}
	if (i == 0 && s.len > 0) {
		return (multi_return_strconv__ParserState_strconv__PrepNumber){.arg0=strconv__ParserState__invalid_number, .arg1=pn};
	}
	return (multi_return_strconv__ParserState_strconv__PrepNumber){.arg0=result, .arg1=pn};
}

VV_LOCAL_SYMBOL u64 strconv__converter(strconv__PrepNumber* pn) {
	int binexp = 92;
	u32 s2 = ((u32)(0U));
	u32 s1 = ((u32)(0U));
	u32 s0 = ((u32)(0U));
	u32 q2 = ((u32)(0U));
	u32 q1 = ((u32)(0U));
	u32 q0 = ((u32)(0U));
	u32 r2 = ((u32)(0U));
	u32 r1 = ((u32)(0U));
	u32 r0 = ((u32)(0U));
	u32 mask28 = ((u32)((((u64)(0xFU)) << 28U)));
	u64 result = ((u64)(0U));
	s0 = ((u32)((pn->mantissa & ((u64)(0x00000000FFFFFFFFU)))));
	s1 = ((u32)((pn->mantissa >> 32U)));
	s2 = ((u32)(0U));
	for (;;) {
		if (!(pn->exponent > 0)) break;
		multi_return_u32_u32_u32 mr_5535 = strconv__lsl96(s2, s1, s0);
		q2 = mr_5535.arg0;
		q1 = mr_5535.arg1;
		q0 = mr_5535.arg2;
		multi_return_u32_u32_u32 mr_5581 = strconv__lsl96(q2, q1, q0);
		r2 = mr_5581.arg0;
		r1 = mr_5581.arg1;
		r0 = mr_5581.arg2;
		multi_return_u32_u32_u32 mr_5637 = strconv__lsl96(r2, r1, r0);
		s2 = mr_5637.arg0;
		s1 = mr_5637.arg1;
		s0 = mr_5637.arg2;
		multi_return_u32_u32_u32 mr_5693 = strconv__add96(s2, s1, s0, q2, q1, q0);
		s2 = mr_5693.arg0;
		s1 = mr_5693.arg1;
		s0 = mr_5693.arg2;
		pn->exponent--;
		for (;;) {
			if (!(((s2 & mask28)) != 0U)) break;
			multi_return_u32_u32_u32 mr_5816 = strconv__lsr96(s2, s1, s0);
			q2 = mr_5816.arg0;
			q1 = mr_5816.arg1;
			q0 = mr_5816.arg2;
			binexp++;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	for (;;) {
		if (!(pn->exponent < 0)) break;
		for (;;) {
			if (!(!(((s2 & ((((u32)(1U)) << 31U)))) != 0U))) break;
			multi_return_u32_u32_u32 mr_5963 = strconv__lsl96(s2, s1, s0);
			q2 = mr_5963.arg0;
			q1 = mr_5963.arg1;
			q0 = mr_5963.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
		q2 = (u32)(s2 / _const_strconv__c_ten);
		r1 = (u32)(s2 % _const_strconv__c_ten);
		r2 = (((s1 >> 8U)) | ((r1 << 24U)));
		q1 = (u32)(r2 / _const_strconv__c_ten);
		r1 = (u32)(r2 % _const_strconv__c_ten);
		r2 = ((((((s1 & ((u32)(0xFFU)))) << 16U)) | ((s0 >> 16U))) | ((r1 << 24U)));
		r0 = (u32)(r2 / _const_strconv__c_ten);
		r1 = (u32)(r2 % _const_strconv__c_ten);
		q1 = (((q1 << 8U)) | ((((r0 & ((u32)(0x00FF0000U)))) >> 16U)));
		q0 = (r0 << 16U);
		r2 = (((s0 & ((u32)(0xFFFFU)))) | ((r1 << 16U)));
		q0 |= (u32)(r2 / _const_strconv__c_ten);
		s2 = q2;
		s1 = q1;
		s0 = q0;
		pn->exponent++;
	}
	if (s2 != 0U || s1 != 0U || s0 != 0U) {
		for (;;) {
			if (!(((s2 & mask28)) == 0U)) break;
			multi_return_u32_u32_u32 mr_6699 = strconv__lsl96(s2, s1, s0);
			q2 = mr_6699.arg0;
			q1 = mr_6699.arg1;
			q0 = mr_6699.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	int nbit = 7;
	u32 check_round_bit = (((u32)(1U)) << ((u32)(nbit)));
	u32 check_round_mask = (((u32)(0xFFFFFFFFU)) << ((u32)(nbit)));
	if (((s1 & check_round_bit)) != 0U) {
		if (((s1 & ~check_round_mask)) != 0U) {
			multi_return_u32_u32_u32 mr_7784 = strconv__add96(s2, s1, s0, 0U, check_round_bit, 0U);
			s2 = mr_7784.arg0;
			s1 = mr_7784.arg1;
			s0 = mr_7784.arg2;
		} else {
			if (((s1 & ((check_round_bit << ((u32)(1U)))))) != 0U) {
				multi_return_u32_u32_u32 mr_7978 = strconv__add96(s2, s1, s0, 0U, check_round_bit, 0U);
				s2 = mr_7978.arg0;
				s1 = mr_7978.arg1;
				s0 = mr_7978.arg2;
			}
		}
		s1 = (s1 & check_round_mask);
		s0 = ((u32)(0U));
		if ((s2 & ((mask28 << ((u32)(1U))))) != 0U) {
			multi_return_u32_u32_u32 mr_8185 = strconv__lsr96(s2, s1, s0);
			q2 = mr_8185.arg0;
			q1 = mr_8185.arg1;
			q0 = mr_8185.arg2;
			binexp++;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	binexp += 1023;
	if (binexp > 2046) {
		if (pn->negative) {
			result = _const_strconv__double_minus_infinity;
		} else {
			result = _const_strconv__double_plus_infinity;
		}
	} else if (binexp < 1) {
		if (pn->negative) {
			result = _const_strconv__double_minus_zero;
		} else {
			result = _const_strconv__double_plus_zero;
		}
	} else if (s2 != 0U) {
		u64 q = ((u64)(0U));
		u64 binexs2 = (((u64)(binexp)) << 52U);
		q = ((((((u64)((s2 & ~mask28))) << 24U)) | ((((u64)(((u64)(s1)) + ((u64)(128U)))) >> 8U))) | binexs2);
		if (pn->negative) {
			q |= ((((u64)(1U)) << 63U));
		}
		result = q;
	}
	return result;
}

_result_f64 strconv__atof64(string s) {
	if (s.len == 0) {
		return (_result_f64){ .is_error=true, .err=_v_error(_SLIT("expected a number found an empty string")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	strconv__Float64u res = ((strconv__Float64u){0});
	multi_return_strconv__ParserState_strconv__PrepNumber mr_9276 = strconv__parser(s);
	strconv__ParserState res_parsing = mr_9276.arg0;
	strconv__PrepNumber pn = mr_9276.arg1;
	switch (res_parsing) {
		case strconv__ParserState__ok: {
				res.u = strconv__converter((voidptr)&/*qq*/pn);
				break;
		}
		case strconv__ParserState__pzero: {
				res.u = _const_strconv__double_plus_zero;
				break;
		}
		case strconv__ParserState__mzero: {
				res.u = _const_strconv__double_minus_zero;
				break;
		}
		case strconv__ParserState__pinf: {
				res.u = _const_strconv__double_plus_infinity;
				break;
		}
		case strconv__ParserState__minf: {
				res.u = _const_strconv__double_minus_infinity;
				break;
		}
		case strconv__ParserState__invalid_number: {
				return (_result_f64){ .is_error=true, .err=_v_error(_SLIT("not a number")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	
	_result_f64 _t3;
	_result_ok(&(f64[]) { res.f }, (_result*)(&_t3), sizeof(f64));
	return _t3;
}

// Attr: [direct_array_access]
f64 strconv__atof_quick(string s) {
	strconv__Float64u f = ((strconv__Float64u){0});
	f64 sign = ((f64)(1.0));
	int i = 0;
	for (;;) {
		if (!(i < s.len && s.str[ i] == ' ')) break;
		i++;
	}
	if (i < s.len) {
		if (s.str[ i] == '-') {
			sign = -1.0;
			i++;
		} else if (s.str[ i] == '+') {
			i++;
		}
	}
	if (s.str[ i] == 'i' && (int)(i + 2) < s.len && s.str[ (int)(i + 1)] == 'n' && s.str[ (int)(i + 2)] == 'f') {
		if (sign > ((f64)(0.0))) {
			f.u = _const_strconv__double_plus_infinity;
		} else {
			f.u = _const_strconv__double_minus_infinity;
		}
		return f.f;
	}
	for (;;) {
		if (!(i < s.len && s.str[ i] == '0')) break;
		i++;
		if (i >= s.len) {
			if (sign > ((f64)(0.0))) {
				f.u = _const_strconv__double_plus_zero;
			} else {
				f.u = _const_strconv__double_minus_zero;
			}
			return f.f;
		}
	}
	for (;;) {
		if (!(i < s.len && (s.str[ i] >= '0' && s.str[ i] <= '9'))) break;
		f.f *= ((f64)(10.0));
		f.f += ((f64)((rune)(s.str[ i] - '0')));
		i++;
	}
	if (i < s.len && s.str[ i] == '.') {
		i++;
		f64 frac_mul = ((f64)(0.1));
		for (;;) {
			if (!(i < s.len && (s.str[ i] >= '0' && s.str[ i] <= '9'))) break;
			f.f += (f64)(((f64)((rune)(s.str[ i] - '0'))) * frac_mul);
			frac_mul *= ((f64)(0.1));
			i++;
		}
	}
	if (i < s.len && (s.str[ i] == 'e' || s.str[ i] == 'E')) {
		i++;
		int exp = 0;
		int exp_sign = 1;
		if (i < s.len) {
			if (s.str[ i] == '-') {
				exp_sign = -1;
				i++;
			} else if (s.str[ i] == '+') {
				i++;
			}
		}
		for (;;) {
			if (!(i < s.len && s.str[ i] == '0')) break;
			i++;
		}
		for (;;) {
			if (!(i < s.len && (s.str[ i] >= '0' && s.str[ i] <= '9'))) break;
			exp *= 10;
			exp += ((int)((rune)(s.str[ i] - '0')));
			i++;
		}
		if (exp_sign == 1) {
			if (exp > 309) {
				if (sign > 0) {
					f.u = _const_strconv__double_plus_infinity;
				} else {
					f.u = _const_strconv__double_minus_infinity;
				}
				return f.f;
			}
			strconv__Float64u tmp_mul = ((strconv__Float64u){.u = _const_strconv__pos_exp[exp],});
			f.f = (f64)(f.f * tmp_mul.f);
		} else {
			if (exp > 324) {
				if (sign > 0) {
					f.u = _const_strconv__double_plus_zero;
				} else {
					f.u = _const_strconv__double_minus_zero;
				}
				return f.f;
			}
			strconv__Float64u tmp_mul = ((strconv__Float64u){.u = _const_strconv__neg_exp[exp],});
			f.f = (f64)(f.f * tmp_mul.f);
		}
	}
	{ // Unsafe block
		f.f = (f64)(f.f * sign);
		return f.f;
	}
	return 0;
}

// Attr: [inline]
inline u8 strconv__byte_to_lower(u8 c) {
	return (c | 32);
}

_result_u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	multi_return_u64_int mr_772 = strconv__common_parse_uint2(s, _base, _bit_size);
	u64 result = mr_772.arg0;
	int err = mr_772.arg1;
	if (err != 0 && (error_on_non_digit || error_on_high_digit)) {
		switch (err) {
			case -1: {
					return (_result_u64){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("common_parse_uint: wrong base "), 0xfe07, {.d_i32 = _base}}, {_SLIT(" for "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			case -2: {
					return (_result_u64){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("common_parse_uint: wrong bit size "), 0xfe07, {.d_i32 = _bit_size}}, {_SLIT(" for "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			case -3: {
					return (_result_u64){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("common_parse_uint: integer overflow "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			default: {
					return (_result_u64){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("common_parse_uint: syntax error "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		
	}
	_result_u64 _t5;
	_result_ok(&(u64[]) { result }, (_result*)(&_t5), sizeof(u64));
	return _t5;
}

// Attr: [direct_array_access]
multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size) {
	if ((s).len == 0) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
	}
	int bit_size = _bit_size;
	int base = _base;
	int start_index = 0;
	if (base == 0) {
		base = 10;
		if (s.str[ 0] == '0') {
			u8 ch = (s.str[ 1] | 32);
			if (s.len >= 3) {
				if (ch == 'b') {
					base = 2;
					start_index += 2;
				} else if (ch == 'o') {
					base = 8;
					start_index += 2;
				} else if (ch == 'x') {
					base = 16;
					start_index += 2;
				}
				if (s.str[ start_index] == '_') {
					start_index++;
				}
			} else if (s.len >= 2 && (s.str[ 1] >= '0' && s.str[ 1] <= '9')) {
				base = 10;
				start_index++;
			} else {
				base = 8;
				start_index++;
			}
		}
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	} else if (bit_size < 0 || bit_size > 64) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=-2};
	}
	u64 cutoff = (u64)((u64)(_const_strconv__max_u64 / ((u64)(base))) + ((u64)(1U)));
	u64 max_val = (bit_size == 64 ? (_const_strconv__max_u64) : ((u64)(((((u64)(1U)) << ((u64)(bit_size)))) - ((u64)(1U)))));
	int basem1 = (int)(base - 1);
	u64 n = ((u64)(0U));
	for (int i = start_index; i < s.len; ++i) {
		u8 c = s.str[ i];
		if (c == '_') {
			if (i == start_index || i >= ((int)(s.len - 1))) {
				return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
			}
			if (s.str[ (int)(i - 1)] == '_' || s.str[ (int)(i + 1)] == '_') {
				return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
			}
			continue;
		}
		int sub_count = 0;
		c -= 48;
		if (c >= 17) {
			sub_count++;
			c -= 7;
			if (c >= 42) {
				sub_count++;
				c -= 32;
			}
		}
		if (c > basem1 || (sub_count == 0 && c > 9)) {
			return (multi_return_u64_int){.arg0=n, .arg1=(int)(i + 1)};
		}
		if (n >= cutoff) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n *= ((u64)(base));
		u64 n1 = (u64)(n + ((u64)(c)));
		if (n1 < n || n1 > max_val) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n = n1;
	}
	return (multi_return_u64_int){.arg0=n, .arg1=0};
}

_result_u64 strconv__parse_uint(string s, int _base, int _bit_size) {
	_result_u64 _t1 = strconv__common_parse_uint(s, _base, _bit_size, true, true);
	return _t1;
}

// Attr: [direct_array_access]
_result_i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	if ((_s).len == 0) {
		_result_i64 _t1;
		_result_ok(&(i64[]) { ((i64)(0)) }, (_result*)(&_t1), sizeof(i64));
		return _t1;
	}
	int bit_size = _bit_size;
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	}
	string s = _s;
	bool neg = false;
	if (s.str[ 0] == '+') {
		{ // Unsafe block
			s = tos(s.str + 1, (int)(s.len - 1));
		}
	} else if (s.str[ 0] == '-') {
		neg = true;
		{ // Unsafe block
			s = tos(s.str + 1, (int)(s.len - 1));
		}
	}
	_result_u64 _t2 = strconv__common_parse_uint(s, base, bit_size, error_on_non_digit, error_on_high_digit);
	if (_t2.is_error) {
		_result_i64 _t3;
		memcpy(&_t3, &_t2, sizeof(_result));
		return _t3;
	}
	
 	u64 un =  (*(u64*)_t2.data);
	if (un == 0U) {
		_result_i64 _t4;
		_result_ok(&(i64[]) { ((i64)(0)) }, (_result*)(&_t4), sizeof(i64));
		return _t4;
	}
	u64 cutoff = (((u64)(1U)) << ((u64)((int)(bit_size - 1))));
	if (!neg && un >= cutoff) {
		_result_i64 _t5;
		_result_ok(&(i64[]) { ((i64)((u64)(cutoff - ((u64)(1U))))) }, (_result*)(&_t5), sizeof(i64));
		return _t5;
	}
	if (neg && un > cutoff) {
		_result_i64 _t6;
		_result_ok(&(i64[]) { -((i64)(cutoff)) }, (_result*)(&_t6), sizeof(i64));
		return _t6;
	}
	_result_i64 _t8; /* if prepend */
	if (neg) {
		_result_ok(&(i64[]) { -((i64)(un)) }, (_result*)(&_t8), sizeof(i64));
	} else {
		_result_ok(&(i64[]) { ((i64)(un)) }, (_result*)(&_t8), sizeof(i64));
	}
	return  _t8;
}

_result_i64 strconv__parse_int(string _s, int base, int _bit_size) {
	_result_i64 _t1 = strconv__common_parse_int(_s, base, _bit_size, true, true);
	return _t1;
}

// Attr: [direct_array_access]
_result_int strconv__atoi(string s) {
	if ((s).len == 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("strconv.atoi: parsing \"\": invalid syntax")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if ((_const_strconv__int_size == 32 && (0 < s.len && s.len < 10)) || (_const_strconv__int_size == 64 && (0 < s.len && s.len < 19))) {
		int start_idx = 0;
		if (s.str[ 0] == '-' || s.str[ 0] == '+') {
			start_idx++;
			if ((int)(s.len - start_idx) < 1) {
				return (_result_int){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("strconv.atoi: parsing \""), 0xfe10, {.d_s = s}}, {_SLIT("\": invalid syntax"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		int n = 0;
		for (int i = start_idx; i < s.len; ++i) {
			rune ch = (rune)(s.str[ i] - '0');
			if (ch > 9) {
				return (_result_int){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("strconv.atoi: parsing \""), 0xfe10, {.d_s = s}}, {_SLIT("\": invalid syntax"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			n = (int)((int)(n * 10) + ((int)(ch)));
		}
		_result_int _t5; /* if prepend */
		if (s.str[ 0] == '-') {
			_result_ok(&(int[]) { -n }, (_result*)(&_t5), sizeof(int));
		} else {
			_result_ok(&(int[]) { n }, (_result*)(&_t5), sizeof(int));
		}
		return  _t5;
	}
	_result_i64 _t6 = strconv__parse_int(s, 10, 0);
	if (_t6.is_error) {
		_result_int _t7;
		memcpy(&_t7, &_t6, sizeof(_result));
		return _t7;
	}
	
 	i64 int64 =  (*(i64*)_t6.data);
	_result_int _t8;
	_result_ok(&(int[]) { ((int)(int64)) }, (_result*)(&_t8), sizeof(int));
	return _t8;
}

// Attr: [direct_array_access]
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = (int)(i_n_digit + 1);
	int pad_digit = (int)(i_pad_digit + 1);
	u32 out = d.m;
	int out_len = strconv__dec_digits(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = (int)(pad_digit - out_len);
	}
	Array_u8 buf = __new_array_with_default_noscan(((int)((int)((int)((int)(out_len + 5) + 1) + 1))), 0, sizeof(u8), 0);
	int i = 0;
	if (neg) {
		if (buf.data != 0) {
			((u8*)buf.data)[i] = '-';
		}
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (u32)(_const_strconv__ten_pow_table_32[(int)((int)(out_len - n_digit) - 1)] * 5U);
		out /= _const_strconv__ten_pow_table_32[(int)(out_len - n_digit)];
		out_len = n_digit;
	}
	int y = (int)(i + out_len);
	int x = 0;
	for (;;) {
		if (!(x < ((int)((int)(out_len - disp) - 1)))) break;
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u32)(out % 10U))));
		out /= 10U;
		i++;
		x++;
	}
	if (i_n_digit == 0) {
		{ // Unsafe block
			((u8*)buf.data)[i] = 0;
			return tos(((u8*)(&((u8*)buf.data)[0])), i);
		}
	}
	if (out_len >= 1) {
		((u8*)buf.data)[(int)(y - x)] = '.';
		x++;
		i++;
	}
	if ((int)(y - x) >= 0) {
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u32)(out % 10U))));
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		((u8*)buf.data)[i] = '0';
		i++;
		fw_zeros--;
	}
	((u8*)buf.data)[i] = 'e';
	i++;
	int exp = (int)((int)(d.e + out_len_original) - 1);
	if (exp < 0) {
		((u8*)buf.data)[i] = '-';
		i++;
		exp = -exp;
	} else {
		((u8*)buf.data)[i] = '+';
		i++;
	}
	int d1 = (int)(exp % 10);
	int d0 = (int)(exp / 10);
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d0)));
	i++;
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d1)));
	i++;
	((u8*)buf.data)[i] = 0;
	return tos(((u8*)(&((u8*)buf.data)[0])), i);
}

VV_LOCAL_SYMBOL multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp) {
	strconv__Dec32 d = ((strconv__Dec32){.m = 0,.e = 0,});
	u32 e = (u32)(exp - _const_strconv__bias32);
	if (e > _const_strconv__mantbits32) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	u32 shift = (u32)(_const_strconv__mantbits32 - e);
	u32 mant = (i_mant | 0x00800000U);
	d.m = (mant >> shift);
	if (((d.m << shift)) != mant) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!(((u32)(d.m % 10U)) == 0U)) break;
		d.m /= 10U;
		d.e++;
	}
	return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=true};
}

VV_LOCAL_SYMBOL strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp) {
	int e2 = 0;
	u32 m2 = ((u32)(0U));
	if (exp == 0U) {
		e2 = (int)((int)((int_literal)(1 - _const_strconv__bias32) - ((int)(_const_strconv__mantbits32))) - 2);
		m2 = mant;
	} else {
		e2 = (int)((int)((int)(((int)(exp)) - _const_strconv__bias32) - ((int)(_const_strconv__mantbits32))) - 2);
		m2 = (((((u32)(1U)) << _const_strconv__mantbits32)) | mant);
	}
	bool even = ((m2 & 1U)) == 0U;
	bool accept_bounds = even;
	u32 mv = ((u32)((u32)(4 * m2)));
	u32 mp = ((u32)((u32)((u32)(4 * m2) + 2U)));
	u32 mm_shift = strconv__bool_to_u32(mant != 0U || exp <= 1U);
	u32 mm = ((u32)((u32)((u32)((u32)(4 * m2) - 1U) - mm_shift)));
	u32 vr = ((u32)(0U));
	u32 vp = ((u32)(0U));
	u32 vm = ((u32)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	u8 last_removed_digit = ((u8)(0));
	if (e2 >= 0) {
		u32 q = strconv__log10_pow2(e2);
		e10 = ((int)(q));
		int k = (int)((int)(_const_strconv__pow5_inv_num_bits_32 + strconv__pow5_bits(((int)(q)))) - 1);
		int i = (int)((int)(-e2 + ((int)(q))) + k);
		vr = strconv__mul_pow5_invdiv_pow2(mv, q, i);
		vp = strconv__mul_pow5_invdiv_pow2(mp, q, i);
		vm = strconv__mul_pow5_invdiv_pow2(mm, q, i);
		if (q != 0U && (u32)(((u32)(vp - 1U)) / 10U) <= (u32)(vm / 10U)) {
			int l = (int)((int)(_const_strconv__pow5_inv_num_bits_32 + strconv__pow5_bits(((int)((u32)(q - 1U))))) - 1);
			last_removed_digit = ((u8)((u32)(strconv__mul_pow5_invdiv_pow2(mv, (u32)(q - 1U), (int)((int)(-e2 + ((int)((u32)(q - 1U)))) + l)) % 10U)));
		}
		if (q <= 9U) {
			if ((u32)(mv % 5U) == 0U) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mm, q);
			} else if (strconv__multiple_of_power_of_five_32(mp, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__log10_pow5(-e2);
		e10 = (int)(((int)(q)) + e2);
		int i = (int)(-e2 - ((int)(q)));
		int k = (int)(strconv__pow5_bits(i) - _const_strconv__pow5_num_bits_32);
		int j = (int)(((int)(q)) - k);
		vr = strconv__mul_pow5_div_pow2(mv, ((u32)(i)), j);
		vp = strconv__mul_pow5_div_pow2(mp, ((u32)(i)), j);
		vm = strconv__mul_pow5_div_pow2(mm, ((u32)(i)), j);
		if (q != 0U && ((u32)(((u32)(vp - 1U)) / 10U)) <= (u32)(vm / 10U)) {
			j = (int)((int)(((int)(q)) - 1) - ((int)(strconv__pow5_bits((int)(i + 1)) - _const_strconv__pow5_num_bits_32)));
			last_removed_digit = ((u8)((u32)(strconv__mul_pow5_div_pow2(mv, ((u32)((int)(i + 1))), j) % 10U)));
		}
		if (q <= 1U) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = mm_shift == 1U;
			} else {
				vp--;
			}
		} else if (q < 31U) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_32(mv, (u32)(q - 1U));
		}
	}
	int removed = 0;
	u32 out = ((u32)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			if (!((u32)(vp / 10U) > (u32)(vm / 10U))) break;
			vm_is_trailing_zeros = vm_is_trailing_zeros && ((u32)(vm % 10U)) == 0U;
			vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
			last_removed_digit = ((u8)((u32)(vr % 10U)));
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				if (!((u32)(vm % 10U) == 0U)) break;
				vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
				last_removed_digit = ((u8)((u32)(vr % 10U)));
				vr /= 10U;
				vp /= 10U;
				vm /= 10U;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && last_removed_digit == 5 && ((u32)(vr % 2U)) == 0U) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		for (;;) {
			if (!((u32)(vp / 10U) > (u32)(vm / 10U))) break;
			last_removed_digit = ((u8)((u32)(vr % 10U)));
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		out = (u32)(vr + strconv__bool_to_u32(vr == vm || last_removed_digit >= 5));
	}
	return ((strconv__Dec32){.m = out,.e = (int)(e10 + removed),});
}

string strconv__f32_to_str(f32 f, int n_digit) {
	strconv__Uf32 u1 = ((strconv__Uf32){0});
	u1.f = f;
	u32 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits32 + _const_strconv__expbits32)))) != 0U;
	u32 mant = (u & ((u32)(((((u32)(1U)) << _const_strconv__mantbits32)) - ((u32)(1U)))));
	u32 exp = (((u >> _const_strconv__mantbits32)) & ((u32)(((((u32)(1U)) << _const_strconv__expbits32)) - ((u32)(1U)))));
	if (exp == _const_strconv__maxexp32 || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec32_bool mr_8694 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_8694.arg0;
	bool ok = mr_8694.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, 0);
}

string strconv__f32_to_str_pad(f32 f, int n_digit) {
	strconv__Uf32 u1 = ((strconv__Uf32){0});
	u1.f = f;
	u32 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits32 + _const_strconv__expbits32)))) != 0U;
	u32 mant = (u & ((u32)(((((u32)(1U)) << _const_strconv__mantbits32)) - ((u32)(1U)))));
	u32 exp = (((u >> _const_strconv__mantbits32)) & ((u32)(((((u32)(1U)) << _const_strconv__expbits32)) - ((u32)(1U)))));
	if (exp == _const_strconv__maxexp32 || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec32_bool mr_9476 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_9476.arg0;
	bool ok = mr_9476.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, n_digit);
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = (int)(i_n_digit + 1);
	int pad_digit = (int)(i_pad_digit + 1);
	u64 out = d.m;
	int d_exp = d.e;
	int out_len = strconv__dec_digits(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = (int)(pad_digit - out_len);
	}
	Array_u8 buf = __new_array_with_default_noscan(((int)((int)((int)((int)(out_len + 6) + 1) + 1) + fw_zeros)), 0, sizeof(u8), 0);
	int i = 0;
	if (neg) {
		((u8*)buf.data)[i] = '-';
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (u64)(_const_strconv__ten_pow_table_64[(int)((int)(out_len - n_digit) - 1)] * 5U);
		out /= _const_strconv__ten_pow_table_64[(int)(out_len - n_digit)];
		if ((u64)(d.m / _const_strconv__ten_pow_table_64[(int)(out_len - n_digit)]) < out) {
			d_exp++;
			n_digit++;
		}
		out_len = n_digit;
	}
	int y = (int)(i + out_len);
	int x = 0;
	for (;;) {
		if (!(x < ((int)((int)(out_len - disp) - 1)))) break;
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u64)(out % 10U))));
		out /= 10U;
		i++;
		x++;
	}
	if (i_n_digit == 0) {
		{ // Unsafe block
			((u8*)buf.data)[i] = 0;
			return tos(((u8*)(&((u8*)buf.data)[0])), i);
		}
	}
	if (out_len >= 1) {
		((u8*)buf.data)[(int)(y - x)] = '.';
		x++;
		i++;
	}
	if ((int)(y - x) >= 0) {
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u64)(out % 10U))));
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		((u8*)buf.data)[i] = '0';
		i++;
		fw_zeros--;
	}
	((u8*)buf.data)[i] = 'e';
	i++;
	int exp = (int)((int)(d_exp + out_len_original) - 1);
	if (exp < 0) {
		((u8*)buf.data)[i] = '-';
		i++;
		exp = -exp;
	} else {
		((u8*)buf.data)[i] = '+';
		i++;
	}
	int d2 = (int)(exp % 10);
	exp /= 10;
	int d1 = (int)(exp % 10);
	int d0 = (int)(exp / 10);
	if (d0 > 0) {
		((u8*)buf.data)[i] = (rune)('0' + ((u8)(d0)));
		i++;
	}
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d1)));
	i++;
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d2)));
	i++;
	((u8*)buf.data)[i] = 0;
	return tos(((u8*)(&((u8*)buf.data)[0])), i);
}

VV_LOCAL_SYMBOL multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp) {
	strconv__Dec64 d = ((strconv__Dec64){.m = 0,.e = 0,});
	u64 e = (u64)(exp - _const_strconv__bias64);
	if (e > _const_strconv__mantbits64) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	u64 shift = (u64)(_const_strconv__mantbits64 - e);
	u64 mant = (i_mant | ((u64)(0x0010000000000000U)));
	d.m = (mant >> shift);
	if (((d.m << shift)) != mant) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!(((u64)(d.m % 10U)) == 0U)) break;
		d.m /= 10U;
		d.e++;
	}
	return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=true};
}

VV_LOCAL_SYMBOL strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp) {
	int e2 = 0;
	u64 m2 = ((u64)(0U));
	if (exp == 0U) {
		e2 = (int)((int)((int_literal)(1 - _const_strconv__bias64) - ((int)(_const_strconv__mantbits64))) - 2);
		m2 = mant;
	} else {
		e2 = (int)((int)((int)(((int)(exp)) - _const_strconv__bias64) - ((int)(_const_strconv__mantbits64))) - 2);
		m2 = (((((u64)(1U)) << _const_strconv__mantbits64)) | mant);
	}
	bool even = ((m2 & 1U)) == 0U;
	bool accept_bounds = even;
	u64 mv = ((u64)((u64)(4 * m2)));
	u64 mm_shift = strconv__bool_to_u64(mant != 0U || exp <= 1U);
	u64 vr = ((u64)(0U));
	u64 vp = ((u64)(0U));
	u64 vm = ((u64)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	if (e2 >= 0) {
		u32 q = (u32)(strconv__log10_pow2(e2) - strconv__bool_to_u32(e2 > 3));
		e10 = ((int)(q));
		int k = (int)((int)(_const_strconv__pow5_inv_num_bits_64 + strconv__pow5_bits(((int)(q)))) - 1);
		int i = (int)((int)(-e2 + ((int)(q))) + k);
		strconv__Uint128 mul = *(((strconv__Uint128*)(&_const_strconv__pow5_inv_split_64_x[v_fixed_index((u32)(q * 2U), 584)])));
		vr = strconv__mul_shift_64((u64)(((u64)(4U)) * m2), mul, i);
		vp = strconv__mul_shift_64((u64)((u64)(((u64)(4U)) * m2) + ((u64)(2U))), mul, i);
		vm = strconv__mul_shift_64((u64)((u64)((u64)(((u64)(4U)) * m2) - ((u64)(1U))) - mm_shift), mul, i);
		if (q <= 21U) {
			if ((u64)(mv % 5U) == 0U) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_64(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_64((u64)((u64)(mv - 1U) - mm_shift), q);
			} else if (strconv__multiple_of_power_of_five_64((u64)(mv + 2U), q)) {
				vp--;
			}
		}
	} else {
		u32 q = (u32)(strconv__log10_pow5(-e2) - strconv__bool_to_u32(-e2 > 1));
		e10 = (int)(((int)(q)) + e2);
		int i = (int)(-e2 - ((int)(q)));
		int k = (int)(strconv__pow5_bits(i) - _const_strconv__pow5_num_bits_64);
		int j = (int)(((int)(q)) - k);
		strconv__Uint128 mul = *(((strconv__Uint128*)(&_const_strconv__pow5_split_64_x[v_fixed_index((int)(i * 2), 652)])));
		vr = strconv__mul_shift_64((u64)(((u64)(4U)) * m2), mul, j);
		vp = strconv__mul_shift_64((u64)((u64)(((u64)(4U)) * m2) + ((u64)(2U))), mul, j);
		vm = strconv__mul_shift_64((u64)((u64)((u64)(((u64)(4U)) * m2) - ((u64)(1U))) - mm_shift), mul, j);
		if (q <= 1U) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = (mm_shift == 1U);
			} else {
				vp--;
			}
		} else if (q < 63U) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_64(mv, (u32)(q - 1U));
		}
	}
	int removed = 0;
	u8 last_removed_digit = ((u8)(0));
	u64 out = ((u64)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			u64 vp_div_10 = (u64)(vp / 10U);
			u64 vm_div_10 = (u64)(vm / 10U);
			if (vp_div_10 <= vm_div_10) {
				break;
			}
			u64 vm_mod_10 = (u64)(vm % 10U);
			u64 vr_div_10 = (u64)(vr / 10U);
			u64 vr_mod_10 = (u64)(vr % 10U);
			vm_is_trailing_zeros = vm_is_trailing_zeros && vm_mod_10 == 0U;
			vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
			last_removed_digit = ((u8)(vr_mod_10));
			vr = vr_div_10;
			vp = vp_div_10;
			vm = vm_div_10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				u64 vm_div_10 = (u64)(vm / 10U);
				u64 vm_mod_10 = (u64)(vm % 10U);
				if (vm_mod_10 != 0U) {
					break;
				}
				u64 vp_div_10 = (u64)(vp / 10U);
				u64 vr_div_10 = (u64)(vr / 10U);
				u64 vr_mod_10 = (u64)(vr % 10U);
				vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
				last_removed_digit = ((u8)(vr_mod_10));
				vr = vr_div_10;
				vp = vp_div_10;
				vm = vm_div_10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && last_removed_digit == 5 && ((u64)(vr % 2U)) == 0U) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		bool round_up = false;
		for (;;) {
			if (!((u64)(vp / 100U) > (u64)(vm / 100U))) break;
			round_up = ((u64)(vr % 100U)) >= 50U;
			vr /= 100U;
			vp /= 100U;
			vm /= 100U;
			removed += 2;
		}
		for (;;) {
			if (!((u64)(vp / 10U) > (u64)(vm / 10U))) break;
			round_up = ((u64)(vr % 10U)) >= 5U;
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		out = (u64)(vr + strconv__bool_to_u64(vr == vm || round_up));
	}
	return ((strconv__Dec64){.m = out,.e = (int)(e10 + removed),});
}

string strconv__f64_to_str(f64 f, int n_digit) {
	strconv__Uf64 u1 = ((strconv__Uf64){0});
	u1.f = f;
	u64 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits64 + _const_strconv__expbits64)))) != 0U;
	u64 mant = (u & ((u64)(((((u64)(1U)) << _const_strconv__mantbits64)) - ((u64)(1U)))));
	u64 exp = (((u >> _const_strconv__mantbits64)) & ((u64)(((((u64)(1U)) << _const_strconv__expbits64)) - ((u64)(1U)))));
	if (exp == _const_strconv__maxexp64 || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec64_bool mr_9357 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_9357.arg0;
	bool ok = mr_9357.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, 0);
}

string strconv__f64_to_str_pad(f64 f, int n_digit) {
	strconv__Uf64 u1 = ((strconv__Uf64){0});
	u1.f = f;
	u64 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits64 + _const_strconv__expbits64)))) != 0U;
	u64 mant = (u & ((u64)(((((u64)(1U)) << _const_strconv__mantbits64)) - ((u64)(1U)))));
	u64 exp = (((u >> _const_strconv__mantbits64)) & ((u64)(((((u64)(1U)) << _const_strconv__expbits64)) - ((u64)(1U)))));
	if (exp == _const_strconv__maxexp64 || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec64_bool mr_10128 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_10128.arg0;
	bool ok = mr_10128.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, n_digit);
}

// Attr: [manualfree]
string strconv__format_str(string s, strconv__BF_param p) {
	bool strconv__format_str_defer_0 = false;
	strings__Builder res;
	if (p.len0 <= 0) {
		return string_clone(s);
	}
	int dif = (int)(p.len0 - utf8_str_visible_length(s));
	if (dif <= 0) {
		return string_clone(s);
	}
	res = strings__new_builder((int)(s.len + dif));
	strconv__format_str_defer_0 = true;
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	strings__Builder_write_string(&res, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	string _t3 = strings__Builder_str(&res);
		// Defer begin
		if (strconv__format_str_defer_0) {
			strings__Builder_free(&res);
		}
		// Defer end
	return _t3;
}

void strconv__format_str_sb(string s, strconv__BF_param p, strings__Builder* sb) {
	if (p.len0 <= 0) {
		strings__Builder_write_string(sb, s);
		return;
	}
	int dif = (int)(p.len0 - utf8_str_visible_length(s));
	if (dif <= 0) {
		strings__Builder_write_string(sb, s);
		return;
	}
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(sb, p.pad_ch);
		}
	}
	strings__Builder_write_string(sb, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(sb, p.pad_ch);
		}
	}
}

// Attr: [direct_array_access]
void strconv__format_dec_sb(u64 d, strconv__BF_param p, strings__Builder* res) {
	int n_char = strconv__dec_digits(d);
	int sign_len = (!p.positive || p.sign_flag ? (1) : (0));
	int number_len = (int)(sign_len + n_char);
	int dif = (int)(p.len0 - number_len);
	bool sign_written = false;
	if (p.align == strconv__Align_text__right) {
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(res, '+');
					sign_written = true;
				}
			} else {
				strings__Builder_write_u8(res, '-');
				sign_written = true;
			}
		}
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(res, p.pad_ch);
		}
	}
	if (!sign_written) {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_u8(res, '+');
			}
		} else {
			strings__Builder_write_u8(res, '-');
		}
	}
	Array_fixed_u8_32 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i = 20;
	u64 n = d;
	u64 d_i = ((u64)(0U));
	if (n > 0U) {
		for (;;) {
			if (!(n > 0U)) break;
			u64 n1 = (u64)(n / 100U);
			d_i = (((u64)(n - ((u64)(n1 * 100U)))) << 1U);
			n = n1;
			{ // Unsafe block
				buf[i] = _const_strconv__digit_pairs.str[d_i];
			}
			i--;
			d_i++;
			{ // Unsafe block
				buf[i] = _const_strconv__digit_pairs.str[d_i];
			}
			i--;
		}
		i++;
		if (d_i < 20U) {
			i++;
		}
		strings__Builder_write_ptr(res, &buf[i], n_char);
	} else {
		strings__Builder_write_u8(res, '0');
	}
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(res, p.pad_ch);
		}
	}
	return;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__f64_to_str_lnd1(f64 f, int dec_digit) {
	{ // Unsafe block
		string s = strconv__f64_to_str((f64)(f + _const_strconv__dec_round[dec_digit]), 18);
		if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
			return s;
		}
		bool m_sgn_flag = false;
		int sgn = 1;
		Array_fixed_u8_26 b = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int d_pos = 1;
		int i = 0;
		int i1 = 0;
		int exp = 0;
		int exp_sgn = 1;
		int dot_res_sp = -1;
		for (int _t2 = 0; _t2 < s.len; ++_t2) {
			u8 c = s.str[_t2];

			if (c == ('-')) {
				sgn = -1;
				i++;
			}
			else if (c == ('+')) {
				sgn = 1;
				i++;
			}
			else if ((c >= '0' && c <= '9')) {
				b[i1] = c;
				i1++;
				i++;
			}
			else if (c == ('.')) {
				if (sgn > 0) {
					d_pos = i;
				} else {
					d_pos = (int)(i - 1);
				}
				i++;
			}
			else if (c == ('e')) {
				i++;
				break;
			}
			else {
				string_free(&s);
				return _SLIT("[Float conversion error!!]");
			}
		}
		b[i1] = 0;
		if (s.str[ i] == '-') {
			exp_sgn = -1;
			i++;
		} else if (s.str[ i] == '+') {
			exp_sgn = 1;
			i++;
		}
		int c = i;
		for (;;) {
			if (!(c < s.len)) break;
			exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
			c++;
		}
		Array_u8 res = __new_array_with_default_noscan((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
		int r_i = 0;
		string_free(&s);
		if (sgn == 1) {
			if (m_sgn_flag) {
				((u8*)res.data)[r_i] = '+';
				r_i++;
			}
		} else {
			((u8*)res.data)[r_i] = '-';
			r_i++;
		}
		i = 0;
		if (exp_sgn >= 0) {
			for (;;) {
				if (!(b[i] != 0)) break;
				((u8*)res.data)[r_i] = b[i];
				r_i++;
				i++;
				if (i >= d_pos && exp >= 0) {
					if (exp == 0) {
						dot_res_sp = r_i;
						((u8*)res.data)[r_i] = '.';
						r_i++;
					}
					exp--;
				}
			}
			for (;;) {
				if (!(exp >= 0)) break;
				((u8*)res.data)[r_i] = '0';
				r_i++;
				exp--;
			}
		} else {
			bool dot_p = true;
			for (;;) {
				if (!(exp > 0)) break;
				((u8*)res.data)[r_i] = '0';
				r_i++;
				exp--;
				if (dot_p) {
					dot_res_sp = r_i;
					((u8*)res.data)[r_i] = '.';
					r_i++;
					dot_p = false;
				}
			}
			for (;;) {
				if (!(b[i] != 0)) break;
				((u8*)res.data)[r_i] = b[i];
				r_i++;
				i++;
			}
		}
		if (dec_digit <= 0) {
			if (dot_res_sp < 0) {
				dot_res_sp = (int)(i + 1);
			}
			string tmp_res = string_clone(tos(res.data, dot_res_sp));
			array_free(&res);
			return tmp_res;
		}
		if (dot_res_sp >= 0) {
			r_i = (int)((int)(dot_res_sp + dec_digit) + 1);
			((u8*)res.data)[r_i] = 0;
			for (int c1 = 1; c1 < (int)(dec_digit + 1); ++c1) {
				if (((u8*)res.data)[(int)(r_i - c1)] == 0) {
					((u8*)res.data)[(int)(r_i - c1)] = '0';
				}
			}
			string tmp_res = string_clone(tos(res.data, r_i));
			array_free(&res);
			return tmp_res;
		} else {
			if (dec_digit > 0) {
				int c1 = 0;
				((u8*)res.data)[r_i] = '.';
				r_i++;
				for (;;) {
					if (!(c1 < dec_digit)) break;
					((u8*)res.data)[r_i] = '0';
					r_i++;
					c1++;
				}
				((u8*)res.data)[r_i] = 0;
			}
			string tmp_res = string_clone(tos(res.data, r_i));
			array_free(&res);
			return tmp_res;
		}
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_fl(f64 f, strconv__BF_param p) {
	{ // Unsafe block
		string fs = strconv__f64_to_str_lnd1((f >= ((f64)(0.0)) ? (f) : (-f)), p.len1);
		if (fs.str[ 0] == '[') {
			return fs;
		}
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros(fs);
			string_free(&tmp);
		}
		Array_fixed_u8_32 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		Array_fixed_u8_32 out = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int buf_i = 0;
		int out_i = 0;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					out[out_i] = '+';
					out_i++;
					sign_len_diff = -1;
				}
			} else {
				out[out_i] = '-';
				out_i++;
				sign_len_diff = -1;
			}
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					buf[buf_i] = '+';
					buf_i++;
				}
			} else {
				buf[buf_i] = '-';
				buf_i++;
			}
		}
		vmemcpy(&buf[buf_i], fs.str, fs.len);
		buf_i += fs.len;
		int dif = (int)((int)(p.len0 - buf_i) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		vmemcpy(&out[out_i], &buf[0], buf_i);
		out_i += buf_i;
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		out[out_i] = 0;
		string tmp = fs;
		fs = tos_clone(&out[0]);
		string_free(&tmp);
		return fs;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_es(f64 f, strconv__BF_param p) {
	{ // Unsafe block
		string fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros(fs);
			string_free(&tmp);
		}
		Array_fixed_u8_32 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		Array_fixed_u8_32 out = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int buf_i = 0;
		int out_i = 0;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					out[out_i] = '+';
					out_i++;
					sign_len_diff = -1;
				}
			} else {
				out[out_i] = '-';
				out_i++;
				sign_len_diff = -1;
			}
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					buf[buf_i] = '+';
					buf_i++;
				}
			} else {
				buf[buf_i] = '-';
				buf_i++;
			}
		}
		vmemcpy(&buf[buf_i], fs.str, fs.len);
		buf_i += fs.len;
		int dif = (int)((int)(p.len0 - buf_i) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		vmemcpy(&out[out_i], &buf[0], buf_i);
		out_i += buf_i;
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		out[out_i] = 0;
		string tmp = fs;
		fs = tos_clone(&out[0]);
		string_free(&tmp);
		return fs;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
string strconv__remove_tail_zeros(string s) {
	{ // Unsafe block
		u8* buf = malloc_noscan((int)(s.len + 1));
		int i_d = 0;
		int i_s = 0;
		for (;;) {
			if (!(i_s < s.len && !(s.str[ i_s] == '-' || s.str[ i_s] == '+') && (s.str[ i_s] > '9' || s.str[ i_s] < '0'))) break;
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		if (i_s < s.len && (s.str[ i_s] == '-' || s.str[ i_s] == '+')) {
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		for (;;) {
			if (!(i_s < s.len && s.str[ i_s] >= '0' && s.str[ i_s] <= '9')) break;
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		if (i_s < s.len && s.str[ i_s] == '.') {
			int i_s1 = (int)(i_s + 1);
			int sum = 0;
			for (;;) {
				if (!(i_s1 < s.len && s.str[ i_s1] >= '0' && s.str[ i_s1] <= '9')) break;
				sum += (u8)(s.str[ i_s1] - ((u8)('0')));
				i_s1++;
			}
			if (sum > 0) {
				for (int c_i = i_s; c_i < i_s1; ++c_i) {
					buf[i_d] = s.str[ c_i];
					i_d++;
				}
			}
			i_s = i_s1;
		}
		if (i_s < s.len && s.str[ i_s] != '.') {
			for (;;) {
				buf[i_d] = s.str[ i_s];
				i_s++;
				i_d++;
				if (i_s >= s.len) {
					break;
				}
			}
		}
		buf[i_d] = 0;
		return tos(buf, i_d);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string strconv__ftoa_64(f64 f) {
	return strconv__f64_to_str(f, 17);
}

// Attr: [inline]
inline string strconv__ftoa_long_64(f64 f) {
	return strconv__f64_to_str_l(f);
}

// Attr: [inline]
inline string strconv__ftoa_32(f32 f) {
	return strconv__f32_to_str(f, 8);
}

// Attr: [inline]
inline string strconv__ftoa_long_32(f32 f) {
	return strconv__f32_to_str_l(f);
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_int(i64 n, int radix) {
	{ // Unsafe block
		if (radix < 2 || radix > 36) {
			_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid radix: "), 0xfe07, {.d_i32 = radix}}, {_SLIT(" . It should be => 2 and <= 36"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		if (n == 0) {
			return _SLIT("0");
		}
		i64 n_copy = n;
		bool have_minus = false;
		if (n < 0) {
			have_minus = true;
			n_copy = -n_copy;
		}
		string res = _SLIT("");
		for (;;) {
			if (!(n_copy != 0)) break;
			string tmp_0 = res;
			int bdx = ((int)((i64)(n_copy % radix)));
			string tmp_1 = u8_ascii_str(_const_strconv__base_digits.str[ bdx]);
			res = string__plus(tmp_1, res);
			string_free(&tmp_0);
			string_free(&tmp_1);
			n_copy /= radix;
		}
		if (have_minus) {
			string final_res = string__plus(_SLIT("-"), res);
			string_free(&res);
			return final_res;
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_uint(u64 n, int radix) {
	{ // Unsafe block
		if (radix < 2 || radix > 36) {
			_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid radix: "), 0xfe07, {.d_i32 = radix}}, {_SLIT(" . It should be => 2 and <= 36"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		if (n == 0U) {
			return _SLIT("0");
		}
		u64 n_copy = n;
		string res = _SLIT("");
		u64 uradix = ((u64)(radix));
		for (;;) {
			if (!(n_copy != 0U)) break;
			string tmp_0 = res;
			string tmp_1 = u8_ascii_str(_const_strconv__base_digits.str[ (u64)(n_copy % uradix)]);
			res = string__plus(tmp_1, res);
			string_free(&tmp_0);
			string_free(&tmp_1);
			n_copy /= uradix;
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
string strconv__f32_to_str_l(f32 f) {
	string s = strconv__f32_to_str(f, 6);
	string res = strconv__fxx_to_str_l_parse(s);
	string_free(&s);
	return res;
}

// Attr: [manualfree]
string strconv__f32_to_str_l_with_dot(f32 f) {
	string s = strconv__f32_to_str(f, 6);
	string res = strconv__fxx_to_str_l_parse_with_dot(s);
	string_free(&s);
	return res;
}

// Attr: [manualfree]
string strconv__f64_to_str_l(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	string res = strconv__fxx_to_str_l_parse(s);
	string_free(&s);
	return res;
}

// Attr: [manualfree]
string strconv__f64_to_str_l_with_dot(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	string res = strconv__fxx_to_str_l_parse_with_dot(s);
	string_free(&s);
	return res;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__fxx_to_str_l_parse(string s) {
	if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
		return string_clone(s);
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	Array_fixed_u8_26 b = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1] = c;
			i1++;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = (int)(i - 1);
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return _SLIT("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (s.str[ i] == '-') {
		exp_sgn = -1;
		i++;
	} else if (s.str[ i] == '+') {
		exp_sgn = 1;
		i++;
	}
	int c = i;
	for (;;) {
		if (!(c < s.len)) break;
		exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
		c++;
	}
	Array_u8 res = __new_array_with_default_noscan((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			((u8*)res.data)[r_i] = '+';
			r_i++;
		}
	} else {
		((u8*)res.data)[r_i] = '-';
		r_i++;
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					((u8*)res.data)[r_i] = '.';
					r_i++;
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
			if (dot_p) {
				((u8*)res.data)[r_i] = '.';
				r_i++;
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
		}
	}
	if (r_i > 1 && ((u8*)res.data)[(int)(r_i - 1)] == '.') {
		((u8*)res.data)[r_i] = '0';
		r_i++;
	} else if (!(Array_u8_contains(res, '.'))) {
		((u8*)res.data)[r_i] = '.';
		r_i++;
		((u8*)res.data)[r_i] = '0';
		r_i++;
	}
	((u8*)res.data)[r_i] = 0;
	return tos(res.data, r_i);
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__fxx_to_str_l_parse_with_dot(string s) {
	if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
		return string_clone(s);
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	Array_fixed_u8_26 b = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1] = c;
			i1++;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = (int)(i - 1);
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return _SLIT("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (s.str[ i] == '-') {
		exp_sgn = -1;
		i++;
	} else if (s.str[ i] == '+') {
		exp_sgn = 1;
		i++;
	}
	int c = i;
	for (;;) {
		if (!(c < s.len)) break;
		exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
		c++;
	}
	Array_u8 res = __new_array_with_default_noscan((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			((u8*)res.data)[r_i] = '+';
			r_i++;
		}
	} else {
		((u8*)res.data)[r_i] = '-';
		r_i++;
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					((u8*)res.data)[r_i] = '.';
					r_i++;
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
			if (dot_p) {
				((u8*)res.data)[r_i] = '.';
				r_i++;
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
		}
	}
	if (r_i > 1 && ((u8*)res.data)[(int)(r_i - 1)] == '.') {
		((u8*)res.data)[r_i] = '0';
		r_i++;
	} else if (!(Array_u8_contains(res, '.'))) {
		((u8*)res.data)[r_i] = '.';
		r_i++;
		((u8*)res.data)[r_i] = '0';
		r_i++;
	}
	((u8*)res.data)[r_i] = 0;
	return tos(res.data, r_i);
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL int strconv__bool_to_int(bool b) {
	if (b) {
		return 1;
	}
	return 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u32 strconv__bool_to_u32(bool b) {
	if (b) {
		return ((u32)(1U));
	}
	return ((u32)(0U));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 strconv__bool_to_u64(bool b) {
	if (b) {
		return ((u64)(1U));
	}
	return ((u64)(0U));
}

VV_LOCAL_SYMBOL string strconv__get_string_special(bool neg, bool expZero, bool mantZero) {
	if (!mantZero) {
		return _SLIT("nan");
	}
	if (!expZero) {
		if (neg) {
			return _SLIT("-inf");
		} else {
			return _SLIT("+inf");
		}
	}
	if (neg) {
		return _SLIT("-0e+00");
	}
	return _SLIT("0e+00");
}

VV_LOCAL_SYMBOL u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift) {
	multi_return_u64_u64 mr_750 = math__bits__mul_64(((u64)(m)), mul);
	u64 hi = mr_750.arg0;
	u64 lo = mr_750.arg1;
	u64 shifted_sum = (u64)(((lo >> ((u64)(ishift)))) + ((hi << ((u64)((int)(64 - ishift))))));
	;
	return ((u32)(shifted_sum));
}

VV_LOCAL_SYMBOL u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j) {
	return strconv__mul_shift_32(m, _const_strconv__pow5_inv_split_32[v_fixed_index(q, 31)], j);
}

VV_LOCAL_SYMBOL u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j) {
	return strconv__mul_shift_32(m, _const_strconv__pow5_split_32[v_fixed_index(i, 47)], j);
}

VV_LOCAL_SYMBOL u32 strconv__pow5_factor_32(u32 i_v) {
	u32 v = i_v;
	for (u32 n = ((u32)(0U)); true; n++) {
		u32 q = (u32)(v / 5U);
		u32 r = (u32)(v % 5U);
		if (r != 0U) {
			return n;
		}
		v = q;
	}
	return v;
}

VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_five_32(u32 v, u32 p) {
	return strconv__pow5_factor_32(v) >= p;
}

VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_two_32(u32 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_32(v))) >= p;
}

VV_LOCAL_SYMBOL u32 strconv__log10_pow2(int e) {
	;
	;
	return (((u32)(((u32)(e)) * 78913U)) >> 18U);
}

VV_LOCAL_SYMBOL u32 strconv__log10_pow5(int e) {
	;
	;
	return (((u32)(((u32)(e)) * 732923U)) >> 20U);
}

VV_LOCAL_SYMBOL int strconv__pow5_bits(int e) {
	;
	;
	return ((int)((u32)(((((u32)(((u32)(e)) * 1217359U)) >> 19U)) + 1U)));
}

VV_LOCAL_SYMBOL u64 strconv__shift_right_128(strconv__Uint128 v, int shift) {
	;
	return (((v.hi << ((u64)((int)(64 - shift))))) | ((v.lo >> ((u32)(shift)))));
}

VV_LOCAL_SYMBOL u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift) {
	multi_return_u64_u64 mr_3069 = math__bits__mul_64(m, mul.hi);
	u64 hihi = mr_3069.arg0;
	u64 hilo = mr_3069.arg1;
	multi_return_u64_u64 mr_3104 = math__bits__mul_64(m, mul.lo);
	u64 lohi = mr_3104.arg0;
	strconv__Uint128 sum = ((strconv__Uint128){.lo = (u64)(lohi + hilo),.hi = hihi,});
	if (sum.lo < lohi) {
		sum.hi++;
	}
	return strconv__shift_right_128(sum, (int)(shift - 64));
}

VV_LOCAL_SYMBOL u32 strconv__pow5_factor_64(u64 v_i) {
	u64 v = v_i;
	for (u32 n = ((u32)(0U)); true; n++) {
		u64 q = (u64)(v / 5U);
		u64 r = (u64)(v % 5U);
		if (r != 0U) {
			return n;
		}
		v = q;
	}
	return ((u32)(0U));
}

VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_five_64(u64 v, u32 p) {
	return strconv__pow5_factor_64(v) >= p;
}

VV_LOCAL_SYMBOL bool strconv__multiple_of_power_of_two_64(u64 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_64(v))) >= p;
}

int strconv__dec_digits(u64 n) {
	if (n <= 9999999999U) {
		if (n <= 99999U) {
			if (n <= 99U) {
				if (n <= 9U) {
					return 1;
				} else {
					return 2;
				}
			} else {
				if (n <= 999U) {
					return 3;
				} else {
					if (n <= 9999U) {
						return 4;
					} else {
						return 5;
					}
				}
			}
		} else {
			if (n <= 9999999U) {
				if (n <= 999999U) {
					return 6;
				} else {
					return 7;
				}
			} else {
				if (n <= 99999999U) {
					return 8;
				} else {
					if (n <= 999999999U) {
						return 9;
					}
					return 10;
				}
			}
		}
	} else {
		if (n <= 999999999999999U) {
			if (n <= 999999999999U) {
				if (n <= 99999999999U) {
					return 11;
				} else {
					return 12;
				}
			} else {
				if (n <= 9999999999999U) {
					return 13;
				} else {
					if (n <= 99999999999999U) {
						return 14;
					} else {
						return 15;
					}
				}
			}
		} else {
			if (n <= 99999999999999999U) {
				if (n <= 9999999999999999U) {
					return 16;
				} else {
					return 17;
				}
			} else {
				if (n <= 999999999999999999U) {
					return 18;
				} else {
					if (n <= 9999999999999999999U) {
						return 19;
					}
					return 20;
				}
			}
		}
	}
	return 0;
}

// Attr: [unsafe]
void strconv__v_printf(string str, Array_voidptr pt) {
	print(strconv__v_sprintf(str, pt));
}

// Attr: [direct_array_access]
// Attr: [manualfree]
// Attr: [unsafe]
string strconv__v_sprintf(string str, Array_voidptr pt) {
	bool strconv__v_sprintf_defer_0 = false;
	strings__Builder res;
	res = strings__new_builder((int)(pt.len * 16));
	strconv__v_sprintf_defer_0 = true;
	int i = 0;
	int p_index = 0;
	bool sign = false;
	strconv__Align_text align = strconv__Align_text__right;
	int len0 = -1;
	int len1 = -1;
	int def_len1 = 6;
	u8 pad_ch = ((u8)(' '));
	rune ch1 = '0';
	rune ch2 = '0';
	strconv__Char_parse_state status = strconv__Char_parse_state__norm_char;
	for (;;) {
		if (!(i < str.len)) break;
		if (status == strconv__Char_parse_state__reset_params) {
			sign = false;
			align = strconv__Align_text__right;
			len0 = -1;
			len1 = -1;
			pad_ch = ' ';
			status = strconv__Char_parse_state__norm_char;
			ch1 = '0';
			ch2 = '0';
			continue;
		}
		u8 ch = str.str[ i];
		if (ch != '%' && status == strconv__Char_parse_state__norm_char) {
			strings__Builder_write_u8(&res, ch);
			i++;
			continue;
		}
		if (ch == '%' && status == strconv__Char_parse_state__field_char) {
			status = strconv__Char_parse_state__norm_char;
			strings__Builder_write_u8(&res, ch);
			i++;
			continue;
		}
		if (ch == '%' && status == strconv__Char_parse_state__norm_char) {
			status = strconv__Char_parse_state__field_char;
			i++;
			continue;
		}
		if (ch == 'c' && status == strconv__Char_parse_state__field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			u8 d1 = *(((u8*)(((voidptr*)pt.data)[p_index])));
			strings__Builder_write_u8(&res, d1);
			status = strconv__Char_parse_state__reset_params;
			p_index++;
			i++;
			continue;
		}
		if (ch == 'p' && status == strconv__Char_parse_state__field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			strings__Builder_write_string(&res, _SLIT("0x"));
			strings__Builder_write_string(&res, ptr_str(((voidptr*)pt.data)[p_index]));
			status = strconv__Char_parse_state__reset_params;
			p_index++;
			i++;
			continue;
		}
		if (status == strconv__Char_parse_state__field_char) {
			rune fc_ch1 = '0';
			rune fc_ch2 = '0';
			if (((int)(i + 1)) < str.len) {
				fc_ch1 = str.str[ (int)(i + 1)];
				if (((int)(i + 2)) < str.len) {
					fc_ch2 = str.str[ (int)(i + 2)];
				}
			}
			if (ch == '+') {
				sign = true;
				i++;
				continue;
			} else if (ch == '-') {
				align = strconv__Align_text__left;
				i++;
				continue;
			} else if (ch == '0' || ch == ' ') {
				if (align == strconv__Align_text__right) {
					pad_ch = ch;
				}
				i++;
				continue;
			} else if (ch == '\'') {
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 >= '1' && fc_ch1 <= '9') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 == '*' && fc_ch2 == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				int len = *(((int*)(((voidptr*)pt.data)[p_index])));
				p_index++;
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = *(((string*)(((voidptr*)pt.data)[p_index])));
				s = string_substr(s, 0, len);
				p_index++;
				strings__Builder_write_string(&res, s);
				status = strconv__Char_parse_state__reset_params;
				i += 3;
				continue;
			}
			status = strconv__Char_parse_state__len_set_start;
			continue;
		}
		if (status == strconv__Char_parse_state__len_set_start) {
			if (ch >= '1' && ch <= '9') {
				len0 = ((int)((rune)(ch - '0')));
				status = strconv__Char_parse_state__len_set_in;
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__len_set_in) {
			if (ch >= '0' && ch <= '9') {
				len0 *= 10;
				len0 += ((int)((rune)(ch - '0')));
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_float) {
			if (ch >= '0' && ch <= '9') {
				len1 = ((int)((rune)(ch - '0')));
				status = strconv__Char_parse_state__check_float_in;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_float_in) {
			if (ch >= '0' && ch <= '9') {
				len1 *= 10;
				len1 += ((int)((rune)(ch - '0')));
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_type) {
			if (ch == 'l') {
				if (ch1 == '0') {
					ch1 = 'l';
					i++;
					continue;
				} else {
					ch2 = 'l';
					i++;
					continue;
				}
			} else if (ch == 'h') {
				if (ch1 == '0') {
					ch1 = 'h';
					i++;
					continue;
				} else {
					ch2 = 'h';
					i++;
					continue;
				}
			} else if (ch == 'd' || ch == 'i') {
				u64 d1 = ((u64)(0U));
				bool positive = true;

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						strconv__v_sprintf_panic(p_index, pt.len);
						i8 x = *(((i8*)(((voidptr*)pt.data)[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					} else {
						i16 x = *(((i16*)(((voidptr*)pt.data)[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					}
				}
				else if (ch1 == ('l')) {
					strconv__v_sprintf_panic(p_index, pt.len);
					i64 x = *(((i64*)(((voidptr*)pt.data)[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				}
				else {
					strconv__v_sprintf_panic(p_index, pt.len);
					int x = *(((int*)(((voidptr*)pt.data)[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				}
				string tmp = strconv__format_dec_old(d1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.align = align,
					.allign = strconv__Align_text__right,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				ch1 = '0';
				ch2 = '0';
				continue;
			} else if (ch == 'u') {
				u64 d1 = ((u64)(0U));
				bool positive = true;
				strconv__v_sprintf_panic(p_index, pt.len);

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						d1 = ((u64)(*(((u8*)(((voidptr*)pt.data)[p_index])))));
					} else {
						d1 = ((u64)(*(((u16*)(((voidptr*)pt.data)[p_index])))));
					}
				}
				else if (ch1 == ('l')) {
					d1 = ((u64)(*(((u64*)(((voidptr*)pt.data)[p_index])))));
				}
				else {
					d1 = ((u64)(*(((u32*)(((voidptr*)pt.data)[p_index])))));
				}
				string tmp = strconv__format_dec_old(d1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.align = align,
					.allign = strconv__Align_text__right,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'x' || ch == 'X') {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = _SLIT("");

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						i8 x = *(((i8*)(((voidptr*)pt.data)[p_index])));
						s = i8_hex(x);
					} else {
						i16 x = *(((i16*)(((voidptr*)pt.data)[p_index])));
						s = i16_hex(x);
					}
				}
				else if (ch1 == ('l')) {
					i64 x = *(((i64*)(((voidptr*)pt.data)[p_index])));
					s = i64_hex(x);
				}
				else {
					int x = *(((int*)(((voidptr*)pt.data)[p_index])));
					s = int_hex(x);
				}
				if (ch == 'X') {
					string tmp = s;
					s = string_to_upper(s);
					string_free(&tmp);
				}
				string tmp = strconv__format_str(s, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.align = align,
					.allign = strconv__Align_text__right,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				string_free(&s);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			}
			if (ch == 'f' || ch == 'F') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					len1 = (len1 >= 0 ? (len1) : (def_len1));
					string s = strconv__format_fl_old(((f64)(x)), ((strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.align = align,
						.allign = strconv__Align_text__right,
						.rm_tail_zero = 0,
					}));
					if (ch == 'F') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'e' || ch == 'E') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					len1 = (len1 >= 0 ? (len1) : (def_len1));
					string s = strconv__format_es_old(((f64)(x)), ((strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.align = align,
						.allign = strconv__Align_text__right,
						.rm_tail_zero = 0,
					}));
					if (ch == 'E') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'g' || ch == 'G') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					string s = _SLIT("");
					f64 tx = strconv__fabs(x);
					if (tx < ((f64)(999999.0)) && tx >= ((f64)(0.00001))) {
						len1 = (len1 >= 0 ? ((int)(len1 + 1)) : (def_len1));
						string tmp = s;
						s = strconv__format_fl_old(x, ((strconv__BF_param){
							.pad_ch = pad_ch,
							.len0 = len0,
							.len1 = len1,
							.positive = positive,
							.sign_flag = sign,
							.align = align,
							.allign = strconv__Align_text__right,
							.rm_tail_zero = true,
						}));
						string_free(&tmp);
					} else {
						len1 = (len1 >= 0 ? ((int)(len1 + 1)) : (def_len1));
						string tmp = s;
						s = strconv__format_es_old(x, ((strconv__BF_param){
							.pad_ch = pad_ch,
							.len0 = len0,
							.len1 = len1,
							.positive = positive,
							.sign_flag = sign,
							.align = align,
							.allign = strconv__Align_text__right,
							.rm_tail_zero = true,
						}));
						string_free(&tmp);
					}
					if (ch == 'G') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s1 = *(((string*)(((voidptr*)pt.data)[p_index])));
				pad_ch = ' ';
				string tmp = strconv__format_str(s1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.align = align,
					.allign = strconv__Align_text__right,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			}
		}
		status = strconv__Char_parse_state__reset_params;
		p_index++;
		i++;
	}
	if (p_index != pt.len) {
		_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = p_index}}, {_SLIT(" % conversion specifiers, but given "), 0xfe07, {.d_i32 = pt.len}}, {_SLIT(" args"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	string _t4 = strings__Builder_str(&res);
		// Defer begin
		if (strconv__v_sprintf_defer_0) {
			strings__Builder_free(&res);
		}
		// Defer end
	return _t4;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL void strconv__v_sprintf_panic(int idx, int len) {
	if (idx >= len) {
		_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = (int)(idx + 1)}}, {_SLIT(" % conversion specifiers, but given only "), 0xfe07, {.d_i32 = len}}, {_SLIT(" args"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
}

VV_LOCAL_SYMBOL f64 strconv__fabs(f64 x) {
	if (x < ((f64)(0.0))) {
		return -x;
	}
	return x;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string strconv__format_fl_old(f64 f, strconv__BF_param p) {
	bool strconv__format_fl_old_defer_0 = false;
	strings__Builder res;
	{ // Unsafe block
		string s = _SLIT("");
		string fs = strconv__f64_to_str_lnd1((f >= ((f64)(0.0)) ? (f) : (-f)), p.len1);
		if (fs.str[ 0] == '[') {
			string_free(&s);
			return fs;
		}
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros_old(fs);
			string_free(&tmp);
		}
		res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
		strconv__format_fl_old_defer_0 = true;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(&res, '+');
					sign_len_diff = -1;
				}
			} else {
				strings__Builder_write_u8(&res, '-');
				sign_len_diff = -1;
			}
			string tmp = s;
			s = string_clone(fs);
			string_free(&tmp);
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					string tmp = s;
					s = string__plus(_SLIT("+"), fs);
					string_free(&tmp);
				} else {
					string tmp = s;
					s = string_clone(fs);
					string_free(&tmp);
				}
			} else {
				string tmp = s;
				s = string__plus(_SLIT("-"), fs);
				string_free(&tmp);
			}
		}
		int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		strings__Builder_write_string(&res, s);
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		string_free(&s);
		string_free(&fs);
		string _t2 = strings__Builder_str(&res);
			// Defer begin
			if (strconv__format_fl_old_defer_0) {
				strings__Builder_free(&res);
			}
			// Defer end
		return _t2;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL string strconv__format_es_old(f64 f, strconv__BF_param p) {
	bool strconv__format_es_old_defer_0 = false;
	strings__Builder res;
	string fs;
	string s;
	{ // Unsafe block
		s = _SLIT("");
		fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros_old(fs);
			string_free(&tmp);
		}
		res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
		strconv__format_es_old_defer_0 = true;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(&res, '+');
					sign_len_diff = -1;
				}
			} else {
				strings__Builder_write_u8(&res, '-');
				sign_len_diff = -1;
			}
			string tmp = s;
			s = string_clone(fs);
			string_free(&tmp);
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					string tmp = s;
					s = string__plus(_SLIT("+"), fs);
					string_free(&tmp);
				} else {
					string tmp = s;
					s = string_clone(fs);
					string_free(&tmp);
				}
			} else {
				string tmp = s;
				s = string__plus(_SLIT("-"), fs);
				string_free(&tmp);
			}
		}
		int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		strings__Builder_write_string(&res, s);
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		string _t1 = strings__Builder_str(&res);
			// Defer begin
			if (strconv__format_es_old_defer_0) {
				strings__Builder_free(&res);
				string_free(&fs);
				string_free(&s);
			}
			// Defer end
		return _t1;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

VV_LOCAL_SYMBOL string strconv__remove_tail_zeros_old(string s) {
	int i = 0;
	int last_zero_start = -1;
	int dot_pos = -1;
	bool in_decimal = false;
	u8 prev_ch = ((u8)(0));
	for (;;) {
		if (!(i < s.len)) break;
		u8 ch = s.str[i];
		if (ch == '.') {
			in_decimal = true;
			dot_pos = i;
		} else if (in_decimal) {
			if (ch == '0' && prev_ch != '0') {
				last_zero_start = i;
			} else if (ch >= '1' && ch <= '9') {
				last_zero_start = -1;
			} else if (ch == 'e') {
				break;
			}
		}
		prev_ch = ch;
		i++;
	}
	string tmp = _SLIT("");
	if (last_zero_start > 0) {
		if (last_zero_start == (int)(dot_pos + 1)) {
			tmp = string__plus(string_substr(s, 0, dot_pos), string_substr(s, i, 2147483647));
		} else {
			tmp = string__plus(string_substr(s, 0, last_zero_start), string_substr(s, i, 2147483647));
		}
	} else {
		tmp = string_clone(s);
	}
	if (tmp.str[(int)(tmp.len - 1)] == '.') {
		return string_substr(tmp, 0, (int)(tmp.len - 1));
	}
	return tmp;
}

// Attr: [manualfree]
string strconv__format_dec_old(u64 d, strconv__BF_param p) {
	bool strconv__format_dec_old_defer_0 = false;
	strings__Builder res;
	string s;
	s = _SLIT("");
	res = strings__new_builder(20);
	strconv__format_dec_old_defer_0 = true;
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_u8(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_u8(&res, '-');
			sign_len_diff = -1;
		}
		string tmp = s;
		s = u64_str(d);
		string_free(&tmp);
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				string tmp = s;
				s = string__plus(_SLIT("+"), u64_str(d));
				string_free(&tmp);
			} else {
				string tmp = s;
				s = u64_str(d);
				string_free(&tmp);
			}
		} else {
			string tmp = s;
			s = string__plus(_SLIT("-"), u64_str(d));
			string_free(&tmp);
		}
	}
	int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	strings__Builder_write_string(&res, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	string _t1 = strings__Builder_str(&res);
		// Defer begin
		if (strconv__format_dec_old_defer_0) {
			strings__Builder_free(&res);
			string_free(&s);
		}
		// Defer end
	return _t1;
}

VV_LOCAL_SYMBOL array __new_array(int mylen, int cap, int elm_size) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = vcalloc((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = 0,.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u64 total_size = (u64)(((u64)(cap_)) * ((u64)(elm_size)));
	if (cap_ > 0 && mylen == 0) {
		arr.data = _v_malloc(__at_least_one(total_size));
	} else {
		arr.data = vcalloc(total_size);
	}
	if (val != 0) {
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			if (eptr != ((void*)0)) {
				if (arr.element_size == 1) {
					u8 byte_value = *(((u8*)(val)));
					for (int i = 0; i < arr.len; ++i) {
						eptr[i] = byte_value;
					}
				} else {
					for (int _t1 = 0; _t1 < arr.len; ++_t1) {
						vmemcpy(eptr, val, arr.element_size);
						eptr += arr.element_size;
					}
				}
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_multi_default(int mylen, int cap, int elm_size, voidptr val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = 0,.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u64 total_size = (u64)(((u64)(cap_)) * ((u64)(elm_size)));
	arr.data = vcalloc(__at_least_one(total_size));
	if (val != 0) {
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			if (eptr != ((void*)0)) {
				for (int i = 0; i < arr.len; ++i) {
					vmemcpy(eptr, ((charptr)(val)) + (int)(i * arr.element_size), arr.element_size);
					eptr += arr.element_size;
				}
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_array_default(int mylen, int cap, int elm_size, array val, int depth) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = _v_malloc(__at_least_one((u64)(((u64)(cap_)) * ((u64)(elm_size))))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u8* eptr = ((u8*)(arr.data));
	{ // Unsafe block
		if (eptr != ((void*)0)) {
			for (int _t1 = 0; _t1 < arr.len; ++_t1) {
				array val_clone = array_clone_to_depth(&val, depth);
				vmemcpy(eptr, &val_clone, arr.element_size);
				eptr += arr.element_size;
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_map_default(int mylen, int cap, int elm_size, map val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = _v_malloc(__at_least_one((u64)(((u64)(cap_)) * ((u64)(elm_size))))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u8* eptr = ((u8*)(arr.data));
	{ // Unsafe block
		if (eptr != ((void*)0)) {
			for (int _t1 = 0; _t1 < arr.len; ++_t1) {
				map val_clone = map_clone(&val);
				vmemcpy(eptr, &val_clone, arr.element_size);
				eptr += arr.element_size;
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array) {
	int cap_ = (cap < len ? (len) : (cap));
	array arr = ((array){.data = vcalloc((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = len,.cap = cap_,.flags = 0,.element_size = elm_size,});
	vmemcpy(arr.data, c_array, (u64)(((u64)(len)) * ((u64)(elm_size))));
	return arr;
}

VV_LOCAL_SYMBOL array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array) {
	array arr = ((array){.data = c_array,.offset = 0,.len = len,.cap = cap,.flags = 0,.element_size = elm_size,});
	return arr;
}

VV_LOCAL_SYMBOL void array_ensure_cap(array* a, int required) {
	if (required <= a->cap) {
		return;
	}
	if (ArrayFlags_has(&a->flags, ArrayFlags__nogrow)) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("array.ensure_cap: array with the flag `.nogrow` cannot grow in size, array required new size: "), 0xfe07, {.d_i32 = required}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	int cap = (a->cap > 0 ? (a->cap) : (2));
	for (;;) {
		if (!(required > cap)) break;
		cap *= 2;
	}
	u64 new_size = (u64)(((u64)(cap)) * ((u64)(a->element_size)));
	u8* new_data = _v_malloc(__at_least_one(new_size));
	if (a->data != ((void*)0)) {
		vmemcpy(new_data, a->data, (u64)(((u64)(a->len)) * ((u64)(a->element_size))));
		if (ArrayFlags_has(&a->flags, ArrayFlags__noslices)) {
			_v_free(a->data);
		}
	}
	a->data = new_data;
	a->offset = 0;
	a->cap = cap;
}

array array_repeat(array a, int count) {
	return array_repeat_to_depth(a, count, 0);
}

// Attr: [direct_array_access]
// Attr: [unsafe]
array array_repeat_to_depth(array a, int count, int depth) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("array.repeat: count is negative: "), 0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u64 size = (u64)((u64)(((u64)(count)) * ((u64)(a.len))) * ((u64)(a.element_size)));
	if (size == 0U) {
		size = ((u64)(a.element_size));
	}
	array arr = ((array){.data = vcalloc(size),.offset = 0,.len = (int)(count * a.len),.cap = (int)(count * a.len),.flags = 0,.element_size = a.element_size,});
	if (a.len > 0) {
		u64 a_total_size = (u64)(((u64)(a.len)) * ((u64)(a.element_size)));
		u64 arr_step_size = (u64)(((u64)(a.len)) * ((u64)(arr.element_size)));
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			if (eptr != ((void*)0)) {
				for (int _t1 = 0; _t1 < count; ++_t1) {
					if (depth > 0) {
						array ary_clone = array_clone_to_depth(&a, depth);
						vmemcpy(eptr, ((u8*)(ary_clone.data)), a_total_size);
					} else {
						vmemcpy(eptr, ((u8*)(a.data)), a_total_size);
					}
					eptr += arr_step_size;
				}
			}
		}
	}
	return arr;
}

void array_insert(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.insert: index out of range (i == "), 0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), 0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	if (a->len >= a->cap) {
		array_ensure_cap(a, (int)(a->len + 1));
	}
	{ // Unsafe block
		vmemmove(array_get_unsafe(/*rec*/*a, (int)(i + 1)), array_get_unsafe(/*rec*/*a, i), (u64)(((u64)(((int)(a->len - i)))) * ((u64)(a->element_size))));
		array_set_unsafe(a, i, val);
	}
	a->len++;
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL void array_insert_many(array* a, int i, voidptr val, int size) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.insert_many: index out of range (i == "), 0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), 0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	array_ensure_cap(a, (int)(a->len + size));
	int elem_size = a->element_size;
	{ // Unsafe block
		voidptr iptr = array_get_unsafe(/*rec*/*a, i);
		vmemmove(array_get_unsafe(/*rec*/*a, (int)(i + size)), iptr, (u64)(((u64)((int)(a->len - i))) * ((u64)(elem_size))));
		vmemcpy(iptr, val, (u64)(((u64)(size)) * ((u64)(elem_size))));
	}
	a->len += size;
}

void array_prepend(array* a, voidptr val) {
	array_insert(a, 0, val);
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL void array_prepend_many(array* a, voidptr val, int size) {
	array_insert_many(a, 0, val, size);
}

void array_delete(array* a, int i) {
	array_delete_many(a, i, 1);
}

void array_delete_many(array* a, int i, int size) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || (int)(i + size) > a->len) {
			string endidx = (size > 1 ? ( str_intp(2, _MOV((StrIntpData[]){{_SLIT(".."), 0xfe07, {.d_i32 = (int)(i + size)}}, {_SLIT0, 0, { .d_c = 0 }}}))) : (_SLIT("")));
			_v_panic( str_intp(4, _MOV((StrIntpData[]){{_SLIT("array.delete: index out of range (i == "), 0xfe07, {.d_i32 = i}}, {_SLIT0, 0xfe10, {.d_s = endidx}}, {_SLIT(", a.len == "), 0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	if (ArrayFlags_all(&a->flags, (ArrayFlags__noshrink | ArrayFlags__noslices))) {
		vmemmove(((u8*)(a->data)) + (u64)(((u64)(i)) * ((u64)(a->element_size))), ((u8*)(a->data)) + (u64)(((u64)((int)(i + size))) * ((u64)(a->element_size))), (u64)(((u64)((int)((int)(a->len - i) - size))) * ((u64)(a->element_size))));
		a->len -= size;
		return;
	}
	voidptr old_data = a->data;
	int new_size = (int)(a->len - size);
	int new_cap = (new_size == 0 ? (1) : (new_size));
	a->data = vcalloc((u64)(((u64)(new_cap)) * ((u64)(a->element_size))));
	vmemcpy(a->data, old_data, (u64)(((u64)(i)) * ((u64)(a->element_size))));
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(i)) * ((u64)(a->element_size))), ((u8*)(old_data)) + (u64)(((u64)((int)(i + size))) * ((u64)(a->element_size))), (u64)(((u64)((int)((int)(a->len - i) - size))) * ((u64)(a->element_size))));
	if (ArrayFlags_has(&a->flags, ArrayFlags__noslices)) {
		_v_free(old_data);
	}
	a->len = new_size;
	a->cap = new_cap;
}

void array_clear(array* a) {
	a->len = 0;
}

// Attr: [unsafe]
void array_reset(array* a) {
	vmemset(a->data, 0, (int)(a->len * a->element_size));
}

void array_trim(array* a, int index) {
	if (index < a->len) {
		a->len = index;
	}
}

void array_drop(array* a, int num) {
	if (num <= 0) {
		return;
	}
	int n = (num <= a->len ? (num) : (a->len));
	u64 blen = (u64)(((u64)(n)) * ((u64)(a->element_size)));
	a->data = ((u8*)(a->data)) + blen;
	a->offset += ((int)(blen));
	a->len -= n;
	a->cap -= n;
}

// Attr: [inline]
// Attr: [unsafe]
inline VV_LOCAL_SYMBOL voidptr array_get_unsafe(array a, int i) {
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}

VV_LOCAL_SYMBOL voidptr array_get(array a, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a.len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.get: index out of range (i == "), 0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), 0xfe07, {.d_i32 = a.len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}

VV_LOCAL_SYMBOL voidptr array_get_with_check(array a, int i) {
	if (i < 0 || i >= a.len) {
		return 0;
	}
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}

voidptr array_first(array a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a.len == 0) {
			_v_panic(_SLIT("array.first: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	return a.data;
}

voidptr array_last(array a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a.len == 0) {
			_v_panic(_SLIT("array.last: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)((int)(a.len - 1))) * ((u64)(a.element_size)));
	}
	return 0;
}

voidptr array_pop(array* a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a->len == 0) {
			_v_panic(_SLIT("array.pop: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	int new_len = (int)(a->len - 1);
	u8* last_elem = ((u8*)(a->data)) + (u64)(((u64)(new_len)) * ((u64)(a->element_size)));
	a->len = new_len;
	return last_elem;
}

void array_delete_last(array* a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a->len == 0) {
			_v_panic(_SLIT("array.pop: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	a->len--;
}

VV_LOCAL_SYMBOL array array_slice(array a, int start, int _end) {
	int end = (_end == _const_max_int ? (a.len) : (_end));
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.slice: invalid slice index ("), 0xfe07, {.d_i32 = start}}, {_SLIT(" > "), 0xfe07, {.d_i32 = end}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		if (end > a.len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.slice: slice bounds out of range ("), 0xfe07, {.d_i32 = end}}, {_SLIT(" >= "), 0xfe07, {.d_i32 = a.len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		if (start < 0) {
			_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("array.slice: slice bounds out of range ("), 0xfe07, {.d_i32 = start}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	u64 offset = (u64)(((u64)(start)) * ((u64)(a.element_size)));
	u8* data = ((u8*)(a.data)) + offset;
	int l = (int)(end - start);
	array res = ((array){.data = data,.offset = (int)(a.offset + ((int)(offset))),.len = l,.cap = l,.flags = 0,.element_size = a.element_size,});
	return res;
}

VV_LOCAL_SYMBOL array array_slice_ni(array a, int _start, int _end) {
	int end = (_end == _const_max_int ? (a.len) : (_end));
	int start = _start;
	if (start < 0) {
		start = (int)(a.len + start);
		if (start < 0) {
			start = 0;
		}
	}
	if (end < 0) {
		end = (int)(a.len + end);
		if (end < 0) {
			end = 0;
		}
	}
	if (end >= a.len) {
		end = a.len;
	}
	if (start >= a.len || start > end) {
		array res = ((array){.data = a.data,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = a.element_size,});
		return res;
	}
	u64 offset = (u64)(((u64)(start)) * ((u64)(a.element_size)));
	u8* data = ((u8*)(a.data)) + offset;
	int l = (int)(end - start);
	array res = ((array){.data = data,.offset = (int)(a.offset + ((int)(offset))),.len = l,.cap = l,.flags = 0,.element_size = a.element_size,});
	return res;
}

VV_LOCAL_SYMBOL array array_clone_static_to_depth(array a, int depth) {
	return array_clone_to_depth(&a, depth);
}

array array_clone(array* a) {
	return array_clone_to_depth(a, 0);
}

// Attr: [unsafe]
array array_clone_to_depth(array* a, int depth) {
	array arr = ((array){.data = vcalloc((u64)(((u64)(a->cap)) * ((u64)(a->element_size)))),.offset = 0,.len = a->len,.cap = a->cap,.flags = 0,.element_size = a->element_size,});
	if (depth > 0 && _us32_eq(sizeof(array),a->element_size) && a->len >= 0 && a->cap >= a->len) {
		for (int i = 0; i < a->len; ++i) {
			array ar = ((array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,});
			vmemcpy(&ar, array_get_unsafe(/*rec*/*a, i), ((int)(sizeof(array))));
			array ar_clone = array_clone_to_depth(&ar, (int)(depth - 1));
			array_set_unsafe(&arr, i, &ar_clone);
		}
		return arr;
	} else {
		if (a->data != 0) {
			vmemcpy(((u8*)(arr.data)), a->data, (u64)(((u64)(a->cap)) * ((u64)(a->element_size))));
		}
		return arr;
	}
	return (array){.data = 0,.offset = 0,.len = 0,.cap = 0,.element_size = 0,};
}

// Attr: [inline]
// Attr: [unsafe]
inline VV_LOCAL_SYMBOL void array_set_unsafe(array* a, int i, voidptr val) {
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(i))), val, a->element_size);
}

VV_LOCAL_SYMBOL void array_set(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a->len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.set: index out of range (i == "), 0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), 0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(i))), val, a->element_size);
}

VV_LOCAL_SYMBOL void array_push(array* a, voidptr val) {
	if (a->len >= a->cap) {
		array_ensure_cap(a, (int)(a->len + 1));
	}
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), val, a->element_size);
	a->len++;
}

// Attr: [unsafe]
void array_push_many(array* a3, voidptr val, int size) {
	if (size <= 0 || val == ((void*)0)) {
		return;
	}
	array_ensure_cap(a3, (int)(a3->len + size));
	if (a3->data == val && a3->data != 0) {
		array copy = array_clone(a3);
		vmemcpy(((u8*)(a3->data)) + (u64)(((u64)(a3->element_size)) * ((u64)(a3->len))), copy.data, (u64)(((u64)(a3->element_size)) * ((u64)(size))));
	} else {
		if (a3->data != 0 && val != 0) {
			vmemcpy(((u8*)(a3->data)) + (u64)(((u64)(a3->element_size)) * ((u64)(a3->len))), val, (u64)(((u64)(a3->element_size)) * ((u64)(size))));
		}
	}
	a3->len += size;
}

void array_reverse_in_place(array* a) {
	if (a->len < 2 || a->element_size == 0) {
		return;
	}
	{ // Unsafe block
		u8* tmp_value = _v_malloc(a->element_size);
		for (int i = 0; i < (int)(a->len / 2); ++i) {
			vmemcpy(tmp_value, ((u8*)(a->data)) + (u64)(((u64)(i)) * ((u64)(a->element_size))), a->element_size);
			vmemcpy(((u8*)(a->data)) + (u64)(((u64)(i)) * ((u64)(a->element_size))), ((u8*)(a->data)) + (u64)(((u64)((int)((int)(a->len - 1) - i))) * ((u64)(a->element_size))), a->element_size);
			vmemcpy(((u8*)(a->data)) + (u64)(((u64)((int)((int)(a->len - 1) - i))) * ((u64)(a->element_size))), tmp_value, a->element_size);
		}
		_v_free(tmp_value);
	}
}

array array_reverse(array a) {
	if (a.len < 2) {
		return a;
	}
	array arr = ((array){.data = vcalloc((u64)(((u64)(a.cap)) * ((u64)(a.element_size)))),.offset = 0,.len = a.len,.cap = a.cap,.flags = 0,.element_size = a.element_size,});
	for (int i = 0; i < a.len; ++i) {
		array_set_unsafe(&arr, i, array_get_unsafe(a, (int)((int)(a.len - 1) - i)));
	}
	return arr;
}

// Attr: [unsafe]
void array_free(array* a) {
	if (ArrayFlags_has(&a->flags, ArrayFlags__nofree)) {
		return;
	}
	u8* mblock_ptr = ((u8*)((u64)(((u64)(a->data)) - ((u64)(a->offset)))));
	_v_free(mblock_ptr);
	{ // Unsafe block
		a->data = ((void*)0);
	}
}

array array_filter(array a, bool (*predicate)(voidptr ));

bool array_any(array a, bool (*predicate)(voidptr ));

bool array_all(array a, bool (*predicate)(voidptr ));

array array_map(array a, voidptr (*callback)(voidptr ));

void array_sort(array* a, int (*callback)(voidptr , voidptr ));

array array_sorted(array* a, int (*callback)(voidptr , voidptr ));

void array_sort_with_compare(array* a, int (*callback)(voidptr , voidptr )) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		vqsort(a->data, ((usize)(a->len)), ((usize)(a->element_size)), (voidptr)callback);
	}
	#endif
}

array array_sorted_with_compare(array* a, int (*callback)(voidptr , voidptr )) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		array r = array_clone(a);
		vqsort(r.data, ((usize)(r.len)), ((usize)(r.element_size)), (voidptr)callback);
		return r;
	}
	#endif
	return ((array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,});
}

bool array_contains(array a, voidptr value);

int array_index(array a, voidptr value);

// Attr: [direct_array_access]
// Attr: [unsafe]
void Array_string_free(Array_string* a) {
	for (int _t1 = 0; _t1 < a->len; ++_t1) {
		string* s = ((string*)a->data) + _t1;
		string_free(s);
	}
	array_free((((array*)(a))));
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string Array_string_str(Array_string a) {
	int sb_len = 4;
	if (a.len > 0) {
		sb_len += ((string*)a.data)[0].len;
		sb_len *= a.len;
	}
	sb_len += 2;
	strings__Builder sb = strings__new_builder(sb_len);
	strings__Builder_write_u8(&sb, '[');
	for (int i = 0; i < a.len; ++i) {
		string val = ((string*)a.data)[i];
		strings__Builder_write_u8(&sb, '\'');
		strings__Builder_write_string(&sb, val);
		strings__Builder_write_u8(&sb, '\'');
		if (i < (int)(a.len - 1)) {
			strings__Builder_write_string(&sb, _SLIT(", "));
		}
	}
	strings__Builder_write_u8(&sb, ']');
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}

string Array_u8_hex(Array_u8 b) {
	u8* hex = malloc_noscan((u64)((u64)(((u64)(b.len)) * 2U) + 1U));
	int dst_i = 0;
	for (int _t1 = 0; _t1 < b.len; ++_t1) {
		u8 i = ((u8*)b.data)[_t1];
		u8 n0 = (i >> 4);
		{ // Unsafe block
			hex[dst_i] = (n0 < 10 ? ((rune)(n0 + '0')) : ((u8)(n0 + ((u8)(87)))));
			dst_i++;
		}
		u8 n1 = (i & 0xF);
		{ // Unsafe block
			hex[dst_i] = (n1 < 10 ? ((rune)(n1 + '0')) : ((u8)(n1 + ((u8)(87)))));
			dst_i++;
		}
	}
	{ // Unsafe block
		hex[dst_i] = 0;
		return tos(hex, dst_i);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

int copy(Array_u8* dst, Array_u8 src) {
	int min = (dst->len < src.len ? (dst->len) : (src.len));
	if (min > 0) {
		vmemmove(((u8*)(dst->data)), src.data, min);
	}
	return min;
}

void array_grow_cap(array* a, int amount) {
	array_ensure_cap(a, (int)(a->cap + amount));
}

// Attr: [unsafe]
void array_grow_len(array* a, int amount) {
	array_ensure_cap(a, (int)(a->len + amount));
	a->len += amount;
}

// Attr: [unsafe]
Array_voidptr array_pointers(array a) {
	Array_voidptr res = __new_array_with_default(0, 0, sizeof(voidptr), 0);
	for (int i = 0; i < a.len; ++i) {
		array_push((array*)&res, _MOV((voidptr[]){ array_get_unsafe(a, i) }));
	}
	return res;
}

// Attr: [unsafe]
Array_u8 voidptr_vbytes(voidptr data, int len) {
	array res = ((array){.data = data,.offset = 0,.len = len,.cap = len,.flags = 0,.element_size = 1,});
	return res;
}

// Attr: [unsafe]
Array_u8 u8_vbytes(u8* data, int len) {
	return voidptr_vbytes(((voidptr)(data)), len);
}

VV_LOCAL_SYMBOL array __new_array_noscan(int mylen, int cap, int elm_size) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_default_noscan(int mylen, int cap, int elm_size, voidptr val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	if (val != 0 && arr.data != ((void*)0)) {
		if (elm_size == 1) {
			u8 byte_value = *(((u8*)(val)));
			u8* dptr = ((u8*)(arr.data));
			for (int i = 0; i < arr.len; ++i) {
				{ // Unsafe block
					dptr[i] = byte_value;
				}
			}
		} else {
			for (int i = 0; i < arr.len; ++i) {
				array_set_unsafe(&arr, i, val);
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_multi_default_noscan(int mylen, int cap, int elm_size, voidptr val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	if (val != 0 && arr.data != ((void*)0)) {
		for (int i = 0; i < arr.len; ++i) {
			array_set_unsafe(&arr, i, ((charptr)(val)) + (int)(i * elm_size));
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL array __new_array_with_array_default_noscan(int mylen, int cap, int elm_size, array val) {
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	for (int i = 0; i < arr.len; ++i) {
		array val_clone = array_clone(&val);
		array_set_unsafe(&arr, i, &val_clone);
	}
	return arr;
}

VV_LOCAL_SYMBOL array new_array_from_c_array_noscan(int len, int cap, int elm_size, voidptr c_array) {
	int cap_ = (cap < len ? (len) : (cap));
	array arr = ((array){.data = vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = len,.cap = cap_,.flags = 0,.element_size = elm_size,});
	vmemcpy(arr.data, c_array, (u64)(((u64)(len)) * ((u64)(elm_size))));
	return arr;
}

VV_LOCAL_SYMBOL void array_ensure_cap_noscan(array* a, int required) {
	if (required <= a->cap) {
		return;
	}
	if (ArrayFlags_has(&a->flags, ArrayFlags__nogrow)) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("array.ensure_cap_noscan: array with the flag `.nogrow` cannot grow in size, array required new size: "), 0xfe07, {.d_i32 = required}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	int cap = (a->cap > 0 ? (a->cap) : (2));
	for (;;) {
		if (!(required > cap)) break;
		cap *= 2;
	}
	u64 new_size = (u64)(((u64)(cap)) * ((u64)(a->element_size)));
	u8* new_data = vcalloc_noscan(new_size);
	if (a->data != ((void*)0)) {
		vmemcpy(new_data, a->data, (u64)(((u64)(a->len)) * ((u64)(a->element_size))));
	}
	a->data = new_data;
	a->offset = 0;
	a->cap = cap;
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL array array_repeat_to_depth_noscan(array a, int count, int depth) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("array.repeat: count is negative: "), 0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u64 size = (u64)((u64)(((u64)(count)) * ((u64)(a.len))) * ((u64)(a.element_size)));
	if (size == 0U) {
		size = ((u64)(a.element_size));
	}
	array arr = ((array){.data = (depth > 0 ? (vcalloc(size)) : (vcalloc_noscan(size))),.offset = 0,.len = (int)(count * a.len),.cap = (int)(count * a.len),.flags = 0,.element_size = a.element_size,});
	if (a.len > 0) {
		u64 a_total_size = (u64)(((u64)(a.len)) * ((u64)(a.element_size)));
		u64 arr_step_size = (u64)(((u64)(a.len)) * ((u64)(arr.element_size)));
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			for (int _t1 = 0; _t1 < count; ++_t1) {
				if (depth > 0) {
					array ary_clone = array_clone_to_depth_noscan(&a, depth);
					vmemcpy(eptr, ((u8*)(ary_clone.data)), a_total_size);
				} else {
					vmemcpy(eptr, ((u8*)(a.data)), a_total_size);
				}
				eptr += arr_step_size;
			}
		}
	}
	return arr;
}

VV_LOCAL_SYMBOL void array_insert_noscan(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.insert: index out of range (i == "), 0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), 0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	array_ensure_cap_noscan(a, (int)(a->len + 1));
	{ // Unsafe block
		vmemmove(array_get_unsafe(/*rec*/*a, (int)(i + 1)), array_get_unsafe(/*rec*/*a, i), (u64)(((u64)((int)(a->len - i))) * ((u64)(a->element_size))));
		array_set_unsafe(a, i, val);
	}
	a->len++;
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL void array_insert_many_noscan(array* a, int i, voidptr val, int size) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i > a->len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("array.insert_many: index out of range (i == "), 0xfe07, {.d_i32 = i}}, {_SLIT(", a.len == "), 0xfe07, {.d_i32 = a->len}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	array_ensure_cap_noscan(a, (int)(a->len + size));
	int elem_size = a->element_size;
	{ // Unsafe block
		voidptr iptr = array_get_unsafe(/*rec*/*a, i);
		vmemmove(array_get_unsafe(/*rec*/*a, (int)(i + size)), iptr, (u64)(((u64)((int)(a->len - i))) * ((u64)(elem_size))));
		vmemcpy(iptr, val, (u64)(((u64)(size)) * ((u64)(elem_size))));
	}
	a->len += size;
}

VV_LOCAL_SYMBOL void array_prepend_noscan(array* a, voidptr val) {
	array_insert_noscan(a, 0, val);
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL void array_prepend_many_noscan(array* a, voidptr val, int size) {
	array_insert_many_noscan(a, 0, val, size);
}

VV_LOCAL_SYMBOL voidptr array_pop_noscan(array* a) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (a->len == 0) {
			_v_panic(_SLIT("array.pop: array is empty"));
			VUNREACHABLE();
		}
	}
	#endif
	int new_len = (int)(a->len - 1);
	u8* last_elem = ((u8*)(a->data)) + (u64)(((u64)(new_len)) * ((u64)(a->element_size)));
	a->len = new_len;
	return memdup_noscan(last_elem, a->element_size);
}

VV_LOCAL_SYMBOL array array_clone_static_to_depth_noscan(array a, int depth) {
	return array_clone_to_depth_noscan(&a, depth);
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL array array_clone_to_depth_noscan(array* a, int depth) {
	u64 size = (u64)(((u64)(a->cap)) * ((u64)(a->element_size)));
	if (size == 0U) {
		size++;
	}
	array arr = ((array){.data = (depth == 0 ? (vcalloc_noscan(size)) : (vcalloc(size))),.offset = 0,.len = a->len,.cap = a->cap,.flags = 0,.element_size = a->element_size,});
	if (depth > 0) {
		for (int i = 0; i < a->len; ++i) {
			array ar = ((array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,});
			vmemcpy(&ar, array_get_unsafe(/*rec*/*a, i), ((int)(sizeof(array))));
			array ar_clone = array_clone_to_depth_noscan(&ar, (int)(depth - 1));
			array_set_unsafe(&arr, i, &ar_clone);
		}
		return arr;
	} else {
		if (a->data != 0) {
			vmemcpy(((u8*)(arr.data)), a->data, (u64)(((u64)(a->cap)) * ((u64)(a->element_size))));
		}
		return arr;
	}
	return (array){.data = 0,.offset = 0,.len = 0,.cap = 0,.element_size = 0,};
}

VV_LOCAL_SYMBOL void array_push_noscan(array* a, voidptr val) {
	array_ensure_cap_noscan(a, (int)(a->len + 1));
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), val, a->element_size);
	a->len++;
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL void array_push_many_noscan(array* a3, voidptr val, int size) {
	if (size <= 0 || val == ((void*)0)) {
		return;
	}
	if (a3->data == val && a3->data != 0) {
		array copy = array_clone(a3);
		array_ensure_cap_noscan(a3, (int)(a3->len + size));
		vmemcpy(array_get_unsafe(/*rec*/*a3, a3->len), copy.data, (u64)(((u64)(a3->element_size)) * ((u64)(size))));
	} else {
		array_ensure_cap_noscan(a3, (int)(a3->len + size));
		if (a3->data != 0 && val != 0) {
			vmemcpy(array_get_unsafe(/*rec*/*a3, a3->len), val, (u64)(((u64)(a3->element_size)) * ((u64)(size))));
		}
	}
	a3->len += size;
}

VV_LOCAL_SYMBOL array array_reverse_noscan(array a) {
	if (a.len < 2) {
		return a;
	}
	array arr = ((array){.data = vcalloc_noscan((u64)(((u64)(a.cap)) * ((u64)(a.element_size)))),.offset = 0,.len = a.len,.cap = a.cap,.flags = 0,.element_size = a.element_size,});
	for (int i = 0; i < a.len; ++i) {
		array_set_unsafe(&arr, i, array_get_unsafe(a, (int)((int)(a.len - 1) - i)));
	}
	return arr;
}

VV_LOCAL_SYMBOL void array_grow_cap_noscan(array* a, int amount) {
	array_ensure_cap_noscan(a, (int)(a->cap + amount));
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL void array_grow_len_noscan(array* a, int amount) {
	array_ensure_cap_noscan(a, (int)(a->len + amount));
	a->len += amount;
}

void print_backtrace(void) {
	#if !defined(CUSTOM_DEFINE_no_backtrace)
	{
		#if defined(_VFREESTANDING)
		{
		}
		#else
		{
			#if defined(_VNATIVE)
			{
			}
			#elif defined(__TINYC__)
			{
			}
			#else
			{
				#if defined(CUSTOM_DEFINE_use_libbacktrace)
				{
				}
				#else
				{
					print_backtrace_skipping_top_frames(2);
				}
				#endif
			}
			#endif
		}
		#endif
	}
	#endif
}

bool print_backtrace_skipping_top_frames(int xskipframes) {
	#if defined(CUSTOM_DEFINE_no_backtrace)
	{
	}
	#else
	{
		int skipframes = (int)(xskipframes + 2);
		#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
		{
		}
		#elif defined(__linux__)
		{
			return print_backtrace_skipping_top_frames_linux(skipframes);
		}
		#else
		{
		}
		#endif
	}
	#endif
	return false;
}

VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames_bsd(int skipframes) {
	#if defined(CUSTOM_DEFINE_no_backtrace)
	{
	}
	#else
	{
		return true;
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL bool print_backtrace_skipping_top_frames_linux(int skipframes) {
	#if !defined(__GLIBC__)
	{
		eprintln(_SLIT("backtrace_symbols is missing => printing backtraces is not available."));
		eprintln(_SLIT("Some libc implementations like musl simply do not provide it."));
		return false;
	}
	#endif
	#if defined(_VNATIVE)
	{
		eprintln(_SLIT("native backend does not support backtraces yet."));
		return false;
	}
	#elif defined(CUSTOM_DEFINE_no_backtrace)
	{
	}
	#else
	{
		#if defined(__linux__) && !defined(_VFREESTANDING)
		{
			#if defined(__TINYC__)
			{
			}
			#else
			{
				Array_fixed_voidptr_100 buffer = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
				int nr_ptrs = backtrace(&buffer[0], 100);
				if (nr_ptrs < 2) {
					eprintln(_SLIT("C.backtrace returned less than 2 frames"));
					return false;
				}
				int nr_actual_frames = (int)(nr_ptrs - skipframes);
				Array_string sframes = __new_array_with_default(0, 0, sizeof(string), 0);
				char** csymbols = backtrace_symbols(((voidptr)(&buffer[v_fixed_index(skipframes, 100)])), nr_actual_frames);
				for (int i = 0; i < nr_actual_frames; ++i) {
					array_push((array*)&sframes, _MOV((string[]){ tos2(((u8*)(csymbols[i]))) }));
				}
				for (int _t9 = 0; _t9 < sframes.len; ++_t9) {
					string sframe = ((string*)sframes.data)[_t9];
					string executable = string_all_before(sframe, _SLIT("("));
					string addr = string_all_before(string_all_after(sframe, _SLIT("[")), _SLIT("]"));
					string beforeaddr = string_all_before(sframe, _SLIT("["));
					string cmd =  str_intp(3, _MOV((StrIntpData[]){{_SLIT("addr2line -e "), 0xfe10, {.d_s = executable}}, {_SLIT(" "), 0xfe10, {.d_s = addr}}, {_SLIT0, 0, { .d_c = 0 }}}));
					voidptr f = popen(((char*)(cmd.str)), "r");
					if (f == ((void*)0)) {
						eprintln(sframe);
						continue;
					}
					Array_fixed_u8_1000 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
					string output = _SLIT("");
					{ // Unsafe block
						u8* bp = &buf[0];
						for (;;) {
							if (!(fgets(((char*)(bp)), 1000, f) != 0)) break;
							output = string__plus(output, tos(bp, vstrlen(bp)));
						}
					}
					output = string__plus(string_trim_space(output), _SLIT(":"));
					if (pclose(f) != 0) {
						eprintln(sframe);
						continue;
					}
					if (string__eq(output, _SLIT("??:0:")) || string__eq(output, _SLIT("??:?:"))) {
						output = _SLIT("");
					}
					output = string_replace(output, _SLIT(" (discriminator"), _SLIT(": (d."));
					eprintln( str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0x6efe10, {.d_s = output}}, {_SLIT(" | "), 0x1cfe30, {.d_s = addr}}, {_SLIT(" | "), 0xfe10, {.d_s = beforeaddr}}, {_SLIT0, 0, { .d_c = 0 }}})));
				}
			}
			#endif
		}
		#endif
	}
	#endif
	return true;
}

// TypeDecl
// Attr: [noreturn]
VNORETURN VV_LOCAL_SYMBOL void vhalt(void) {
	for (;;) {
	}
	while(1);
}

// Attr: [markused]
VV_LOCAL_SYMBOL void v_segmentation_fault_handler(int signal_number) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fprintf(stderr, "signal %d: segmentation fault\n", signal_number);
	}
	#endif
	#if defined(CUSTOM_DEFINE_use_libbacktrace)
	{
	}
	#else
	{
		print_backtrace();
	}
	#endif
	_v_exit((int)(128 + signal_number));
	VUNREACHABLE();
}

// Attr: [noreturn]
VNORETURN void _v_exit(int code) {
	exit(code);
	VUNREACHABLE();
	while(1);
}

_result_void at_exit(void (*cb)(void)) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		int res = atexit((voidptr)cb);
		if (res != 0) {
			return (_result_void){ .is_error=true, .err=error_with_code(_SLIT("at_exit failed"), res), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

// Attr: [noreturn]
VNORETURN VV_LOCAL_SYMBOL void panic_debug(int line_no, string file, string mod, string fn_name, string s) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		eprintln(_SLIT("================ V panic ================"));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("   module: "), 0xfe10, {.d_s = mod}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT(" function: "), 0xfe10, {.d_s = fn_name}}, {_SLIT("()"), 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("  message: "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("     file: "), 0xfe10, {.d_s = file}}, {_SLIT(":"), 0xfe07, {.d_i32 = line_no}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("   v hash: "), 0xfe10, {.d_s = _SLIT("6b2d527")}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln(_SLIT("========================================="));
		#if defined(_VNATIVE)
		{
			exit(1);
			VUNREACHABLE();
		}
		#elif defined(CUSTOM_DEFINE_exit_after_panic_message)
		{
		}
		#elif defined(CUSTOM_DEFINE_no_backtrace)
		{
		}
		#else
		{
			#if defined(CUSTOM_DEFINE_use_libbacktrace)
			{
			}
			#else
			{
				print_backtrace_skipping_top_frames(1);
			}
			#endif
			exit(1);
			VUNREACHABLE();
		}
		#endif
	}
	#endif
	vhalt();
	VUNREACHABLE();
	while(1);
}

// Attr: [noreturn]
VNORETURN void panic_option_not_set(string s) {
	_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("option not set ("), 0xfe10, {.d_s = s}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
	VUNREACHABLE();
	while(1);
}

// Attr: [noreturn]
VNORETURN void panic_result_not_set(string s) {
	_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("result not set ("), 0xfe10, {.d_s = s}}, {_SLIT(")"), 0, { .d_c = 0 }}})));
	VUNREACHABLE();
	while(1);
}

// Attr: [noreturn]
VNORETURN void _v_panic(string s) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		eprint(_SLIT("V panic: "));
		eprintln(s);
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("v hash: "), 0xfe10, {.d_s = _SLIT("6b2d527")}}, {_SLIT0, 0, { .d_c = 0 }}})));
		#if defined(_VNATIVE)
		{
			exit(1);
			VUNREACHABLE();
		}
		#elif defined(CUSTOM_DEFINE_exit_after_panic_message)
		{
		}
		#elif defined(CUSTOM_DEFINE_no_backtrace)
		{
		}
		#else
		{
			#if defined(CUSTOM_DEFINE_use_libbacktrace)
			{
			}
			#else
			{
				print_backtrace_skipping_top_frames(1);
			}
			#endif
			exit(1);
			VUNREACHABLE();
		}
		#endif
	}
	#endif
	vhalt();
	VUNREACHABLE();
	while(1);
}

string c_error_number_str(int errnum) {
	string err_msg = _SLIT("");
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		#if !defined(__vinix__)
		{
			char* c_msg = strerror(errnum);
			err_msg = ((string){.str = ((u8*)(c_msg)), .len = strlen(c_msg), .is_lit = 1});
		}
		#endif
	}
	#endif
	return err_msg;
}

// Attr: [noreturn]
VNORETURN void panic_error_number(string basestr, int errnum) {
	_v_panic(string__plus(basestr, c_error_number_str(errnum)));
	VUNREACHABLE();
	while(1);
}

void eprintln(string s) {
	if (s.str == 0) {
		eprintln(_SLIT("eprintln(NIL)"));
		return;
	}
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#else
	{
		flush_stdout();
		flush_stderr();
		_writeln_to_fd(2, s);
		flush_stderr();
	}
	#endif
}

void eprint(string s) {
	if (s.str == 0) {
		eprint(_SLIT("eprint(NIL)"));
		return;
	}
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#else
	{
		flush_stdout();
		flush_stderr();
		_write_buf_to_fd(2, s.str, s.len);
		flush_stderr();
	}
	#endif
}

void flush_stdout(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fflush(stdout);
	}
	#endif
}

void flush_stderr(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fflush(stderr);
	}
	#endif
}

void unbuffer_stdout(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		setbuf(stdout, 0);
	}
	#endif
}

// Attr: [manualfree]
void print(string s) {
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		_write_buf_to_fd(1, s.str, s.len);
	}
	#endif
}

// Attr: [manualfree]
void println(string s) {
	if (s.str == 0) {
		println(_SLIT("println(NIL)"));
		return;
	}
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		_writeln_to_fd(1, s);
	}
	#endif
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL void _writeln_to_fd(int fd, string s) {
	bool _writeln_to_fd_defer_0 = false;
	u8* buf;
	#if !defined(CUSTOM_DEFINE_builtin_writeln_should_write_at_once)
	{
		u8 lf = ((u8)('\n'));
		_write_buf_to_fd(fd, s.str, s.len);
		_write_buf_to_fd(fd, &lf, 1);
		return;
	}
	#endif
	{ // Unsafe block
		int buf_len = (int)(s.len + 1);
		buf = _v_malloc(buf_len);
		_writeln_to_fd_defer_0 = true;
		memcpy(buf, s.str, s.len);
		buf[s.len] = '\n';
		_write_buf_to_fd(fd, buf, buf_len);
	}
	// Defer begin
	if (_writeln_to_fd_defer_0) {
		_v_free(buf);
	}
	// Defer end
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL void _write_buf_to_fd(int fd, u8* buf, int buf_len) {
	if (buf_len <= 0) {
		return;
	}
	u8* ptr = buf;
	isize remaining_bytes = ((isize)(buf_len));
	isize x = ((isize)(0));
	#if defined(_VFREESTANDING) || defined(__vinix__) || defined(CUSTOM_DEFINE_builtin_write_buf_to_fd_should_use_c_write)
	{
	}
	#else
	{
		voidptr stream = ((voidptr)(stdout));
		if (fd == 2) {
			stream = ((voidptr)(stderr));
		}
		{ // Unsafe block
			for (;;) {
				if (!(remaining_bytes > 0)) break;
				x = ((isize)(fwrite(ptr, 1, remaining_bytes, stream)));
				ptr += x;
				remaining_bytes -= x;
			}
		}
	}
	#endif
}

// Attr: [unsafe]
u8* _v_malloc(isize n) {
	;
	if (n < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc("), 0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u8* res = ((u8*)(0));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		{ // Unsafe block
			res = GC_MALLOC(n);
		}
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
	}
	#endif
	if (res == 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc("), 0xfe09, {.d_i64 = n}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return res;
}

// Attr: [unsafe]
u8* malloc_noscan(isize n) {
	;
	if (n < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc_noscan("), 0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u8* res = ((u8*)(0));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		#if defined(CUSTOM_DEFINE_gcboehm_opt)
		{
			{ // Unsafe block
				res = GC_MALLOC_ATOMIC(n);
			}
		}
		#else
		{
		}
		#endif
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
	}
	#endif
	if (res == 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc_noscan("), 0xfe09, {.d_i64 = n}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return res;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 __at_least_one(u64 how_many) {
	if (how_many == 0U) {
		return 1U;
	}
	return how_many;
}

// Attr: [unsafe]
u8* malloc_uncollectable(isize n) {
	;
	if (n < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc_uncollectable("), 0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	u8* res = ((u8*)(0));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		{ // Unsafe block
			res = GC_MALLOC_UNCOLLECTABLE(n);
		}
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
	}
	#endif
	if (res == 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("malloc_uncollectable("), 0xfe09, {.d_i64 = n}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return res;
}

// Attr: [unsafe]
u8* v_realloc(u8* b, isize n) {
	u8* new_ptr = ((u8*)(0));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		new_ptr = GC_REALLOC(b, n);
	}
	#else
	{
	}
	#endif
	if (new_ptr == 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("realloc("), 0xfe09, {.d_i64 = n}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return new_ptr;
}

// Attr: [unsafe]
u8* realloc_data(u8* old_data, int old_size, int new_size) {
	u8* nptr = ((u8*)(0));
	#if defined(_VGCBOEHM)
	{
		nptr = GC_REALLOC(old_data, new_size);
	}
	#else
	{
	}
	#endif
	if (nptr == 0) {
		_v_panic( str_intp(4, _MOV((StrIntpData[]){{_SLIT("realloc_data("), 0xfe11, {.d_p = (void*)(old_data)}}, {_SLIT(", "), 0xfe07, {.d_i32 = old_size}}, {_SLIT(", "), 0xfe07, {.d_i32 = new_size}}, {_SLIT(") failed"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return nptr;
}

u8* vcalloc(isize n) {
	if (n < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("calloc("), 0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	} else if (n == 0) {
		return ((u8*)(0));
	}
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		return ((u8*)(GC_MALLOC(n)));
	}
	#else
	{
	}
	#endif
	return 0;
}

u8* vcalloc_noscan(isize n) {
	;
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		if (n < 0) {
			_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("calloc_noscan("), 0xfe09, {.d_i64 = n}}, {_SLIT(" < 0)"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
		u8* _t3;
		#if defined(CUSTOM_DEFINE_gcboehm_opt)
			_t3 = ((u8*)(memset(GC_MALLOC_ATOMIC(n), 0, n)));
			;
		#else
		#endif
		return _t3;
	}
	#else
	{
	}
	#endif
	return 0;
}

// Attr: [unsafe]
void _v_free(voidptr ptr) {
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
	}
	#endif
}

// Attr: [unsafe]
voidptr memdup(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{ // Unsafe block
		u8* mem = _v_malloc(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}

// Attr: [unsafe]
voidptr memdup_noscan(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc_noscan(1);
	}
	{ // Unsafe block
		u8* mem = malloc_noscan(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}

// Attr: [unsafe]
voidptr memdup_uncollectable(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{ // Unsafe block
		u8* mem = malloc_uncollectable(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}

GCHeapUsage gc_heap_usage(void) {
	#if defined(_VGCBOEHM)
	{
		GCHeapUsage res = ((GCHeapUsage){.heap_size = 0,.free_bytes = 0,.total_bytes = 0,.unmapped_bytes = 0,.bytes_since_gc = 0,});
		GC_get_heap_usage_safe(&res.heap_size, &res.free_bytes, &res.unmapped_bytes, &res.bytes_since_gc, &res.total_bytes);
		return res;
	}
	#else
	{
	}
	#endif
	return (GCHeapUsage){0};
}

usize gc_memory_use(void) {
	#if defined(_VGCBOEHM)
	{
		return GC_get_memory_use();
	}
	#else
	{
	}
	#endif
	return 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL int v_fixed_index(int i, int len) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= len) {
			string s =  str_intp(3, _MOV((StrIntpData[]){{_SLIT("fixed array index out of range (index: "), 0xfe07, {.d_i32 = i}}, {_SLIT(", len: "), 0xfe07, {.d_i32 = len}}, {_SLIT(")"), 0, { .d_c = 0 }}}));
			_v_panic(s);
			VUNREACHABLE();
		}
	}
	#endif
	return i;
}

// Attr: [inline]
inline bool isnil(voidptr v) {
	return v == 0;
}

VV_LOCAL_SYMBOL voidptr __as_cast(voidptr obj, int obj_type, int expected_type) {
	if (obj_type != expected_type) {
		string obj_name = string_clone((*(VCastTypeIndexName*)array_get(as_cast_type_indexes, 0)).tname);
		string expected_name = string_clone((*(VCastTypeIndexName*)array_get(as_cast_type_indexes, 0)).tname);
		for (int _t1 = 0; _t1 < as_cast_type_indexes.len; ++_t1) {
			VCastTypeIndexName x = ((VCastTypeIndexName*)as_cast_type_indexes.data)[_t1];
			if (x.tindex == obj_type) {
				obj_name = string_clone(x.tname);
			}
			if (x.tindex == expected_type) {
				expected_name = string_clone(x.tname);
			}
		}
		_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("as cast: cannot cast `"), 0xfe10, {.d_s = obj_name}}, {_SLIT("` to `"), 0xfe10, {.d_s = expected_name}}, {_SLIT("`"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	return obj;
}

// Attr: [manualfree]
// Attr: [unsafe]
void VAssertMetaInfo_free(VAssertMetaInfo* ami) {
	{ // Unsafe block
		string_free(&ami->fpath);
		string_free(&ami->fn_name);
		string_free(&ami->src);
		string_free(&ami->op);
		string_free(&ami->llabel);
		string_free(&ami->rlabel);
		string_free(&ami->lvalue);
		string_free(&ami->rvalue);
		string_free(&ami->message);
	}
}

VV_LOCAL_SYMBOL void __print_assert_failure(VAssertMetaInfo* i) {
	eprintln( str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = i->fpath}}, {_SLIT(":"), 0xfe07, {.d_i32 = (int)(i->line_nr + 1)}}, {_SLIT(": FAIL: fn "), 0xfe10, {.d_s = i->fn_name}}, {_SLIT(": assert "), 0xfe10, {.d_s = i->src}}, {_SLIT0, 0, { .d_c = 0 }}})));
	if (i->op.len > 0 && !string__eq(i->op, _SLIT("call"))) {
		eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("   left value: "), 0xfe10, {.d_s = i->llabel}}, {_SLIT(" = "), 0xfe10, {.d_s = i->lvalue}}, {_SLIT0, 0, { .d_c = 0 }}})));
		if (string__eq(i->rlabel, i->rvalue)) {
			eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("  right value: "), 0xfe10, {.d_s = i->rlabel}}, {_SLIT0, 0, { .d_c = 0 }}})));
		} else {
			eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("  right value: "), 0xfe10, {.d_s = i->rlabel}}, {_SLIT(" = "), 0xfe10, {.d_s = i->rvalue}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
	}
	if (i->has_msg) {
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("      message: "), 0xfe10, {.d_s = i->message}}, {_SLIT0, 0, { .d_c = 0 }}})));
	}
}

#if defined(CUSTOM_DEFINE_dynamic_boehm)
#else
	#if defined(__APPLE__) || defined(__linux__)
		#if (defined(_VPROD) && !defined(__TINYC__) && !defined(_VDEBUG)) || !(defined(__V_amd64) || defined(__V_arm64) || defined(__V_x86) || defined(__V_arm32))
		#else
		#endif
	#elif defined(__FreeBSD__)
	#elif defined(__OpenBSD__)
	#elif defined(_WIN32)
	#elif true
	#else
	#endif
#endif
bool gc_is_enabled(void) {
	return 0 == GC_is_disabled();
}

void gc_collect(void) {
	GC_gcollect();
}

void gc_enable(void) {
	GC_enable();
}

void gc_disable(void) {
	GC_disable();
}

void gc_check_leaks(void) {
}

// TypeDecl
FnGC_WarnCB gc_get_warn_proc(void) {
	return (voidptr)GC_get_warn_proc();
}

void gc_set_warn_proc(void (*cb)(char* msg, usize arg)) {
	GC_set_warn_proc((voidptr)cb);
}

VV_LOCAL_SYMBOL void internal_gc_warn_proc_none(char* msg, usize arg) {
}

VV_LOCAL_SYMBOL void builtin_init(void) {
	#if !defined(CUSTOM_DEFINE_gc_warn_on_stderr)
	{
		gc_set_warn_proc((voidptr)internal_gc_warn_proc_none);
	}
	#endif
}

VV_LOCAL_SYMBOL void break_if_debugger_attached(void) {
	{ // Unsafe block
		voidptr* ptr = ((voidptr*)(0));
		*ptr = ((void*)0);
	}
}

// Attr: [markused]
// Attr: [noreturn]
VNORETURN void panic_lasterr(string base) {
	_v_panic(string__plus(base, _SLIT(" unknown")));
	VUNREACHABLE();
	while(1);
}

VV_LOCAL_SYMBOL void print_libbacktrace(int frames_to_skip) {
}

// Attr: [noinline]
__NOINLINE VV_LOCAL_SYMBOL void eprint_libbacktrace(int frames_to_skip) {
}

// Attr: [trusted]
// Attr: [noreturn]
// Attr: [trusted]
// Attr: [trusted]
int proc_pidpath(int , voidptr , int );

// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// TypeDecl
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [trusted]
// Attr: [inline]
// Attr: [unsafe]
inline int vstrlen(u8* s) {
	return strlen(((char*)(s)));
}

// Attr: [inline]
// Attr: [unsafe]
inline int vstrlen_char(char* s) {
	return strlen(s);
}

// Attr: [inline]
// Attr: [unsafe]
inline voidptr vmemcpy(voidptr dest, const voidptr const_src, isize n) {
	{ // Unsafe block
		return memcpy(dest, const_src, n);
	}
	return 0;
}

// Attr: [inline]
// Attr: [unsafe]
inline voidptr vmemmove(voidptr dest, const voidptr const_src, isize n) {
	{ // Unsafe block
		return memmove(dest, const_src, n);
	}
	return 0;
}

// Attr: [inline]
// Attr: [unsafe]
inline int vmemcmp(const voidptr const_s1, const voidptr const_s2, isize n) {
	{ // Unsafe block
		return memcmp(const_s1, const_s2, n);
	}
	return 0;
}

// Attr: [inline]
// Attr: [unsafe]
inline voidptr vmemset(voidptr s, int c, isize n) {
	{ // Unsafe block
		return memset(s, c, n);
	}
	return 0;
}

// TypeDecl
// Attr: [inline]
// Attr: [unsafe]
inline VV_LOCAL_SYMBOL void vqsort(voidptr base, usize nmemb, usize size, int (*sort_cb)(const voidptr const_a, const voidptr const_b)) {
	qsort(base, nmemb, size, ((voidptr)(sort_cb)));
}

void chan_close(chan ch) {
}

ChanState chan_try_pop(chan ch, voidptr obj) {
	return ChanState__success;
}

ChanState chan_try_push(chan ch, voidptr obj) {
	return ChanState__success;
}

int input_character(void) {
	int ch = 0;
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__vinix__)
	{
	}
	#else
	{
		ch = getchar();
		if (ch == EOF) {
			return -1;
		}
	}
	#endif
	return ch;
}

int print_character(u8 ch) {
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#elif defined(__vinix__)
	{
	}
	#else
	{
		int x = putchar(ch);
		if (x == EOF) {
			return -1;
		}
	}
	#endif
	return ch;
}

#if !defined(_VNATIVE)
#endif
// Attr: [inline]
inline string f64_str(f64 x) {
	{ // Unsafe block
		strconv__Float64u f = ((strconv__Float64u){.f = x,});
		if (f.u == _const_strconv__double_minus_zero) {
			return _SLIT("-0.0");
		}
		if (f.u == _const_strconv__double_plus_zero) {
			return _SLIT("0.0");
		}
	}
	f64 abs_x = f64_abs(x);
	if (abs_x >= ((f64)(0.0001)) && abs_x < ((f64)(1.0e6))) {
		return strconv__f64_to_str_l(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string f64_strg(f64 x) {
	if (x == 0) {
		return _SLIT("0.0");
	}
	f64 abs_x = f64_abs(x);
	if (abs_x >= ((f64)(0.0001)) && abs_x < ((f64)(1.0e6))) {
		return strconv__f64_to_str_l_with_dot(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string float_literal_str(float_literal d) {
	return f64_str(((f64)(d)));
}

// Attr: [inline]
inline string f64_strsci(f64 x, int digit_num) {
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 17) {
		n_digit = 17;
	}
	return strconv__f64_to_str(x, n_digit);
}

// Attr: [inline]
inline string f64_strlong(f64 x) {
	return strconv__f64_to_str_l(x);
}

// Attr: [inline]
inline string f32_str(f32 x) {
	{ // Unsafe block
		strconv__Float32u f = ((strconv__Float32u){.f = x,});
		if (f.u == _const_strconv__single_minus_zero) {
			return _SLIT("-0.0");
		}
		if (f.u == _const_strconv__single_plus_zero) {
			return _SLIT("0.0");
		}
	}
	f32 abs_x = f32_abs(x);
	if (abs_x >= ((f32)(0.0001)) && abs_x < ((f32)(1.0e6))) {
		return strconv__f32_to_str_l(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string f32_strg(f32 x) {
	if (x == 0) {
		return _SLIT("0.0");
	}
	f32 abs_x = f32_abs(x);
	if (abs_x >= ((f32)(0.0001)) && abs_x < ((f32)(1.0e6))) {
		return strconv__f32_to_str_l_with_dot(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string f32_strsci(f32 x, int digit_num) {
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 8) {
		n_digit = 8;
	}
	return strconv__f32_to_str(x, n_digit);
}

// Attr: [inline]
inline string f32_strlong(f32 x) {
	return strconv__f32_to_str_l(x);
}

// Attr: [inline]
inline f32 f32_abs(f32 a) {
	return (a < 0 ? (-a) : (a));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 f64_abs(f64 a) {
	return (a < 0 ? (-a) : (a));
}

// Attr: [inline]
inline f32 f32_max(f32 a, f32 b) {
	return (a > b ? (a) : (b));
}

// Attr: [inline]
inline f32 f32_min(f32 a, f32 b) {
	return (a < b ? (a) : (b));
}

// Attr: [inline]
inline f64 f64_max(f64 a, f64 b) {
	return (a > b ? (a) : (b));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 f64_min(f64 a, f64 b) {
	return (a < b ? (a) : (b));
}

// Attr: [inline]
inline bool f32_eq_epsilon(f32 a, f32 b) {
	f32 hi = f32_max(f32_abs(a), f32_abs(b));
	f32 delta = f32_abs((f32)(a - b));
	#if defined(_VNATIVE)
	{
		if (hi > ((f32)(1.0))) {
			return delta <= (f32)(hi * ((f32)(((float_literal)(4 * 1.19209290e-7)))));
		} else {
			return (f32)(((f32)(((float_literal)(1 / ((float_literal)(4 * 1.19209290e-7)))))) * delta) <= hi;
		}
	}
	#else
	{
		if (hi > ((f32)(1.0))) {
			return delta <= (f32)(hi * ((f32)(4 * ((f32)(FLT_EPSILON)))));
		} else {
			return (f32)(((f32)(1 / ((f32)(4 * ((f32)(FLT_EPSILON)))))) * delta) <= hi;
		}
	}
	#endif
	return 0;
}

// Attr: [inline]
inline bool f64_eq_epsilon(f64 a, f64 b) {
	f64 hi = f64_max(f64_abs(a), f64_abs(b));
	f64 delta = f64_abs((f64)(a - b));
	#if defined(_VNATIVE)
	{
		if (hi > ((f64)(1.0))) {
			return delta <= (f64)(hi * ((f64)(((float_literal)(4 * 2.2204460492503131e-16)))));
		} else {
			return (f64)(((f64)(((float_literal)(1 / ((float_literal)(4 * 2.2204460492503131e-16)))))) * delta) <= hi;
		}
	}
	#else
	{
		if (hi > ((f64)(1.0))) {
			return delta <= (f64)(hi * ((f64)(4 * ((f64)(DBL_EPSILON)))));
		} else {
			return (f64)(((f64)(1 / ((f64)(4 * ((f64)(DBL_EPSILON)))))) * delta) <= hi;
		}
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL void float_test(void) {
}

// TypeDecl
string ptr_str(voidptr ptr) {
	string buf1 = u64_hex(((u64)(ptr)));
	return buf1;
}

string isize_str(isize x) {
	return i64_str(((i64)(x)));
}

string usize_str(usize x) {
	return u64_str(((u64)(x)));
}

string char_str(char* cptr) {
	return u64_hex(((u64)(cptr)));
}

// Attr: [direct_array_access]
// Attr: [inline]
inline VV_LOCAL_SYMBOL string int_str_l(int nn, int max) {
	{ // Unsafe block
		i64 n = ((i64)(nn));
		int d = 0;
		if (n == 0) {
			return _SLIT("0");
		}
		bool is_neg = false;
		if (n < 0) {
			n = -n;
			is_neg = true;
		}
		int index = max;
		u8* buf = malloc_noscan((int)(max + 1));
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0)) break;
			int n1 = ((int)((i64)(n / 100)));
			d = ((int)((((u32)((int)(((int)(n)) - ((int)(n1 * 100))))) << 1U)));
			n = n1;
			buf[index] = _const_digit_pairs.str[d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[d];
			index--;
		}
		index++;
		if (d < 20) {
			index++;
		}
		if (is_neg) {
			index--;
			buf[index] = '-';
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string i8_str(i8 n) {
	return int_str_l(((int)(n)), 5);
}

string i16_str(i16 n) {
	return int_str_l(((int)(n)), 7);
}

string u16_str(u16 n) {
	return int_str_l(((int)(n)), 7);
}

string i32_str(i32 n) {
	return int_str_l(((int)(n)), 12);
}

string int_hex_full(int nn) {
	return u64_to_hex(((u64)(nn)), 8);
}

string int_str(int n) {
	return int_str_l(n, 12);
}

// Attr: [direct_array_access]
// Attr: [inline]
inline string u32_str(u32 nn) {
	{ // Unsafe block
		u32 n = nn;
		u32 d = ((u32)(0U));
		if (n == 0U) {
			return _SLIT("0");
		}
		int max = 12;
		u8* buf = malloc_noscan((int)(max + 1));
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0U)) break;
			u32 n1 = (u32)(n / ((u32)(100U)));
			d = ((((u32)(n - ((u32)(n1 * ((u32)(100U)))))) << ((u32)(1U))));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < ((u32)(20U))) {
			index++;
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string int_literal_str(int_literal n) {
	return i64_str(((i64)(n)));
}

// Attr: [direct_array_access]
// Attr: [inline]
inline string i64_str(i64 nn) {
	{ // Unsafe block
		i64 n = nn;
		i64 d = ((i64)(0));
		if (n == 0) {
			return _SLIT("0");
		} else if (n == _const_min_i64) {
			return _SLIT("-9223372036854775808");
		}
		int max = 20;
		u8* buf = malloc_noscan((int)(max + 1));
		bool is_neg = false;
		if (n < 0) {
			n = -n;
			is_neg = true;
		}
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0)) break;
			i64 n1 = (i64)(n / ((i64)(100)));
			d = ((((u32)((i64)(n - ((i64)(n1 * ((i64)(100))))))) << ((i64)(1))));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < ((i64)(20))) {
			index++;
		}
		if (is_neg) {
			index--;
			buf[index] = '-';
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
// Attr: [inline]
inline string u64_str(u64 nn) {
	{ // Unsafe block
		u64 n = nn;
		u64 d = ((u64)(0U));
		if (n == 0U) {
			return _SLIT("0");
		}
		int max = 20;
		u8* buf = malloc_noscan((int)(max + 1));
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0U)) break;
			u64 n1 = (u64)(n / 100U);
			d = ((((u64)(n - ((u64)(n1 * 100U)))) << 1U));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < 20U) {
			index++;
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string bool_str(bool b) {
	if (b) {
		return _SLIT("true");
	}
	return _SLIT("false");
}

// Attr: [direct_array_access]
// Attr: [inline]
inline VV_LOCAL_SYMBOL string u64_to_hex(u64 nn, u8 len) {
	u64 n = nn;
	Array_fixed_u8_17 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	buf[len] = 0;
	int i = 0;
	for (i = (u8)(len - 1); i >= 0; i--) {
		u8 d = ((u8)((n & 0xFU)));
		buf[i] = (d < 10 ? ((rune)(d + '0')) : ((u8)(d + 87)));
		n = (n >> 4U);
	}
	return tos(memdup(&buf[0], (u8)(len + 1)), len);
}

// Attr: [direct_array_access]
// Attr: [inline]
inline VV_LOCAL_SYMBOL string u64_to_hex_no_leading_zeros(u64 nn, u8 len) {
	u64 n = nn;
	Array_fixed_u8_17 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	buf[len] = 0;
	int i = 0;
	for (i = (u8)(len - 1); i >= 0; i--) {
		u8 d = ((u8)((n & 0xFU)));
		buf[i] = (d < 10 ? ((rune)(d + '0')) : ((u8)(d + 87)));
		n = (n >> 4U);
		if (n == 0U) {
			break;
		}
	}
	int res_len = (int)(len - i);
	return tos(memdup(&buf[i], (int)(res_len + 1)), res_len);
}

string u8_hex(u8 nn) {
	if (nn == 0) {
		return _SLIT("00");
	}
	return u64_to_hex(nn, 2);
}

string i8_hex(i8 nn) {
	if (nn == 0) {
		return _SLIT("00");
	}
	return u64_to_hex(((u64)(nn)), 2);
}

string u16_hex(u16 nn) {
	if (nn == 0U) {
		return _SLIT("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 4);
}

string i16_hex(i16 nn) {
	return u16_hex(((u16)(nn)));
}

string u32_hex(u32 nn) {
	if (nn == 0U) {
		return _SLIT("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 8);
}

string int_hex(int nn) {
	return u32_hex(((u32)(nn)));
}

string int_hex2(int n) {
	return string__plus(_SLIT("0x"), int_hex(n));
}

string u64_hex(u64 nn) {
	if (nn == 0U) {
		return _SLIT("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 16);
}

string i64_hex(i64 nn) {
	return u64_hex(((u64)(nn)));
}

string int_literal_hex(int_literal nn) {
	return u64_hex(((u64)(nn)));
}

string voidptr_str(voidptr nn) {
	return string__plus(_SLIT("0x"), u64_hex(((u64)(nn))));
}

string byteptr_str(byteptr nn) {
	return string__plus(_SLIT("0x"), u64_hex(((u64)(nn))));
}

string charptr_str(charptr nn) {
	return string__plus(_SLIT("0x"), u64_hex(((u64)(nn))));
}

string u8_hex_full(u8 nn) {
	return u64_to_hex(((u64)(nn)), 2);
}

string i8_hex_full(i8 nn) {
	return u64_to_hex(((u64)(nn)), 2);
}

string u16_hex_full(u16 nn) {
	return u64_to_hex(((u64)(nn)), 4);
}

string i16_hex_full(i16 nn) {
	return u64_to_hex(((u64)(nn)), 4);
}

string u32_hex_full(u32 nn) {
	return u64_to_hex(((u64)(nn)), 8);
}

string i64_hex_full(i64 nn) {
	return u64_to_hex(((u64)(nn)), 16);
}

string voidptr_hex_full(voidptr nn) {
	return u64_to_hex(((u64)(nn)), 16);
}

string int_literal_hex_full(int_literal nn) {
	return u64_to_hex(((u64)(nn)), 16);
}

string u64_hex_full(u64 nn) {
	return u64_to_hex(nn, 16);
}

string u8_str(u8 b) {
	return int_str_l(((int)(b)), 7);
}

string u8_ascii_str(u8 b) {
	string str = ((string){.str = malloc_noscan(2), .len = 1});
	{ // Unsafe block
		str.str[0] = b;
		str.str[1] = 0;
	}
	return str;
}

// Attr: [manualfree]
string u8_str_escaped(u8 b) {
	string _t1 = (string){.str=(byteptr)"", .is_lit=1};
	
	if (b == (0)) {
		_t1 = _SLIT("`\\0`");
	}
	else if (b == (7)) {
		_t1 = _SLIT("`\\a`");
	}
	else if (b == (8)) {
		_t1 = _SLIT("`\\b`");
	}
	else if (b == (9)) {
		_t1 = _SLIT("`\\t`");
	}
	else if (b == (10)) {
		_t1 = _SLIT("`\\n`");
	}
	else if (b == (11)) {
		_t1 = _SLIT("`\\v`");
	}
	else if (b == (12)) {
		_t1 = _SLIT("`\\f`");
	}
	else if (b == (13)) {
		_t1 = _SLIT("`\\r`");
	}
	else if (b == (27)) {
		_t1 = _SLIT("`\\e`");
	}
	else if ((b >= 32 && b <= 126)) {
		_t1 = u8_ascii_str(b);
	}
	else {
		string xx = u8_hex(b);
		string yy = string__plus(_SLIT("0x"), xx);
		string_free(&xx);
		_t1 = yy;
	}string str = _t1;
	return str;
}

// Attr: [inline]
inline bool u8_is_capital(u8 c) {
	return c >= 'A' && c <= 'Z';
}

string Array_u8_bytestr(Array_u8 b) {
	{ // Unsafe block
		u8* buf = malloc_noscan((int)(b.len + 1));
		vmemcpy(buf, b.data, b.len);
		buf[b.len] = 0;
		return tos(buf, b.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

_result_rune Array_u8_byterune(Array_u8 b) {
	_result_rune _t1 = Array_u8_utf8_to_utf32(b);
	if (_t1.is_error) {
		_result_rune _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	rune r =  (*(rune*)_t1.data);
	_result_rune _t3;
	_result_ok(&(rune[]) { ((rune)(r)) }, (_result*)(&_t3), sizeof(rune));
	return _t3;
}

string u8_repeat(u8 b, int count) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("byte.repeat: count is negative: "), 0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	} else if (count == 0) {
		return _SLIT("");
	} else if (count == 1) {
		return u8_ascii_str(b);
	}
	u8* ret = malloc_noscan((int)(count + 1));
	for (int i = 0; i < count; ++i) {
		{ // Unsafe block
			ret[i] = b;
		}
	}
	int new_len = count;
	{ // Unsafe block
		ret[new_len] = 0;
	}
	return u8_vstring_with_len(ret, new_len);
}

VV_LOCAL_SYMBOL string _Atomic__int_str(int x) {
	return int_str(x);
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL bool fast_string_eq(string a, string b) {
	if (a.len != b.len) {
		return false;
	}
	{ // Unsafe block
		return memcmp(a.str, b.str, b.len) == 0;
	}
	return 0;
}

VV_LOCAL_SYMBOL u64 map_hash_string(voidptr pkey) {
	string key = *((string*)(pkey));
	return wyhash(key.str, ((u64)(key.len)), 0U, ((u64*)(_wyp)));
}

VV_LOCAL_SYMBOL u64 map_hash_int_1(voidptr pkey) {
	return wyhash64(*((u8*)(pkey)), 0U);
}

VV_LOCAL_SYMBOL u64 map_hash_int_2(voidptr pkey) {
	return wyhash64(*((u16*)(pkey)), 0U);
}

VV_LOCAL_SYMBOL u64 map_hash_int_4(voidptr pkey) {
	return wyhash64(*((u32*)(pkey)), 0U);
}

VV_LOCAL_SYMBOL u64 map_hash_int_8(voidptr pkey) {
	return wyhash64(*((u64*)(pkey)), 0U);
}

VV_LOCAL_SYMBOL void DenseArray_zeros_to_end(DenseArray* d) {
	u8* tmp_value = _v_malloc(d->value_bytes);
	u8* tmp_key = _v_malloc(d->key_bytes);
	int count = 0;
	for (int i = 0; i < d->len; ++i) {
		if (DenseArray_has_index(d, i)) {
			{ // Unsafe block
				if (count != i) {
					memcpy(tmp_key, DenseArray_key(d, count), d->key_bytes);
					memcpy(DenseArray_key(d, count), DenseArray_key(d, i), d->key_bytes);
					memcpy(DenseArray_key(d, i), tmp_key, d->key_bytes);
					memcpy(tmp_value, DenseArray_value(d, count), d->value_bytes);
					memcpy(DenseArray_value(d, count), DenseArray_value(d, i), d->value_bytes);
					memcpy(DenseArray_value(d, i), tmp_value, d->value_bytes);
				}
			}
			count++;
		}
	}
	{ // Unsafe block
		_v_free(tmp_value);
		_v_free(tmp_key);
		d->deletes = 0U;
		_v_free(d->all_deleted);
	}
	d->len = count;
	int old_cap = d->cap;
	d->cap = (count < 8 ? (8) : (count));
	{ // Unsafe block
		d->values = realloc_data(d->values, (int)(d->value_bytes * old_cap), (int)(d->value_bytes * d->cap));
		d->keys = realloc_data(d->keys, (int)(d->key_bytes * old_cap), (int)(d->key_bytes * d->cap));
	}
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL DenseArray new_dense_array(int key_bytes, int value_bytes) {
	int cap = 8;
	return ((DenseArray){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.cap = cap,
		.len = 0,
		.deletes = 0U,
		.all_deleted = ((void*)0),
		.keys = _v_malloc(__at_least_one((u64)(((u64)(cap)) * ((u64)(key_bytes))))),
		.values = _v_malloc(__at_least_one((u64)(((u64)(cap)) * ((u64)(value_bytes))))),
	});
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL voidptr DenseArray_key(DenseArray* d, int i) {
	return ((voidptr)(d->keys + (int)(i * d->key_bytes)));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL voidptr DenseArray_value(DenseArray* d, int i) {
	return ((voidptr)(d->values + (int)(i * d->value_bytes)));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL bool DenseArray_has_index(DenseArray* d, int i) {
	return d->deletes == 0U || d->all_deleted[i] == 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL int DenseArray_expand(DenseArray* d) {
	int old_cap = d->cap;
	int old_key_size = (int)(d->key_bytes * old_cap);
	int old_value_size = (int)(d->value_bytes * old_cap);
	if (d->cap == d->len) {
		d->cap += (d->cap >> 3);
		{ // Unsafe block
			d->keys = realloc_data(d->keys, old_key_size, (int)(d->key_bytes * d->cap));
			d->values = realloc_data(d->values, old_value_size, (int)(d->value_bytes * d->cap));
			if (d->deletes != 0U) {
				d->all_deleted = realloc_data(d->all_deleted, old_cap, d->cap);
				vmemset(((voidptr)(d->all_deleted + d->len)), 0, (int)(d->cap - d->len));
			}
		}
	}
	int push_index = d->len;
	{ // Unsafe block
		if (d->deletes != 0U) {
			d->all_deleted[push_index] = 0;
		}
	}
	d->len++;
	return push_index;
}

// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
VV_LOCAL_SYMBOL bool map_eq_string(voidptr a, voidptr b) {
	return fast_string_eq(*((string*)(a)), *((string*)(b)));
}

VV_LOCAL_SYMBOL bool map_eq_int_1(voidptr a, voidptr b) {
	return *((u8*)(a)) == *((u8*)(b));
}

VV_LOCAL_SYMBOL bool map_eq_int_2(voidptr a, voidptr b) {
	return *((u16*)(a)) == *((u16*)(b));
}

VV_LOCAL_SYMBOL bool map_eq_int_4(voidptr a, voidptr b) {
	return *((u32*)(a)) == *((u32*)(b));
}

VV_LOCAL_SYMBOL bool map_eq_int_8(voidptr a, voidptr b) {
	return *((u64*)(a)) == *((u64*)(b));
}

VV_LOCAL_SYMBOL void map_clone_string(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		string s = *((string*)(pkey));
		*((string*)(dest)) = string_clone(s);
	}
}

VV_LOCAL_SYMBOL void map_clone_int_1(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u8*)(dest)) = *((u8*)(pkey));
	}
}

VV_LOCAL_SYMBOL void map_clone_int_2(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u16*)(dest)) = *((u16*)(pkey));
	}
}

VV_LOCAL_SYMBOL void map_clone_int_4(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u32*)(dest)) = *((u32*)(pkey));
	}
}

VV_LOCAL_SYMBOL void map_clone_int_8(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u64*)(dest)) = *((u64*)(pkey));
	}
}

VV_LOCAL_SYMBOL void map_free_string(voidptr pkey) {
	string_free(ADDR(string, (*((string*)(pkey)))));
}

VV_LOCAL_SYMBOL void map_free_nop(voidptr _d1) {
}

VV_LOCAL_SYMBOL map new_map(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array(key_bytes, value_bytes),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}

VV_LOCAL_SYMBOL map new_map_init(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}

VV_LOCAL_SYMBOL map new_map_update_init(map* update, int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = map_clone(update);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}

map map_move(map* m) {
	map r = *m;
	vmemset(m, 0, ((int)(sizeof(map))));
	return r;
}

void map_clear(map* m) {
	m->len = 0;
	m->even_index = 0U;
	m->key_values.len = 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL multi_return_u32_u32 map_key_to_index(map* m, voidptr pkey) {
	u64 hash = m->hash_fn(pkey);
	u64 index = (hash & m->even_index);
	u64 meta = (((((hash >> m->shift)) & _const_hash_mask)) | _const_probe_inc);
	return (multi_return_u32_u32){.arg0=((u32)(index)), .arg1=((u32)(meta))};
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas) {
	u32 index = _index;
	u32 meta = _metas;
	for (;;) {
		if (!(meta < m->metas[index])) break;
		index += 2U;
		meta += _const_probe_inc;
	}
	return (multi_return_u32_u32){.arg0=index, .arg1=meta};
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi) {
	u32 meta = _metas;
	u32 index = _index;
	u32 kv_index = kvi;
	for (;;) {
		if (!(m->metas[index] != 0U)) break;
		if (meta > m->metas[index]) {
			{ // Unsafe block
				u32 tmp_meta = m->metas[index];
				m->metas[index] = meta;
				meta = tmp_meta;
				u32 tmp_index = m->metas[(u32)(index + 1U)];
				m->metas[(u32)(index + 1U)] = kv_index;
				kv_index = tmp_index;
			}
		}
		index += 2U;
		meta += _const_probe_inc;
	}
	{ // Unsafe block
		m->metas[index] = meta;
		m->metas[(u32)(index + 1U)] = kv_index;
	}
	u32 probe_count = (u32)(((meta >> _const_hashbits)) - 1U);
	map_ensure_extra_metas(m, probe_count);
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL void map_ensure_extra_metas(map* m, u32 probe_count) {
	if (((probe_count << 1U)) == m->extra_metas) {
		u32 size_of_u32 = sizeof(u32);
		u32 old_mem_size = ((u32)((u32)(m->even_index + 2U) + m->extra_metas));
		m->extra_metas += _const_extra_metas_inc;
		u32 mem_size = ((u32)((u32)(m->even_index + 2U) + m->extra_metas));
		{ // Unsafe block
			u8* x = realloc_data(((u8*)(m->metas)), ((int)((u32)(size_of_u32 * old_mem_size))), ((int)((u32)(size_of_u32 * mem_size))));
			m->metas = ((u32*)(x));
			vmemset(m->metas + mem_size - _const_extra_metas_inc, 0, ((int)((u32)(sizeof(u32) * _const_extra_metas_inc))));
		}
		if (probe_count == 252U) {
			_v_panic(_SLIT("Probe overflow"));
			VUNREACHABLE();
		}
	}
}

VV_LOCAL_SYMBOL void map_set(map* m, voidptr key, voidptr value) {
	f32 load_factor = (f32)(((f32)((((u32)(m->len)) << 1U))) / ((f32)(m->even_index)));
	if (load_factor > ((f32)(_const_max_load_factor))) {
		map_expand(m);
	}
	multi_return_u32_u32 mr_11689 = map_key_to_index(m, key);
	u32 index = mr_11689.arg0;
	u32 meta = mr_11689.arg1;
	multi_return_u32_u32 mr_11725 = map_meta_less(m, index, meta);
	index = mr_11725.arg0;
	meta = mr_11725.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		if (m->key_eq_fn(key, pkey)) {
			{ // Unsafe block
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				vmemcpy(pval, value, m->value_bytes);
			}
			return;
		}
		index += 2U;
		meta += _const_probe_inc;
	}
	int kv_index = DenseArray_expand(&m->key_values);
	{ // Unsafe block
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		voidptr pvalue = DenseArray_value(&m->key_values, kv_index);
		m->clone_fn(pkey, key);
		vmemcpy(((u8*)(pvalue)), value, m->value_bytes);
	}
	map_meta_greater(m, index, meta, ((u32)(kv_index)));
	m->len++;
}

VV_LOCAL_SYMBOL void map_expand(map* m) {
	u32 old_cap = m->even_index;
	m->even_index = (u32)(((((u32)(m->even_index + 2U)) << 1U)) - 2U);
	if (m->cached_hashbits == 0) {
		m->shift += _const_max_cached_hashbits;
		m->cached_hashbits = _const_max_cached_hashbits;
		map_rehash(m);
	} else {
		map_cached_rehash(m, old_cap);
		m->cached_hashbits--;
	}
}

VV_LOCAL_SYMBOL void map_rehash(map* m) {
	u32 meta_bytes = (u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)));
	map_reserve(m, meta_bytes);
}

void map_reserve(map* m, u32 meta_bytes) {
	{ // Unsafe block
		u8* x = v_realloc(((u8*)(m->metas)), ((int)(meta_bytes)));
		m->metas = ((u32*)(x));
		vmemset(m->metas, 0, ((int)(meta_bytes)));
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		voidptr pkey = DenseArray_key(&m->key_values, i);
		multi_return_u32_u32 mr_13499 = map_key_to_index(m, pkey);
		u32 index = mr_13499.arg0;
		u32 meta = mr_13499.arg1;
		multi_return_u32_u32 mr_13537 = map_meta_less(m, index, meta);
		index = mr_13537.arg0;
		meta = mr_13537.arg1;
		map_meta_greater(m, index, meta, ((u32)(i)));
	}
}

VV_LOCAL_SYMBOL void map_cached_rehash(map* m, u32 old_cap) {
	u32* old_metas = m->metas;
	int metasize = ((int)((u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)))));
	m->metas = ((u32*)(vcalloc(metasize)));
	u32 old_extra_metas = m->extra_metas;
	for (u32 i = ((u32)(0U)); i <= (u32)(old_cap + old_extra_metas); i += 2U) {
		if (old_metas[i] == 0U) {
			continue;
		}
		u32 old_meta = old_metas[i];
		u32 old_probe_count = (((u32)(((old_meta >> _const_hashbits)) - 1U)) << 1U);
		u32 old_index = (((u32)(i - old_probe_count)) & ((m->even_index >> 1U)));
		u32 index = (((old_index | ((old_meta << m->shift)))) & m->even_index);
		u32 meta = (((old_meta & _const_hash_mask)) | _const_probe_inc);
		multi_return_u32_u32 mr_14336 = map_meta_less(m, index, meta);
		index = mr_14336.arg0;
		meta = mr_14336.arg1;
		u32 kv_index = old_metas[(u32)(i + 1U)];
		map_meta_greater(m, index, meta, kv_index);
	}
	_v_free(old_metas);
}

VV_LOCAL_SYMBOL voidptr map_get_and_set(map* m, voidptr key, voidptr zero) {
	for (;;) {
		multi_return_u32_u32 mr_14784 = map_key_to_index(m, key);
		u32 index = mr_14784.arg0;
		u32 meta = mr_14784.arg1;
		for (;;) {
			if (meta == m->metas[index]) {
				int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
				voidptr pkey = DenseArray_key(&m->key_values, kv_index);
				if (m->key_eq_fn(key, pkey)) {
					voidptr pval = DenseArray_value(&m->key_values, kv_index);
					return ((u8*)(pval));
				}
			}
			index += 2U;
			meta += _const_probe_inc;
			if (meta > m->metas[index]) {
				break;
			}
		}
		map_set(m, key, zero);
	}
	return ((void*)0);
}

VV_LOCAL_SYMBOL voidptr map_get(map* m, voidptr key, voidptr zero) {
	multi_return_u32_u32 mr_15511 = map_key_to_index(m, key);
	u32 index = mr_15511.arg0;
	u32 meta = mr_15511.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				return ((u8*)(pval));
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return zero;
}

VV_LOCAL_SYMBOL voidptr map_get_check(map* m, voidptr key) {
	multi_return_u32_u32 mr_16176 = map_key_to_index(m, key);
	u32 index = mr_16176.arg0;
	u32 meta = mr_16176.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				return ((u8*)(pval));
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return 0;
}

VV_LOCAL_SYMBOL bool map_exists(map* m, voidptr key) {
	multi_return_u32_u32 mr_16686 = map_key_to_index(m, key);
	u32 index = mr_16686.arg0;
	u32 meta = mr_16686.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				return true;
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return false;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL void DenseArray_delete(DenseArray* d, int i) {
	if (d->deletes == 0U) {
		d->all_deleted = vcalloc(d->cap);
	}
	d->deletes++;
	{ // Unsafe block
		d->all_deleted[i] = 1;
	}
}

// Attr: [unsafe]
void map_delete(map* m, voidptr key) {
	multi_return_u32_u32 mr_17324 = map_key_to_index(m, key);
	u32 index = mr_17324.arg0;
	u32 meta = mr_17324.arg1;
	multi_return_u32_u32 mr_17360 = map_meta_less(m, index, meta);
	index = mr_17360.arg0;
	meta = mr_17360.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		if (m->key_eq_fn(key, pkey)) {
			for (;;) {
				if (!(((m->metas[(u32)(index + 2U)] >> _const_hashbits)) > 1U)) break;
				{ // Unsafe block
					m->metas[index] = (u32)(m->metas[(u32)(index + 2U)] - _const_probe_inc);
					m->metas[(u32)(index + 1U)] = m->metas[(u32)(index + 3U)];
				}
				index += 2U;
			}
			m->len--;
			DenseArray_delete(&m->key_values, kv_index);
			{ // Unsafe block
				m->metas[index] = 0U;
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
			if (m->key_values.len <= 32) {
				return;
			}
			if (_us32_ge(m->key_values.deletes,((m->key_values.len >> 1)))) {
				DenseArray_zeros_to_end(&m->key_values);
				map_rehash(m);
			}
			return;
		}
		index += 2U;
		meta += _const_probe_inc;
	}
}

array map_keys(map* m) {
	array keys = __new_array(m->len, 0, m->key_bytes);
	u8* item = ((u8*)(keys.data));
	if (m->key_values.deletes == 0U) {
		for (int i = 0; i < m->key_values.len; i++) {
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->clone_fn(item, pkey);
				item = item + m->key_bytes;
			}
		}
		return keys;
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		{ // Unsafe block
			voidptr pkey = DenseArray_key(&m->key_values, i);
			m->clone_fn(item, pkey);
			item = item + m->key_bytes;
		}
	}
	return keys;
}

array map_values(map* m) {
	array values = __new_array(m->len, 0, m->value_bytes);
	u8* item = ((u8*)(values.data));
	if (m->key_values.deletes == 0U) {
		vmemcpy(item, m->key_values.values, (int)(m->value_bytes * m->key_values.len));
		return values;
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		{ // Unsafe block
			voidptr pvalue = DenseArray_value(&m->key_values, i);
			vmemcpy(item, pvalue, m->value_bytes);
			item = item + m->value_bytes;
		}
	}
	return values;
}

// Attr: [unsafe]
VV_LOCAL_SYMBOL DenseArray DenseArray_clone(DenseArray* d) {
	DenseArray res = ((DenseArray){
		.key_bytes = d->key_bytes,
		.value_bytes = d->value_bytes,
		.cap = d->cap,
		.len = d->len,
		.deletes = d->deletes,
		.all_deleted = ((void*)0),
		.keys = ((void*)0),
		.values = ((void*)0),
	});
	{ // Unsafe block
		if (d->deletes != 0U) {
			res.all_deleted = memdup(d->all_deleted, d->cap);
		}
		res.keys = memdup(d->keys, (int)(d->cap * d->key_bytes));
		res.values = memdup(d->values, (int)(d->cap * d->value_bytes));
	}
	return res;
}

// Attr: [unsafe]
map map_clone(map* m) {
	int metasize = ((int)((u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)))));
	map res = ((map){
		.key_bytes = m->key_bytes,
		.value_bytes = m->value_bytes,
		.even_index = m->even_index,
		.cached_hashbits = m->cached_hashbits,
		.shift = m->shift,
		.key_values = DenseArray_clone(&m->key_values),
		.metas = ((u32*)(malloc_noscan(metasize))),
		.extra_metas = m->extra_metas,
		.has_string_keys = m->has_string_keys,
		.hash_fn = (voidptr)m->hash_fn,
		.key_eq_fn = (voidptr)m->key_eq_fn,
		.clone_fn = (voidptr)m->clone_fn,
		.free_fn = (voidptr)m->free_fn,
		.len = m->len,
	});
	vmemcpy(res.metas, m->metas, metasize);
	if (!m->has_string_keys) {
		return res;
	}
	for (int i = 0; i < m->key_values.len; ++i) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		m->clone_fn(DenseArray_key(&res.key_values, i), DenseArray_key(&m->key_values, i));
	}
	return res;
}

// Attr: [unsafe]
void map_free(map* m) {
	_v_free(m->metas);
	{ // Unsafe block
		m->metas = ((void*)0);
	}
	if (m->key_values.deletes == 0U) {
		for (int i = 0; i < m->key_values.len; i++) {
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
		}
	} else {
		for (int i = 0; i < m->key_values.len; i++) {
			if (!DenseArray_has_index(&m->key_values, i)) {
				continue;
			}
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
		}
	}
	{ // Unsafe block
		if (m->key_values.all_deleted != ((void*)0)) {
			_v_free(m->key_values.all_deleted);
			m->key_values.all_deleted = ((void*)0);
		}
		if (m->key_values.keys != ((void*)0)) {
			_v_free(m->key_values.keys);
			m->key_values.keys = ((void*)0);
		}
		if (m->key_values.values != ((void*)0)) {
			_v_free(m->key_values.values);
			m->key_values.values = ((void*)0);
		}
		m->hash_fn = (voidptr)((void*)0);
		m->key_eq_fn = (voidptr)((void*)0);
		m->clone_fn = (voidptr)((void*)0);
		m->free_fn = (voidptr)((void*)0);
	}
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u8* __malloc_at_least_one(u64 how_many_bytes, bool noscan) {
	if (noscan) {
		return malloc_noscan(__at_least_one(how_many_bytes));
	}
	return _v_malloc(__at_least_one(how_many_bytes));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL DenseArray new_dense_array_noscan(int key_bytes, bool key_noscan, int value_bytes, bool value_noscan) {
	int cap = 8;
	return ((DenseArray){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.cap = cap,
		.len = 0,
		.deletes = 0U,
		.all_deleted = ((void*)0),
		.keys = __malloc_at_least_one((u64)(((u64)(cap)) * ((u64)(key_bytes))), key_noscan),
		.values = __malloc_at_least_one((u64)(((u64)(cap)) * ((u64)(value_bytes))), value_noscan),
	});
}

VV_LOCAL_SYMBOL map new_map_noscan_key(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array_noscan(key_bytes, true, value_bytes, false),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}

VV_LOCAL_SYMBOL map new_map_noscan_value(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array_noscan(key_bytes, false, value_bytes, true),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}

VV_LOCAL_SYMBOL map new_map_noscan_key_value(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array_noscan(key_bytes, true, value_bytes, true),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}

VV_LOCAL_SYMBOL map new_map_init_noscan_key(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map_noscan_key(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}

VV_LOCAL_SYMBOL map new_map_init_noscan_value(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map_noscan_value(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}

VV_LOCAL_SYMBOL map new_map_init_noscan_key_value(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map_noscan_key_value(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}

// Attr: [unsafe]
void IError_free(IError* ie) {
	{ // Unsafe block
		IError* cie = ((IError*)(ie));
		_v_free(cie->_object);
	}
}

// Attr: [markused]
VV_LOCAL_SYMBOL void _option_none(voidptr data, _option* option, int size) {
	{ // Unsafe block
		*option = ((_option){.state = 2,.err = _const_none__,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), data, size);
	}
}

// Attr: [markused]
VV_LOCAL_SYMBOL void _option_ok(voidptr data, _option* option, int size) {
	{ // Unsafe block
		*option = ((_option){.state = 0,.err = _const_none__,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), data, size);
	}
}

VV_LOCAL_SYMBOL string None___str(None__ _d1) {
	return _SLIT("none");
}

string none_str(none _d2) {
	return _SLIT("none");
}

// Attr: [markused]
VV_LOCAL_SYMBOL void _result_ok(voidptr data, _result* res, int size) {
	{ // Unsafe block
		*res = ((_result){.is_error = 0,.err = _const_none__,});
		vmemcpy(((u8*)(&res->err)) + sizeof(IError), data, size);
	}
}

string IError_str(IError err) {
	return ((err._typ == _IError_None___index)? (_SLIT("none")) : (err._typ == _IError_Error_index)? (Error_msg(/*rec*/*(err._Error))) : (err._typ == _IError_MessageError_index)? (MessageError_str((*(err._MessageError)))) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = charptr_vstring_literal( /* IError */ v_typeof_interface_IError( (err)._typ ))}}, {_SLIT(": "), 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT0, 0, { .d_c = 0 }}}))));
}

string Error_msg(Error err) {
	return _SLIT("");
}

int Error_code(Error err) {
	return 0;
}

string MessageError_str(MessageError err) {
	if (err.code > 0) {
		return  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = err.msg}}, {_SLIT("; code: "), 0xfe07, {.d_i32 = err.code}}, {_SLIT0, 0, { .d_c = 0 }}}));
	}
	return err.msg;
}

string MessageError_msg(MessageError err) {
	return err.msg;
}

int MessageError_code(MessageError err) {
	return err.code;
}

// Attr: [unsafe]
void MessageError_free(MessageError* err) {
	string_free(&err->msg);
}

// Attr: [inline]
inline IError _v_error(string message) {
	;
	return I_MessageError_to_Interface_IError(((MessageError*)memdup(&(MessageError){.msg = message,.code = 0,}, sizeof(MessageError))));
}

// Attr: [inline]
inline IError error_with_code(string message, int code) {
	;
	return I_MessageError_to_Interface_IError(((MessageError*)memdup(&(MessageError){.msg = message,.code = code,}, sizeof(MessageError))));
}

string rune_str(rune c) {
	return utf32_to_str(((u32)(c)));
}

// Attr: [manualfree]
string Array_rune_string(Array_rune ra) {
	strings__Builder sb = strings__new_builder(ra.len);
	strings__Builder_write_runes(&sb, ra);
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}

string rune_repeat(rune c, int count) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("rune.repeat: count is negative: "), 0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	} else if (count == 0) {
		return _SLIT("");
	} else if (count == 1) {
		return rune_str(c);
	}
	Array_fixed_u8_5 buffer = {0, 0, 0, 0, 0};
	string res = utf32_to_str_no_malloc(((u32)(c)), &buffer[0]);
	return string_repeat(res, count);
}

// Attr: [manualfree]
Array_u8 rune_bytes(rune c) {
	Array_u8 res = __new_array_with_default_noscan(0, 5, sizeof(u8), 0);
	res.len = utf32_decode_to_buffer(((u32)(c)), ((u8*)(res.data)));
	return res;
}

int rune_length_in_bytes(rune c) {
	u32 code = ((u32)(c));
	if (code <= 0x7FU) {
		return 1;
	} else if (code <= 0x7FFU) {
		return 2;
	} else if (0xD800 <= code && code <= 0xDFFFU) {
		return -1;
	} else if (code <= 0xFFFFU) {
		return 3;
	} else if (code <= 0x10FFFFU) {
		return 4;
	}
	return -1;
}

VV_LOCAL_SYMBOL SortedMap new_sorted_map(int n, int value_bytes) {
	return ((SortedMap){.value_bytes = value_bytes,.root = new_node(),.len = 0,});
}

VV_LOCAL_SYMBOL SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values) {
	SortedMap out = new_sorted_map(n, value_bytes);
	for (int i = 0; i < n; ++i) {
		SortedMap_set(&out, keys[i], ((u8*)(values)) + (int)(i * value_bytes));
	}
	return out;
}

VV_LOCAL_SYMBOL mapnode* new_node(void) {
	return ((mapnode*)memdup(&(mapnode){.children = ((void*)0),.len = 0,.keys = {(string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}, (string){.str=(byteptr)"", .is_lit=1}},.values = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},}, sizeof(mapnode)));
}

VV_LOCAL_SYMBOL void SortedMap_set(SortedMap* m, string key, voidptr value) {
	mapnode* node = m->root;
	int child_index = 0;
	mapnode* parent = ((mapnode*)(((void*)0)));
	for (;;) {
		if (node->len == _const_max_len) {
			if (parent == ((void*)0)) {
				parent = new_node();
				m->root = parent;
			}
			mapnode_split_child(parent, child_index, node);
			if (string__eq(key, parent->keys[v_fixed_index(child_index, 11)])) {
				vmemcpy(parent->values[v_fixed_index(child_index, 11)], value, m->value_bytes);
				return;
			}
			if (string__lt(key, parent->keys[v_fixed_index(child_index, 11)])) {
				node = ((mapnode*)(parent->children[child_index]));
			} else {
				node = ((mapnode*)(parent->children[(int)(child_index + 1)]));
			}
		}
		int i = 0;
		for (;;) {
			if (!(i < node->len && string__lt(node->keys[v_fixed_index(i, 11)], key))) break;
			i++;
		}
		if (i != node->len && string__eq(key, node->keys[v_fixed_index(i, 11)])) {
			vmemcpy(node->values[v_fixed_index(i, 11)], value, m->value_bytes);
			return;
		}
		if (node->children == ((void*)0)) {
			int j = (int)(node->len - 1);
			for (;;) {
				if (!(j >= 0 && string__lt(key, node->keys[v_fixed_index(j, 11)]))) break;
				node->keys[v_fixed_index((int)(j + 1), 11)] = node->keys[v_fixed_index(j, 11)];
				node->values[v_fixed_index((int)(j + 1), 11)] = node->values[v_fixed_index(j, 11)];
				j--;
			}
			node->keys[v_fixed_index((int)(j + 1), 11)] = key;
			{ // Unsafe block
				node->values[v_fixed_index((int)(j + 1), 11)] = _v_malloc(m->value_bytes);
				vmemcpy(node->values[v_fixed_index((int)(j + 1), 11)], value, m->value_bytes);
			}
			node->len++;
			m->len++;
			return;
		}
		parent = node;
		child_index = i;
		node = ((mapnode*)(node->children[child_index]));
	}
}

VV_LOCAL_SYMBOL void mapnode_split_child(mapnode* n, int child_index, mapnode* y) {
	mapnode* z = new_node();
	z->len = _const_mid_index;
	y->len = _const_mid_index;
	for (int j = (int_literal)(_const_mid_index - 1); j >= 0; j--) {
		z->keys[v_fixed_index(j, 11)] = y->keys[v_fixed_index((int)(j + _const_degree), 11)];
		z->values[v_fixed_index(j, 11)] = y->values[v_fixed_index((int)(j + _const_degree), 11)];
	}
	if (y->children != ((void*)0)) {
		z->children = ((voidptr*)(_v_malloc(((int)(_const_children_bytes)))));
		for (int jj = (int_literal)(_const_degree - 1); jj >= 0; jj--) {
			{ // Unsafe block
				z->children[jj] = y->children[(int)(jj + _const_degree)];
			}
		}
	}
	{ // Unsafe block
		if (n->children == ((void*)0)) {
			n->children = ((voidptr*)(_v_malloc(((int)(_const_children_bytes)))));
		}
		n->children[(int)(n->len + 1)] = n->children[n->len];
	}
	for (int j = n->len; j > child_index; j--) {
		n->keys[v_fixed_index(j, 11)] = n->keys[v_fixed_index((int)(j - 1), 11)];
		n->values[v_fixed_index(j, 11)] = n->values[v_fixed_index((int)(j - 1), 11)];
		{ // Unsafe block
			n->children[j] = n->children[(int)(j - 1)];
		}
	}
	n->keys[v_fixed_index(child_index, 11)] = y->keys[v_fixed_index(_const_mid_index, 11)];
	n->values[v_fixed_index(child_index, 11)] = y->values[v_fixed_index(_const_mid_index, 11)];
	{ // Unsafe block
		n->children[child_index] = ((voidptr)(y));
		n->children[(int)(child_index + 1)] = ((voidptr)(z));
	}
	n->len++;
}

VV_LOCAL_SYMBOL bool SortedMap_get(SortedMap m, string key, voidptr out) {
	mapnode* node = m.root;
	for (;;) {
		int i = (int)(node->len - 1);
		for (;;) {
			if (!(i >= 0 && string__lt(key, node->keys[v_fixed_index(i, 11)]))) break;
			i--;
		}
		if (i != -1 && string__eq(key, node->keys[v_fixed_index(i, 11)])) {
			vmemcpy(out, node->values[v_fixed_index(i, 11)], m.value_bytes);
			return true;
		}
		if (node->children == ((void*)0)) {
			break;
		}
		node = ((mapnode*)(node->children[(int)(i + 1)]));
	}
	return false;
}

VV_LOCAL_SYMBOL bool SortedMap_exists(SortedMap m, string key) {
	if (m.root == ((void*)0)) {
		return false;
	}
	mapnode* node = m.root;
	for (;;) {
		int i = (int)(node->len - 1);
		for (;;) {
			if (!(i >= 0 && string__lt(key, node->keys[v_fixed_index(i, 11)]))) break;
			i--;
		}
		if (i != -1 && string__eq(key, node->keys[v_fixed_index(i, 11)])) {
			return true;
		}
		if (node->children == ((void*)0)) {
			break;
		}
		node = ((mapnode*)(node->children[(int)(i + 1)]));
	}
	return false;
}

VV_LOCAL_SYMBOL int mapnode_find_key(mapnode* n, string k) {
	int idx = 0;
	for (;;) {
		if (!(idx < n->len && string__lt(n->keys[v_fixed_index(idx, 11)], k))) break;
		idx++;
	}
	return idx;
}

VV_LOCAL_SYMBOL bool mapnode_remove_key(mapnode* n, string k) {
	int idx = mapnode_find_key(n, k);
	if (idx < n->len && string__eq(n->keys[v_fixed_index(idx, 11)], k)) {
		if (n->children == ((void*)0)) {
			mapnode_remove_from_leaf(n, idx);
		} else {
			mapnode_remove_from_non_leaf(n, idx);
		}
		return true;
	} else {
		if (n->children == ((void*)0)) {
			return false;
		}
		bool flag = (idx == n->len ? (true) : (false));
		if (((mapnode*)(n->children[idx]))->len < _const_degree) {
			mapnode_fill(n, idx);
		}
		mapnode* node = ((mapnode*)(((void*)0)));
		if (flag && idx > n->len) {
			node = ((mapnode*)(n->children[(int)(idx - 1)]));
		} else {
			node = ((mapnode*)(n->children[idx]));
		}
		return mapnode_remove_key(node, k);
	}
	return 0;
}

VV_LOCAL_SYMBOL void mapnode_remove_from_leaf(mapnode* n, int idx) {
	for (int i = (int)(idx + 1); i < n->len; i++) {
		n->keys[v_fixed_index((int)(i - 1), 11)] = n->keys[v_fixed_index(i, 11)];
		n->values[v_fixed_index((int)(i - 1), 11)] = n->values[v_fixed_index(i, 11)];
	}
	n->len--;
}

VV_LOCAL_SYMBOL void mapnode_remove_from_non_leaf(mapnode* n, int idx) {
	string k = n->keys[v_fixed_index(idx, 11)];
	if (((mapnode*)(n->children[idx]))->len >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[idx]));
		for (;;) {
			if (!(current->children != ((void*)0))) break;
			current = ((mapnode*)(current->children[current->len]));
		}
		string predecessor = current->keys[v_fixed_index((int)(current->len - 1), 11)];
		n->keys[v_fixed_index(idx, 11)] = predecessor;
		n->values[v_fixed_index(idx, 11)] = current->values[v_fixed_index((int)(current->len - 1), 11)];
		mapnode* node = ((mapnode*)(n->children[idx]));
		mapnode_remove_key(node, predecessor);
	} else if (((mapnode*)(n->children[(int)(idx + 1)]))->len >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[(int)(idx + 1)]));
		for (;;) {
			if (!(current->children != ((void*)0))) break;
			current = ((mapnode*)(current->children[0]));
		}
		string successor = current->keys[0];
		n->keys[v_fixed_index(idx, 11)] = successor;
		n->values[v_fixed_index(idx, 11)] = current->values[0];
		mapnode* node = ((mapnode*)(n->children[(int)(idx + 1)]));
		mapnode_remove_key(node, successor);
	} else {
		mapnode_merge(n, idx);
		mapnode* node = ((mapnode*)(n->children[idx]));
		mapnode_remove_key(node, k);
	}
}

VV_LOCAL_SYMBOL void mapnode_fill(mapnode* n, int idx) {
	if (idx != 0 && ((mapnode*)(n->children[(int)(idx - 1)]))->len >= _const_degree) {
		mapnode_borrow_from_prev(n, idx);
	} else if (idx != n->len && ((mapnode*)(n->children[(int)(idx + 1)]))->len >= _const_degree) {
		mapnode_borrow_from_next(n, idx);
	} else if (idx != n->len) {
		mapnode_merge(n, idx);
	} else {
		mapnode_merge(n, (int)(idx - 1));
	}
}

VV_LOCAL_SYMBOL void mapnode_borrow_from_prev(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[(int)(idx - 1)]));
	for (int i = (int)(child->len - 1); i >= 0; i--) {
		child->keys[v_fixed_index((int)(i + 1), 11)] = child->keys[v_fixed_index(i, 11)];
		child->values[v_fixed_index((int)(i + 1), 11)] = child->values[v_fixed_index(i, 11)];
	}
	if (child->children != ((void*)0)) {
		for (int i = child->len; i >= 0; i--) {
			{ // Unsafe block
				child->children[(int)(i + 1)] = child->children[i];
			}
		}
	}
	child->keys[0] = n->keys[v_fixed_index((int)(idx - 1), 11)];
	child->values[0] = n->values[v_fixed_index((int)(idx - 1), 11)];
	if (child->children != ((void*)0)) {
		{ // Unsafe block
			child->children[0] = sibling->children[sibling->len];
		}
	}
	n->keys[v_fixed_index((int)(idx - 1), 11)] = sibling->keys[v_fixed_index((int)(sibling->len - 1), 11)];
	n->values[v_fixed_index((int)(idx - 1), 11)] = sibling->values[v_fixed_index((int)(sibling->len - 1), 11)];
	child->len++;
	sibling->len--;
}

VV_LOCAL_SYMBOL void mapnode_borrow_from_next(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[(int)(idx + 1)]));
	child->keys[v_fixed_index(child->len, 11)] = n->keys[v_fixed_index(idx, 11)];
	child->values[v_fixed_index(child->len, 11)] = n->values[v_fixed_index(idx, 11)];
	if (child->children != ((void*)0)) {
		{ // Unsafe block
			child->children[(int)(child->len + 1)] = sibling->children[0];
		}
	}
	n->keys[v_fixed_index(idx, 11)] = sibling->keys[0];
	n->values[v_fixed_index(idx, 11)] = sibling->values[0];
	for (int i = 1; i < sibling->len; i++) {
		sibling->keys[v_fixed_index((int)(i - 1), 11)] = sibling->keys[v_fixed_index(i, 11)];
		sibling->values[v_fixed_index((int)(i - 1), 11)] = sibling->values[v_fixed_index(i, 11)];
	}
	if (sibling->children != ((void*)0)) {
		for (int i = 1; i <= sibling->len; i++) {
			{ // Unsafe block
				sibling->children[(int)(i - 1)] = sibling->children[i];
			}
		}
	}
	child->len++;
	sibling->len--;
}

VV_LOCAL_SYMBOL void mapnode_merge(mapnode* n, int idx) {
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[(int)(idx + 1)]));
	child->keys[v_fixed_index(_const_mid_index, 11)] = n->keys[v_fixed_index(idx, 11)];
	child->values[v_fixed_index(_const_mid_index, 11)] = n->values[v_fixed_index(idx, 11)];
	for (int i = 0; i < sibling->len; ++i) {
		child->keys[v_fixed_index((int_literal)(i + _const_degree), 11)] = sibling->keys[v_fixed_index(i, 11)];
		child->values[v_fixed_index((int_literal)(i + _const_degree), 11)] = sibling->values[v_fixed_index(i, 11)];
	}
	if (child->children != ((void*)0)) {
		for (int i = 0; i <= sibling->len; i++) {
			{ // Unsafe block
				child->children[(int)(i + _const_degree)] = sibling->children[i];
			}
		}
	}
	for (int i = (int)(idx + 1); i < n->len; i++) {
		n->keys[v_fixed_index((int)(i - 1), 11)] = n->keys[v_fixed_index(i, 11)];
		n->values[v_fixed_index((int)(i - 1), 11)] = n->values[v_fixed_index(i, 11)];
	}
	for (int i = (int)(idx + 2); i <= n->len; i++) {
		{ // Unsafe block
			n->children[(int)(i - 1)] = n->children[i];
		}
	}
	child->len += (int)(sibling->len + 1);
	n->len--;
}

void SortedMap_delete(SortedMap* m, string key) {
	if (m->root->len == 0) {
		return;
	}
	bool removed = mapnode_remove_key(m->root, key);
	if (removed) {
		m->len--;
	}
	if (m->root->len == 0) {
		if (m->root->children == ((void*)0)) {
			return;
		} else {
			m->root = ((mapnode*)(m->root->children[0]));
		}
	}
}

VV_LOCAL_SYMBOL int mapnode_subkeys(mapnode* n, Array_string* keys, int at) {
	int position = at;
	if (n->children != ((void*)0)) {
		for (int i = 0; i < n->len; ++i) {
			mapnode* child = ((mapnode*)(n->children[i]));
			position += mapnode_subkeys(child, keys, position);
			array_set(keys, position, &(string[]) { n->keys[v_fixed_index(i, 11)] });
			position++;
		}
		mapnode* child = ((mapnode*)(n->children[n->len]));
		position += mapnode_subkeys(child, keys, position);
	} else {
		for (int i = 0; i < n->len; ++i) {
			array_set(keys, (int)(position + i), &(string[]) { n->keys[v_fixed_index(i, 11)] });
		}
		position += n->len;
	}
	return (int)(position - at);
}

Array_string SortedMap_keys(SortedMap* m) {
	Array_string keys = __new_array_with_default(m->len, 0, sizeof(string), &(string[]){_SLIT("")});
	if (m->root == ((void*)0) || m->root->len == 0) {
		return keys;
	}
	mapnode_subkeys(m->root, &/*arr*/keys, 0);
	return keys;
}

VV_LOCAL_SYMBOL void mapnode_free(mapnode* n) {
	println(_SLIT("TODO"));
}

void SortedMap_free(SortedMap* m) {
	if (m->root == ((void*)0)) {
		return;
	}
	mapnode_free(m->root);
}

void SortedMap_print(SortedMap m) {
	println(_SLIT("TODO"));
}

// Attr: [direct_array_access]
Array_rune string_runes(string s) {
	Array_rune runes = __new_array_with_default_noscan(0, s.len, sizeof(rune), 0);
	for (int i = 0; i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		if (char_len > 1) {
			int end = ((int)(s.len - 1) >= (int)(i + char_len) ? ((int)(i + char_len)) : (s.len));
			string r = string_substr(s, i, end);
			array_push_noscan((array*)&runes, _MOV((rune[]){ string_utf32_code(r) }));
			i += (int)(char_len - 1);
		} else {
			array_push_noscan((array*)&runes, _MOV((rune[]){ s.str[i] }));
		}
	}
	return runes;
}

// Attr: [unsafe]
string cstring_to_vstring(char* s) {
	return string_clone(tos2(((u8*)(s))));
}

// Attr: [unsafe]
string tos_clone(u8* s) {
	return string_clone(tos2(s));
}

// Attr: [unsafe]
string tos(u8* s, int len) {
	if (s == 0) {
		_v_panic(_SLIT("tos(): nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = s, .len = len});
}

// Attr: [unsafe]
string tos2(u8* s) {
	if (s == 0) {
		_v_panic(_SLIT("tos2: nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = s, .len = vstrlen(s)});
}

// Attr: [unsafe]
string tos3(char* s) {
	if (s == 0) {
		_v_panic(_SLIT("tos3: nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = ((u8*)(s)), .len = vstrlen_char(s)});
}

// Attr: [unsafe]
string tos4(u8* s) {
	if (s == 0) {
		return _SLIT("");
	}
	return ((string){.str = s, .len = vstrlen(s)});
}

// Attr: [unsafe]
string tos5(char* s) {
	if (s == 0) {
		return _SLIT("");
	}
	return ((string){.str = ((u8*)(s)), .len = vstrlen_char(s)});
}

// Attr: [unsafe]
string u8_vstring(u8* bp) {
	return ((string){.str = bp, .len = vstrlen(bp)});
}

// Attr: [unsafe]
string u8_vstring_with_len(u8* bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 0});
}

// Attr: [unsafe]
string char_vstring(char* cp) {
	return ((string){.str = ((u8*)(cp)), .len = vstrlen_char(cp), .is_lit = 0});
}

// Attr: [unsafe]
string char_vstring_with_len(char* cp, int len) {
	return ((string){.str = ((u8*)(cp)), .len = len, .is_lit = 0});
}

// Attr: [unsafe]
string u8_vstring_literal(u8* bp) {
	return ((string){.str = bp, .len = vstrlen(bp), .is_lit = 1});
}

// Attr: [unsafe]
string u8_vstring_literal_with_len(u8* bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 1});
}

// Attr: [unsafe]
string char_vstring_literal(char* cp) {
	return ((string){.str = ((u8*)(cp)), .len = vstrlen_char(cp), .is_lit = 1});
}

// Attr: [unsafe]
string char_vstring_literal_with_len(char* cp, int len) {
	return ((string){.str = ((u8*)(cp)), .len = len, .is_lit = 1});
}

int string_len_utf8(string s) {
	int l = 0;
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		l++;
		i += (int_literal)(((((0xe5000000 >> ((((s.str[i] >> 3)) & 0x1e)))) & 3)) + 1);
	}
	return l;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL string string_clone_static(string a) {
	return string_clone(a);
}

// Attr: [inline]
// Attr: [markused]
inline VV_LOCAL_SYMBOL _option_string string_option_clone_static(string a) {
	_option_string _t2;
	_option_ok(&(string[]) { string_clone(a) }, (_option*)(&_t2), sizeof(string));
	return _t2;
}

string string_clone(string a) {
	if (a.len <= 0) {
		return _SLIT("");
	}
	string b = ((string){.str = malloc_noscan((int)(a.len + 1)), .len = a.len});
	{ // Unsafe block
		vmemcpy(b.str, a.str, a.len);
		b.str[a.len] = 0;
	}
	return b;
}

string string_replace_once(string s, string rep, string with) {
	int idx = string_index_(s, rep);
	if (idx == -1) {
		return string_clone(s);
	}
	return string__plus(string__plus(string_substr(s, 0, idx), with), string_substr(s, (int)(idx + rep.len), s.len));
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string string_replace(string s, string rep, string with) {
	bool string_replace_defer_0 = false;
	int pidxs_cap;
	int* pidxs;
	if (s.len == 0 || rep.len == 0 || rep.len > s.len) {
		return string_clone(s);
	}
	if (!string_contains(s, rep)) {
		return string_clone(s);
	}
	int pidxs_len = 0;
	pidxs_cap = (int)(s.len / rep.len);
	Array_fixed_int_10 stack_idxs = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	pidxs = &stack_idxs[0];
	if (pidxs_cap > _const_replace_stack_buffer_size) {
		pidxs = ((int*)(_v_malloc((int)(sizeof(int) * pidxs_cap))));
	}
	string_replace_defer_0 = true;
	int idx = 0;
	for (;;) {
		idx = string_index_after(s, rep, idx);
		if (idx == -1) {
			break;
		}
		{ // Unsafe block
			pidxs[pidxs_len] = idx;
			pidxs_len++;
		}
		idx += rep.len;
	}
	if (pidxs_len == 0) {
		string _t3 = string_clone(s);
			// Defer begin
			if (string_replace_defer_0) {
				if (pidxs_cap > _const_replace_stack_buffer_size) {
					_v_free(pidxs);
				}
			}
			// Defer end
		return _t3;
	}
	int new_len = (int)(s.len + (int)(pidxs_len * ((int)(with.len - rep.len))));
	u8* b = malloc_noscan((int)(new_len + 1));
	int b_i = 0;
	int s_idx = 0;
	for (int j = 0; j < pidxs_len; ++j) {
		int rep_pos = pidxs[j];
		int before_len = (int)(rep_pos - s_idx);
		vmemcpy(&b[b_i], &s.str[ s_idx], before_len);
		b_i += before_len;
		s_idx = (int)(rep_pos + rep.len);
		vmemcpy(&b[b_i], &with.str[ 0], with.len);
		b_i += with.len;
	}
	if (s_idx < s.len) {
		vmemcpy(&b[b_i], &s.str[ s_idx], (int)(s.len - s_idx));
	}
	{ // Unsafe block
		b[new_len] = 0;
		string _t4 = tos(b, new_len);
			// Defer begin
			if (string_replace_defer_0) {
				if (pidxs_cap > _const_replace_stack_buffer_size) {
					_v_free(pidxs);
				}
			}
			// Defer end
		return _t4;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
string string_replace_each(string s, Array_string vals) {
	if (s.len == 0 || vals.len == 0) {
		return string_clone(s);
	}
	if ((int)(vals.len % 2) != 0) {
		eprintln(_SLIT("string.replace_each(): odd number of strings"));
		return string_clone(s);
	}
	int new_len = s.len;
	Array_RepIndex idxs = __new_array_with_default_noscan(0, 6, sizeof(RepIndex), 0);
	int idx = 0;
	string s_ = string_clone(s);
	for (int rep_i = 0; rep_i < vals.len; rep_i += 2) {
		string rep = ((string*)vals.data)[rep_i];
		string with = ((string*)vals.data)[(int)(rep_i + 1)];
		for (;;) {
			idx = string_index_after(s_, rep, idx);
			if (idx == -1) {
				break;
			}
			for (int i = 0; i < rep.len; ++i) {
				{ // Unsafe block
					s_.str[(int)(idx + i)] = 0;
				}
			}
			array_push_noscan((array*)&idxs, _MOV((RepIndex[]){ ((RepIndex){.idx = idx,.val_idx = rep_i,}) }));
			idx += rep.len;
			new_len += (int)(with.len - rep.len);
		}
	}
	if (idxs.len == 0) {
		return string_clone(s);
	}
	if (idxs.len > 0) { qsort(idxs.data, idxs.len, idxs.element_size, (int (*)(const void *, const void *))&compare_3040552254790933403_RepIndex_by_idx); };
	u8* b = malloc_noscan((int)(new_len + 1));
	int idx_pos = 0;
	RepIndex cur_idx = ((RepIndex*)idxs.data)[idx_pos];
	int b_i = 0;
	for (int i = 0; i < s.len; i++) {
		if (i == cur_idx.idx) {
			string rep = ((string*)vals.data)[cur_idx.val_idx];
			string with = ((string*)vals.data)[(int)(cur_idx.val_idx + 1)];
			for (int j = 0; j < with.len; ++j) {
				{ // Unsafe block
					b[b_i] = with.str[ j];
				}
				b_i++;
			}
			i += (int)(rep.len - 1);
			idx_pos++;
			if (idx_pos < idxs.len) {
				cur_idx = ((RepIndex*)idxs.data)[idx_pos];
			}
		} else {
			{ // Unsafe block
				b[b_i] = s.str[i];
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = 0;
		return tos(b, new_len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
string string_replace_char(string s, u8 rep, u8 with, int repeat) {
	bool string_replace_char_defer_0 = false;
	Array_int idxs;
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (repeat <= 0) {
			_v_panic(_SLIT("string.replace_char(): tab length too short"));
			VUNREACHABLE();
		}
	}
	#endif
	if (s.len == 0) {
		return string_clone(s);
	}
	idxs = __new_array_with_default_noscan(0, s.len, sizeof(int), 0);
	string_replace_char_defer_0 = true;
	for (int i = 0; i < s.len; ++i) {
		u8 ch = s.str[i];
		if (ch == rep) {
			array_push_noscan((array*)&idxs, _MOV((int[]){ i }));
		}
	}
	if (idxs.len == 0) {
		string _t4 = string_clone(s);
			// Defer begin
			if (string_replace_char_defer_0) {
				array_free(&idxs);
			}
			// Defer end
		return _t4;
	}
	int new_len = (int)(s.len + (int)(idxs.len * ((int)(repeat - 1))));
	u8* b = malloc_noscan((int)(new_len + 1));
	int b_i = 0;
	int s_idx = 0;
	for (int _t5 = 0; _t5 < idxs.len; ++_t5) {
		int rep_pos = ((int*)idxs.data)[_t5];
		for (int i = s_idx; i < rep_pos; ++i) {
			{ // Unsafe block
				b[b_i] = s.str[ i];
			}
			b_i++;
		}
		s_idx = (int)(rep_pos + 1);
		for (int _t6 = 0; _t6 < repeat; ++_t6) {
			{ // Unsafe block
				b[b_i] = with;
			}
			b_i++;
		}
	}
	if (s_idx < s.len) {
		for (int i = s_idx; i < s.len; ++i) {
			{ // Unsafe block
				b[b_i] = s.str[ i];
			}
			b_i++;
		}
	}
	{ // Unsafe block
		b[new_len] = 0;
		string _t7 = tos(b, new_len);
			// Defer begin
			if (string_replace_char_defer_0) {
				array_free(&idxs);
			}
			// Defer end
		return _t7;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [inline]
inline string string_normalize_tabs(string s, int tab_len) {
	return string_replace_char(s, '\t', ' ', tab_len);
}

// Attr: [inline]
inline bool string_bool(string s) {
	return string__eq(s, _SLIT("true")) || string__eq(s, _SLIT("t"));
}

// Attr: [inline]
inline i8 string_i8(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 8, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return ((i8)( (*(i64*)_t2.data)));
}

// Attr: [inline]
inline i16 string_i16(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 16, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return ((i16)( (*(i64*)_t2.data)));
}

// Attr: [inline]
inline i32 string_i32(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 32, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return ((i32)( (*(i64*)_t2.data)));
}

// Attr: [inline]
inline int string_int(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 32, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return ((int)( (*(i64*)_t2.data)));
}

// Attr: [inline]
inline i64 string_i64(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 64, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return  (*(i64*)_t2.data);
}

// Attr: [inline]
inline f32 string_f32(string s) {
	_result_f64 _t2 = strconv__atof64(s);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(f64*) _t2.data = 0;
	}
	
 	return ((f32)( (*(f64*)_t2.data)));
}

// Attr: [inline]
inline f64 string_f64(string s) {
	_result_f64 _t2 = strconv__atof64(s);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(f64*) _t2.data = 0;
	}
	
 	return  (*(f64*)_t2.data);
}

Array_u8 string_u8_array(string s) {
	string tmps = string_replace(s, _SLIT("_"), _SLIT(""));
	if (tmps.len == 0) {
		return __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
	}
	tmps = string_to_lower(tmps);
	if (string_starts_with(tmps, _SLIT("0x"))) {
		tmps = string_substr(tmps, 2, 2147483647);
		if (tmps.len == 0) {
			return __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
		}
		if (!string_contains_only(tmps, _SLIT("0123456789abcdef"))) {
			return __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
		}
		if ((int)(tmps.len % 2) == 1) {
			tmps = string__plus(_SLIT("0"), tmps);
		}
		Array_u8 ret = __new_array_with_default_noscan((int)(tmps.len / 2), 0, sizeof(u8), 0);
		for (int i = 0; i < ret.len; ++i) {
			_result_u64 _t4 = string_parse_uint(string_substr(tmps, (int_literal)(2 * i), (int_literal)((int_literal)(2 * i) + 2)), 16, 8);
			if (_t4.is_error) {
				IError err = _t4.err;
				*(u64*) _t4.data = 0U;
			}
			
 			array_set(&ret, i, &(u8[]) { ((u8)( (*(u64*)_t4.data))) });
		}
		return ret;
	} else if (string_starts_with(tmps, _SLIT("0b"))) {
		tmps = string_substr(tmps, 2, 2147483647);
		if (tmps.len == 0) {
			return __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
		}
		if (!string_contains_only(tmps, _SLIT("01"))) {
			return __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
		}
		if ((int)(tmps.len % 8) != 0) {
			tmps = string__plus(string_repeat(_SLIT("0"), (int)(8 - (int)(tmps.len % 8))), tmps);
		}
		Array_u8 ret = __new_array_with_default_noscan((int)(tmps.len / 8), 0, sizeof(u8), 0);
		for (int i = 0; i < ret.len; ++i) {
			_result_u64 _t8 = string_parse_uint(string_substr(tmps, (int_literal)(8 * i), (int_literal)((int_literal)(8 * i) + 8)), 2, 8);
			if (_t8.is_error) {
				IError err = _t8.err;
				*(u64*) _t8.data = 0U;
			}
			
 			array_set(&ret, i, &(u8[]) { ((u8)( (*(u64*)_t8.data))) });
		}
		return ret;
	}
	return __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
}

// Attr: [inline]
inline u8 string_u8(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 8, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return ((u8)( (*(u64*)_t2.data)));
}

// Attr: [inline]
inline u16 string_u16(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 16, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return ((u16)( (*(u64*)_t2.data)));
}

// Attr: [inline]
inline u32 string_u32(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 32, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return ((u32)( (*(u64*)_t2.data)));
}

// Attr: [inline]
inline u64 string_u64(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 64, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return  (*(u64*)_t2.data);
}

// Attr: [inline]
inline _result_u64 string_parse_uint(string s, int _base, int _bit_size) {
	_result_u64 _t1 = strconv__parse_uint(s, _base, _bit_size);
	return _t1;
}

// Attr: [inline]
inline _result_i64 string_parse_int(string s, int _base, int _bit_size) {
	_result_i64 _t1 = strconv__parse_int(s, _base, _bit_size);
	return _t1;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL bool string__eq(string s, string a) {
	if (s.str == 0) {
		_v_panic(_SLIT("string.eq(): nil string"));
		VUNREACHABLE();
	}
	if (s.len != a.len) {
		return false;
	}
	if (s.len > 0) {
		int last_idx = (int)(s.len - 1);
		if (s.str[ last_idx] != a.str[ last_idx]) {
			return false;
		}
	}
	{ // Unsafe block
		return vmemcmp(s.str, a.str, a.len) == 0;
	}
	return 0;
}

// Attr: [direct_array_access]
int string_compare(string s, string a) {
	int min_len = (s.len < a.len ? (s.len) : (a.len));
	for (int i = 0; i < min_len; ++i) {
		if (s.str[ i] < a.str[ i]) {
			return -1;
		}
		if (s.str[ i] > a.str[ i]) {
			return 1;
		}
	}
	if (s.len < a.len) {
		return -1;
	}
	if (s.len > a.len) {
		return 1;
	}
	return 0;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL bool string__lt(string s, string a) {
	for (int i = 0; i < s.len; ++i) {
		if (i >= a.len || s.str[ i] > a.str[ i]) {
			return false;
		} else if (s.str[ i] < a.str[ i]) {
			return true;
		}
	}
	if (s.len < a.len) {
		return true;
	}
	return false;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL string string__plus(string s, string a) {
	int new_len = (int)(a.len + s.len);
	string res = ((string){.str = malloc_noscan((int)(new_len + 1)), .len = new_len});
	{ // Unsafe block
		vmemcpy(res.str, s.str, s.len);
		vmemcpy(res.str + s.len, a.str, a.len);
	}
	{ // Unsafe block
		res.str[new_len] = 0;
	}
	return res;
}

// Attr: [direct_array_access]
Array_string string_split_any(string s, string delim) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int i = 0;
	if (s.len > 0) {
		if (delim.len <= 0) {
			return string_split(s, _SLIT(""));
		}
		for (int index = 0; index < s.len; ++index) {
			u8 ch = s.str[index];
			for (int _t2 = 0; _t2 < delim.len; ++_t2) {
				u8 delim_ch = delim.str[_t2];
				if (ch == delim_ch) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, i, index) }));
					i = (int)(index + 1);
					break;
				}
			}
		}
		if (i < s.len) {
			array_push((array*)&res, _MOV((string[]){ string_substr(s, i, 2147483647) }));
		}
	}
	return res;
}

// Attr: [direct_array_access]
Array_string string_rsplit_any(string s, string delim) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int i = (int)(s.len - 1);
	if (s.len > 0) {
		if (delim.len <= 0) {
			return string_rsplit(s, _SLIT(""));
		}
		int rbound = s.len;
		for (;;) {
			if (!(i >= 0)) break;
			for (int _t2 = 0; _t2 < delim.len; ++_t2) {
				u8 delim_ch = delim.str[_t2];
				if (s.str[ i] == delim_ch) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, (int)(i + 1), rbound) }));
					rbound = i;
					break;
				}
			}
			i--;
		}
		if (rbound > 0) {
			array_push((array*)&res, _MOV((string[]){ string_substr(s, 0, rbound) }));
		}
	}
	return res;
}

// Attr: [inline]
inline Array_string string_split(string s, string delim) {
	return string_split_nth(s, delim, 0);
}

// Attr: [inline]
inline Array_string string_rsplit(string s, string delim) {
	return string_rsplit_nth(s, delim, 0);
}

_option_multi_return_string_string string_split_once(string s, string delim) {
	Array_string result = string_split_nth(s, delim, 2);
	if (result.len != 2) {
		_option_multi_return_string_string _t1 = (_option_multi_return_string_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
		return _t1;
	}
	_option_multi_return_string_string _t2;
	_option_ok(&(multi_return_string_string[]) { (multi_return_string_string){.arg0=(*(string*)array_get(result, 0)), .arg1=(*(string*)array_get(result, 1))} }, (_option*)(&_t2), sizeof(multi_return_string_string));
	return _t2;
}

_option_multi_return_string_string string_rsplit_once(string s, string delim) {
	Array_string result = string_rsplit_nth(s, delim, 2);
	if (result.len != 2) {
		_option_multi_return_string_string _t1 = (_option_multi_return_string_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
		return _t1;
	}
	_option_multi_return_string_string _t2;
	_option_ok(&(multi_return_string_string[]) { (multi_return_string_string){.arg0=(*(string*)array_get(result, 1)), .arg1=(*(string*)array_get(result, 0))} }, (_option*)(&_t2), sizeof(multi_return_string_string));
	return _t2;
}

// Attr: [direct_array_access]
Array_string string_split_nth(string s, string delim, int nth) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	switch (delim.len) {
		case 0: {
				for (int i = 0; i < s.len; ++i) {
					u8 ch = s.str[i];
					if (nth > 0 && res.len == (int)(nth - 1)) {
						array_push((array*)&res, _MOV((string[]){ string_substr(s, i, 2147483647) }));
						break;
					}
					array_push((array*)&res, _MOV((string[]){ u8_ascii_str(ch) }));
				}
				break;
		}
		case 1: {
				u8 delim_byte = delim.str[ 0];
				int start = 0;
				for (int i = 0; i < s.len; ++i) {
					u8 ch = s.str[i];
					if (ch == delim_byte) {
						if (nth > 0 && res.len == (int)(nth - 1)) {
							break;
						}
						array_push((array*)&res, _MOV((string[]){ string_substr(s, start, i) }));
						start = (int)(i + 1);
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, start, 2147483647) }));
				}
				break;
		}
		default: {
				int start = 0;
				for (int i = 0; (int)(i + delim.len) <= s.len; i++) {
					if (string__eq(string_substr_unsafe(s, i, (int)(i + delim.len)), delim)) {
						if (nth > 0 && res.len == (int)(nth - 1)) {
							break;
						}
						array_push((array*)&res, _MOV((string[]){ string_substr(s, start, i) }));
						i += delim.len;
						start = i;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, start, 2147483647) }));
				}
				break;
		}
	}
	
	return res;
}

// Attr: [direct_array_access]
Array_string string_rsplit_nth(string s, string delim, int nth) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	switch (delim.len) {
		case 0: {
				for (int i = (int)(s.len - 1); i >= 0; i--) {
					if (nth > 0 && res.len == (int)(nth - 1)) {
						array_push((array*)&res, _MOV((string[]){ string_substr(s, 0, (int)(i + 1)) }));
						break;
					}
					array_push((array*)&res, _MOV((string[]){ u8_ascii_str(s.str[ i]) }));
				}
				break;
		}
		case 1: {
				u8 delim_byte = delim.str[ 0];
				int rbound = s.len;
				for (int i = (int)(s.len - 1); i >= 0; i--) {
					if (s.str[ i] == delim_byte) {
						if (nth > 0 && res.len == (int)(nth - 1)) {
							break;
						}
						array_push((array*)&res, _MOV((string[]){ string_substr(s, (int)(i + 1), rbound) }));
						rbound = i;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, 0, rbound) }));
				}
				break;
		}
		default: {
				int rbound = s.len;
				for (int i = (int)(s.len - 1); i >= 0; i--) {
					bool is_delim = (int)(i - delim.len) >= 0 && string__eq(string_substr(s, (int)(i - delim.len), i), delim);
					if (is_delim) {
						if (nth > 0 && res.len == (int)(nth - 1)) {
							break;
						}
						array_push((array*)&res, _MOV((string[]){ string_substr(s, i, rbound) }));
						i -= delim.len;
						rbound = i;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, 0, rbound) }));
				}
				break;
		}
	}
	
	return res;
}

// Attr: [direct_array_access]
Array_string string_split_into_lines(string s) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	if (s.len == 0) {
		return res;
	}
	rune cr = '\r';
	rune lf = '\n';
	int line_start = 0;
	for (int i = 0; i < s.len; i++) {
		if (line_start <= i) {
			if (s.str[ i] == lf) {
				array_push((array*)&res, _MOV((string[]){ (line_start == i ? (_SLIT("")) : (string_substr(s, line_start, i))) }));
				line_start = (int)(i + 1);
			} else if (s.str[ i] == cr) {
				array_push((array*)&res, _MOV((string[]){ (line_start == i ? (_SLIT("")) : (string_substr(s, line_start, i))) }));
				if (((int)(i + 1)) < s.len && s.str[ (int)(i + 1)] == lf) {
					line_start = (int)(i + 2);
				} else {
					line_start = (int)(i + 1);
				}
			}
		}
	}
	if (line_start < s.len) {
		array_push((array*)&res, _MOV((string[]){ string_substr(s, line_start, 2147483647) }));
	}
	return res;
}

// Attr: [direct_array_access]
string string_substr(string s, int start, int _end) {
	int end = (_end == _const_max_int ? (s.len) : (_end));
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
			_v_panic( str_intp(5, _MOV((StrIntpData[]){{_SLIT("substr("), 0xfe07, {.d_i32 = start}}, {_SLIT(", "), 0xfe07, {.d_i32 = end}}, {_SLIT(") out of bounds (len="), 0xfe07, {.d_i32 = s.len}}, {_SLIT(") s=\""), 0xfe10, {.d_s = s}}, {_SLIT("\""), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	int len = (int)(end - start);
	if (len == s.len) {
		return string_clone(s);
	}
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	return res;
}

// Attr: [direct_array_access]
string string_substr_unsafe(string s, int start, int _end) {
	int end = (_end == 2147483647 ? (s.len) : (_end));
	int len = (int)(end - start);
	if (len == s.len) {
		return s;
	}
	return ((string){.str = s.str + start, .len = len});
}

// Attr: [direct_array_access]
_result_string string_substr_with_check(string s, int start, int _end) {
	int end = (_end == _const_max_int ? (s.len) : (_end));
	if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
		return (_result_string){ .is_error=true, .err=_v_error( str_intp(4, _MOV((StrIntpData[]){{_SLIT("substr("), 0xfe07, {.d_i32 = start}}, {_SLIT(", "), 0xfe07, {.d_i32 = end}}, {_SLIT(") out of bounds (len="), 0xfe07, {.d_i32 = s.len}}, {_SLIT(")"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int len = (int)(end - start);
	if (len == s.len) {
		_result_string _t2;
		_result_ok(&(string[]) { string_clone(s) }, (_result*)(&_t2), sizeof(string));
		return _t2;
	}
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	_result_string _t3;
	_result_ok(&(string[]) { res }, (_result*)(&_t3), sizeof(string));
	return _t3;
}

// Attr: [direct_array_access]
string string_substr_ni(string s, int _start, int _end) {
	int start = _start;
	int end = (_end == _const_max_int ? (s.len) : (_end));
	if (start < 0) {
		start = (int)(s.len + start);
		if (start < 0) {
			start = 0;
		}
	}
	if (end < 0) {
		end = (int)(s.len + end);
		if (end < 0) {
			end = 0;
		}
	}
	if (end >= s.len) {
		end = s.len;
	}
	if (start > s.len || end < start) {
		return _SLIT("");
	}
	int len = (int)(end - start);
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	return res;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL int string_index_(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	if (p.len > 2) {
		return string_index_kmp(s, p);
	}
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[(int)(i + j)] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

_option_int string_index(string s, string p) {
	int idx = string_index_(s, p);
	if (idx == -1) {
		return (_option_int){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_option_int _t2;
	_option_ok(&(int[]) { idx }, (_option*)(&_t2), sizeof(int));
	return _t2;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
_option_int string_index_last(string s, string needle) {
	_option_int _t1 = string_last_index(s, needle);
	return _t1;
}

// Attr: [inline]
inline _option_int string_last_index(string s, string needle) {
	int idx = string_index_last_(s, needle);
	if (idx == -1) {
		return (_option_int){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_option_int _t2;
	_option_ok(&(int[]) { idx }, (_option*)(&_t2), sizeof(int));
	return _t2;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
VV_LOCAL_SYMBOL int string_index_kmp(string s, string p) {
	bool string_index_kmp_defer_0 = false;
	int* p_prefixes;
	if (p.len > s.len) {
		return -1;
	}
	Array_fixed_int_20 stack_prefixes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	p_prefixes = &stack_prefixes[0];
	if (p.len > _const_kmp_stack_buffer_size) {
		p_prefixes = ((int*)(vcalloc((int)(p.len * sizeof(int)))));
	}
	string_index_kmp_defer_0 = true;
	int j = 0;
	for (int i = 1; i < p.len; i++) {
		for (;;) {
			if (!(p.str[j] != p.str[i] && j > 0)) break;
			j = p_prefixes[(int)(j - 1)];
		}
		if (p.str[j] == p.str[i]) {
			j++;
		}
		{ // Unsafe block
			p_prefixes[i] = j;
		}
	}
	j = 0;
	for (int i = 0; i < s.len; ++i) {
		for (;;) {
			if (!(p.str[j] != s.str[i] && j > 0)) break;
			j = p_prefixes[(int)(j - 1)];
		}
		if (p.str[j] == s.str[i]) {
			j++;
		}
		if (j == p.len) {
			int _t2 = (int)((int)(i - p.len) + 1);
				// Defer begin
				if (string_index_kmp_defer_0) {
					if (p.len > _const_kmp_stack_buffer_size) {
						_v_free(p_prefixes);
					}
				}
				// Defer end
			return _t2;
		}
	}
	int _t3 = -1;
		// Defer begin
		if (string_index_kmp_defer_0) {
			if (p.len > _const_kmp_stack_buffer_size) {
				_v_free(p_prefixes);
			}
		}
		// Defer end
	return _t3;
}

int string_index_any(string s, string chars) {
	for (int i = 0; i < s.len; ++i) {
		u8 ss = s.str[i];
		for (int _t1 = 0; _t1 < chars.len; ++_t1) {
			u8 c = chars.str[_t1];
			if (c == ss) {
				return i;
			}
		}
	}
	return -1;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL int string_index_last_(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	int i = (int)(s.len - p.len);
	for (;;) {
		if (!(i >= 0)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[(int)(i + j)] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i--;
	}
	return -1;
}

// Attr: [direct_array_access]
int string_index_after(string s, string p, int start) {
	if (p.len > s.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start >= s.len) {
		return -1;
	}
	int i = strt;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		int ii = i;
		for (;;) {
			if (!(j < p.len && s.str[ii] == p.str[j])) break;
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

// Attr: [direct_array_access]
int string_index_u8(string s, u8 c) {
	for (int i = 0; i < s.len; ++i) {
		u8 b = s.str[i];
		if (b == c) {
			return i;
		}
	}
	return -1;
}

// Attr: [direct_array_access]
int string_index_u8_last(string s, u8 c) {
	for (int i = (int)(s.len - 1); i >= 0; i--) {
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
// Attr: [inline]
inline int string_last_index_u8(string s, u8 c) {
	return string_index_u8_last(s, c);
}

// Attr: [direct_array_access]
int string_count(string s, string substr) {
	if (s.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > s.len) {
		return 0;
	}
	int n = 0;
	if (substr.len == 1) {
		u8 target = substr.str[ 0];
		for (int _t3 = 0; _t3 < s.len; ++_t3) {
			u8 letter = s.str[_t3];
			if (letter == target) {
				n++;
			}
		}
		return n;
	}
	int i = 0;
	for (;;) {
		i = string_index_after(s, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}

bool string_contains_u8(string s, u8 x) {
	for (int _t1 = 0; _t1 < s.len; ++_t1) {
		u8 c = s.str[_t1];
		if (x == c) {
			return true;
		}
	}
	return false;
}

bool string_contains(string s, string substr) {
	if (substr.len == 0) {
		return true;
	}
	if (substr.len == 1) {
		return string_contains_u8(s, substr.str[0]);
	}
	return string_index_(s, substr) != -1;
}

bool string_contains_any(string s, string chars) {
	for (int _t1 = 0; _t1 < chars.len; ++_t1) {
		u8 c = chars.str[_t1];
		if (string_contains_u8(s, c)) {
			return true;
		}
	}
	return false;
}

bool string_contains_only(string s, string chars) {
	if (chars.len == 0) {
		return false;
	}
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 ch = s.str[_t2];
		int res = 0;
		for (int i = 0; i < chars.len && res == 0; i++) {
			res += (int[]){(ch == chars.str[i])?1:0}[0];
		}
		if (res == 0) {
			return false;
		}
	}
	return true;
}

bool string_contains_any_substr(string s, Array_string substrs) {
	if (substrs.len == 0) {
		return true;
	}
	for (int _t2 = 0; _t2 < substrs.len; ++_t2) {
		string sub = ((string*)substrs.data)[_t2];
		if (string_contains(s, sub)) {
			return true;
		}
	}
	return false;
}

// Attr: [direct_array_access]
bool string_starts_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	}
	for (int i = 0; i < p.len; ++i) {
		if (s.str[i] != p.str[i]) {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
bool string_ends_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	}
	for (int i = 0; i < p.len; ++i) {
		if (p.str[i] != s.str[(int)((int)(s.len - p.len) + i)]) {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
string string_to_lower(string s) {
	{ // Unsafe block
		u8* b = malloc_noscan((int)(s.len + 1));
		for (int i = 0; i < s.len; ++i) {
			if (s.str[i] >= 'A' && s.str[i] <= 'Z') {
				b[i] = (u8)(s.str[i] + 32);
			} else {
				b[i] = s.str[i];
			}
		}
		b[s.len] = 0;
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
bool string_is_lower(string s) {
	if ((s).len == 0 || u8_is_digit(s.str[ 0])) {
		return false;
	}
	for (int i = 0; i < s.len; ++i) {
		if (s.str[ i] >= 'A' && s.str[ i] <= 'Z') {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
string string_to_upper(string s) {
	{ // Unsafe block
		u8* b = malloc_noscan((int)(s.len + 1));
		for (int i = 0; i < s.len; ++i) {
			if (s.str[i] >= 'a' && s.str[i] <= 'z') {
				b[i] = (u8)(s.str[i] - 32);
			} else {
				b[i] = s.str[i];
			}
		}
		b[s.len] = 0;
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
bool string_is_upper(string s) {
	if ((s).len == 0 || u8_is_digit(s.str[ 0])) {
		return false;
	}
	for (int i = 0; i < s.len; ++i) {
		if (s.str[ i] >= 'a' && s.str[ i] <= 'z') {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
string string_capitalize(string s) {
	if (s.len == 0) {
		return _SLIT("");
	}
	u8 s0 = s.str[ 0];
	string letter = u8_ascii_str(s0);
	string uletter = string_to_upper(letter);
	if (s.len == 1) {
		return uletter;
	}
	string srest = string_substr(s, 1, 2147483647);
	string res = string__plus(uletter, srest);
	return res;
}

// Attr: [direct_array_access]
string string_uncapitalize(string s) {
	if (s.len == 0) {
		return _SLIT("");
	}
	u8 s0 = s.str[ 0];
	string letter = u8_ascii_str(s0);
	string uletter = string_to_lower(letter);
	if (s.len == 1) {
		return uletter;
	}
	string srest = string_substr(s, 1, 2147483647);
	string res = string__plus(uletter, srest);
	return res;
}

// Attr: [direct_array_access]
bool string_is_capital(string s) {
	if (s.len == 0 || !(s.str[ 0] >= 'A' && s.str[ 0] <= 'Z')) {
		return false;
	}
	for (int i = 1; i < s.len; ++i) {
		if (s.str[ i] >= 'A' && s.str[ i] <= 'Z') {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
bool string_starts_with_capital(string s) {
	if (s.len == 0 || !(s.str[ 0] >= 'A' && s.str[ 0] <= 'Z')) {
		return false;
	}
	return true;
}

string string_title(string s) {
	Array_string words = string_split(s, _SLIT(" "));
	Array_string tit = __new_array_with_default(0, 0, sizeof(string), 0);
	for (int _t1 = 0; _t1 < words.len; ++_t1) {
		string word = ((string*)words.data)[_t1];
		array_push((array*)&tit, _MOV((string[]){ string_capitalize(word) }));
	}
	string title = Array_string_join(tit, _SLIT(" "));
	return title;
}

bool string_is_title(string s) {
	Array_string words = string_split(s, _SLIT(" "));
	for (int _t1 = 0; _t1 < words.len; ++_t1) {
		string word = ((string*)words.data)[_t1];
		if (!string_is_capital(word)) {
			return false;
		}
	}
	return true;
}

string string_find_between(string s, string start, string end) {
	int start_pos = string_index_(s, start);
	if (start_pos == -1) {
		return _SLIT("");
	}
	string val = string_substr(s, (int)(start_pos + start.len), 2147483647);
	int end_pos = string_index_(val, end);
	if (end_pos == -1) {
		return val;
	}
	return string_substr(val, 0, end_pos);
}

// Attr: [inline]
inline string string_trim_space(string s) {
	return string_trim(s, _SLIT(" \n\t\v\f\r"));
}

string string_trim(string s, string cutset) {
	if ((s).len == 0 || (cutset).len == 0) {
		return string_clone(s);
	}
	multi_return_int_int mr_43837 = string_trim_indexes(s, cutset);
	int left = mr_43837.arg0;
	int right = mr_43837.arg1;
	return string_substr(s, left, right);
}

// Attr: [direct_array_access]
multi_return_int_int string_trim_indexes(string s, string cutset) {
	int pos_left = 0;
	int pos_right = (int)(s.len - 1);
	bool cs_match = true;
	for (;;) {
		if (!(pos_left <= s.len && pos_right >= -1 && cs_match)) break;
		cs_match = false;
		for (int _t1 = 0; _t1 < cutset.len; ++_t1) {
			u8 cs = cutset.str[_t1];
			if (s.str[ pos_left] == cs) {
				pos_left++;
				cs_match = true;
				break;
			}
		}
		for (int _t2 = 0; _t2 < cutset.len; ++_t2) {
			u8 cs = cutset.str[_t2];
			if (s.str[ pos_right] == cs) {
				pos_right--;
				cs_match = true;
				break;
			}
		}
		if (pos_left > pos_right) {
			return (multi_return_int_int){.arg0=0, .arg1=0};
		}
	}
	return (multi_return_int_int){.arg0=pos_left, .arg1=(int)(pos_right + 1)};
}

// Attr: [direct_array_access]
string string_trim_left(string s, string cutset) {
	if ((s).len == 0 || (cutset).len == 0) {
		return string_clone(s);
	}
	int pos = 0;
	for (;;) {
		if (!(pos < s.len)) break;
		bool found = false;
		for (int _t2 = 0; _t2 < cutset.len; ++_t2) {
			u8 cs = cutset.str[_t2];
			if (s.str[ pos] == cs) {
				found = true;
				break;
			}
		}
		if (!found) {
			break;
		}
		pos++;
	}
	return string_substr(s, pos, 2147483647);
}

// Attr: [direct_array_access]
string string_trim_right(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return string_clone(s);
	}
	int pos = (int)(s.len - 1);
	for (;;) {
		if (!(pos >= 0)) break;
		bool found = false;
		for (int _t2 = 0; _t2 < cutset.len; ++_t2) {
			u8 cs = cutset.str[_t2];
			if (s.str[ pos] == cs) {
				found = true;
			}
		}
		if (!found) {
			break;
		}
		pos--;
	}
	if (pos < 0) {
		return _SLIT("");
	}
	return string_substr(s, 0, (int)(pos + 1));
}

string string_trim_string_left(string s, string str) {
	if (string_starts_with(s, str)) {
		return string_substr(s, str.len, 2147483647);
	}
	return string_clone(s);
}

string string_trim_string_right(string s, string str) {
	if (string_ends_with(s, str)) {
		return string_substr(s, 0, (int)(s.len - str.len));
	}
	return string_clone(s);
}

int compare_strings(string* a, string* b) {
	bool /*A*/ _t2 = true;
		return ((_t2 == (string__lt(*a, *b)))? (-1) : (_t2 == (string__lt(*b, *a)))? (1) : (0));
}

VV_LOCAL_SYMBOL int compare_strings_by_len(string* a, string* b) {
	bool /*A*/ _t2 = true;
		return ((_t2 == (a->len < b->len))? (-1) : (_t2 == (a->len > b->len))? (1) : (0));
}

VV_LOCAL_SYMBOL int compare_lower_strings(string* a, string* b) {
	string aa = string_to_lower(/*rec*/*a);
	string bb = string_to_lower(/*rec*/*b);
	return compare_strings(&aa, &bb);
}

// Attr: [inline]
inline void Array_string_sort_ignore_case(Array_string* s) {
	array_sort_with_compare(s, (voidptr)compare_lower_strings);
}

// Attr: [inline]
inline void Array_string_sort_by_len(Array_string* s) {
	array_sort_with_compare(s, (voidptr)compare_strings_by_len);
}

// Attr: [inline]
inline string string_str(string s) {
	return string_clone(s);
}

VV_LOCAL_SYMBOL u8 string_at(string s, int idx) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (idx < 0 || idx >= s.len) {
			_v_panic( str_intp(3, _MOV((StrIntpData[]){{_SLIT("string index out of range: "), 0xfe07, {.d_i32 = idx}}, {_SLIT(" / "), 0xfe07, {.d_i32 = s.len}}, {_SLIT0, 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	#endif
	return s.str[idx];
}

VV_LOCAL_SYMBOL _option_u8 string_at_with_check(string s, int idx) {
	if (idx < 0 || idx >= s.len) {
		return (_option_u8){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	{ // Unsafe block
		_option_u8 _t2;
		_option_ok(&(u8[]) { s.str[idx] }, (_option*)(&_t2), sizeof(u8));
		return _t2;
	}
	return (_option_u8){0};
}

// Attr: [direct_array_access]
bool string_is_oct(string str) {
	int i = 0;
	if (str.len == 0) {
		return false;
	}
	if (str.str[ i] == '0') {
		i++;
	} else if (str.str[ i] == '-' || str.str[ i] == '+') {
		i++;
		if (str.str[ i] == '0') {
			i++;
		} else {
			return false;
		}
	} else {
		return false;
	}
	if (str.str[ i] == 'o') {
		i++;
	} else {
		return false;
	}
	if (i == str.len) {
		return false;
	}
	for (;;) {
		if (!(i < str.len)) break;
		if (str.str[ i] < '0' || str.str[ i] > '7') {
			return false;
		}
		i++;
	}
	return true;
}

// Attr: [direct_array_access]
bool string_is_bin(string str) {
	int i = 0;
	if (str.len == 0) {
		return false;
	}
	if (str.str[ i] == '0') {
		i++;
	} else if (str.str[ i] == '-' || str.str[ i] == '+') {
		i++;
		if (str.str[ i] == '0') {
			i++;
		} else {
			return false;
		}
	} else {
		return false;
	}
	if (str.str[ i] == 'b') {
		i++;
	} else {
		return false;
	}
	if (i == str.len) {
		return false;
	}
	for (;;) {
		if (!(i < str.len)) break;
		if (str.str[ i] < '0' || str.str[ i] > '1') {
			return false;
		}
		i++;
	}
	return true;
}

// Attr: [direct_array_access]
bool string_is_hex(string str) {
	int i = 0;
	if (str.len == 0) {
		return false;
	}
	if (str.str[ i] == '0') {
		i++;
	} else if (str.str[ i] == '-' || str.str[ i] == '+') {
		i++;
		if (str.str[ i] == '0') {
			i++;
		} else {
			return false;
		}
	} else {
		return false;
	}
	if (str.str[ i] == 'x') {
		i++;
	} else {
		return false;
	}
	if (i == str.len) {
		return false;
	}
	for (;;) {
		if (!(i < str.len)) break;
		if ((str.str[ i] < '0' || str.str[ i] > '9') && ((str.str[ i] < 'a' || str.str[ i] > 'f') && (str.str[ i] < 'A' || str.str[ i] > 'F'))) {
			return false;
		}
		i++;
	}
	return true;
}

// Attr: [direct_array_access]
bool string_is_int(string str) {
	int i = 0;
	if (str.len == 0) {
		return false;
	}
	if ((str.str[ i] != '-' && str.str[ i] != '+') && (!u8_is_digit(str.str[ i]))) {
		return false;
	} else {
		i++;
	}
	if (i == str.len && (!u8_is_digit(str.str[ (int)(i - 1)]))) {
		return false;
	}
	for (;;) {
		if (!(i < str.len)) break;
		if (str.str[ i] < '0' || str.str[ i] > '9') {
			return false;
		}
		i++;
	}
	return true;
}

// Attr: [inline]
inline bool u8_is_space(u8 c) {
	return c == 32 || (c > 8 && c < 14) || c == 0x85 || c == 0xa0;
}

// Attr: [inline]
inline bool u8_is_digit(u8 c) {
	return c >= '0' && c <= '9';
}

// Attr: [inline]
inline bool u8_is_hex_digit(u8 c) {
	return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

// Attr: [inline]
inline bool u8_is_oct_digit(u8 c) {
	return c >= '0' && c <= '7';
}

// Attr: [inline]
inline bool u8_is_bin_digit(u8 c) {
	return c == '0' || c == '1';
}

// Attr: [inline]
inline bool u8_is_letter(u8 c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// Attr: [inline]
inline bool u8_is_alnum(u8 c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

// Attr: [manualfree]
// Attr: [unsafe]
void string_free(string* s) {
	if (s->is_lit == -98761234) {
		u8* double_free_msg = ((u8*)("double string.free() detected\n"));
		int double_free_msg_len = vstrlen(double_free_msg);
		#if defined(_VFREESTANDING)
		{
		}
		#else
		{
			_write_buf_to_fd(1, double_free_msg, double_free_msg_len);
		}
		#endif
		return;
	}
	if (s->is_lit == 1 || s->str == 0) {
		return;
	}
	{ // Unsafe block
		_v_free(s->str);
		s->str = ((void*)0);
	}
	s->is_lit = -98761234;
}

string string_before(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, 0, pos);
}

string string_all_before(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, 0, pos);
}

string string_all_before_last(string s, string sub) {
	int pos = string_index_last_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, 0, pos);
}

string string_all_after(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}

string string_all_after_last(string s, string sub) {
	int pos = string_index_last_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}

string string_all_after_first(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}

// Attr: [inline]
inline string string_after(string s, string sub) {
	return string_all_after_last(s, sub);
}

string string_after_char(string s, u8 sub) {
	int pos = -1;
	for (int i = 0; i < s.len; ++i) {
		u8 c = s.str[i];
		if (c == sub) {
			pos = i;
			break;
		}
	}
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + 1), 2147483647);
}

string Array_string_join(Array_string a, string sep) {
	if (a.len == 0) {
		return _SLIT("");
	}
	int len = 0;
	for (int _t2 = 0; _t2 < a.len; ++_t2) {
		string val = ((string*)a.data)[_t2];
		len += (int)(val.len + sep.len);
	}
	len -= sep.len;
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	int idx = 0;
	for (int i = 0; i < a.len; ++i) {
		string val = ((string*)a.data)[i];
		{ // Unsafe block
			vmemcpy(((voidptr)(res.str + idx)), val.str, val.len);
			idx += val.len;
		}
		if (i != (int)(a.len - 1)) {
			{ // Unsafe block
				vmemcpy(((voidptr)(res.str + idx)), sep.str, sep.len);
				idx += sep.len;
			}
		}
	}
	{ // Unsafe block
		res.str[res.len] = 0;
	}
	return res;
}

// Attr: [inline]
inline string Array_string_join_lines(Array_string s) {
	return Array_string_join(s, _SLIT("\n"));
}

// Attr: [direct_array_access]
string string_reverse(string s) {
	if (s.len == 0 || s.len == 1) {
		return string_clone(s);
	}
	string res = ((string){.str = malloc_noscan((int)(s.len + 1)), .len = s.len});
	for (int i = (int)(s.len - 1); i >= 0; i--) {
		{ // Unsafe block
			res.str[(int)((int)(s.len - i) - 1)] = s.str[ i];
		}
	}
	{ // Unsafe block
		res.str[res.len] = 0;
	}
	return res;
}

string string_limit(string s, int max) {
	Array_rune u = string_runes(s);
	if (u.len <= max) {
		return string_clone(s);
	}
	return Array_rune_string(array_slice(u, 0, max));
}

int string_hash(string s) {
	u32 h = ((u32)(0U));
	if (h == 0U && s.len > 0) {
		for (int _t1 = 0; _t1 < s.len; ++_t1) {
			u8 c = s.str[_t1];
			h = (u32)((u32)(h * 31U) + ((u32)(c)));
		}
	}
	return ((int)(h));
}

Array_u8 string_bytes(string s) {
	if (s.len == 0) {
		return __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
	}
	Array_u8 buf = __new_array_with_default_noscan(s.len, 0, sizeof(u8), 0);
	vmemcpy(buf.data, s.str, s.len);
	return buf;
}

// Attr: [direct_array_access]
string string_repeat(string s, int count) {
	if (count < 0) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("string.repeat: count is negative: "), 0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	} else if (count == 0) {
		return _SLIT("");
	} else if (count == 1) {
		return string_clone(s);
	}
	u8* ret = malloc_noscan((int)((int)(s.len * count) + 1));
	for (int i = 0; i < count; ++i) {
		vmemcpy(ret + (int)(i * s.len), s.str, s.len);
	}
	int new_len = (int)(s.len * count);
	{ // Unsafe block
		ret[new_len] = 0;
	}
	return u8_vstring_with_len(ret, new_len);
}

Array_string string_fields(string s) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	int word_start = 0;
	int word_len = 0;
	bool is_in_word = false;
	bool is_space = false;
	for (int i = 0; i < s.len; ++i) {
		u8 c = s.str[i];
		is_space = (c == 32 || c == 9 || c == 10);
		if (!is_space) {
			word_len++;
		}
		if (!is_in_word && !is_space) {
			word_start = i;
			is_in_word = true;
			continue;
		}
		if (is_space && is_in_word) {
			array_push((array*)&res, _MOV((string[]){ string_substr(s, word_start, (int)(word_start + word_len)) }));
			is_in_word = false;
			word_len = 0;
			word_start = 0;
			continue;
		}
	}
	if (is_in_word && word_len > 0) {
		array_push((array*)&res, _MOV((string[]){ string_substr(s, word_start, s.len) }));
	}
	return res;
}

// Attr: [inline]
inline string string_strip_margin(string s) {
	return string_strip_margin_custom(s, '|');
}

// Attr: [direct_array_access]
string string_strip_margin_custom(string s, u8 del) {
	u8 sep = del;
	if (u8_is_space(sep)) {
		println(_SLIT("Warning: `strip_margin` cannot use white-space as a delimiter"));
		println(_SLIT("    Defaulting to `|`"));
		sep = '|';
	}
	u8* ret = malloc_noscan((int)(s.len + 1));
	int count = 0;
	for (int i = 0; i < s.len; i++) {
		if (s.str[ i] == 10 || s.str[ i] == 13) {
			{ // Unsafe block
				ret[count] = s.str[ i];
			}
			count++;
			if (s.str[ i] == 13 && i < (int)(s.len - 1) && s.str[ (int)(i + 1)] == 10) {
				{ // Unsafe block
					ret[count] = s.str[ (int)(i + 1)];
				}
				count++;
				i++;
			}
			for (;;) {
				if (!(s.str[ i] != sep)) break;
				i++;
				if (i >= s.len) {
					break;
				}
			}
		} else {
			{ // Unsafe block
				ret[count] = s.str[ i];
			}
			count++;
		}
	}
	{ // Unsafe block
		ret[count] = 0;
		return u8_vstring_with_len(ret, count);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string string_trim_indent(string s) {
	Array_string lines = string_split_into_lines(s);
	Array_string _t3 = {0};
	Array_string _t3_orig = lines;
	int _t3_len = _t3_orig.len;
	_t3 = __new_array(0, _t3_len, sizeof(string));

	for (int _t4 = 0; _t4 < _t3_len; ++_t4) {
		string it = ((string*) _t3_orig.data)[_t4];
		if (!string_is_blank(it)) {
			array_push((array*)&_t3, &it);
		}
	}
	Array_int _t1 = {0};
	Array_string _t1_orig =_t3;
	int _t1_len = _t1_orig.len;
	_t1 = __new_array_noscan(0, _t1_len, sizeof(int));

	for (int _t5 = 0; _t5 < _t1_len; ++_t5) {
		string it = ((string*) _t1_orig.data)[_t5];
		int _t2 = string_indent_width(it);
		array_push_noscan((array*)&_t1, &_t2);
	}
	Array_int lines_indents =_t1;
	int min_common_indent = ((int)(_const_max_int));
	for (int _t6 = 0; _t6 < lines_indents.len; ++_t6) {
		int line_indent = ((int*)lines_indents.data)[_t6];
		if (line_indent < min_common_indent) {
			min_common_indent = line_indent;
		}
	}
	if (lines.len > 0 && string_is_blank((*(string*)array_first(lines)))) {
		lines = array_slice(lines, 1, 2147483647);
	}
	if (lines.len > 0 && string_is_blank((*(string*)array_last(lines)))) {
		lines = array_slice(lines, 0, (int)(lines.len - 1));
	}
	Array_string trimmed_lines = __new_array_with_default(0, lines.len, sizeof(string), 0);
	for (int _t7 = 0; _t7 < lines.len; ++_t7) {
		string line = ((string*)lines.data)[_t7];
		if (string_is_blank(line)) {
			array_push((array*)&trimmed_lines, _MOV((string[]){ line }));
			continue;
		}
		array_push((array*)&trimmed_lines, _MOV((string[]){ string_substr(line, min_common_indent, 2147483647) }));
	}
	return Array_string_join(trimmed_lines, _SLIT("\n"));
}

int string_indent_width(string s) {
	for (int i = 0; i < s.len; ++i) {
		u8 c = s.str[i];
		if (!u8_is_space(c)) {
			return i;
		}
	}
	return 0;
}

bool string_is_blank(string s) {
	if (s.len == 0) {
		return true;
	}
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (!u8_is_space(c)) {
			return false;
		}
	}
	return true;
}

// Attr: [direct_array_access]
bool string_match_glob(string name, string pattern) {
	int px = 0;
	int nx = 0;
	int next_px = 0;
	int next_nx = 0;
	int plen = pattern.len;
	int nlen = name.len;
	for (;;) {
		if (!(px < plen || nx < nlen)) break;
		if (px < plen) {
			u8 c = pattern.str[ px];

			if (c == ('?')) {
				if (nx < nlen) {
					px++;
					nx++;
					continue;
				}
			}
			else if (c == ('*')) {
				next_px = px;
				next_nx = (int)(nx + 1);
				px++;
				continue;
			}
			else if (c == ('[')) {
				if (nx < nlen) {
					u8 wanted_c = name.str[ nx];
					int bstart = px;
					bool is_inverted = false;
					bool inner_match = false;
					int inner_idx = (int)(bstart + 1);
					int inner_c = 0;
					if (inner_idx < plen) {
						inner_c = pattern.str[ inner_idx];
						if (inner_c == '^') {
							is_inverted = true;
							inner_idx++;
						}
					}
					for (; inner_idx < plen; inner_idx++) {
						inner_c = pattern.str[ inner_idx];
						if (inner_c == ']') {
							break;
						}
						if (inner_c == wanted_c) {
							inner_match = true;
							for (;;) {
								if (!(px < plen && pattern.str[ px] != ']')) break;
								px++;
							}
							break;
						}
					}
					if (is_inverted) {
						if (inner_match) {
							return false;
						} else {
							px = inner_idx;
						}
					}
				}
				px++;
				nx++;
				continue;
			}
			else {
				if (nx < nlen && name.str[ nx] == c) {
					px++;
					nx++;
					continue;
				}
			}
		}
		if (0 < next_nx && next_nx <= nlen) {
			px = next_px;
			nx = next_nx;
			continue;
		}
		return false;
	}
	return true;
}

// Attr: [inline]
inline bool string_is_ascii(string s) {
	bool _t2 = false;
	Array_u8 _t2_orig = string_bytes(s);
	int _t2_len = _t2_orig.len;
	for (int _t3 = 0; _t3 < _t2_len; ++_t3) {
		u8 it = ((u8*) _t2_orig.data)[_t3];
		if (it < ((u8)(' ')) || it > ((u8)('~'))) {
			_t2 = true;
			break;
		}
	}
	return !_t2;
}

// Attr: [unsafe]
Array_u8 byteptr_vbytes(byteptr data, int len) {
	return voidptr_vbytes(((voidptr)(data)), len);
}

// Attr: [unsafe]
string byteptr_vstring(byteptr bp) {
	return ((string){.str = bp, .len = vstrlen(bp)});
}

// Attr: [unsafe]
string byteptr_vstring_with_len(byteptr bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 0});
}

// Attr: [unsafe]
string charptr_vstring(charptr cp) {
	return ((string){.str = ((byteptr)(cp)), .len = vstrlen_char(cp), .is_lit = 0});
}

// Attr: [unsafe]
string charptr_vstring_with_len(charptr cp, int len) {
	return ((string){.str = ((byteptr)(cp)), .len = len, .is_lit = 0});
}

// Attr: [unsafe]
string byteptr_vstring_literal(byteptr bp) {
	return ((string){.str = bp, .len = vstrlen(bp), .is_lit = 1});
}

// Attr: [unsafe]
string byteptr_vstring_literal_with_len(byteptr bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 1});
}

// Attr: [unsafe]
string charptr_vstring_literal(charptr cp) {
	return ((string){.str = ((byteptr)(cp)), .len = vstrlen_char(cp), .is_lit = 1});
}

// Attr: [unsafe]
string charptr_vstring_literal_with_len(charptr cp, int len) {
	return ((string){.str = ((byteptr)(cp)), .len = len, .is_lit = 1});
}

string StrIntpType_str(StrIntpType x) {
	string _t2 = (string){.str=(byteptr)"", .is_lit=1};
	switch (x) {
		case StrIntpType__si_no_str: {
				_t2 = _SLIT("no_str");
				break;
		}
		case StrIntpType__si_c: {
				_t2 = _SLIT("c");
				break;
		}
		case StrIntpType__si_u8: {
				_t2 = _SLIT("u8");
				break;
		}
		case StrIntpType__si_i8: {
				_t2 = _SLIT("i8");
				break;
		}
		case StrIntpType__si_u16: {
				_t2 = _SLIT("u16");
				break;
		}
		case StrIntpType__si_i16: {
				_t2 = _SLIT("i16");
				break;
		}
		case StrIntpType__si_u32: {
				_t2 = _SLIT("u32");
				break;
		}
		case StrIntpType__si_i32: {
				_t2 = _SLIT("i32");
				break;
		}
		case StrIntpType__si_u64: {
				_t2 = _SLIT("u64");
				break;
		}
		case StrIntpType__si_i64: {
				_t2 = _SLIT("i64");
				break;
		}
		case StrIntpType__si_f32: {
				_t2 = _SLIT("f32");
				break;
		}
		case StrIntpType__si_f64: {
				_t2 = _SLIT("f64");
				break;
		}
		case StrIntpType__si_g32: {
				_t2 = _SLIT("f32");
				break;
		}
		case StrIntpType__si_g64: {
				_t2 = _SLIT("f64");
				break;
		}
		case StrIntpType__si_e32: {
				_t2 = _SLIT("f32");
				break;
		}
		case StrIntpType__si_e64: {
				_t2 = _SLIT("f64");
				break;
		}
		case StrIntpType__si_s: {
				_t2 = _SLIT("s");
				break;
		}
		case StrIntpType__si_p: {
				_t2 = _SLIT("p");
				break;
		}
		case StrIntpType__si_r: {
				_t2 = _SLIT("r");
				break;
		}
		case StrIntpType__si_vp: {
				_t2 = _SLIT("vp");
				break;
		}
	}
	return _t2;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f32 fabs32(f32 x) {
	return (x < 0 ? (-x) : (x));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 fabs64(f64 x) {
	return (x < 0 ? (-x) : (x));
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 abs64(i64 x) {
	return (x < 0 ? (((u64)(-x))) : (((u64)(x))));
}

u64 get_str_intp_u64_format(StrIntpType fmt_type, int in_width, int in_precision, bool in_tail_zeros, bool in_sign, u8 in_pad_ch, int in_base, bool in_upper_case) {
	u64 width = (in_width != 0 ? (abs64(in_width)) : (((u64)(0U))));
	u64 align = (in_width > 0 ? (((u64)(32U))) : (((u64)(0U))));
	u64 upper_case = (in_upper_case ? (((u64)(128U))) : (((u64)(0U))));
	u64 sign = (in_sign ? (((u64)(256U))) : (((u64)(0U))));
	u64 precision = (in_precision != 987698 ? (((((u64)((in_precision & 0x7F))) << 9U))) : ((((u64)(0x7FU)) << 9U)));
	u32 tail_zeros = (in_tail_zeros ? ((((u32)(1U)) << 16U)) : (((u32)(0U))));
	u64 base = ((u64)((((u32)((in_base & 0xf))) << 27U)));
	u64 res = ((u64)(((((((((((((u64)(fmt_type)) & 0x1FU)) | align) | upper_case) | sign) | precision) | tail_zeros) | ((((u64)((width & 0x3FFU))) << 17U))) | base) | ((((u64)(in_pad_ch)) << 31U)))));
	return res;
}

u32 get_str_intp_u32_format(StrIntpType fmt_type, int in_width, int in_precision, bool in_tail_zeros, bool in_sign, u8 in_pad_ch, int in_base, bool in_upper_case) {
	u64 width = (in_width != 0 ? (abs64(in_width)) : (((u32)(0U))));
	u32 align = (in_width > 0 ? (((u32)(32U))) : (((u32)(0U))));
	u32 upper_case = (in_upper_case ? (((u32)(128U))) : (((u32)(0U))));
	u32 sign = (in_sign ? (((u32)(256U))) : (((u32)(0U))));
	u32 precision = (in_precision != 987698 ? (((((u32)((in_precision & 0x7F))) << 9U))) : ((((u32)(0x7FU)) << 9U)));
	u32 tail_zeros = (in_tail_zeros ? ((((u32)(1U)) << 16U)) : (((u32)(0U))));
	u32 base = ((u32)((((u32)((in_base & 0xf))) << 27U)));
	u32 res = ((u32)(((((((((((((u32)(fmt_type)) & 0x1FU)) | align) | upper_case) | sign) | precision) | tail_zeros) | ((((u32)((width & 0x3FFU))) << 17U))) | base) | ((((u32)((in_pad_ch & 1))) << 31U)))));
	return res;
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL void StrIntpData_process_str_intp_data(StrIntpData* data, strings__Builder* sb) {
	u32 x = data->fmt;
	StrIntpType typ = ((StrIntpType)((x & 0x1FU)));
	int align = ((int)((((x >> 5U)) & 0x01U)));
	bool upper_case = ((((x >> 7U)) & 0x01U)) > 0U;
	int sign = ((int)((((x >> 8U)) & 0x01U)));
	int precision = ((int)((((x >> 9U)) & 0x7FU)));
	bool tail_zeros = ((((x >> 16U)) & 0x01U)) > 0U;
	int width = ((int)(((i16)((((x >> 17U)) & 0x3FFU)))));
	int base = (((int)((x >> 27U))) & 0xF);
	u8 fmt_pad_ch = ((u8)((((x >> 31U)) & 0xFFU)));
	if (typ == StrIntpType__si_no_str) {
		return;
	}
	if (base > 0) {
		base += 2;
	}
	u8 pad_ch = ((u8)(' '));
	if (fmt_pad_ch > 0) {
		pad_ch = '0';
	}
	int len0_set = (width > 0 ? (width) : (-1));
	int len1_set = (precision == 0x7F ? (-1) : (precision));
	bool sign_set = sign == 1;
	strconv__BF_param bf = ((strconv__BF_param){
		.pad_ch = pad_ch,
		.len0 = len0_set,
		.len1 = len1_set,
		.positive = true,
		.sign_flag = sign_set,
		.align = strconv__Align_text__left,
		.allign = strconv__Align_text__right,
		.rm_tail_zero = tail_zeros,
	});
	if (fmt_pad_ch == 0) {
		switch (align) {
			case 0: {
					bf.align = strconv__Align_text__left;
					break;
			}
			case 1: {
					bf.align = strconv__Align_text__right;
					break;
			}
			default: {
					bf.align = strconv__Align_text__left;
					break;
			}
		}
		
	} else {
		bf.align = strconv__Align_text__right;
	}
	{ // Unsafe block
		if (typ == StrIntpType__si_s) {
			if (upper_case) {
				string s = string_to_upper(data->d.d_s);
				if (width == 0) {
					strings__Builder_write_string(sb, s);
				} else {
					strconv__format_str_sb(s, bf, sb);
				}
				string_free(&s);
			} else {
				if (width == 0) {
					strings__Builder_write_string(sb, data->d.d_s);
				} else {
					strconv__format_str_sb(data->d.d_s, bf, sb);
				}
			}
			return;
		}
		if (typ == StrIntpType__si_r) {
			if (width > 0) {
				if (upper_case) {
					string s = string_to_upper(data->d.d_s);
					for (int _t1 = 1; _t1 < ((int)(1 + ((width > 0 ? (width) : (0))))); ++_t1) {
						strings__Builder_write_string(sb, s);
					}
					string_free(&s);
				} else {
					for (int _t2 = 1; _t2 < ((int)(1 + ((width > 0 ? (width) : (0))))); ++_t2) {
						strings__Builder_write_string(sb, data->d.d_s);
					}
				}
			}
			return;
		}
		if (typ == StrIntpType__si_i8 || typ == StrIntpType__si_i16 || typ == StrIntpType__si_i32 || typ == StrIntpType__si_i64) {
			i64 d = data->d.d_i64;
			if (typ == StrIntpType__si_i8) {
				d = ((i64)(data->d.d_i8));
			} else if (typ == StrIntpType__si_i16) {
				d = ((i64)(data->d.d_i16));
			} else if (typ == StrIntpType__si_i32) {
				d = ((i64)(data->d.d_i32));
			}
			if (base == 0) {
				if (width == 0) {
					string d_str = i64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				if (d < 0) {
					bf.positive = false;
				}
				strconv__format_dec_sb(abs64(d), bf, sb);
			} else {
				if (base == 3) {
					base = 2;
				}
				i64 absd = d;
				bool write_minus = false;
				if (d < 0 && pad_ch != ' ') {
					absd = -d;
					write_minus = true;
				}
				string hx = strconv__format_int(absd, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (write_minus) {
					strings__Builder_write_u8(sb, '-');
					bf.len0--;
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		if (typ == StrIntpType__si_u8 || typ == StrIntpType__si_u16 || typ == StrIntpType__si_u32 || typ == StrIntpType__si_u64) {
			u64 d = data->d.d_u64;
			if (typ == StrIntpType__si_u8) {
				d = ((u64)(data->d.d_u8));
			} else if (typ == StrIntpType__si_u16) {
				d = ((u64)(data->d.d_u16));
			} else if (typ == StrIntpType__si_u32) {
				d = ((u64)(data->d.d_u32));
			}
			if (base == 0) {
				if (width == 0) {
					string d_str = u64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				strconv__format_dec_sb(d, bf, sb);
			} else {
				if (base == 3) {
					base = 2;
				}
				string hx = strconv__format_uint(d, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		if (typ == StrIntpType__si_p) {
			u64 d = data->d.d_u64;
			base = 16;
			if (base == 0) {
				if (width == 0) {
					string d_str = u64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				strconv__format_dec_sb(d, bf, sb);
			} else {
				string hx = strconv__format_uint(d, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		bool use_default_str = false;
		if (width == 0 && precision == 0x7F) {
			bf.len1 = 3;
			use_default_str = true;
		}
		if (bf.len1 < 0) {
			bf.len1 = 3;
		}
		switch (typ) {
			case StrIntpType__si_f32: {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						if (use_default_str) {
							string f = f32_str(data->d.d_f32);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						} else {
							if (data->d.d_f32 < 0) {
								bf.positive = false;
							}
							string f = strconv__format_fl(data->d.d_f32, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
					}
					#endif
					break;
			}
			case StrIntpType__si_f64: {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						if (use_default_str) {
							string f = f64_str(data->d.d_f64);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						} else {
							if (data->d.d_f64 < 0) {
								bf.positive = false;
							}
							strconv__Float64u f_union = ((strconv__Float64u){.f = data->d.d_f64,});
							if (f_union.u == _const_strconv__double_minus_zero) {
								bf.positive = false;
							}
							string f = strconv__format_fl(data->d.d_f64, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
					}
					#endif
					break;
			}
			case StrIntpType__si_g32: {
					if (use_default_str) {
						#if !defined(CUSTOM_DEFINE_nofloat)
						{
							string f = f32_strg(data->d.d_f32);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
						#endif
					} else {
						if (data->d.d_f32 == _const_strconv__single_plus_zero) {
							string tmp_str = _SLIT("0");
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
							return;
						}
						if (data->d.d_f32 == _const_strconv__single_minus_zero) {
							string tmp_str = _SLIT("-0");
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
							return;
						}
						if (data->d.d_f32 == _const_strconv__single_plus_infinity) {
							string tmp_str = _SLIT("+inf");
							if (upper_case) {
								tmp_str = _SLIT("+INF");
							}
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
						}
						if (data->d.d_f32 == _const_strconv__single_minus_infinity) {
							string tmp_str = _SLIT("-inf");
							if (upper_case) {
								tmp_str = _SLIT("-INF");
							}
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
						}
						if (data->d.d_f32 < 0) {
							bf.positive = false;
						}
						f32 d = fabs32(data->d.d_f32);
						if (d < ((f32)(999999.0)) && d >= ((f32)(0.00001))) {
							string f = strconv__format_fl(data->d.d_f32, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
							return;
						}
						string f = strconv__format_es(data->d.d_f32, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
					break;
			}
			case StrIntpType__si_g64: {
					if (use_default_str) {
						#if !defined(CUSTOM_DEFINE_nofloat)
						{
							string f = f64_strg(data->d.d_f64);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
						#endif
					} else {
						if (data->d.d_f64 == _const_strconv__double_plus_zero) {
							string tmp_str = _SLIT("0");
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
							return;
						}
						if (data->d.d_f64 == _const_strconv__double_minus_zero) {
							string tmp_str = _SLIT("-0");
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
							return;
						}
						if (data->d.d_f64 == _const_strconv__double_plus_infinity) {
							string tmp_str = _SLIT("+inf");
							if (upper_case) {
								tmp_str = _SLIT("+INF");
							}
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
						}
						if (data->d.d_f64 == _const_strconv__double_minus_infinity) {
							string tmp_str = _SLIT("-inf");
							if (upper_case) {
								tmp_str = _SLIT("-INF");
							}
							strconv__format_str_sb(tmp_str, bf, sb);
							string_free(&tmp_str);
						}
						if (data->d.d_f64 < 0) {
							bf.positive = false;
						}
						f64 d = fabs64(data->d.d_f64);
						if (d < ((f64)(999999.0)) && d >= ((f64)(0.00001))) {
							string f = strconv__format_fl(data->d.d_f64, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
							return;
						}
						string f = strconv__format_es(data->d.d_f64, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
					break;
			}
			case StrIntpType__si_e32: {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						bf.len1 = 6;
						if (use_default_str) {
							string f = f32_str(data->d.d_f32);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						} else {
							if (data->d.d_f32 < 0) {
								bf.positive = false;
							}
							string f = strconv__format_es(data->d.d_f32, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
					}
					#endif
					break;
			}
			case StrIntpType__si_e64: {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						bf.len1 = 6;
						if (use_default_str) {
							string f = f64_str(data->d.d_f64);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						} else {
							if (data->d.d_f64 < 0) {
								bf.positive = false;
							}
							string f = strconv__format_es(data->d.d_f64, bf);
							if (upper_case) {
								string tmp = f;
								f = string_to_upper(f);
								string_free(&tmp);
							}
							strings__Builder_write_string(sb, f);
							string_free(&f);
						}
					}
					#endif
					break;
			}
			case StrIntpType__si_c: {
					string ss = utf32_to_str(data->d.d_c);
					strings__Builder_write_string(sb, ss);
					string_free(&ss);
					break;
			}
			case StrIntpType__si_vp: {
					string ss = u64_hex(((u64)(data->d.d_vp)));
					strings__Builder_write_string(sb, ss);
					string_free(&ss);
					break;
			}
			case StrIntpType__si_no_str:
			case StrIntpType__si_u8:
			case StrIntpType__si_i8:
			case StrIntpType__si_u16:
			case StrIntpType__si_i16:
			case StrIntpType__si_u32:
			case StrIntpType__si_i32:
			case StrIntpType__si_u64:
			case StrIntpType__si_i64:
			case StrIntpType__si_s:
			case StrIntpType__si_p:
			case StrIntpType__si_r:
			default: {
					strings__Builder_write_string(sb, _SLIT("***ERROR!***"));
					break;
			}
		}
		
	}
}

// Attr: [direct_array_access]
// Attr: [manualfree]
string str_intp(int data_len, StrIntpData* input_base) {
	strings__Builder res = strings__new_builder(256);
	for (int i = 0; i < data_len; i++) {
		StrIntpData* data = &input_base[i];
		if (data->str.len != 0) {
			strings__Builder_write_string(&res, data->str);
		}
		if (data->fmt != 0U) {
			StrIntpData_process_str_intp_data(data, (voidptr)&/*qq*/res);
		}
	}
	string ret = strings__Builder_str(&res);
	strings__Builder_free(&res);
	return ret;
}

// Attr: [inline]
inline string str_intp_sq(string in_str) {
	return  str_intp(3, _MOV((StrIntpData[]){{_SLIT("str_intp(2, _MOV((StrIntpData[]){{_SLIT(\"\'\"), "), 0xfe10, {.d_s = _const_si_s_code}}, {_SLIT(", {.d_s = "), 0xfe10, {.d_s = in_str}}, {_SLIT("}},{_SLIT(\"\'\"), 0, {.d_c = 0 }}}))"), 0, { .d_c = 0 }}}));
}

// Attr: [inline]
inline string str_intp_rune(string in_str) {
	return  str_intp(3, _MOV((StrIntpData[]){{_SLIT("str_intp(2, _MOV((StrIntpData[]){{_SLIT(\"`\"), "), 0xfe10, {.d_s = _const_si_s_code}}, {_SLIT(", {.d_s = "), 0xfe10, {.d_s = in_str}}, {_SLIT("}},{_SLIT(\"`\"), 0, {.d_c = 0 }}}))"), 0, { .d_c = 0 }}}));
}

// Attr: [inline]
inline string str_intp_g32(string in_str) {
	return  str_intp(3, _MOV((StrIntpData[]){{_SLIT("str_intp(1, _MOV((StrIntpData[]){{_SLIT0, "), 0xfe10, {.d_s = _const_si_g32_code}}, {_SLIT(", {.d_f32 = "), 0xfe10, {.d_s = in_str}}, {_SLIT(" }}}))"), 0, { .d_c = 0 }}}));
}

// Attr: [inline]
inline string str_intp_g64(string in_str) {
	return  str_intp(3, _MOV((StrIntpData[]){{_SLIT("str_intp(1, _MOV((StrIntpData[]){{_SLIT0, "), 0xfe10, {.d_s = _const_si_g64_code}}, {_SLIT(", {.d_f64 = "), 0xfe10, {.d_s = in_str}}, {_SLIT(" }}}))"), 0, { .d_c = 0 }}}));
}

// Attr: [manualfree]
string str_intp_sub(string base_str, string in_str) {
	_option_int _t1 = string_index(base_str, _SLIT("%%"));
	if (_t1.state != 0) {
		IError err = _t1.err;
		eprintln(_SLIT("No string interpolation %% parameters"));
		_v_exit(1);
		VUNREACHABLE();
	;
	}
	
 	int index =  (*(int*)_t1.data);
	{ // Unsafe block
		string st_str = string_substr(base_str, 0, index);
		if ((int)(index + 2) < base_str.len) {
			string en_str = string_substr(base_str, (int)(index + 2), 2147483647);
			string res_str =  str_intp(5, _MOV((StrIntpData[]){{_SLIT("str_intp(2, _MOV((StrIntpData[]){{_SLIT(\""), 0xfe10, {.d_s = st_str}}, {_SLIT("\"), "), 0xfe10, {.d_s = _const_si_s_code}}, {_SLIT(", {.d_s = "), 0xfe10, {.d_s = in_str}}, {_SLIT(" }},{_SLIT(\""), 0xfe10, {.d_s = en_str}}, {_SLIT("\"), 0, {.d_c = 0}}}))"), 0, { .d_c = 0 }}}));
			string_free(&st_str);
			string_free(&en_str);
			return res_str;
		}
		string res2_str =  str_intp(4, _MOV((StrIntpData[]){{_SLIT("str_intp(1, _MOV((StrIntpData[]){{_SLIT(\""), 0xfe10, {.d_s = st_str}}, {_SLIT("\"), "), 0xfe10, {.d_s = _const_si_s_code}}, {_SLIT(", {.d_s = "), 0xfe10, {.d_s = in_str}}, {_SLIT(" }}}))"), 0, { .d_c = 0 }}}));
		string_free(&st_str);
		return res2_str;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

u16* string_to_wide(string _str) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		Array_rune srunes = string_runes(_str);
		{ // Unsafe block
			u16* result = ((u16*)(vcalloc_noscan((int)(((int)(srunes.len + 1)) * 2))));
			for (int i = 0; i < srunes.len; ++i) {
				rune r = ((rune*)srunes.data)[i];
				result[i] = ((u16)(r));
			}
			result[srunes.len] = 0U;
			return result;
		}
	}
	#endif
	return 0;
}

// Attr: [manualfree]
// Attr: [unsafe]
string string_from_wide(u16* _wstr) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int i = 0;
		for (;;) {
			if (!(_wstr[i] != 0U)) break;
			i++;
		}
		return string_from_wide2(_wstr, i);
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
// Attr: [unsafe]
string string_from_wide2(u16* _wstr, int len) {
	bool string_from_wide2_defer_0 = false;
	strings__Builder sb;
	#if defined(_WIN32)
	{
	}
	#else
	{
		sb = strings__new_builder(len);
		string_from_wide2_defer_0 = true;
		for (int i = 0; i < len; i++) {
			rune u = ((rune)(_wstr[i]));
			strings__Builder_write_rune(&sb, u);
		}
		string res = strings__Builder_str(&sb);
		string _t2 = res;
			// Defer begin
			if (string_from_wide2_defer_0) {
				#if defined(_WIN32)
		#else
					strings__Builder_free(&sb);
				
				#endif
			}
			// Defer end
		return _t2;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

int utf8_char_len(u8 b) {
	return (int_literal)(((((0xe5000000 >> ((((b >> 3)) & 0x1e)))) & 3)) + 1);
}

string utf32_to_str(u32 code) {
	{ // Unsafe block
		u8* buffer = malloc_noscan(5);
		string res = utf32_to_str_no_malloc(code, buffer);
		if (res.len == 0) {
			_v_free(buffer);
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
// Attr: [unsafe]
string utf32_to_str_no_malloc(u32 code, u8* buf) {
	{ // Unsafe block
		int len = utf32_decode_to_buffer(code, buf);
		if (len == 0) {
			return _SLIT("");
		}
		buf[len] = 0;
		return tos(buf, len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
// Attr: [unsafe]
int utf32_decode_to_buffer(u32 code, u8* buf) {
	{ // Unsafe block
		int icode = ((int)(code));
		u8* buffer = ((u8*)(buf));
		if (icode <= 127) {
			buffer[0] = ((u8)(icode));
			return 1;
		} else if (icode <= 2047) {
			buffer[0] = (192 | ((u8)((icode >> 6))));
			buffer[1] = (128 | ((u8)((icode & 63))));
			return 2;
		} else if (icode <= 65535) {
			buffer[0] = (224 | ((u8)((icode >> 12))));
			buffer[1] = (128 | ((((u8)((icode >> 6))) & 63)));
			buffer[2] = (128 | ((u8)((icode & 63))));
			return 3;
		} else if (icode <= 1114111) {
			buffer[0] = (240 | ((u8)((icode >> 18))));
			buffer[1] = (128 | ((((u8)((icode >> 12))) & 63)));
			buffer[2] = (128 | ((((u8)((icode >> 6))) & 63)));
			buffer[3] = (128 | ((u8)((icode & 63))));
			return 4;
		}
	}
	return 0;
}

int string_utf32_code(string _rune) {
	_result_rune _t2 = Array_u8_utf8_to_utf32(string_bytes(_rune));
	if (_t2.is_error) {
		IError err = _t2.err;
		*(rune*) _t2.data = ((rune)(0));
	}
	
 	return ((int)( (*(rune*)_t2.data)));
}

_result_rune Array_u8_utf8_to_utf32(Array_u8 _bytes) {
	if (_bytes.len == 0) {
		_result_rune _t1;
		_result_ok(&(rune[]) { 0 }, (_result*)(&_t1), sizeof(rune));
		return _t1;
	}
	if (_bytes.len == 1) {
		_result_rune _t2;
		_result_ok(&(rune[]) { ((rune)((*(u8*)array_get(_bytes, 0)))) }, (_result*)(&_t2), sizeof(rune));
		return _t2;
	}
	if (_bytes.len > 4) {
		return (_result_rune){ .is_error=true, .err=_v_error(_SLIT("attempted to decode too many bytes, utf-8 is limited to four bytes maximum")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	u8 b = ((u8)(((int)((*(u8*)array_get(_bytes, 0))))));
	b = (b << _bytes.len);
	rune res = ((rune)(b));
	int shift = (int)(6 - _bytes.len);
	for (int i = 1; i < _bytes.len; i++) {
		rune c = ((rune)((*(u8*)array_get(_bytes, i))));
		res = (((rune)(res)) << shift);
		res |= (c & 63);
		shift = 6;
	}
	_result_rune _t4;
	_result_ok(&(rune[]) { res }, (_result*)(&_t4), sizeof(rune));
	return _t4;
}

int utf8_str_visible_length(string s) {
	int l = 0;
	int ul = 1;
	for (int i = 0; i < s.len; i += ul) {
		u8 c = s.str[i];
		ul = (int_literal)(((((0xe5000000 >> ((((s.str[i] >> 3)) & 0x1e)))) & 3)) + 1);
		if ((int)(i + ul) > s.len) {
			return l;
		}
		l++;
		if (ul == 1) {
			continue;
		}

		if (ul == (2)) {
			u64 r = ((u64)((((((u16)(c)) << 8U)) | s.str[(int)(i + 1)])));
			if (r >= 0xcc80U && r < 0xcdb0U) {
				l--;
			}
		}
		else if (ul == (3)) {
			u64 r = ((u64)((((((u32)(c)) << 16U)) | (((((u32)(s.str[(int)(i + 1)])) << 8U)) | s.str[(int)(i + 2)]))));
			if ((r >= 0xe1aab0U && r <= 0xe1ac7fU) || (r >= 0xe1b780U && r <= 0xe1b87fU) || (r >= 0xe28390U && r <= 0xe2847fU) || (r >= 0xefb8a0U && r <= 0xefb8afU)) {
				l--;
			} else if ((r >= 0xe18480U && r <= 0xe1859fU) || (r >= 0xe2ba80U && r <= 0xe2bf95U) || (r >= 0xe38080U && r <= 0xe4b77fU) || (r >= 0xe4b880U && r <= 0xea807fU) || (r >= 0xeaa5a0U && r <= 0xeaa79fU) || (r >= 0xeab080U && r <= 0xed9eafU) || (r >= 0xefa480U && r <= 0xefac7fU) || (r >= 0xefb8b8U && r <= 0xefb9afU)) {
				l++;
			}
		}
		else if (ul == (4)) {
			u64 r = ((u64)((((((u32)(c)) << 24U)) | ((((((u32)(s.str[(int)(i + 1)])) << 16U)) | ((((u32)(s.str[(int)(i + 2)])) << 8U))) | s.str[(int)(i + 3)]))));
			if ((r >= 0x0f9f8880U && r <= 0xf09f8a8fU) || (r >= 0xf09f8c80U && r <= 0xf09f9c90U) || (r >= 0xf09fa490U && r <= 0xf09fa7afU) || (r >= 0xf0a08080U && r <= 0xf180807fU)) {
				l++;
			}
		}
		else {
		}
	}
	return l;
}

// Attr: [inline]
inline bool ArrayFlags_is_empty(ArrayFlags* e) {
	return ((int)(*e)) == 0;
}

// Attr: [inline]
inline bool ArrayFlags_has(ArrayFlags* e, ArrayFlags flag) {
	return ((((int)(*e)) & (((int)(flag))))) != 0;
}

// Attr: [inline]
inline bool ArrayFlags_all(ArrayFlags* e, ArrayFlags flag) {
	return ((((int)(*e)) & (((int)(flag))))) == ((int)(flag));
}

// Attr: [inline]
inline void ArrayFlags_set(ArrayFlags* e, ArrayFlags flag) {
	{ // Unsafe block
		*e = ((ArrayFlags)((((int)(*e)) | (((int)(flag))))));
	}
}

// Attr: [inline]
inline void ArrayFlags_set_all(ArrayFlags* e) {
	{ // Unsafe block
		*e = ((ArrayFlags)(0b1111));
	}
}

// Attr: [inline]
inline void ArrayFlags_clear(ArrayFlags* e, ArrayFlags flag) {
	{ // Unsafe block
		*e = ((ArrayFlags)((((int)(*e)) & ~(((int)(flag))))));
	}
}

// Attr: [inline]
inline void ArrayFlags_clear_all(ArrayFlags* e) {
	{ // Unsafe block
		*e = ((ArrayFlags)(0));
	}
}

// Attr: [inline]
inline void ArrayFlags_toggle(ArrayFlags* e, ArrayFlags flag) {
	{ // Unsafe block
		*e = ((ArrayFlags)((((int)(*e)) ^ (((int)(flag))))));
	}
}

// Attr: [inline]
inline ArrayFlags ArrayFlags__static__zero(void) {
	return ((ArrayFlags)(0));
}

string cmd__options(Array_string args, cmd__CmdOption long_option) {
	string flags = _SLIT("");
	flags = long_option.defa;
	for (int i = 0; i < args.len; ++i) {
		string v = ((string*)args.data)[i];
		if (string__eq(v, long_option.abbr) || string__eq(v, long_option.full)) {
			if ((int)(i + 1) < args.len && string_at((*(string*)array_get(args, (int)(i + 1))), 0) != 45) {
				flags = (*(string*)array_get(args, (int)(i + 1)));
			}
		}
	}
	return flags;
}

bool cmd__set_options(Array_string args, cmd__CmdOption long_option) {
	bool flags = false;
	for (int _t1 = 0; _t1 < args.len; ++_t1) {
		string v = ((string*)args.data)[_t1];
		if (string__eq(v, long_option.abbr) || string__eq(v, long_option.full)) {
			flags = true;
		}
	}
	return flags;
}

#if !defined(_WIN32) && !defined(__ANDROID__)
#endif
strings__textscanner__TextScanner strings__textscanner__new(string input) {
	strings__textscanner__TextScanner _t1 = ((strings__textscanner__TextScanner){.input = input,.ilen = input.len,.pos = 0,});
	return _t1;
}

// Attr: [unsafe]
void strings__textscanner__TextScanner_free(strings__textscanner__TextScanner* ss) {
	string_free(&ss->input);
}

// Attr: [inline]
inline int strings__textscanner__TextScanner_remaining(strings__textscanner__TextScanner* ss) {
	int _t1 = (int)(ss->ilen - ss->pos);
	return _t1;
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_next(strings__textscanner__TextScanner* ss) {
	if (ss->pos < ss->ilen) {
		int opos = ss->pos;
		ss->pos++;
		int _t1 = ss->input.str[ opos];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

// Attr: [inline]
inline void strings__textscanner__TextScanner_skip(strings__textscanner__TextScanner* ss) {
	if (ss->pos < ss->ilen) {
		ss->pos++;
	}
}

// Attr: [inline]
inline void strings__textscanner__TextScanner_skip_n(strings__textscanner__TextScanner* ss, int n) {
	ss->pos += n;
	if (ss->pos > ss->ilen) {
		ss->pos = ss->ilen;
	}
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_peek(strings__textscanner__TextScanner* ss) {
	if (ss->pos < ss->ilen) {
		int _t1 = ss->input.str[ ss->pos];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_peek_n(strings__textscanner__TextScanner* ss, int n) {
	if ((int)(ss->pos + n) < ss->ilen) {
		int _t1 = ss->input.str[ (int)(ss->pos + n)];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

// Attr: [inline]
inline void strings__textscanner__TextScanner_back(strings__textscanner__TextScanner* ss) {
	if (ss->pos > 0) {
		ss->pos--;
	}
}

void strings__textscanner__TextScanner_back_n(strings__textscanner__TextScanner* ss, int n) {
	ss->pos -= n;
	if (ss->pos < 0) {
		ss->pos = 0;
	}
	if (ss->pos > ss->ilen) {
		ss->pos = ss->ilen;
	}
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_peek_back(strings__textscanner__TextScanner* ss) {
	int _t1 = strings__textscanner__TextScanner_peek_back_n(ss, 1);
	return _t1;
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_peek_back_n(strings__textscanner__TextScanner* ss, int n) {
	int offset = (int)(n + 1);
	if (ss->pos >= offset) {
		int _t1 = ss->input.str[ (int)(ss->pos - offset)];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

// Attr: [direct_array_access]
// Attr: [inline]
inline int strings__textscanner__TextScanner_current(strings__textscanner__TextScanner* ss) {
	if (ss->pos > 0) {
		int _t1 = ss->input.str[ (int)(ss->pos - 1)];
		return _t1;
	}
	int _t2 = -1;
	return _t2;
}

void strings__textscanner__TextScanner_reset(strings__textscanner__TextScanner* ss) {
	ss->pos = 0;
}

void strings__textscanner__TextScanner_goto_end(strings__textscanner__TextScanner* ss) {
	ss->pos = ss->ilen;
}

// TypeDecl
// TypeDecl
// TypeDecl
// Attr: [inline]
inline term__termios__TcFlag term__termios__flag(int value) {
	term__termios__TcFlag _t1 = ((value));
	return _t1;
}

// Attr: [inline]
inline term__termios__TcFlag term__termios__invert(term__termios__TcFlag value) {
	term__termios__TcFlag _t1 = ~((int)(value));
	return _t1;
}

// Attr: [inline]
inline int term__termios__tcgetattr(int fd, term__termios__Termios* termios_p) {
	{ // Unsafe block
		int _t1 = tcgetattr(fd, ((struct termios*)(termios_p)));
		return _t1;
	}
	return 0;
}

// Attr: [inline]
inline int term__termios__tcsetattr(int fd, int optional_actions, term__termios__Termios* termios_p) {
	{ // Unsafe block
		int _t1 = tcsetattr(fd, optional_actions, ((struct termios*)(termios_p)));
		return _t1;
	}
	return 0;
}

// Attr: [inline]
inline int term__termios__ioctl(int fd, u64 request, voidptr arg) {
	{ // Unsafe block
		int _t1 = ioctl(fd, request, arg);
		return _t1;
	}
	return 0;
}

int term__termios__set_state(int fd, term__termios__Termios new_state) {
	term__termios__Termios x = new_state;
	int _t1 = term__termios__tcsetattr(0, TCSANOW, (voidptr)&/*qq*/x);
	return _t1;
}

void term__termios__Termios_disable_echo(term__termios__Termios* t) {
	t->c_lflag &= term__termios__invert(ECHO);
}

// Attr: [deprecated]
// Attr: [deprecated_after]
u64 net__conv__htn64(u64 host) {
	u64 _t1 = net__conv__hton64(host);
	return _t1;
}

f32 net__conv__htonf32(f32 host) {
	#if defined(TARGET_ORDER_IS_LITTLE)
	{
		net__conv__ConversionUnion convert = ((net__conv__ConversionUnion){.as_double32 = host,});
		convert.as_int32 = net__conv__hton32(convert.as_int32);
		f32 _t2 = convert.as_double32;
		return _t2;
	}
	#else
	{
		return host;
	}
	#endif
	return 0;
}

f64 net__conv__htonf64(f64 host) {
	#if defined(TARGET_ORDER_IS_LITTLE)
	{
		net__conv__ConversionUnion convert = ((net__conv__ConversionUnion){.as_double64 = host,});
		convert.as_int64 = net__conv__hton64(convert.as_int64);
		f64 _t2 = convert.as_double64;
		return _t2;
	}
	#else
	{
		return host;
	}
	#endif
	return 0;
}

u64 net__conv__hton64(u64 host) {
	#if defined(TARGET_ORDER_IS_LITTLE)
	{
		u64 _t2 = (((((((((((host >> 56U)) & 0x00000000000000FFU)) | ((((host >> 40U)) & 0x000000000000FF00U))) | ((((host >> 24U)) & 0x0000000000FF0000U))) | ((((host >> 8U)) & 0x00000000FF000000U))) | ((((host << 8U)) & 0x000000FF00000000U))) | ((((host << 24U)) & 0x0000FF0000000000U))) | ((((host << 40U)) & 0x00FF000000000000U))) | ((((host << 56U)) & 0xFF00000000000000U)));
		return _t2;
	}
	#else
	{
		return host;
	}
	#endif
	return 0;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
u32 net__conv__htn32(u32 host) {
	u32 _t1 = net__conv__hton32(host);
	return _t1;
}

u32 net__conv__hton32(u32 host) {
	#if defined(TARGET_ORDER_IS_LITTLE)
	{
		u32 _t2 = (((((((host >> 24U)) & 0x000000FFU)) | ((((host >> 8U)) & 0x0000FF00U))) | ((((host << 8U)) & 0x00FF0000U))) | ((((host << 24U)) & 0xFF000000U)));
		return _t2;
	}
	#else
	{
		return host;
	}
	#endif
	return 0;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
u16 net__conv__htn16(u16 host) {
	u16 _t1 = net__conv__hton16(host);
	return _t1;
}

u16 net__conv__hton16(u16 host) {
	#if defined(TARGET_ORDER_IS_LITTLE)
	{
		u16 _t2 = (((((host >> 8U)) & 0x00FFU)) | ((((host << 8U)) & 0xFF00U)));
		return _t2;
	}
	#else
	{
		return host;
	}
	#endif
	return 0;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
u64 net__conv__nth64(u64 net) {
	u64 _t1 = net__conv__ntoh64(net);
	return _t1;
}

u64 net__conv__ntoh64(u64 net) {
	u64 _t1 = net__conv__hton64(net);
	return _t1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
u32 net__conv__nth32(u32 net) {
	u32 _t1 = net__conv__ntoh32(net);
	return _t1;
}

u32 net__conv__ntoh32(u32 net) {
	u32 _t1 = net__conv__hton32(net);
	return _t1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
u16 net__conv__nth16(u16 net) {
	u16 _t1 = net__conv__ntoh16(net);
	return _t1;
}

u16 net__conv__ntoh16(u16 net) {
	u16 _t1 = net__conv__hton16(net);
	return _t1;
}

_result_Array_u8 net__conv__u64tovarint(u64 n) {
	if (n > (((u64)(1U)) << 62U)) {
		return (_result_Array_u8){ .is_error=true, .err=_v_error(_SLIT("cannot encode more than 2^62-1")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	bool /*A*/ _t2 = true;
		u8 msb = ((_t2 == (n < 64U))? (((u8)(0b00))) : (_t2 == (n < 16384U))? (((u8)(0b01))) : (_t2 == (n < 1073741824U))? (((u8)(0b10))) : (((u8)(0b11))));
	int len = (1 << msb);
	Array_u8 result = __new_array_with_default_noscan(len, 0, sizeof(u8), 0);
	u64 tn = n;
	for (int i = 0; i < len; ++i) {
		array_set(&result, (int)((int)(len - 1) - i), &(u8[]) { ((u8)((u64)(tn % 256U))) });
		tn /= 256U;
	}
	(*(u8*)array_get(result, 0)) |= (msb << 6);
	_result_Array_u8 _t3;
	_result_ok(&(Array_u8[]) { result }, (_result*)(&_t3), sizeof(Array_u8));
	return _t3;
}

_result_multi_return_u64_u8 net__conv__varinttou64(Array_u8 b) {
	if (b.len == 0) {
		return (_result_multi_return_u64_u8){ .is_error=true, .err=_v_error(_SLIT("cannot parse vluint from empty byte array")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	u8 msb = ((*(u8*)array_get(b, 0)) >> 6);
	u8 len = ((u8)((1 << msb)));
	if (len > b.len) {
		return (_result_multi_return_u64_u8){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("expected "), 0xfe02, {.d_u8 = len}}, {_SLIT(" bytes but got "), 0xfe07, {.d_i32 = b.len}}, {_SLIT(" bytes"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	u64 n = ((u64)(((*(u8*)array_get(b, 0)) & 0b00111111)));
	for (u8 i = 1; i < len; ++i) {
		n = (u64)((u64)(n * 256U) + (*(u8*)array_get(b, i)));
	}
	_result_multi_return_u64_u8 _t3;
	_result_ok(&(multi_return_u64_u8[]) { (multi_return_u64_u8){.arg0=n, .arg1=len} }, (_result*)(&_t3), sizeof(multi_return_u64_u8));
	return _t3;
}

i64 time__portable_timegm(struct tm* t) {
	int year = (int)(t->tm_year + 1900);
	int month = t->tm_mon;
	if (month > 11) {
		year += (int)(month / 12);
		month %= 12;
	} else if (month < 0) {
		int years_diff = (int)(((int)(11 - month)) / 12);
		year -= years_diff;
		month += (int)(12 * years_diff);
	}
	i64 days_since_1970 = ((i64)(time__days_from_unix_epoch(year, (int)(month + 1), t->tm_mday)));
	i64 _t1 = (i64)((i64)(60 * ((i64)((i64)(60 * ((i64)((i64)(24 * days_since_1970) + t->tm_hour))) + t->tm_min))) + t->tm_sec);
	return _t1;
}

int time__days_from_unix_epoch(int year, int month, int day) {
	int y = (month <= 2 ? ((int)(year - 1)) : (year));
	int era = (int)(y / 400);
	int year_of_the_era = (int)(y - (int)(era * 400));
	int day_of_year = (int)((int)((int)(((int)((int)(153 * ((int)(month + ((month > 2 ? (-3) : (9)))))) + 2)) / 5) + day) - 1);
	int day_of_the_era = (int)((int)((int)((int)(year_of_the_era * 365) + (int)(year_of_the_era / 4)) - (int)(year_of_the_era / 100)) + day_of_year);
	int _t1 = (int)((int)((int)(era * 146097) + day_of_the_era) - 719468);
	return _t1;
}

// Attr: [inline]
inline int time__Time_days_from_unix_epoch(time__Time t) {
	int _t1 = time__days_from_unix_epoch(t.year, t.month, t.day);
	return _t1;
}

time__Time time__date_from_days_after_unix_epoch(int days) {
	multi_return_int_int_int mr_1379 = time__calculate_date_from_day_offset(((i64)(days)));
	int year = mr_1379.arg0;
	int month = mr_1379.arg1;
	int day = mr_1379.arg2;
	time__Time _t1 = ((time__Time){.__v_unix = 0,.year = year,.month = month,.day = day,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,});
	return _t1;
}

VV_LOCAL_SYMBOL time__DateTimeParser time__new_date_time_parser(string datetime, string format) {
	time__DateTimeParser _t1 = ((time__DateTimeParser){.datetime = datetime,.format = format,.current_pos_datetime = 0,});
	return _t1;
}

VV_LOCAL_SYMBOL _result_string time__DateTimeParser_next(time__DateTimeParser* p, int length) {
	if ((int)(p->current_pos_datetime + length) > p->datetime.len) {
		return (_result_string){ .is_error=true, .err=_v_error(_SLIT("end of string")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	string val = string_substr(p->datetime, p->current_pos_datetime, (int)(p->current_pos_datetime + length));
	p->current_pos_datetime += length;
	_result_string _t2;
	_result_ok(&(string[]) { val }, (_result*)(&_t2), sizeof(string));
	return _t2;
}

VV_LOCAL_SYMBOL _result_string time__DateTimeParser_peek(time__DateTimeParser* p, int length) {
	if ((int)(p->current_pos_datetime + length) > p->datetime.len) {
		return (_result_string){ .is_error=true, .err=_v_error(_SLIT("end of string")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_string _t2;
	_result_ok(&(string[]) { string_substr(p->datetime, p->current_pos_datetime, (int)(p->current_pos_datetime + length)) }, (_result*)(&_t2), sizeof(string));
	return _t2;
}

VV_LOCAL_SYMBOL _result_int time__DateTimeParser_must_be_int(time__DateTimeParser* p, int length) {
	_result_string _t1 = time__DateTimeParser_next(p, length);
	if (_t1.is_error) {
		_result_int _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	string val =  (*(string*)_t1.data);
	if (!string_contains_only(val, _SLIT("0123456789"))) {
		return (_result_int){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("expected int, found: "), 0xfe10, {.d_s = val}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t4;
	_result_ok(&(int[]) { string_int(val) }, (_result*)(&_t4), sizeof(int));
	return _t4;
}

VV_LOCAL_SYMBOL _result_int time__DateTimeParser_must_be_int_with_minimum_length(time__DateTimeParser* p, int min, int max, bool allow_leading_zero) {
	int length = (int)((int)(max + 1) - min);
	string val = _SLIT("");
	for (int _t1 = 0; _t1 < length; ++_t1) {
		_result_string _t2 = time__DateTimeParser_peek(p, 1);
		if (_t2.is_error) {
			IError err = _t2.err;
			break;
		}
		
 		string tok =  (*(string*)_t2.data);
		if (!string_contains_only(tok, _SLIT("0123456789"))) {
			break;
		}
		_result_string _t3 = time__DateTimeParser_next(p, 1);
		if (_t3.is_error) {
			_result_int _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
  (*(string*)_t3.data);
		val = string__plus(val, tok);
	}
	if (val.len < min) {
		return (_result_int){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("expected int with a minimum length of "), 0xfe07, {.d_i32 = min}}, {_SLIT(", found: "), 0xfe07, {.d_i32 = val.len}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (!allow_leading_zero && string_starts_with(val, _SLIT("0"))) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("0 is not allowed for this format")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t7;
	_result_ok(&(int[]) { string_int(val) }, (_result*)(&_t7), sizeof(int));
	return _t7;
}

VV_LOCAL_SYMBOL _result_void time__DateTimeParser_must_be_string(time__DateTimeParser* p, string must) {
	_result_string _t1 = time__DateTimeParser_next(p, must.len);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	string val =  (*(string*)_t1.data);
	if (!string__eq(val, must)) {
		return (_result_void){ .is_error=true, .err=_v_error( str_intp(4, _MOV((StrIntpData[]){{_SLIT("invalid string: \""), 0xfe10, {.d_s = val}}, {_SLIT("\"!=\""), 0xfe10, {.d_s = must}}, {_SLIT("\" at: "), 0xfe07, {.d_i32 = p->current_pos_datetime}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

VV_LOCAL_SYMBOL _result_string time__DateTimeParser_must_be_string_one_of(time__DateTimeParser* p, Array_string oneof) {
	for (int _t1 = 0; _t1 < oneof.len; ++_t1) {
		string must = ((string*)oneof.data)[_t1];
		_result_string _t2 = time__DateTimeParser_peek(p, must.len);
		if (_t2.is_error) {
			IError err = _t2.err;
			continue;
		}
		
 		string val =  (*(string*)_t2.data);
		if (string__eq(val, must)) {
			_result_string _t3;
			_result_ok(&(string[]) { must }, (_result*)(&_t3), sizeof(string));
			return _t3;
		}
	}
	return (_result_string){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("invalid string: must be one of "), 0xfe10, {.d_s = Array_string_str(oneof)}}, {_SLIT(", at: "), 0xfe07, {.d_i32 = p->current_pos_datetime}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL _result_int time__DateTimeParser_must_be_valid_month(time__DateTimeParser* p) {
	for (int _t1 = 0; _t1 < _const_time__long_months.len; ++_t1) {
		string v = ((string*)_const_time__long_months.data)[_t1];
		if ((int)(p->current_pos_datetime + v.len) < p->datetime.len) {
			string month_name = string_substr(p->datetime, p->current_pos_datetime, (int)(p->current_pos_datetime + v.len));
			if (string__eq(v, month_name)) {
				p->current_pos_datetime += v.len;
				_result_int _t2;
				_result_ok(&(int[]) { (int)(Array_string_index(_const_time__long_months, month_name) + 1) }, (_result*)(&_t2), sizeof(int));
				return _t2;
			}
		}
	}
	return (_result_int){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid month name, at: "), 0xfe07, {.d_i32 = p->current_pos_datetime}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL _result_int time__DateTimeParser_must_be_valid_three_letter_month(time__DateTimeParser* p) {
	if ((int)(p->current_pos_datetime + 3) < p->datetime.len) {
		string letters = string_substr(p->datetime, p->current_pos_datetime, (int)(p->current_pos_datetime + 3));
		for (int m = 1; m <= _const_time__long_months.len; m++) {
			if (string__eq(string_substr(_const_time__months_string, (int)(((int)(m - 1)) * 3), (int)(m * 3)), letters)) {
				p->current_pos_datetime += 3;
				_result_int _t1;
				_result_ok(&(int[]) { m }, (_result*)(&_t1), sizeof(int));
				return _t1;
			}
		}
	}
	return (_result_int){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid three letter month, at: "), 0xfe07, {.d_i32 = p->current_pos_datetime}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL _result_string time__DateTimeParser_must_be_valid_week_day(time__DateTimeParser* p, int letters) {
	_result_string _t1 = time__DateTimeParser_next(p, letters);
	if (_t1.is_error) {
		_result_string _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	string val =  (*(string*)_t1.data);
for (int _t3 = 0; _t3 != 7; ++_t3) {
		string v = _const_time__long_days[_t3];
		if (string__eq(string_substr(v, 0, letters), val)) {
			_result_string _t4;
			_result_ok(&(string[]) { v }, (_result*)(&_t4), sizeof(string));
			return _t4;
		}
	}
	return (_result_string){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid month name, at: "), 0xfe07, {.d_i32 = p->current_pos_datetime}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL _result_Array_string time__extract_tokens(string s) {
	Array_string tokens = __new_array_with_default(0, 0, sizeof(string), 0);
	string current = _SLIT("");
	for (int _t1 = 0; _t1 < s.len; ++_t1) {
		u8 r = s.str[_t1];
		if (string_contains_only(current, u8_ascii_str(r)) || (current).len == 0) {
			current = string__plus(current, u8_ascii_str(r));
		} else {
			array_push((array*)&tokens, _MOV((string[]){ string_clone(current) }));
			current = u8_ascii_str(r);
		}
	}
	if ((current).len != 0) {
		array_push((array*)&tokens, _MOV((string[]){ string_clone(current) }));
	}
	_result_Array_string _t4;
	_result_ok(&(Array_string[]) { tokens }, (_result*)(&_t4), sizeof(Array_string));
	return _t4;
}

VV_LOCAL_SYMBOL _result_time__Time time__DateTimeParser_parse(time__DateTimeParser* p) {
	int year_ = 0;
	int month_ = 0;
	int day_in_month = 0;
	int hour_ = 0;
	int minute_ = 0;
	int second_ = 0;
	_result_Array_string _t1 = time__extract_tokens(p->format);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("malformed format string: "), 0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	Array_string tokens =  (*(Array_string*)_t1.data);
	for (int _t3 = 0; _t3 < tokens.len; ++_t3) {
		string token = ((string*)tokens.data)[_t3];

		if (string__eq(token, _SLIT("YYYY"))) {
			_result_int _t4 = time__DateTimeParser_must_be_int(p, 4);
			if (_t4.is_error) {
				IError err = _t4.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before the full year was specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			year_ =  (*(int*)_t4.data);
		}
		else if (string__eq(token, _SLIT("YY"))) {
			_result_int _t6 = time__DateTimeParser_must_be_int(p, 2);
			if (_t6.is_error) {
				IError err = _t6.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before the full year was specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			year_ = (int)((int)((int)(time__now().year / 100) * 100) +  (*(int*)_t6.data));
		}
		else if (string__eq(token, _SLIT("M"))) {
			_result_int _t8 = time__DateTimeParser_must_be_int_with_minimum_length(p, 1, 2, false);
			if (_t8.is_error) {
				IError err = _t8.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before the month was specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			month_ =  (*(int*)_t8.data);
			if (month_ < 1 || month_ > 12) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("month must be  between 1 and 12")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("MM"))) {
			_result_int _t11 = time__DateTimeParser_must_be_int(p, 2);
			if (_t11.is_error) {
				IError err = _t11.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before the month was specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			month_ =  (*(int*)_t11.data);
			if (month_ < 1 || month_ > 12) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("month must be  between 01 and 12")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("MMM"))) {
			_result_int _t14 = time__DateTimeParser_must_be_valid_three_letter_month(p);
			if (_t14.is_error) {
				IError err = _t14.err;
				return (_result_time__Time){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			month_ =  (*(int*)_t14.data);
		}
		else if (string__eq(token, _SLIT("MMMM"))) {
			_result_int _t16 = time__DateTimeParser_must_be_valid_month(p);
			if (_t16.is_error) {
				IError err = _t16.err;
				return (_result_time__Time){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			month_ =  (*(int*)_t16.data);
		}
		else if (string__eq(token, _SLIT("D"))) {
			_result_int _t18 = time__DateTimeParser_must_be_int_with_minimum_length(p, 1, 2, false);
			if (_t18.is_error) {
				IError err = _t18.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before the day was specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			day_in_month =  (*(int*)_t18.data);
			if (day_in_month < 1 || day_in_month > 31) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("day must be  between 1 and 31")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("DD"))) {
			_result_int _t21 = time__DateTimeParser_must_be_int(p, 2);
			if (_t21.is_error) {
				IError err = _t21.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before the month was specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			day_in_month =  (*(int*)_t21.data);
			if (day_in_month < 1 || day_in_month > 31) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("day must be  between 01 and 31")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("H"))) {
			_result_int _t24 = time__DateTimeParser_must_be_int_with_minimum_length(p, 1, 2, true);
			if (_t24.is_error) {
				IError err = _t24.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before hours where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			hour_ =  (*(int*)_t24.data);
			if (hour_ < 0 || hour_ > 23) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("hour must be  between 0 and 23")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("HH"))) {
			_result_int _t27 = time__DateTimeParser_must_be_int(p, 2);
			if (_t27.is_error) {
				IError err = _t27.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before hours where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			hour_ =  (*(int*)_t27.data);
			if (hour_ < 0 || hour_ > 23) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("hour must be  between 00 and 23")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("h"))) {
			_result_int _t30 = time__DateTimeParser_must_be_int_with_minimum_length(p, 1, 2, true);
			if (_t30.is_error) {
				IError err = _t30.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before hours where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			hour_ =  (*(int*)_t30.data);
			if (hour_ < 0 || hour_ > 23) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("hour must be  between 0 and 23")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("hh"))) {
			_result_int _t33 = time__DateTimeParser_must_be_int(p, 2);
			if (_t33.is_error) {
				IError err = _t33.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before hours where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			hour_ =  (*(int*)_t33.data);
			if (hour_ < 0 || hour_ > 23) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("hour must be  between 00 and 23")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("k"))) {
			_result_int _t36 = time__DateTimeParser_must_be_int(p, 1);
			if (_t36.is_error) {
				IError err = _t36.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before hours where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			hour_ =  (*(int*)_t36.data);
			if (hour_ < 0 || hour_ > 23) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("hour must be  between 0 and 23")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("kk"))) {
			_result_int _t39 = time__DateTimeParser_must_be_int(p, 2);
			if (_t39.is_error) {
				IError err = _t39.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before hours where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			hour_ =  (*(int*)_t39.data);
			if (hour_ < 0 || hour_ > 23) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("hour must be  between 00 and 23")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("m"))) {
			_result_int _t42 = time__DateTimeParser_must_be_int(p, 1);
			if (_t42.is_error) {
				IError err = _t42.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before minutes where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			minute_ =  (*(int*)_t42.data);
			if (minute_ < 0 || minute_ > 59) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("minute must be between 0 and 59")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("mm"))) {
			_result_int _t45 = time__DateTimeParser_must_be_int(p, 2);
			if (_t45.is_error) {
				IError err = _t45.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before minutes where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			minute_ =  (*(int*)_t45.data);
			if (minute_ < 0 || minute_ > 59) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("minute must be between 00 and 59")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("s"))) {
			_result_int _t48 = time__DateTimeParser_must_be_int(p, 1);
			if (_t48.is_error) {
				IError err = _t48.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before seconds where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			second_ =  (*(int*)_t48.data);
			if (second_ < 0 || second_ > 59) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("second must be between 0 and 59")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (string__eq(token, _SLIT("ss"))) {
			_result_int _t51 = time__DateTimeParser_must_be_int(p, 2);
			if (_t51.is_error) {
				IError err = _t51.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("end of string reached before seconds where specified")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 			second_ =  (*(int*)_t51.data);
			if (second_ < 0 || second_ > 59) {
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("second must be between 00 and 59")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else {
			_result_void _t54 = time__DateTimeParser_must_be_string(p, token);
			if (_t54.is_error) {
				IError err = _t54.err;
				return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 ;
		}
	}
	if (month_ == 2) {
		int feb_days_in_year = (time__is_leap_year(year_) ? (29) : (28));
		if (day_in_month > feb_days_in_year) {
			return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("February has only 28 days in the given year")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	} else if (day_in_month == 31 && !(month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12)) {
		string month_name = time__Time_custom_format(((time__Time){.__v_unix = 0,.year = 0,.month = month_,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,}), _SLIT("MMMM"));
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = month_name}}, {_SLIT(" has only 30 days"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_time__Time _t58;
	_result_ok(&(time__Time[]) { time__new(((time__Time){
		.__v_unix = 0,
		.year = year_,
		.month = month_,
		.day = day_in_month,
		.hour = hour_,
		.minute = minute_,
		.second = second_,
		.nanosecond = 0,
		.is_local = 0,
		.microsecond = 0,
	})) }, (_result*)(&_t58), sizeof(time__Time));
	return _t58;
}

// TypeDecl
i64 time__Duration_nanoseconds(time__Duration d) {
	i64 _t1 = ((i64)(d));
	return _t1;
}

i64 time__Duration_microseconds(time__Duration d) {
	i64 _t1 = ((i64)(d)) / _const_time__microsecond;
	return _t1;
}

i64 time__Duration_milliseconds(time__Duration d) {
	i64 _t1 = ((i64)(d)) / _const_time__millisecond;
	return _t1;
}

f64 time__Duration_seconds(time__Duration d) {
	f64 _t1 = (f64)(((f64)(d)) / ((f64)(_const_time__second)));
	return _t1;
}

f64 time__Duration_minutes(time__Duration d) {
	f64 _t1 = (f64)(((f64)(d)) / ((f64)(_const_time__minute)));
	return _t1;
}

f64 time__Duration_hours(time__Duration d) {
	f64 _t1 = (f64)(((f64)(d)) / ((f64)(_const_time__hour)));
	return _t1;
}

f64 time__Duration_days(time__Duration d) {
	f64 _t1 = (f64)(((f64)(d)) / ((f64)(_const_time__hour * 24)));
	return _t1;
}

string time__Duration_str(time__Duration d) {
	if (time__Duration_alias_eq(d, _const_time__infinite)) {
		string _t1 = _SLIT("inf");
		return _t1;
	}
	string sign = _SLIT("");
	i64 t = ((i64)(d));
	if (t < 0) {
		sign = _SLIT("-");
		t = -t;
	}
	i64 hr = t / _const_time__hour;
	t -= hr * _const_time__hour;
	i64 min = t / _const_time__minute;
	t -= min * _const_time__minute;
	i64 sec = t / _const_time__second;
	t -= sec * _const_time__second;
	i64 ms = t / _const_time__millisecond;
	t -= ms * _const_time__millisecond;
	i64 us = t / _const_time__microsecond;
	t -= us * _const_time__microsecond;
	i64 ns = t;
	bool /*A*/ _t3 = true;
		string _t2 = ((_t3 == (hr > 0))? ( str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = hr}}, {_SLIT(":"), 0x8004fe29, {.d_i64 = min}}, {_SLIT(":"), 0x8004fe29, {.d_i64 = sec}}, {_SLIT0, 0, { .d_c = 0 }}}))) : (_t3 == (min > 0))? ( str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = min}}, {_SLIT(":"), 0x8004fe29, {.d_i64 = sec}}, {_SLIT("."), 0x8006fe29, {.d_i64 = ms}}, {_SLIT0, 0, { .d_c = 0 }}}))) : (_t3 == (sec > 0))? ( str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = sec}}, {_SLIT("."), 0x8006fe29, {.d_i64 = ms}}, {_SLIT("s"), 0, { .d_c = 0 }}}))) : (_t3 == (ms > 0))? ( str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = ms}}, {_SLIT("."), 0x8006fe29, {.d_i64 = us}}, {_SLIT("ms"), 0, { .d_c = 0 }}}))) : (_t3 == (us > 0))? ( str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = us}}, {_SLIT("."), 0x8006fe29, {.d_i64 = ns}}, {_SLIT("us"), 0, { .d_c = 0 }}}))) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = ns}}, {_SLIT("ns"), 0, { .d_c = 0 }}}))));
	return _t2;
}

string time__Duration_debug(time__Duration d) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	i64 x = ((i64)(d));
	string sign = _SLIT("");
	if (x < 0) {
		sign = _SLIT("- ");
		x = -x;
	}
	Map_string_i64 _t1 = new_map_init_noscan_value(&map_hash_string, &map_eq_string, &map_clone_string, &map_free_string, 6, sizeof(string), sizeof(i64),
		_MOV((string[6]){
			_SLIT("days"),
			_SLIT("h"),
			_SLIT("m"),
			_SLIT("s"),
			_SLIT("ms"),
			_SLIT("us"),
		}),
		_MOV((i64[6]){
			24 * _const_time__hour, 
			_const_time__hour, 
			_const_time__minute, 
			_const_time__second, 
			_const_time__millisecond, 
			_const_time__microsecond, 
		})
	)
	;
	int _t3 = _t1.key_values.len;
	for (int _t2 = 0; _t2 < _t3; ++_t2 ) {
		int _t4 = _t1.key_values.len - _t3;
		_t3 = _t1.key_values.len;
		if (_t4 < 0) {
			_t2 = -1;
			continue;
		}
		if (!DenseArray_has_index(&_t1.key_values, _t2)) {continue;}
		string label = /*key*/ *(string*)DenseArray_key(&_t1.key_values, _t2);
		label = string_clone(label);
		i64 v = (*(i64*)DenseArray_value(&_t1.key_values, _t2));
		if (x > v) {
			i64 xx = (i64)(x / v);
			x = (i64)(x % v);
			array_push((array*)&res, _MOV((string[]){ string_clone(string__plus(i64_str(xx), label)) }));
		}
	}
	if (x > 0) {
		array_push((array*)&res, _MOV((string[]){ string_clone( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe09, {.d_i64 = x}}, {_SLIT("ns"), 0, { .d_c = 0 }}}))) }));
	}
	string _t7 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT("Duration: "), 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe10, {.d_s = Array_string_join(res, _SLIT(", "))}}, {_SLIT0, 0, { .d_c = 0 }}}));
	return _t7;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL void time__int_to_byte_array_no_pad(int value, Array_u8* arr, int size) {
	int num = value;
	if (size <= 0 || num < 0) {
		return;
	}
	int i = (int)(size - 1);
	for (;;) {
		if (!(num > 0 && i >= 0)) break;
		((u8*)arr->data)[i] = (rune)(((int)(num % 10)) + '0');
		num /= 10;
		i--;
	}
}

// Attr: [manualfree]
string time__Time_format(time__Time t) {
	bool time__Time_format_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(16, 16, sizeof(u8), _MOV((u8[16]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', ' ', '0', '0', ':', '0', '0'}));
	time__Time_format_defer_0 = true;
	time__int_to_byte_array_no_pad(t.year, &/*arr*/buf, 4);
	time__int_to_byte_array_no_pad(t.month, &/*arr*/buf, 7);
	time__int_to_byte_array_no_pad(t.day, &/*arr*/buf, 10);
	time__int_to_byte_array_no_pad(t.hour, &/*arr*/buf, 13);
	time__int_to_byte_array_no_pad(t.minute, &/*arr*/buf, 16);
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_format_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

// Attr: [manualfree]
string time__Time_format_ss(time__Time t) {
	bool time__Time_format_ss_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(19, 19, sizeof(u8), _MOV((u8[19]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', ' ', '0', '0', ':', '0', '0', ':',
			'0', '0'}));
	time__Time_format_ss_defer_0 = true;
	time__int_to_byte_array_no_pad(t.year, &/*arr*/buf, 4);
	time__int_to_byte_array_no_pad(t.month, &/*arr*/buf, 7);
	time__int_to_byte_array_no_pad(t.day, &/*arr*/buf, 10);
	time__int_to_byte_array_no_pad(t.hour, &/*arr*/buf, 13);
	time__int_to_byte_array_no_pad(t.minute, &/*arr*/buf, 16);
	time__int_to_byte_array_no_pad(t.second, &/*arr*/buf, 19);
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_format_ss_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

// Attr: [manualfree]
string time__Time_format_ss_milli(time__Time t) {
	bool time__Time_format_ss_milli_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(23, 23, sizeof(u8), _MOV((u8[23]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', ' ', '0', '0', ':', '0', '0', ':',
			'0', '0', '.', '0', '0', '0'}));
	time__Time_format_ss_milli_defer_0 = true;
	time__int_to_byte_array_no_pad(t.year, &/*arr*/buf, 4);
	time__int_to_byte_array_no_pad(t.month, &/*arr*/buf, 7);
	time__int_to_byte_array_no_pad(t.day, &/*arr*/buf, 10);
	time__int_to_byte_array_no_pad(t.hour, &/*arr*/buf, 13);
	time__int_to_byte_array_no_pad(t.minute, &/*arr*/buf, 16);
	time__int_to_byte_array_no_pad(t.second, &/*arr*/buf, 19);
	int millis = (int)(t.nanosecond / 1000000);
	time__int_to_byte_array_no_pad(millis, &/*arr*/buf, 23);
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_format_ss_milli_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

// Attr: [manualfree]
string time__Time_format_ss_micro(time__Time t) {
	bool time__Time_format_ss_micro_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(26, 26, sizeof(u8), _MOV((u8[26]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', ' ', '0', '0', ':', '0', '0', ':',
			'0', '0', '.', '0', '0', '0', '0', '0',
			'0'}));
	time__Time_format_ss_micro_defer_0 = true;
	time__int_to_byte_array_no_pad(t.year, &/*arr*/buf, 4);
	time__int_to_byte_array_no_pad(t.month, &/*arr*/buf, 7);
	time__int_to_byte_array_no_pad(t.day, &/*arr*/buf, 10);
	time__int_to_byte_array_no_pad(t.hour, &/*arr*/buf, 13);
	time__int_to_byte_array_no_pad(t.minute, &/*arr*/buf, 16);
	time__int_to_byte_array_no_pad(t.second, &/*arr*/buf, 19);
	int micros = (int)(t.nanosecond / 1000);
	time__int_to_byte_array_no_pad(micros, &/*arr*/buf, 26);
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_format_ss_micro_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

// Attr: [manualfree]
string time__Time_format_ss_nano(time__Time t) {
	bool time__Time_format_ss_nano_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(29, 29, sizeof(u8), _MOV((u8[29]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', ' ', '0', '0', ':', '0', '0', ':',
			'0', '0', '.', '0', '0', '0', '0', '0',
			'0', '0', '0', '0'}));
	time__Time_format_ss_nano_defer_0 = true;
	time__int_to_byte_array_no_pad(t.year, &/*arr*/buf, 4);
	time__int_to_byte_array_no_pad(t.month, &/*arr*/buf, 7);
	time__int_to_byte_array_no_pad(t.day, &/*arr*/buf, 10);
	time__int_to_byte_array_no_pad(t.hour, &/*arr*/buf, 13);
	time__int_to_byte_array_no_pad(t.minute, &/*arr*/buf, 16);
	time__int_to_byte_array_no_pad(t.second, &/*arr*/buf, 19);
	time__int_to_byte_array_no_pad(t.nanosecond, &/*arr*/buf, 29);
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_format_ss_nano_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

// Attr: [manualfree]
// Attr: [markused]
string time__Time_format_rfc3339(time__Time t) {
	bool time__Time_format_rfc3339_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(24, 24, sizeof(u8), _MOV((u8[24]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', 'T', '0', '0', ':', '0', '0', ':',
			'0', '0', '.', '0', '0', '0', 'Z'}));
	time__Time_format_rfc3339_defer_0 = true;
	time__Time t_ = time__time_with_unix(t);
	if (t_.is_local) {
		time__Time utc_time = time__Time_local_to_utc(&t_);
		time__int_to_byte_array_no_pad(utc_time.year, &/*arr*/buf, 4);
		time__int_to_byte_array_no_pad(utc_time.month, &/*arr*/buf, 7);
		time__int_to_byte_array_no_pad(utc_time.day, &/*arr*/buf, 10);
		time__int_to_byte_array_no_pad(utc_time.hour, &/*arr*/buf, 13);
		time__int_to_byte_array_no_pad(utc_time.minute, &/*arr*/buf, 16);
		time__int_to_byte_array_no_pad(utc_time.second, &/*arr*/buf, 19);
		time__int_to_byte_array_no_pad((int)(utc_time.nanosecond / 1000000), &/*arr*/buf, 23);
	} else {
		time__int_to_byte_array_no_pad(t_.year, &/*arr*/buf, 4);
		time__int_to_byte_array_no_pad(t_.month, &/*arr*/buf, 7);
		time__int_to_byte_array_no_pad(t_.day, &/*arr*/buf, 10);
		time__int_to_byte_array_no_pad(t_.hour, &/*arr*/buf, 13);
		time__int_to_byte_array_no_pad(t_.minute, &/*arr*/buf, 16);
		time__int_to_byte_array_no_pad(t_.second, &/*arr*/buf, 19);
		time__int_to_byte_array_no_pad((int)(t_.nanosecond / 1000000), &/*arr*/buf, 23);
	}
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_format_rfc3339_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

// Attr: [manualfree]
string time__Time_format_rfc3339_nano(time__Time t) {
	bool time__Time_format_rfc3339_nano_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(30, 30, sizeof(u8), _MOV((u8[30]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', 'T', '0', '0', ':', '0', '0', ':',
			'0', '0', '.', '0', '0', '0', '0', '0',
			'0', '0', '0', '0', 'Z'}));
	time__Time_format_rfc3339_nano_defer_0 = true;
	time__Time t_ = time__time_with_unix(t);
	if (t_.is_local) {
		time__Time utc_time = time__Time_local_to_utc(&t_);
		time__int_to_byte_array_no_pad(utc_time.year, &/*arr*/buf, 4);
		time__int_to_byte_array_no_pad(utc_time.month, &/*arr*/buf, 7);
		time__int_to_byte_array_no_pad(utc_time.day, &/*arr*/buf, 10);
		time__int_to_byte_array_no_pad(utc_time.hour, &/*arr*/buf, 13);
		time__int_to_byte_array_no_pad(utc_time.minute, &/*arr*/buf, 16);
		time__int_to_byte_array_no_pad(utc_time.second, &/*arr*/buf, 19);
		time__int_to_byte_array_no_pad(utc_time.nanosecond, &/*arr*/buf, 29);
	} else {
		time__int_to_byte_array_no_pad(t_.year, &/*arr*/buf, 4);
		time__int_to_byte_array_no_pad(t_.month, &/*arr*/buf, 7);
		time__int_to_byte_array_no_pad(t_.day, &/*arr*/buf, 10);
		time__int_to_byte_array_no_pad(t_.hour, &/*arr*/buf, 13);
		time__int_to_byte_array_no_pad(t_.minute, &/*arr*/buf, 16);
		time__int_to_byte_array_no_pad(t_.second, &/*arr*/buf, 19);
		time__int_to_byte_array_no_pad(t_.nanosecond, &/*arr*/buf, 29);
	}
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_format_rfc3339_nano_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

// Attr: [manualfree]
string time__Time_hhmm(time__Time t) {
	bool time__Time_hhmm_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(5, 5, sizeof(u8), _MOV((u8[5]){((u8)('0')), '0', ':', '0', '0'}));
	time__Time_hhmm_defer_0 = true;
	time__int_to_byte_array_no_pad(t.hour, &/*arr*/buf, 2);
	time__int_to_byte_array_no_pad(t.minute, &/*arr*/buf, 5);
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_hhmm_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

// Attr: [manualfree]
string time__Time_hhmmss(time__Time t) {
	bool time__Time_hhmmss_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(8, 8, sizeof(u8), _MOV((u8[8]){((u8)('0')), '0', ':', '0', '0', ':', '0', '0'}));
	time__Time_hhmmss_defer_0 = true;
	time__int_to_byte_array_no_pad(t.hour, &/*arr*/buf, 2);
	time__int_to_byte_array_no_pad(t.minute, &/*arr*/buf, 5);
	time__int_to_byte_array_no_pad(t.second, &/*arr*/buf, 8);
	string _t1 = Array_u8_bytestr(buf);
		// Defer begin
		if (time__Time_hhmmss_defer_0) {
			array_free(&buf);
		}
		// Defer end
	return _t1;
}

string time__Time_hhmm12(time__Time t) {
	string _t1 = time__Time_get_fmt_time_str(t, time__FormatTime__hhmm12);
	return _t1;
}

string time__Time_ymmdd(time__Time t) {
	string _t1 = time__Time_get_fmt_date_str(t, time__FormatDelimiter__hyphen, time__FormatDate__yyyymmdd);
	return _t1;
}

string time__Time_ddmmy(time__Time t) {
	string _t1 = time__Time_get_fmt_date_str(t, time__FormatDelimiter__dot, time__FormatDate__ddmmyyyy);
	return _t1;
}

string time__Time_md(time__Time t) {
	string _t1 = time__Time_get_fmt_date_str(t, time__FormatDelimiter__space, time__FormatDate__mmmd);
	return _t1;
}

VV_LOCAL_SYMBOL string time__ordinal_suffix(int n) {
	if (n > 3 && n < 21) {
		string _t1 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = n}}, {_SLIT("th"), 0, { .d_c = 0 }}}));
		return _t1;
	}
	int /*A*/ _t2 = (int)(n % 10);
		switch (_t2) {
		case 1: {
				string _t3 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = n}}, {_SLIT("st"), 0, { .d_c = 0 }}}));
				return _t3;
		}
		case 2: {
				string _t4 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = n}}, {_SLIT("nd"), 0, { .d_c = 0 }}}));
				return _t4;
		}
		case 3: {
				string _t5 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = n}}, {_SLIT("rd"), 0, { .d_c = 0 }}}));
				return _t5;
		}
		default: {
				string _t6 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = n}}, {_SLIT("th"), 0, { .d_c = 0 }}}));
				return _t6;
		}
	}
	
	return (string){.str=(byteptr)"", .is_lit=1};
}

string time__Time_custom_format(time__Time t, string s) {
	Array_string tokens = __new_array_with_default(0, 0, sizeof(string), 0);
	for (int i = 0; i < s.len; ) {
		for (int j = 4; j > 0; j--) {
			if (i > (int)(s.len - j)) {
				continue;
			}
			if (j == 1 || (j == 2 && (Array_string_contains(_const_time__tokens_2, string_substr(s, i, (int)(i + j))))) || (j == 3 && (Array_string_contains(_const_time__tokens_3, string_substr(s, i, (int)(i + j))))) || (j == 4 && (Array_string_contains(_const_time__tokens_4, string_substr(s, i, (int)(i + j)))))) {
				array_push((array*)&tokens, _MOV((string[]){ string_clone(string_substr(s, i, (int)(i + j))) }));
				i += ((int)(j - 1));
				break;
			}
		}
		i++;
	}
	strings__Builder sb = strings__new_builder(128);
	for (int _t2 = 0; _t2 < tokens.len; ++_t2) {
		string token = ((string*)tokens.data)[_t2];

		if (string__eq(token, _SLIT("M"))) {
			strings__Builder_write_string(&sb, int_str(t.month));
		}
		else if (string__eq(token, _SLIT("MM"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.month}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("Mo"))) {
			strings__Builder_write_string(&sb, time__ordinal_suffix(t.month));
		}
		else if (string__eq(token, _SLIT("MMM"))) {
			strings__Builder_write_string(&sb, string_substr((*(string*)array_get(_const_time__long_months, (int)(t.month - 1))), 0, 3));
		}
		else if (string__eq(token, _SLIT("MMMM"))) {
			strings__Builder_write_string(&sb, (*(string*)array_get(_const_time__long_months, (int)(t.month - 1))));
		}
		else if (string__eq(token, _SLIT("D"))) {
			strings__Builder_write_string(&sb, int_str(t.day));
		}
		else if (string__eq(token, _SLIT("DD"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.day}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("Do"))) {
			strings__Builder_write_string(&sb, time__ordinal_suffix(t.day));
		}
		else if (string__eq(token, _SLIT("DDD"))) {
			strings__Builder_write_string(&sb, int_str(((int)((int)(t.day + _const_time__days_before[v_fixed_index((int)(t.month - 1), 13)]) + (int[]){(time__is_leap_year(t.year))?1:0}[0]))));
		}
		else if (string__eq(token, _SLIT("DDDD"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8006fe27, {.d_i32 = (int)((int)(t.day + _const_time__days_before[v_fixed_index((int)(t.month - 1), 13)]) + (int[]){(time__is_leap_year(t.year))?1:0}[0])}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("DDDo"))) {
			strings__Builder_write_string(&sb, time__ordinal_suffix((int)((int)(t.day + _const_time__days_before[v_fixed_index((int)(t.month - 1), 13)]) + (int[]){(time__is_leap_year(t.year))?1:0}[0])));
		}
		else if (string__eq(token, _SLIT("d"))) {
			strings__Builder_write_string(&sb, int_str(time__Time_day_of_week(&t)));
		}
		else if (string__eq(token, _SLIT("dd"))) {
			strings__Builder_write_string(&sb, string_substr(_const_time__long_days[v_fixed_index((int)(time__Time_day_of_week(&t) - 1), 7)], 0, 2));
		}
		else if (string__eq(token, _SLIT("ddd"))) {
			strings__Builder_write_string(&sb, string_substr(_const_time__long_days[v_fixed_index((int)(time__Time_day_of_week(&t) - 1), 7)], 0, 3));
		}
		else if (string__eq(token, _SLIT("dddd"))) {
			strings__Builder_write_string(&sb, _const_time__long_days[v_fixed_index((int)(time__Time_day_of_week(&t) - 1), 7)]);
		}
		else if (string__eq(token, _SLIT("YY"))) {
			strings__Builder_write_string(&sb, string_substr(int_str(t.year), 2, 4));
		}
		else if (string__eq(token, _SLIT("YYYY"))) {
			strings__Builder_write_string(&sb, int_str(t.year));
		}
		else if (string__eq(token, _SLIT("H"))) {
			strings__Builder_write_string(&sb, int_str(t.hour));
		}
		else if (string__eq(token, _SLIT("HH"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.hour}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("h"))) {
			int h = (int)((int)(((int)(t.hour + 11)) % 12) + 1);
			strings__Builder_write_string(&sb, int_str(h));
		}
		else if (string__eq(token, _SLIT("hh"))) {
			int h = (int)((int)(((int)(t.hour + 11)) % 12) + 1);
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = h}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("i"))) {
			int h = (t.hour > 12 ? ((int)(t.hour - 12)) : (t.hour));
			strings__Builder_write_string(&sb, int_str(h));
		}
		else if (string__eq(token, _SLIT("ii"))) {
			int h = (t.hour > 12 ? ((int)(t.hour - 12)) : (t.hour));
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = h}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("m"))) {
			strings__Builder_write_string(&sb, int_str(t.minute));
		}
		else if (string__eq(token, _SLIT("mm"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("s"))) {
			strings__Builder_write_string(&sb, int_str(t.second));
		}
		else if (string__eq(token, _SLIT("ss"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.second}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("k"))) {
			strings__Builder_write_string(&sb, int_str(((int)(t.hour + 1))));
		}
		else if (string__eq(token, _SLIT("kk"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = ((int)(t.hour + 1))}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("w"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x1000f, {.d_f64 = time__mceil((int)(((int)((int)(t.day + _const_time__days_before[v_fixed_index((int)(t.month - 1), 13)]) + (int[]){(time__is_leap_year(t.year))?1:0}[0])) / 7))}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("ww"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8005002f, {.d_f64 = time__mceil((int)(((int)((int)(t.day + _const_time__days_before[v_fixed_index((int)(t.month - 1), 13)]) + (int[]){(time__is_leap_year(t.year))?1:0}[0])) / 7))}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("wo"))) {
			strings__Builder_write_string(&sb, time__ordinal_suffix(((int)(time__mceil((int)(((int)((int)(t.day + _const_time__days_before[v_fixed_index((int)(t.month - 1), 13)]) + (int[]){(time__is_leap_year(t.year))?1:0}[0])) / 7))))));
		}
		else if (string__eq(token, _SLIT("Q"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = (int)(((int)(t.month % 4)) + 1)}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("QQ"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = (int)(((int)(t.month % 4)) + 1)}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("Qo"))) {
			strings__Builder_write_string(&sb, time__ordinal_suffix((int)(((int)(t.month % 4)) + 1)));
		}
		else if (string__eq(token, _SLIT("c"))) {
			strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = (int)(time__Time_day_of_week(&t) + 1)}}, {_SLIT0, 0, { .d_c = 0 }}})));
		}
		else if (string__eq(token, _SLIT("N"))) {
			strings__Builder_write_string(&sb, _SLIT("AD"));
		}
		else if (string__eq(token, _SLIT("NN"))) {
			strings__Builder_write_string(&sb, _SLIT("Anno Domini"));
		}
		else if (string__eq(token, _SLIT("Z"))) {
			int hours = (int)(time__offset() / _const_time__seconds_per_hour);
			if (hours >= 0) {
				strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("+"), 0xfe07, {.d_i32 = hours}}, {_SLIT0, 0, { .d_c = 0 }}})));
			} else {
				hours = -hours;
				strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("-"), 0xfe07, {.d_i32 = hours}}, {_SLIT0, 0, { .d_c = 0 }}})));
			}
		}
		else if (string__eq(token, _SLIT("ZZ"))) {
			int hours = (int)(time__offset() / _const_time__seconds_per_hour);
			if (hours >= 0) {
				strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("+"), 0x8004fe27, {.d_i32 = hours}}, {_SLIT("00"), 0, { .d_c = 0 }}})));
			} else {
				hours = -hours;
				strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("-"), 0x8004fe27, {.d_i32 = hours}}, {_SLIT("00"), 0, { .d_c = 0 }}})));
			}
		}
		else if (string__eq(token, _SLIT("ZZZ"))) {
			int hours = (int)(time__offset() / _const_time__seconds_per_hour);
			if (hours >= 0) {
				strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("+"), 0x8004fe27, {.d_i32 = hours}}, {_SLIT(":00"), 0, { .d_c = 0 }}})));
			} else {
				hours = -hours;
				strings__Builder_write_string(&sb,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("-"), 0x8004fe27, {.d_i32 = hours}}, {_SLIT(":00"), 0, { .d_c = 0 }}})));
			}
		}
		else if (string__eq(token, _SLIT("a"))) {
			if (t.hour < 12) {
				strings__Builder_write_string(&sb, _SLIT("am"));
			} else {
				strings__Builder_write_string(&sb, _SLIT("pm"));
			}
		}
		else if (string__eq(token, _SLIT("A"))) {
			if (t.hour < 12) {
				strings__Builder_write_string(&sb, _SLIT("AM"));
			} else {
				strings__Builder_write_string(&sb, _SLIT("PM"));
			}
		}
		else {
			strings__Builder_write_string(&sb, token);
		}
	}
	string _t3 = strings__Builder_str(&sb);
	return _t3;
}

string time__Time_clean(time__Time t) {
	time__Time znow = time__now();
	if (t.month == znow.month && t.year == znow.year && t.day == znow.day) {
		string _t1 = time__Time_get_fmt_time_str(t, time__FormatTime__hhmm24);
		return _t1;
	}
	if (t.year == znow.year) {
		string _t2 = time__Time_get_fmt_str(t, time__FormatDelimiter__space, time__FormatTime__hhmm24, time__FormatDate__mmmd);
		return _t2;
	}
	string _t3 = time__Time_format(t);
	return _t3;
}

string time__Time_clean12(time__Time t) {
	time__Time znow = time__now();
	if (t.month == znow.month && t.year == znow.year && t.day == znow.day) {
		string _t1 = time__Time_get_fmt_time_str(t, time__FormatTime__hhmm12);
		return _t1;
	}
	if (t.year == znow.year) {
		string _t2 = time__Time_get_fmt_str(t, time__FormatDelimiter__space, time__FormatTime__hhmm12, time__FormatDate__mmmd);
		return _t2;
	}
	string _t3 = time__Time_format(t);
	return _t3;
}

string time__Time_get_fmt_time_str(time__Time t, time__FormatTime fmt_time) {
	if (fmt_time == time__FormatTime__no_time) {
		string _t1 = _SLIT("");
		return _t1;
	}
	string tp = (t.hour > 11 ? (_SLIT("p.m.")) : (_SLIT("a.m.")));
	int hour_ = (t.hour > 12 ? ((int)(t.hour - 12)) : t.hour == 0 ? (12) : (t.hour));
	string _t3 = (string){.str=(byteptr)"", .is_lit=1};
	switch (fmt_time) {
		case time__FormatTime__hhmm12: {
				_t3 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = hour_}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT(" "), 0xfe10, {.d_s = tp}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatTime__hhmm24: {
				_t3 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.hour}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatTime__hhmmss12: {
				_t3 =  str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = hour_}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.second}}, {_SLIT(" "), 0xfe10, {.d_s = tp}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatTime__hhmmss24: {
				_t3 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.hour}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.second}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatTime__hhmmss24_milli: {
				_t3 =  str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.hour}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.second}}, {_SLIT("."), 0x8006fe27, {.d_i32 = ((int)(t.nanosecond / 1000000))}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatTime__hhmmss24_micro: {
				_t3 =  str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.hour}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.second}}, {_SLIT("."), 0x800cfe27, {.d_i32 = ((int)(t.nanosecond / 1000))}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatTime__hhmmss24_nano: {
				_t3 =  str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.hour}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.second}}, {_SLIT("."), 0x800cfe27, {.d_i32 = t.nanosecond}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatTime__no_time:
		default: {
				_t3 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("unknown enumeration "), 0xfe10, {.d_s = time__FormatTime_str(fmt_time)}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
	}
	string _t2 = _t3;
	return _t2;
}

string time__Time_get_fmt_date_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatDate fmt_date) {
	if (fmt_date == time__FormatDate__no_date) {
		string _t1 = _SLIT("");
		return _t1;
	}
	string month = time__Time_smonth(&t);
	string year =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = ((int)(t.year % 100))}}, {_SLIT0, 0, { .d_c = 0 }}}));
	string _t2 = (string){.str=(byteptr)"", .is_lit=1};
	switch (fmt_date) {
		case time__FormatDate__ddmmyy: {
				_t2 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.day}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.month}}, {_SLIT("|"), 0xfe10, {.d_s = year}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__ddmmyyyy: {
				_t2 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.day}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.month}}, {_SLIT("|"), 0x8008fe27, {.d_i32 = t.year}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__mmddyy: {
				_t2 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.month}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.day}}, {_SLIT("|"), 0xfe10, {.d_s = year}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__mmddyyyy: {
				_t2 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0x8004fe27, {.d_i32 = t.month}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.day}}, {_SLIT("|"), 0x8008fe27, {.d_i32 = t.year}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__mmmd: {
				_t2 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = month}}, {_SLIT("|"), 0xfe07, {.d_i32 = t.day}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__mmmdd: {
				_t2 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = month}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.day}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__mmmddyy: {
				_t2 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = month}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.day}}, {_SLIT("|"), 0xfe10, {.d_s = year}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__mmmddyyyy: {
				_t2 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = month}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.day}}, {_SLIT("|"), 0x8008fe27, {.d_i32 = t.year}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__yyyymmdd: {
				_t2 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0x8008fe27, {.d_i32 = t.year}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.month}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.day}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__yymmdd: {
				_t2 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = year}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.month}}, {_SLIT("|"), 0x8004fe27, {.d_i32 = t.day}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
		case time__FormatDate__no_date:
		default: {
				_t2 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("unknown enumeration "), 0xfe10, {.d_s = time__FormatDate_str(fmt_date)}}, {_SLIT0, 0, { .d_c = 0 }}}));
				break;
		}
	}
	string res = _t2;
	string del = ((fmt_dlmtr == (time__FormatDelimiter__dot))? (_SLIT(".")) : (fmt_dlmtr == (time__FormatDelimiter__hyphen))? (_SLIT("-")) : (fmt_dlmtr == (time__FormatDelimiter__slash))? (_SLIT("/")) : (fmt_dlmtr == (time__FormatDelimiter__space))? (_SLIT(" ")) : (_SLIT("")));
	res = string_replace(res, _SLIT("|"), del);
	return res;
}

string time__Time_get_fmt_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatTime fmt_time, time__FormatDate fmt_date) {
	if (fmt_date == time__FormatDate__no_date) {
		if (fmt_time == time__FormatTime__no_time) {
			string _t1 = _SLIT("");
			return _t1;
		} else {
			string _t2 = time__Time_get_fmt_time_str(t, fmt_time);
			return _t2;
		}
	} else {
		if (fmt_time != time__FormatTime__no_time) {
			string dstr = time__Time_get_fmt_date_str(t, fmt_dlmtr, fmt_date);
			string tstr = time__Time_get_fmt_time_str(t, fmt_time);
			string _t3 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = dstr}}, {_SLIT(" "), 0xfe10, {.d_s = tstr}}, {_SLIT0, 0, { .d_c = 0 }}}));
			return _t3;
		} else {
			string _t4 = time__Time_get_fmt_date_str(t, fmt_dlmtr, fmt_date);
			return _t4;
		}
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

string time__Time_utc_string(time__Time t) {
	string day_str = time__Time_weekday_str(&t);
	string month_str = time__Time_smonth(&t);
	string utc_string =  str_intp(8, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = day_str}}, {_SLIT(", "), 0xfe07, {.d_i32 = t.day}}, {_SLIT(" "), 0xfe10, {.d_s = month_str}}, {_SLIT(" "), 0xfe07, {.d_i32 = t.year}}, {_SLIT(" "), 0x8004fe27, {.d_i32 = t.hour}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.second}}, {_SLIT(" UTC"), 0, { .d_c = 0 }}}));
	return utc_string;
}

string time__Time_http_header_string(time__Time t) {
	string day_str = time__Time_weekday_str(&t);
	string month_str = time__Time_smonth(&t);
	string http_header_string =  str_intp(8, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = day_str}}, {_SLIT(", "), 0xfe07, {.d_i32 = t.day}}, {_SLIT(" "), 0xfe10, {.d_s = month_str}}, {_SLIT(" "), 0xfe07, {.d_i32 = t.year}}, {_SLIT(" "), 0x8004fe27, {.d_i32 = t.hour}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.minute}}, {_SLIT(":"), 0x8004fe27, {.d_i32 = t.second}}, {_SLIT(" GMT"), 0, { .d_c = 0 }}}));
	return http_header_string;
}

VV_LOCAL_SYMBOL f64 time__mceil(f64 x) {
	if (x > 0) {
		f64 _t1 = (int)(1 + ((int)(x)));
		return _t1;
	}
	if (x < 0) {
		f64 _t2 = -((int)(-x));
		return _t2;
	}
	f64 _t3 = 0;
	return _t3;
}

// Attr: [inline]
inline bool time__Time__eq(time__Time t1, time__Time t2) {
	bool _t1 = time__Time_unix(&t1) == time__Time_unix(&t2) && t1.nanosecond == t2.nanosecond;
	return _t1;
}

// Attr: [inline]
inline bool time__Time__lt(time__Time t1, time__Time t2) {
	bool _t1 = time__Time_unix(&t1) < time__Time_unix(&t2) || (time__Time_unix(&t1) == time__Time_unix(&t2) && t1.nanosecond < t2.nanosecond);
	return _t1;
}

// Attr: [inline]
inline time__Duration time__Time__minus(time__Time lhs, time__Time rhs) {
	i64 unixs = ((i64)((i64)(time__Time_unix(&lhs) - time__Time_unix(&rhs)))) * _const_time__second;
	int nanos = (int)(lhs.nanosecond - rhs.nanosecond);
	time__Duration _t1 = (i64)(unixs + nanos);
	return _t1;
}

_result_time__Time time__parse_rfc3339(string s) {
	if ((s).len == 0) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("datetime string is empty")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	string sn = string_replace_each(s, new_array_from_c_array(4, 4, sizeof(string), _MOV((string[4]){_SLIT("t"), _SLIT("T"), _SLIT("z"), _SLIT("Z")})));
	_result_time__Time _t2 = time__parse_iso8601(sn);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(time__Time*) _t2.data = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,});
	}
	
 	time__Time t =  (*(time__Time*)_t2.data);
	if (!time__Time__eq(t, ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,}))) {
		_result_time__Time _t3;
		_result_ok(&(time__Time[]) { t }, (_result*)(&_t3), sizeof(time__Time));
		return _t3;
	}
	_option_int _t4 = string_index(sn, _SLIT("T"));
	if (_t4.state != 0) {
		IError err = _t4.err;
		*(int*) _t4.data = -1;
	}
	
 	int t_i =  (*(int*)_t4.data);
	Array_string parts = (t_i != -1 ? (new_array_from_c_array(2, 2, sizeof(string), _MOV((string[2]){string_clone(string_substr(sn, 0, t_i)), string_clone(string_substr(sn, (int)(t_i + 1), 2147483647))}))) : (string_split(sn, _SLIT(" "))));
	if (!string_contains_any((*(string*)array_get(parts, 0)), _SLIT(" Z")) && string_contains((*(string*)array_get(parts, 0)), _SLIT("-"))) {
		_result_multi_return_int_int_int _t5 = time__parse_iso8601_date(sn);
		if (_t5.is_error) {
			_result_time__Time _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 		multi_return_int_int_int mr_1049 =  (*(multi_return_int_int_int*)_t5.data);
		int year = mr_1049.arg0;
		int month = mr_1049.arg1;
		int day = mr_1049.arg2;
		t = time__new(((time__Time){.__v_unix = 0,.year = year,.month = month,.day = day,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,}));
		_result_time__Time _t7;
		_result_ok(&(time__Time[]) { t }, (_result*)(&_t7), sizeof(time__Time));
		return _t7;
	}
	if (!string_contains((*(string*)array_get(parts, 0)), _SLIT("-")) && string_contains((*(string*)array_get(parts, 0)), _SLIT(":"))) {
		int hour_ = 0;
		int minute_ = 0;
		int second_ = 0;
		int microsecond_ = 0;
		int nanosecond_ = 0;
		i64 unix_offset = ((i64)(0));
		bool is_local_time = true;
		_result_multi_return_int_int_int_int_int_i64_bool _t8 = time__parse_iso8601_time((*(string*)array_get(parts, 0)));
		if (_t8.is_error) {
			_result_time__Time _t9;
			memcpy(&_t9, &_t8, sizeof(_result));
			return _t9;
		}
		
 		multi_return_int_int_int_int_int_i64_bool mr_1459 =  (*(multi_return_int_int_int_int_int_i64_bool*)_t8.data);
		hour_ = mr_1459.arg0;
		minute_ = mr_1459.arg1;
		second_ = mr_1459.arg2;
		microsecond_ = mr_1459.arg3;
		nanosecond_ = mr_1459.arg4;
		unix_offset = mr_1459.arg5;
		is_local_time = mr_1459.arg6;
		t = time__new(((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = hour_,.minute = minute_,.second = second_,.nanosecond = nanosecond_,.is_local = 0,.microsecond = 0,}));
		if (is_local_time) {
			_result_time__Time _t10;
			_result_ok(&(time__Time[]) { t }, (_result*)(&_t10), sizeof(time__Time));
			return _t10;
		}
		i64 unix_time = t.__v_unix;
		if (unix_offset < 0) {
			unix_time -= (-unix_offset);
		} else if (unix_offset > 0) {
			unix_time += unix_offset;
		}
		t = time__unix_nanosecond(((i64)(unix_time)), t.nanosecond);
		_result_time__Time _t11;
		_result_ok(&(time__Time[]) { t }, (_result*)(&_t11), sizeof(time__Time));
		return _t11;
	}
	return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(9, _SLIT("malformed date")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_time__Time time__parse(string s) {
	if ((s).len == 0) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("datetime string is empty")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_option_int _t2 = string_index(s, _SLIT(" "));
	if (_t2.state != 0) {
		IError err = _t2.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(1, _SLIT("string has no space between date and time")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	int pos =  (*(int*)_t2.data);
	string symd = string_substr(s, 0, pos);
	Array_string ymd = string_split(symd, _SLIT("-"));
	if (ymd.len != 3) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(2, _SLIT("date must be in the form of y-m-d")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	string shms = string_substr(s, pos, 2147483647);
	Array_string hms = string_split(shms, _SLIT(":"));
	if (hms.len != 3) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(9, _SLIT("time must be in the form of H:i:s")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	string hour_ = string_substr((*(string*)array_get(hms, 0)), 1, 2147483647);
	string minute_ = (*(string*)array_get(hms, 1));
	string second_ = (*(string*)array_get(hms, 2));
	_result_int _t6 = strconv__atoi((*(string*)array_get(ymd, 0)));
	if (_t6.is_error) {
		IError err = _t6.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid year format: "), 0xfe10, {.d_s = (*(string*)array_get(ymd, 0))}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	int iyear =  (*(int*)_t6.data);
	_result_int _t8 = strconv__atoi((*(string*)array_get(ymd, 1)));
	if (_t8.is_error) {
		IError err = _t8.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid month format: "), 0xfe10, {.d_s = (*(string*)array_get(ymd, 1))}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	int imonth =  (*(int*)_t8.data);
	_result_int _t10 = strconv__atoi((*(string*)array_get(ymd, 2)));
	if (_t10.is_error) {
		IError err = _t10.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid day format: "), 0xfe10, {.d_s = (*(string*)array_get(ymd, 2))}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	int iday =  (*(int*)_t10.data);
	_result_int _t12 = strconv__atoi(hour_);
	if (_t12.is_error) {
		IError err = _t12.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid hour format: "), 0xfe10, {.d_s = hour_}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	int ihour =  (*(int*)_t12.data);
	_result_int _t14 = strconv__atoi(minute_);
	if (_t14.is_error) {
		IError err = _t14.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid minute format: "), 0xfe10, {.d_s = minute_}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	int iminute =  (*(int*)_t14.data);
	_result_int _t16 = strconv__atoi(second_);
	if (_t16.is_error) {
		IError err = _t16.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("invalid second format: "), 0xfe10, {.d_s = second_}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	int isecond =  (*(int*)_t16.data);
	if (iyear > 9999 || iyear < -9999) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(3, _SLIT("year must be between -10000 and 10000")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (imonth > 12 || imonth < 1) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(4, _SLIT("month must be between 1 and 12")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (iday > 31 || iday < 1) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(5, _SLIT("day must be between 1 and 31")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (ihour > 23 || ihour < 0) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(6, _SLIT("hours must be between 0 and 24")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (iminute > 59 || iminute < 0) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(7, _SLIT("minutes must be between 0 and 60")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (isecond > 59 || isecond < 0) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(8, _SLIT("seconds must be between 0 and 60")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	time__Time res = time__new(((time__Time){
		.__v_unix = 0,
		.year = iyear,
		.month = imonth,
		.day = iday,
		.hour = ihour,
		.minute = iminute,
		.second = isecond,
		.nanosecond = 0,
		.is_local = 0,
		.microsecond = 0,
	}));
	_result_time__Time _t24;
	_result_ok(&(time__Time[]) { res }, (_result*)(&_t24), sizeof(time__Time));
	return _t24;
}

_result_time__Time time__parse_format(string s, string format) {
	if ((s).len == 0) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("datetime string is empty")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	time__DateTimeParser p = time__new_date_time_parser(s, format);
	_result_time__Time _t2 = time__DateTimeParser_parse(&p);
	return _t2;
}

_result_time__Time time__parse_iso8601(string s) {
	if ((s).len == 0) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("datetime string is empty")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_option_int _t2 = string_index(s, _SLIT("T"));
	if (_t2.state != 0) {
		IError err = _t2.err;
		*(int*) _t2.data = -1;
	}
	
 	int t_i =  (*(int*)_t2.data);
	Array_string parts = (t_i != -1 ? (new_array_from_c_array(2, 2, sizeof(string), _MOV((string[2]){string_clone(string_substr(s, 0, t_i)), string_clone(string_substr(s, (int)(t_i + 1), 2147483647))}))) : (string_split(s, _SLIT(" "))));
	if (!(parts.len == 1 || parts.len == 2)) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(12, _SLIT("malformed date")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_multi_return_int_int_int _t4 = time__parse_iso8601_date((*(string*)array_get(parts, 0)));
	if (_t4.is_error) {
		_result_time__Time _t5;
		memcpy(&_t5, &_t4, sizeof(_result));
		return _t5;
	}
	
 	multi_return_int_int_int mr_5470 =  (*(multi_return_int_int_int*)_t4.data);
	int year = mr_5470.arg0;
	int month = mr_5470.arg1;
	int day = mr_5470.arg2;
	int hour_ = 0;
	int minute_ = 0;
	int second_ = 0;
	int microsecond_ = 0;
	int nanosecond_ = 0;
	i64 unix_offset = ((i64)(0));
	bool is_local_time = true;
	if (parts.len == 2) {
		_result_multi_return_int_int_int_int_int_i64_bool _t6 = time__parse_iso8601_time((*(string*)array_get(parts, 1)));
		if (_t6.is_error) {
			_result_time__Time _t7;
			memcpy(&_t7, &_t6, sizeof(_result));
			return _t7;
		}
		
 		multi_return_int_int_int_int_int_i64_bool mr_5744 =  (*(multi_return_int_int_int_int_int_i64_bool*)_t6.data);
		hour_ = mr_5744.arg0;
		minute_ = mr_5744.arg1;
		second_ = mr_5744.arg2;
		microsecond_ = mr_5744.arg3;
		nanosecond_ = mr_5744.arg4;
		unix_offset = mr_5744.arg5;
		is_local_time = mr_5744.arg6;
	}
	time__Time t = time__new(((time__Time){
		.__v_unix = 0,
		.year = year,
		.month = month,
		.day = day,
		.hour = hour_,
		.minute = minute_,
		.second = second_,
		.nanosecond = nanosecond_,
		.is_local = 0,
		.microsecond = 0,
	}));
	if (is_local_time) {
		_result_time__Time _t8;
		_result_ok(&(time__Time[]) { t }, (_result*)(&_t8), sizeof(time__Time));
		return _t8;
	}
	i64 unix_time = t.__v_unix;
	if (unix_offset < 0) {
		unix_time -= (-unix_offset);
	} else if (unix_offset > 0) {
		unix_time += unix_offset;
	}
	t = time__unix_nanosecond(((i64)(unix_time)), t.nanosecond);
	_result_time__Time _t9;
	_result_ok(&(time__Time[]) { t }, (_result*)(&_t9), sizeof(time__Time));
	return _t9;
}

_result_time__Time time__parse_rfc2822(string s) {
	if ((s).len == 0) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(0, _SLIT("datetime string is empty")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	Array_string fields = string_split(s, _SLIT(" "));
	if (fields.len < 5) {
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(1,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("datetime string must have 5 components, has: "), 0xfe07, {.d_i32 = fields.len}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_option_int _t3 = string_index(_const_time__months_string, (*(string*)array_get(fields, 2)));
	if (_t3.state != 0) {
		IError err = _t3.err;
		return (_result_time__Time){ .is_error=true, .err=time__error_invalid_time(2, _SLIT("invalid month format")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	int pos =  (*(int*)_t3.data);
	int mm = (int)((int)(pos / 3) + 1);
	{ // Unsafe block
		u8* tmstr = malloc_noscan((int)(s.len * 2));
		int count = snprintf(((char*)(tmstr)), ((int)(s.len * 2)), "%s-%02d-%s %s", (*(string*)array_get(fields, 3)).str, mm, (*(string*)array_get(fields, 1)).str, (*(string*)array_get(fields, 4)).str);
		_result_time__Time _t5 = time__parse(tos(tmstr, count));
		return _t5;
	}
	return (_result_time__Time){0};
}

VV_LOCAL_SYMBOL _result_multi_return_int_int_int time__parse_iso8601_date(string s) {
	int year = 0;
	int month = 0;
	int day = 0;
	u8 dummy = ((u8)(0));
	int count = sscanf(((char*)(s.str)), "%4d-%2d-%2d%c", &year, &month, &day, &dummy);
	if (count != 3) {
		return (_result_multi_return_int_int_int){ .is_error=true, .err=time__error_invalid_time(10,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("datetime string must have 3 components, but has "), 0xfe07, {.d_i32 = count}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (year > 9999) {
		return (_result_multi_return_int_int_int){ .is_error=true, .err=time__error_invalid_time(13, _SLIT("year must be smaller than 10000")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (month > 12) {
		return (_result_multi_return_int_int_int){ .is_error=true, .err=time__error_invalid_time(14, _SLIT("month must be smaller than 12")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (day > 31) {
		return (_result_multi_return_int_int_int){ .is_error=true, .err=time__error_invalid_time(15, _SLIT("day must be smaller than 31")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_multi_return_int_int_int _t5;
	_result_ok(&(multi_return_int_int_int[]) { (multi_return_int_int_int){.arg0=year, .arg1=month, .arg2=day} }, (_result*)(&_t5), sizeof(multi_return_int_int_int));
	return _t5;
}

VV_LOCAL_SYMBOL _result_multi_return_int_int_int_int_int_i64_bool time__parse_iso8601_time(string s) {
	int hour_ = 0;
	int minute_ = 0;
	int second_ = 0;
	int microsecond_ = 0;
	int nanosecond_ = 0;
	rune plus_min_z = 'a';
	int offset_hour = 0;
	int offset_minute = 0;
	int count = 0;
	count = sscanf(((char*)(s.str)), "%2d:%2d:%2d.%9d%c", &hour_, &minute_, &second_, &nanosecond_, ((char*)(&plus_min_z)));
	if (count == 5 && plus_min_z == 'Z') {
		int ndigits = 0;
		_option_int _t1;
		if (_t1 = string_index(s, _SLIT(".")), _t1.state == 0) {
			int pos = *(int*)_t1.data;
			pos++;
			for (; pos < s.len && u8_is_digit(string_at(s, pos)); pos++) {
				ndigits++;
			}
		}
		for (;;) {
			if (!(ndigits < 9)) break;
			nanosecond_ *= 10;
			ndigits++;
		}
		microsecond_ = (int)(nanosecond_ / 1000);
	} else {
		count = sscanf(((char*)(s.str)), "%2d:%2d:%2d.%9d%c%2d:%2d", &hour_, &minute_, &second_, &microsecond_, ((char*)(&plus_min_z)), &offset_hour, &offset_minute);
		if (count < 4) {
			count = sscanf(((char*)(s.str)), "%2d:%2d:%2d%c%2d:%2d", &hour_, &minute_, &second_, ((char*)(&plus_min_z)), &offset_hour, &offset_minute);
			count++;
		}
		if (count < 4) {
			return (_result_multi_return_int_int_int_int_int_i64_bool){ .is_error=true, .err=time__error_invalid_time(10, _SLIT("malformed date")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		nanosecond_ = (int)(microsecond_ * 1000);
	}
	bool is_local_time = plus_min_z == 'a' && count == 4;
	bool is_utc = plus_min_z == 'Z' && count == 5;
	if (!(count == 7 || is_local_time || is_utc)) {
		return (_result_multi_return_int_int_int_int_int_i64_bool){ .is_error=true, .err=time__error_invalid_time(11, _SLIT("malformed date")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (plus_min_z != '+' && plus_min_z != '-' && !is_utc && !is_local_time) {
		return (_result_multi_return_int_int_int_int_int_i64_bool){ .is_error=true, .err=time__error_invalid_time(12, _SLIT("missing timezone")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int unix_offset = 0;
	if (offset_hour > 0) {
		unix_offset += (int)(3600 * offset_hour);
	}
	if (offset_minute > 0) {
		unix_offset += (int)(60 * offset_minute);
	}
	if (plus_min_z == '+') {
		unix_offset *= -1;
	}
	_result_multi_return_int_int_int_int_int_i64_bool _t5;
	_result_ok(&(multi_return_int_int_int_int_int_i64_bool[]) { (multi_return_int_int_int_int_int_i64_bool){.arg0=hour_, .arg1=minute_, .arg2=second_, .arg3=microsecond_, .arg4=nanosecond_, .arg5=unix_offset, .arg6=is_local_time} }, (_result*)(&_t5), sizeof(multi_return_int_int_int_int_int_i64_bool));
	return _t5;
}

string time__TimeParseError_msg(time__TimeParseError err) {
	string _t1 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT("Invalid time format code: "), 0xfe07, {.d_i32 = err.code}}, {_SLIT(", error: "), 0xfe10, {.d_s = err.message}}, {_SLIT0, 0, { .d_c = 0 }}}));
	return _t1;
}

VV_LOCAL_SYMBOL IError time__error_invalid_time(int code, string message) {
	IError _t1 = I_time__TimeParseError_to_Interface_IError(((time__TimeParseError*)memdup(&(time__TimeParseError){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),.code = code,.message = message,}, sizeof(time__TimeParseError))));
	return _t1;
}

time__StopWatch time__new_stopwatch(time__StopWatchOptions opts) {
	u64 initial = ((u64)(0U));
	if (opts.auto_start) {
		initial = time__sys_mono_now();
	}
	time__StopWatch _t1 = ((time__StopWatch){.elapsed = 0U,.start = initial,.end = 0U,});
	return _t1;
}

void time__StopWatch_start(time__StopWatch* t) {
	t->start = time__sys_mono_now();
	t->end = 0U;
}

void time__StopWatch_restart(time__StopWatch* t) {
	t->start = time__sys_mono_now();
	t->end = 0U;
	t->elapsed = 0U;
}

void time__StopWatch_stop(time__StopWatch* t) {
	t->end = time__sys_mono_now();
}

void time__StopWatch_pause(time__StopWatch* t) {
	if (t->start > 0U) {
		if (t->end == 0U) {
			t->elapsed += (u64)(time__sys_mono_now() - t->start);
		} else {
			t->elapsed += (u64)(t->end - t->start);
		}
	}
	t->start = 0U;
}

time__Duration time__StopWatch_elapsed(time__StopWatch t) {
	if (t.start > 0U) {
		if (t.end == 0U) {
			time__Duration _t1 = ((((i64)((u64)((u64)(time__sys_mono_now() - t.start) + t.elapsed)))));
			return _t1;
		} else {
			time__Duration _t2 = ((((i64)((u64)((u64)(t.end - t.start) + t.elapsed)))));
			return _t2;
		}
	}
	time__Duration _t3 = ((((i64)(t.elapsed))));
	return _t3;
}

// TypeDecl
time__Time time__now(void) {
	time__Time _t1 = time__linux_now();
	return _t1;
}

time__Time time__utc(void) {
	time__Time _t1 = time__linux_utc();
	return _t1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
time__Time time__new_time(time__Time t) {
	time__Time _t1 = time__time_with_unix(t);
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__time_with_unix(time__Time t) {
	if (t.__v_unix != 0) {
		return t;
	}
	struct tm tt = ((struct tm){
		.tm_sec = t.second,
		.tm_min = t.minute,
		.tm_hour = t.hour,
		.tm_mday = t.day,
		.tm_mon = (int)(t.month - 1),
		.tm_year = (int)(t.year - 1900),
		.tm_wday = 0,
		.tm_yday = 0,
		.tm_isdst = 0,
		.tm_gmtoff = 0,
	});
	i64 utime = time__make_unix_time(tt);
	time__Time _t2 = ((time__Time){.__v_unix = utime,.year = (t).year,.month = (t).month,.day = (t).day,.hour = (t).hour,.minute = (t).minute,.second = (t).second,.nanosecond = (t).nanosecond,.is_local = (t).is_local,.microsecond = (t).microsecond,});
	return _t2;
}

i64 time__ticks(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		struct timeval ts = ((struct timeval){.tv_sec = 0,.tv_usec = 0,});
		gettimeofday(&ts, 0);
		i64 _t2 = ((i64)((u64)((u64)(ts.tv_sec * ((u64)(1000U))) + ((u64)(ts.tv_usec / ((u64)(1000U)))))));
		return _t2;
	}
	#endif
	return 0;
}

string time__Time_str(time__Time t) {
	string _t1 = time__Time_format_ss(t);
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__convert_ctime(struct tm t, int nanosecond) {
	time__Time _t1 = ((time__Time){
		.__v_unix = time__make_unix_time(t),
		.year = (int)(t.tm_year + 1900),
		.month = (int)(t.tm_mon + 1),
		.day = t.tm_mday,
		.hour = t.tm_hour,
		.minute = t.tm_min,
		.second = t.tm_sec,
		.nanosecond = nanosecond,
		.is_local = true,
		.microsecond = 0,
	});
	return _t1;
}

string time__Time_strftime(time__Time t, string fmt) {
	struct tm* tm = ((struct tm*)memdup(&(struct tm){.tm_sec = 0,.tm_min = 0,.tm_hour = 0,.tm_mday = 0,.tm_mon = 0,.tm_year = 0,.tm_wday = 0,.tm_yday = 0,.tm_isdst = 0,.tm_gmtoff = 0,}, sizeof(struct tm)));
	#if defined(_WIN32)
	{
	}
	#else
	{
		gmtime_r(((voidptr)(&t.__v_unix)), tm);
	}
	#endif
	Array_fixed_char_1024 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	char* fmt_c = ((char*)(fmt.str));
	strftime(&buf[0], ((usize)(sizeof(Array_fixed_char_1024))), fmt_c, tm);
	string _t2 = cstring_to_vstring(((char*)(&buf[0])));
	return _t2;
}

int time__Duration_sys_milliseconds(time__Duration d) {
	if (d > 2147483647 * _const_time__millisecond) {
		int _t1 = -1;
		return _t1;
	} else if (d <= 0) {
		int _t2 = 0;
		return _t2;
	} else {
		int _t3 = ((int)(d / _const_time__millisecond));
		return _t3;
	}
	return 0;
}

time__Time time__Time__static__new(time__Time t) {
	time__Time _t1 = time__time_with_unix(t);
	return _t1;
}

time__Time time__new(time__Time t) {
	time__Time _t1 = time__time_with_unix(t);
	return _t1;
}

string time__Time_smonth(time__Time* t) {
	if (t->month <= 0 || t->month > 12) {
		string _t1 = _SLIT("---");
		return _t1;
	}
	int i = (int)(t->month - 1);
	string _t2 = string_substr(_const_time__months_string, (int)(i * 3), (int)(((int)(i + 1)) * 3));
	return _t2;
}

// Attr: [inline]
inline i64 time__Time_unix(time__Time* t) {
	i64 _t1 = time__time_with_unix(*t).__v_unix;
	return _t1;
}

// Attr: [inline]
inline i64 time__Time_unix_milli(time__Time* t) {
	i64 _t1 = (i64)((i64)(time__Time_unix(t) * 1000) + ((i64)(((i64)(t->nanosecond)) / 1000000)));
	return _t1;
}

// Attr: [inline]
inline i64 time__Time_unix_micro(time__Time* t) {
	i64 _t1 = (i64)((i64)(time__Time_unix(t) * 1000000) + ((i64)(((i64)(t->nanosecond)) / 1000)));
	return _t1;
}

// Attr: [inline]
inline i64 time__Time_unix_nano(time__Time* t) {
	i64 _t1 = (i64)((i64)(time__Time_unix(t) * 1000000000) + ((i64)(t->nanosecond)));
	return _t1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
i64 time__Time_unix_time(time__Time* t) {
	i64 _t1 = time__Time_unix(t);
	return _t1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
i64 time__Time_unix_time_milli(time__Time* t) {
	i64 _t1 = time__Time_unix_milli(t);
	return _t1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
i64 time__Time_unix_time_micro(time__Time* t) {
	i64 _t1 = time__Time_unix_micro(t);
	return _t1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
i64 time__Time_unix_time_nano(time__Time* t) {
	i64 _t1 = time__Time_unix_nano(t);
	return _t1;
}

time__Time time__Time_add(time__Time* t, time__Duration duration_in_nanosecond) {
	i64 increased_time_nanosecond = (i64)(((i64)(t->nanosecond)) + time__Duration_nanoseconds(duration_in_nanosecond));
	i64 increased_time_second = (i64)(time__Time_unix(t) + (increased_time_nanosecond / _const_time__second));
	increased_time_nanosecond = increased_time_nanosecond % _const_time__second;
	if (increased_time_nanosecond < 0) {
		increased_time_second--;
		increased_time_nanosecond += _const_time__second;
	}
	time__Time res = time__unix_nanosecond(increased_time_second, ((int)(increased_time_nanosecond)));
	time__Time _t1 = (t->is_local ? (time__Time_as_local(&res)) : (res));
	return _t1;
}

time__Time time__Time_add_seconds(time__Time* t, int seconds) {
	time__Time _t1 = time__Time_add(ADDR(time__Time, time__time_with_unix(*t)), seconds * _const_time__second);
	return _t1;
}

time__Time time__Time_add_days(time__Time* t, int days) {
	time__Time _t1 = time__Time_add(ADDR(time__Time, time__time_with_unix(*t)), (int)(days * 24) * _const_time__hour);
	return _t1;
}

time__Duration time__since(time__Time t) {
	time__Duration _t1 = time__Time__minus(time__now(), t);
	return _t1;
}

string time__Time_relative(time__Time* t) {
	time__Time znow = time__now();
	i64 secs = (i64)(znow.__v_unix - time__Time_unix(t));
	string prefix = _SLIT("");
	string suffix = _SLIT("");
	if (secs < 0) {
		secs *= -1;
		prefix = _SLIT("in ");
	} else {
		suffix = _SLIT(" ago");
	}
	if (secs < (int_literal)(_const_time__seconds_per_minute / 2)) {
		string _t1 = _SLIT("now");
		return _t1;
	}
	if (secs < _const_time__seconds_per_hour) {
		i64 m = (i64)(secs / _const_time__seconds_per_minute);
		if (m == 1) {
			string _t2 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT("1 minute"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
			return _t2;
		}
		string _t3 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT0, 0xfe09, {.d_i64 = m}}, {_SLIT(" minutes"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t3;
	}
	if (secs < (int_literal)(_const_time__seconds_per_hour * 24)) {
		i64 h = (i64)(secs / _const_time__seconds_per_hour);
		if (h == 1) {
			string _t4 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT("1 hour"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
			return _t4;
		}
		string _t5 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT0, 0xfe09, {.d_i64 = h}}, {_SLIT(" hours"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t5;
	}
	if (secs < (int_literal)((int_literal)(_const_time__seconds_per_hour * 24) * 7)) {
		i64 d = (i64)((i64)(secs / _const_time__seconds_per_hour) / 24);
		if (d == 1) {
			string _t6 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT("1 day"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
			return _t6;
		}
		string _t7 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT0, 0xfe09, {.d_i64 = d}}, {_SLIT(" days"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t7;
	}
	if (secs < (int_literal)((int_literal)(_const_time__seconds_per_hour * 24) * _const_time__days_in_year)) {
		if (string__eq(prefix, _SLIT("in "))) {
			string _t8 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("on "), 0xfe10, {.d_s = time__Time_md(/*rec*/*t)}}, {_SLIT0, 0, { .d_c = 0 }}}));
			return _t8;
		}
		string _t9 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("last "), 0xfe10, {.d_s = time__Time_md(/*rec*/*t)}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t9;
	}
	i64 y = (i64)((i64)((i64)(secs / _const_time__seconds_per_hour) / 24) / _const_time__days_in_year);
	if (y == 1) {
		string _t10 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT("1 year"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t10;
	}
	string _t11 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT0, 0xfe09, {.d_i64 = y}}, {_SLIT(" years"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
	return _t11;
}

string time__Time_relative_short(time__Time* t) {
	time__Time znow = time__now();
	i64 secs = (i64)(znow.__v_unix - time__Time_unix(t));
	string prefix = _SLIT("");
	string suffix = _SLIT("");
	if (secs < 0) {
		secs *= -1;
		prefix = _SLIT("in ");
	} else {
		suffix = _SLIT(" ago");
	}
	if (secs < (int_literal)(_const_time__seconds_per_minute / 2)) {
		string _t1 = _SLIT("now");
		return _t1;
	}
	if (secs < _const_time__seconds_per_hour) {
		i64 m = (i64)(secs / _const_time__seconds_per_minute);
		if (m == 1) {
			string _t2 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT("1m"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
			return _t2;
		}
		string _t3 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT0, 0xfe09, {.d_i64 = m}}, {_SLIT("m"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t3;
	}
	if (secs < (int_literal)(_const_time__seconds_per_hour * 24)) {
		i64 h = (i64)(secs / _const_time__seconds_per_hour);
		if (h == 1) {
			string _t4 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT("1h"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
			return _t4;
		}
		string _t5 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT0, 0xfe09, {.d_i64 = h}}, {_SLIT("h"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t5;
	}
	if (secs < (int_literal)((int_literal)(_const_time__seconds_per_hour * 24) * _const_time__days_in_year)) {
		i64 d = (i64)((i64)(secs / _const_time__seconds_per_hour) / 24);
		if (d == 1) {
			string _t6 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT("1d"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
			return _t6;
		}
		string _t7 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT0, 0xfe09, {.d_i64 = d}}, {_SLIT("d"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t7;
	}
	i64 y = (i64)((i64)((i64)(secs / _const_time__seconds_per_hour) / 24) / _const_time__days_in_year);
	if (y == 1) {
		string _t8 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT("1y"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
		return _t8;
	}
	string _t9 =  str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = prefix}}, {_SLIT0, 0xfe09, {.d_i64 = y}}, {_SLIT("y"), 0xfe10, {.d_s = suffix}}, {_SLIT0, 0, { .d_c = 0 }}}));
	return _t9;
}

int time__day_of_week(int y, int m, int d) {
	Array_int t = new_array_from_c_array_noscan(12, 12, sizeof(int), _MOV((int[12]){
			0, 3, 2, 5, 0, 3, 5, 1, 4,
			6, 2, 4}));
	int sy = y;
	if (m < 3) {
		sy = (int)(sy - 1);
	}
	int _t1 = (int)((int)(((int)((int)((int)((int)((int)((int)(sy + (int)(sy / 4)) - (int)(sy / 100)) + (int)(sy / 400)) + (*(int*)array_get(t, (int)(m - 1)))) + d) - 1)) % 7) + 1);
	return _t1;
}

int time__Time_day_of_week(time__Time* t) {
	int _t1 = time__day_of_week(t->year, t->month, t->day);
	return _t1;
}

int time__Time_year_day(time__Time* t) {
	int yday = (int)(t->day + _const_time__days_before[v_fixed_index((int)(t->month - 1), 13)]);
	if (time__is_leap_year(t->year) && t->month > 2) {
		int _t1 = (int)(yday + 1);
		return _t1;
	}
	return yday;
}

string time__Time_weekday_str(time__Time* t) {
	int i = (int)(time__Time_day_of_week(t) - 1);
	string _t1 = string_substr(_const_time__long_days[v_fixed_index(i, 7)], 0, 3);
	return _t1;
}

string time__Time_long_weekday_str(time__Time* t) {
	int i = (int)(time__Time_day_of_week(t) - 1);
	string _t1 = _const_time__long_days[v_fixed_index(i, 7)];
	return _t1;
}

bool time__is_leap_year(int year) {
	bool _t1 = (int)(year % 4) == 0 && ((int)(year % 100) != 0 || (int)(year % 400) == 0);
	return _t1;
}

_result_int time__days_in_month(int month, int year) {
	if (month > 12 || month < 1) {
		return (_result_int){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Invalid month: "), 0xfe07, {.d_i32 = month}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int extra = (month == 2 && time__is_leap_year(year) ? (1) : (0));
	int res = (int)(_const_time__month_days[v_fixed_index((int)(month - 1), 12)] + extra);
	_result_int _t2;
	_result_ok(&(int[]) { res }, (_result*)(&_t2), sizeof(int));
	return _t2;
}

string time__Time_debug(time__Time* t) {
	string _t1 =  str_intp(9, _MOV((StrIntpData[]){{_SLIT("Time{ year: "), 0x8008fe27, {.d_i32 = t->year}}, {_SLIT(" month: "), 0x8004fe27, {.d_i32 = t->month}}, {_SLIT(" day: "), 0x8004fe27, {.d_i32 = t->day}}, {_SLIT(" hour: "), 0x8004fe27, {.d_i32 = t->hour}}, {_SLIT(" minute: "), 0x8004fe27, {.d_i32 = t->minute}}, {_SLIT(" second: "), 0x8004fe27, {.d_i32 = t->second}}, {_SLIT(" nanosecond: "), 0x8012fe27, {.d_i32 = t->nanosecond}}, {_SLIT(" unix: "), 0x800efe29, {.d_i64 = t->__v_unix}}, {_SLIT(" }"), 0, { .d_c = 0 }}}));
	return _t1;
}

int time__offset(void) {
	time__Time t = time__utc();
	time__Time local = time__Time_local(&t);
	int _t1 = ((int)((i64)(local.__v_unix - t.__v_unix)));
	return _t1;
}

time__Time time__Time_local_to_utc(time__Time* t) {
	if (!t->is_local) {
		return *t;
	}
	time__Time _t3 = time__Time_add(t, -time__offset() * _const_time__second);
	time__Time _t2 = ((time__Time){.__v_unix = _t3.__v_unix,.year = _t3.year,.month = _t3.month,.day = _t3.day,.hour = _t3.hour,.minute = _t3.minute,.second = _t3.second,.nanosecond = _t3.nanosecond,.is_local = false,.microsecond = _t3.microsecond,});
	return _t2;
}

time__Time time__Time_utc_to_local(time__Time* u) {
	if (u->is_local) {
		return *u;
	}
	time__Time _t3 = time__Time_add(u, time__offset() * _const_time__second);
	time__Time _t2 = ((time__Time){.__v_unix = _t3.__v_unix,.year = _t3.year,.month = _t3.month,.day = _t3.day,.hour = _t3.hour,.minute = _t3.minute,.second = _t3.second,.nanosecond = _t3.nanosecond,.is_local = true,.microsecond = _t3.microsecond,});
	return _t2;
}

time__Time time__Time_as_local(time__Time* t) {
	time__Time _t1 = ((time__Time){.__v_unix = (t)->__v_unix,.year = (t)->year,.month = (t)->month,.day = (t)->day,.hour = (t)->hour,.minute = (t)->minute,.second = (t)->second,.nanosecond = (t)->nanosecond,.is_local = true,.microsecond = (t)->microsecond,});
	return _t1;
}

time__Time time__Time_as_utc(time__Time* t) {
	time__Time _t1 = ((time__Time){.__v_unix = (t)->__v_unix,.year = (t)->year,.month = (t)->month,.day = (t)->day,.hour = (t)->hour,.minute = (t)->minute,.second = (t)->second,.nanosecond = (t)->nanosecond,.is_local = false,.microsecond = (t)->microsecond,});
	return _t1;
}

bool time__Time_is_utc(time__Time* t) {
	bool _t1 = !t->is_local;
	return _t1;
}

VV_LOCAL_SYMBOL u64 time__sys_mono_now_darwin(void) {
	u64 _t1 = 0U;
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__darwin_now(void) {
	time__Time _t1 = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,});
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__solaris_now(void) {
	time__Time _t1 = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,});
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__darwin_utc(void) {
	time__Time _t1 = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,});
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__solaris_utc(void) {
	time__Time _t1 = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,});
	return _t1;
}

VV_LOCAL_SYMBOL i64 time__make_unix_time(struct tm t) {
	i64 _t1 = ((i64)(timegm(&t)));
	return _t1;
}

time__Time time__Time_local(time__Time* t) {
	if (t->is_local) {
		return *t;
	}
	struct tm loc_tm = ((struct tm){.tm_sec = 0,.tm_min = 0,.tm_hour = 0,.tm_mday = 0,.tm_mon = 0,.tm_year = 0,.tm_wday = 0,.tm_yday = 0,.tm_isdst = 0,.tm_gmtoff = 0,});
	i64 t_ = time__Time_unix(t);
	localtime_r(((voidptr)(&t_)), &loc_tm);
	time__Time _t2 = time__convert_ctime(loc_tm, t->nanosecond);
	return _t2;
}

u64 time__sys_mono_now(void) {
	#if defined(__APPLE__)
	{
	}
	#else
	{
		struct timespec ts = ((struct timespec){.tv_sec = 0,.tv_nsec = 0,});
		clock_gettime(CLOCK_MONOTONIC, &ts);
		u64 _t2 = (u64)((u64)(((u64)(ts.tv_sec)) * 1000000000U) + ((u64)(ts.tv_nsec)));
		return _t2;
	}
	#endif
	return 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 time__vpc_now(void) {
	struct timespec ts = ((struct timespec){.tv_sec = 0,.tv_nsec = 0,});
	clock_gettime(CLOCK_MONOTONIC, &ts);
	u64 _t1 = (u64)((u64)(((u64)(ts.tv_sec)) * 1000000000U) + ((u64)(ts.tv_nsec)));
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__linux_now(void) {
	struct timespec ts = ((struct timespec){.tv_sec = 0,.tv_nsec = 0,});
	clock_gettime(CLOCK_REALTIME, &ts);
	struct tm loc_tm = ((struct tm){.tm_sec = 0,.tm_min = 0,.tm_hour = 0,.tm_mday = 0,.tm_mon = 0,.tm_year = 0,.tm_wday = 0,.tm_yday = 0,.tm_isdst = 0,.tm_gmtoff = 0,});
	localtime_r(((voidptr)(&ts.tv_sec)), &loc_tm);
	time__Time _t1 = time__convert_ctime(loc_tm, ((int)(ts.tv_nsec)));
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__linux_utc(void) {
	struct timespec ts = ((struct timespec){.tv_sec = 0,.tv_nsec = 0,});
	clock_gettime(CLOCK_REALTIME, &ts);
	time__Time _t1 = time__unix_nanosecond(((i64)(ts.tv_sec)), ((int)(ts.tv_nsec)));
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__win_now(void) {
	time__Time _t1 = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,});
	return _t1;
}

VV_LOCAL_SYMBOL time__Time time__win_utc(void) {
	time__Time _t1 = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,});
	return _t1;
}

struct timespec time__Duration_timespec(time__Duration d) {
	struct timespec ts = ((struct timespec){.tv_sec = 0,.tv_nsec = 0,});
	clock_gettime(CLOCK_REALTIME, &ts);
	i64 d_sec = d / _const_time__second;
	i64 d_nsec = d % _const_time__second;
	ts.tv_sec += d_sec;
	ts.tv_nsec += d_nsec;
	if (ts.tv_nsec > ((i64)(_const_time__second))) {
		ts.tv_nsec -= ((i64)(_const_time__second));
		ts.tv_sec++;
	}
	return ts;
}

void time__sleep(time__Duration duration) {
	struct timespec req = ((struct timespec){.tv_sec = duration / _const_time__second,.tv_nsec = duration % _const_time__second,});
	struct timespec rem = ((struct timespec){.tv_sec = 0,.tv_nsec = 0,});
	for (;;) {
		if (!(nanosleep(&req, &rem) < 0)) break;
		if (errno == EINTR) {
			req = rem;
		} else {
			break;
		}
	}
}

time__Time time__unix(i64 epoch) {
	i64 day_offset = (i64)(epoch / _const_time__seconds_per_day);
	if ((i64)(epoch % _const_time__seconds_per_day) < 0) {
		day_offset--;
	}
	multi_return_int_int_int mr_532 = time__calculate_date_from_day_offset(day_offset);
	int year = mr_532.arg0;
	int month = mr_532.arg1;
	int day = mr_532.arg2;
	multi_return_int_int_int mr_592 = time__calculate_time_from_second_offset((i64)(epoch % _const_time__seconds_per_day));
	int hr = mr_592.arg0;
	int min = mr_592.arg1;
	int sec = mr_592.arg2;
	time__Time _t1 = ((time__Time){
		.__v_unix = epoch,
		.year = year,
		.month = month,
		.day = day,
		.hour = hr,
		.minute = min,
		.second = sec,
		.nanosecond = 0,
		.is_local = 0,
		.microsecond = 0,
	});
	return _t1;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
time__Time time__unix2(i64 epoch, int microsecond) {
	time__Time _t1 = time__unix_nanosecond(epoch, (int)(microsecond * 1000));
	return _t1;
}

time__Time time__unix_microsecond(i64 epoch, int microsecond) {
	time__Time _t1 = time__unix_nanosecond(epoch, (int)(microsecond * 1000));
	return _t1;
}

time__Time time__unix_nanosecond(i64 abs_unix_timestamp, int nanosecond) {
	i64 day_offset = (i64)(abs_unix_timestamp / _const_time__seconds_per_day);
	if ((i64)(abs_unix_timestamp % _const_time__seconds_per_day) < 0) {
		day_offset--;
	}
	multi_return_int_int_int mr_1685 = time__calculate_date_from_day_offset(day_offset);
	int year = mr_1685.arg0;
	int month = mr_1685.arg1;
	int day = mr_1685.arg2;
	multi_return_int_int_int mr_1756 = time__calculate_time_from_second_offset((i64)(abs_unix_timestamp % _const_time__seconds_per_day));
	int hour_ = mr_1756.arg0;
	int minute_ = mr_1756.arg1;
	int second_ = mr_1756.arg2;
	time__Time _t1 = ((time__Time){
		.__v_unix = abs_unix_timestamp,
		.year = year,
		.month = month,
		.day = day,
		.hour = hour_,
		.minute = minute_,
		.second = second_,
		.nanosecond = nanosecond,
		.is_local = 0,
		.microsecond = 0,
	});
	return _t1;
}

VV_LOCAL_SYMBOL multi_return_int_int_int time__calculate_date_from_day_offset(i64 day_offset_) {
	i64 day_offset = day_offset_;
	day_offset += 719468;
	int era = 0;
	if (day_offset >= 0) {
		era = ((int)((i64)(day_offset / _const_time__days_per_400_years)));
	} else {
		era = ((int)((i64)(((i64)((i64)(day_offset - _const_time__days_per_400_years) - 1)) / _const_time__days_per_400_years)));
	}
	i64 day_of_era = (i64)(day_offset - (int)(era * _const_time__days_per_400_years));
	i64 year_of_era = (i64)(((i64)((i64)((i64)(day_of_era - (i64)(day_of_era / ((int_literal)(_const_time__days_per_4_years - 1)))) + (i64)(day_of_era / _const_time__days_per_100_years)) - (i64)(day_of_era / ((int_literal)(_const_time__days_per_400_years - 1))))) / _const_time__days_in_year);
	int year = ((int)((i64)(year_of_era + (int)(era * 400))));
	i64 day_of_year = (i64)(day_of_era - ((i64)((i64)((i64)(_const_time__days_in_year * year_of_era) + (i64)(year_of_era / 4)) - (i64)(year_of_era / 100))));
	i64 month_position = (i64)(((i64)((i64)(5 * day_of_year) + 2)) / 153);
	int day = ((int)((i64)((i64)(day_of_year - (i64)(((i64)((i64)(153 * month_position) + 2)) / 5)) + 1)));
	int month = ((int)(month_position));
	if (month_position < 10) {
		month += 3;
	} else {
		month -= 9;
	}
	if (month <= 2) {
		year += 1;
	}
	return (multi_return_int_int_int){.arg0=year, .arg1=month, .arg2=day};
}

VV_LOCAL_SYMBOL multi_return_int_int_int time__calculate_time_from_second_offset(i64 second_offset_) {
	i64 second_offset = second_offset_;
	if (second_offset < 0) {
		second_offset += _const_time__seconds_per_day;
	}
	i64 hour_ = (i64)(second_offset / _const_time__seconds_per_hour);
	second_offset %= _const_time__seconds_per_hour;
	i64 minute_ = (i64)(second_offset / _const_time__seconds_per_minute);
	second_offset %= _const_time__seconds_per_minute;
	return (multi_return_int_int_int){.arg0=((int)(hour_)), .arg1=((int)(minute_)), .arg2=((int)(second_offset))};
}

io__BufferedReader* io__new_buffered_reader(io__BufferedReaderConfig o) {
	if (o.cap <= 0) {
		_v_panic(_SLIT("new_buffered_reader should be called with a positive `cap`"));
		VUNREACHABLE();
	}
	io__BufferedReader* r = ((io__BufferedReader*)memdup(&(io__BufferedReader){.reader = o.reader,.buf = __new_array_with_default_noscan(o.cap, o.cap, sizeof(u8), 0),.offset = 0,.len = 0,.fails = 0,.mfails = o.retries,.end_of_stream = 0,.total_read = 0,}, sizeof(io__BufferedReader)));
	return r;
}

_result_int io__BufferedReader_read(io__BufferedReader* r, Array_u8* buf) {
	if (r->end_of_stream) {
		return (_result_int){ .is_error=true, .err=I_io__Eof_to_Interface_IError(((io__Eof*)memdup(&(io__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(io__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (io__BufferedReader_needs_fill(/*rec*/*r)) {
		if (!io__BufferedReader_fill_buffer(r)) {
			return (_result_int){ .is_error=true, .err=I_io__Eof_to_Interface_IError(((io__Eof*)memdup(&(io__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(io__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	int read = copy(buf, array_slice(r->buf, r->offset, r->len));
	if (read == 0) {
		return (_result_int){ .is_error=true, .err=I_io__NotExpected_to_Interface_IError(((io__NotExpected*)memdup(&(io__NotExpected){.cause = _SLIT("invalid copy of buffer"),.code = -1,}, sizeof(io__NotExpected)))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	r->offset += read;
	r->total_read += read;
	_result_int _t4;
	_result_ok(&(int[]) { read }, (_result*)(&_t4), sizeof(int));
	return _t4;
}

void io__BufferedReader_free(io__BufferedReader* r) {
	array_free(&r->buf);
}

VV_LOCAL_SYMBOL bool io__BufferedReader_fill_buffer(io__BufferedReader* r) {
	if (r->end_of_stream) {
		bool _t1 = true;
		return _t1;
	}
	r->offset = 0;
	r->len = 0;
	_result_int _t2 = io__Reader_name_table[r->reader._typ]._method_read(r->reader._object, &/*arr*/r->buf);
	if (_t2.is_error) {
		IError err = _t2.err;
		r->end_of_stream = true;
		bool _t3 = false;
		return _t3;
	}
	
 	r->len =  (*(int*)_t2.data);
	if (r->len == 0) {
		r->fails++;
	} else {
		r->fails = 0;
	}
	if (r->fails >= r->mfails) {
		r->end_of_stream = true;
		bool _t4 = false;
		return _t4;
	}
	bool _t5 = true;
	return _t5;
}

VV_LOCAL_SYMBOL bool io__BufferedReader_needs_fill(io__BufferedReader r) {
	bool _t1 = r.offset >= r.len;
	return _t1;
}

bool io__BufferedReader_end_of_stream(io__BufferedReader r) {
	bool _t1 = r.end_of_stream;
	return _t1;
}

_result_string io__BufferedReader_read_line(io__BufferedReader* r, io__BufferedReadLineConfig config) {
	if (r->end_of_stream) {
		return (_result_string){ .is_error=true, .err=I_io__Eof_to_Interface_IError(((io__Eof*)memdup(&(io__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(io__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	Array_u8 line = __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
	for (;;) {
		if (io__BufferedReader_needs_fill(/*rec*/*r)) {
			if (!io__BufferedReader_fill_buffer(r)) {
				if (line.len == 0) {
					return (_result_string){ .is_error=true, .err=I_io__Eof_to_Interface_IError(((io__Eof*)memdup(&(io__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(io__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
				}
				_result_string _t3;
				_result_ok(&(string[]) { Array_u8_bytestr(line) }, (_result*)(&_t3), sizeof(string));
				return _t3;
			}
		}
		int i = r->offset;
		for (; i < r->len; i++) {
			r->total_read++;
			u8 c = (*(u8*)array_get(r->buf, i));
			if (c == config.delim) {
				if (i != 0 && config.delim == '\n' && (*(u8*)array_get(r->buf, (int)(i - 1))) == '\r') {
					int x = (int)(i - 1);
					_PUSH_MANY_noscan(&line, (array_slice(r->buf, r->offset, x)), _t4, Array_u8);
				} else {
					_PUSH_MANY_noscan(&line, (array_slice(r->buf, r->offset, i)), _t5, Array_u8);
				}
				r->offset = (int)(i + 1);
				_result_string _t6;
				_result_ok(&(string[]) { Array_u8_bytestr(line) }, (_result*)(&_t6), sizeof(string));
				return _t6;
			}
		}
		_PUSH_MANY_noscan(&line, (array_slice(r->buf, r->offset, i)), _t7, Array_u8);
		r->offset = i;
	}
	return (_result_string){ .is_error=true, .err=I_io__Eof_to_Interface_IError(((io__Eof*)memdup(&(io__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(io__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_void io__cp(io__Reader* src, io__Writer* dst) {
	Array_u8 buf = __new_array_with_default_noscan(_const_io__buf_max_len, 0, sizeof(u8), 0);
	for (;;) {
		_result_int _t1 = io__Reader_name_table[src->_typ]._method_read(src->_object, &/*arr*/buf);
		if (_t1.is_error) {
			IError err = _t1.err;
			break;
		}
		
 		int len =  (*(int*)_t1.data);
		_result_int _t2 = io__Writer_name_table[dst->_typ]._method_write(dst->_object, array_slice(buf, 0, len));
		if (_t2.is_error) {
			IError err = _t2.err;
			return (_result_void){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
  (*(int*)_t2.data);
	}
	array_free(&buf);
	return (_result_void){0};
}

io__Writer io__new_multi_writer(Array_io__Writer writers) {
	io__Writer _t1 = I_io__MultiWriter_to_Interface_io__Writer(((io__MultiWriter*)memdup(&(io__MultiWriter){.writers = writers,}, sizeof(io__MultiWriter))));
	return _t1;
}

_result_int io__MultiWriter_write(io__MultiWriter* m, Array_u8 buf) {
	for (int _t1 = 0; _t1 < m->writers.len; ++_t1) {
		io__Writer* w = ((io__Writer*)m->writers.data) + _t1;
		_result_int _t2 = io__Writer_name_table[w->_typ]._method_write(w->_object, buf);
		if (_t2.is_error) {
			_result_int _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
 		int n =  (*(int*)_t2.data);
		if (n != buf.len) {
			return (_result_int){ .is_error=true, .err=_v_error(_SLIT("io: incomplete write to writer of MultiWriter")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	_result_int _t5;
	_result_ok(&(int[]) { buf.len }, (_result*)(&_t5), sizeof(int));
	return _t5;
}

VV_LOCAL_SYMBOL string io__NotExpected_msg(io__NotExpected err) {
	string _t1 = err.cause;
	return _t1;
}

VV_LOCAL_SYMBOL int io__NotExpected_code(io__NotExpected err) {
	int _t1 = err.code;
	return _t1;
}

_result_Array_u8 io__read_all(io__ReadAllConfig config) {
	io__Reader r = config.reader;
	bool read_till_eof = config.read_to_end_of_stream;
	Array_u8 b = __new_array_with_default_noscan(_const_io__read_all_len, 0, sizeof(u8), 0);
	int read = 0;
	for (;;) {
		_result_int _t1 = io__Reader_name_table[r._typ]._method_read(r._object, &/*111*/(array[]){array_slice(b, read, 2147483647)}[0]);
		if (_t1.is_error) {
			IError err = _t1.err;
			break;
		}
		
 		int new_read =  (*(int*)_t1.data);
		read += new_read;
		if (!read_till_eof && read == 0) {
			break;
		}
		if (b.len == read) {
			array_grow_len_noscan(&b, _const_io__read_all_grow_len);
		}
	}
	_result_Array_u8 _t2;
	_result_ok(&(Array_u8[]) { array_slice(b, 0, read) }, (_result*)(&_t2), sizeof(Array_u8));
	return _t2;
}

_result_Array_u8 io__read_any(io__Reader* r) {
	Array_u8 b = __new_array_with_default_noscan(_const_io__read_all_len, 0, sizeof(u8), 0);
	int read = 0;
	for (;;) {
		_result_int _t1 = io__Reader_name_table[r->_typ]._method_read(r->_object, &/*111*/(array[]){array_slice(b, read, 2147483647)}[0]);
		if (_t1.is_error) {
			IError err = _t1.err;
			return (_result_Array_u8){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 		int new_read =  (*(int*)_t1.data);
		read += new_read;
		if (new_read == 0) {
			break;
		}
		if (b.len == read) {
			array_grow_len_noscan(&b, _const_io__read_all_grow_len);
		}
	}
	_result_Array_u8 _t3;
	_result_ok(&(Array_u8[]) { array_slice(b, 0, read) }, (_result*)(&_t3), sizeof(Array_u8));
	return _t3;
}

_result_int io__ReaderWriterImpl_read(io__ReaderWriterImpl* r, Array_u8* buf) {
	_result_int _t1 = io__Reader_name_table[r->r._typ]._method_read(r->r._object, buf);
	return _t1;
}

_result_int io__ReaderWriterImpl_write(io__ReaderWriterImpl* r, Array_u8 buf) {
	_result_int _t1 = io__Writer_name_table[r->w._typ]._method_write(r->w._object, buf);
	return _t1;
}

io__ReaderWriterImpl io__make_readerwriter(io__Reader r, io__Writer w) {
	io__ReaderWriterImpl _t1 = ((io__ReaderWriterImpl){.r = r,.w = w,});
	return _t1;
}

// Attr: [inline]
inline u64 hash__wyhash_c(u8* key, u64 len, u64 seed) {
	u64 _t1 = wyhash(key, len, seed, ((u64*)(_wyp)));
	return _t1;
}

// Attr: [inline]
inline u64 hash__wyhash64_c(u64 a, u64 b) {
	u64 _t1 = wyhash64(a, b);
	return _t1;
}

// Attr: [inline]
inline u64 hash__sum64_string(string key, u64 seed) {
	u64 _t1 = hash__wyhash_c(key.str, ((u64)(key.len)), seed);
	return _t1;
}

// Attr: [inline]
inline u64 hash__sum64(Array_u8 key, u64 seed) {
	u64 _t1 = hash__wyhash_c(((u8*)(key.data)), ((u64)(key.len)), seed);
	return _t1;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 hash__wyrotr(u64 v, u32 k) {
	u64 _t1 = (((v >> k)) | ((v << ((u32)(64 - k)))));
	return _t1;
}

// Attr: [inline]
inline u64 hash__wymum(u64 a, u64 b) {
	u32 mask32 = ((u32)(4294967295U));
	u64 x0 = (a & mask32);
	u64 x1 = (a >> 32U);
	u64 y0 = (b & mask32);
	u64 y1 = (b >> 32U);
	u64 w0 = (u64)(x0 * y0);
	u64 t = (u64)((u64)(x1 * y0) + ((w0 >> 32U)));
	u64 w1 = (t & mask32);
	u64 w2 = (t >> 32U);
	w1 += (u64)(x0 * y1);
	u64 hi = (u64)((u64)((u64)(x1 * y1) + w2) + ((w1 >> 32U)));
	u64 lo = (u64)(a * b);
	u64 _t1 = (hi ^ lo);
	return _t1;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 hash__wyr3(u8* p, u64 k) {
	{ // Unsafe block
		u64 _t1 = ((((((u64)(p[0])) << 16U)) | ((((u64)(p[(k >> 1U)])) << 8U))) | ((u64)(p[(u64)(k - 1U)])));
		return _t1;
	}
	return 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 hash__wyr4(u8* p) {
	{ // Unsafe block
		u64 _t1 = (((((u32)(p[0])) | ((((u32)(p[1])) << ((u32)(8U))))) | ((((u32)(p[2])) << ((u32)(16U))))) | ((((u32)(p[3])) << ((u32)(24U)))));
		return _t1;
	}
	return 0;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 hash__wyr8(u8* p) {
	{ // Unsafe block
		u64 _t1 = (((((((((u64)(p[0])) | ((((u64)(p[1])) << 8U))) | ((((u64)(p[2])) << 16U))) | ((((u64)(p[3])) << 24U))) | ((((u64)(p[4])) << 32U))) | ((((u64)(p[5])) << 40U))) | ((((u64)(p[6])) << 48U))) | ((((u64)(p[7])) << 56U)));
		return _t1;
	}
	return 0;
}

Array_string os__args_after(string cut_word) {
	if (_const_os__args.len == 0) {
		Array_string _t1 = __new_array_with_default(0, 0, sizeof(string), 0);
		return _t1;
	}
	Array_string cargs = __new_array_with_default(0, 0, sizeof(string), 0);
	if (!(Array_string_contains(_const_os__args, cut_word))) {
		cargs = array_clone_to_depth(&_const_os__args, 0);
	} else {
		bool found = false;
		array_push((array*)&cargs, _MOV((string[]){ string_clone((*(string*)array_get(_const_os__args, 0))) }));
		Array_string _t3 = array_slice(_const_os__args, 1, 2147483647);
		for (int _t4 = 0; _t4 < _t3.len; ++_t4) {
			string a = ((string*)_t3.data)[_t4];
			if (string__eq(a, cut_word)) {
				found = true;
				continue;
			}
			if (!found) {
				continue;
			}
			array_push((array*)&cargs, _MOV((string[]){ string_clone(a) }));
		}
	}
	return cargs;
}

Array_string os__args_before(string cut_word) {
	if (_const_os__args.len == 0) {
		Array_string _t1 = __new_array_with_default(0, 0, sizeof(string), 0);
		return _t1;
	}
	Array_string cargs = __new_array_with_default(0, 0, sizeof(string), 0);
	if (!(Array_string_contains(_const_os__args, cut_word))) {
		cargs = array_clone_to_depth(&_const_os__args, 0);
	} else {
		array_push((array*)&cargs, _MOV((string[]){ string_clone((*(string*)array_get(_const_os__args, 0))) }));
		Array_string _t3 = array_slice(_const_os__args, 1, 2147483647);
		for (int _t4 = 0; _t4 < _t3.len; ++_t4) {
			string a = ((string*)_t3.data)[_t4];
			if (string__eq(a, cut_word)) {
				break;
			}
			array_push((array*)&cargs, _MOV((string[]){ string_clone(a) }));
		}
	}
	return cargs;
}

bool os__debugger_present(void) {
	#if !defined(CUSTOM_DEFINE_cross)
	{
		int pid = os__fork();
		if (pid == 0) {
			int ppid = os__getppid();
			if (ptrace(PTRACE_ATTACH, ppid, 0, 0) == 0U) {
				waitpid(ppid, 0, 0);
				ptrace(PTRACE_DETACH, ppid, 0, 0);
				_v_exit(0);
				VUNREACHABLE();
			} else {
				_v_exit(1);
				VUNREACHABLE();
			}
		} else {
			int status = 0;
			waitpid(pid, &status, 0);
			if (WEXITSTATUS(status) == 0) {
				bool _t2 = false;
				return _t2;
			} else {
				bool _t3 = true;
				return _t3;
			}
		}
	}
	#endif
	bool _t4 = false;
	return _t4;
}

string os__getenv(string key) {
	_option_string _t2 = os__getenv_opt(key);
	if (_t2.state != 0) {
		IError err = _t2.err;
		*(string*) _t2.data = _SLIT("");
	}
	
 	string _t1 =  (*(string*)_t2.data);
	return _t1;
}

// Attr: [manualfree]
_option_string os__getenv_opt(string key) {
	{ // Unsafe block
		#if defined(_WIN32)
		{
		}
		#else
		{
			char* s = getenv(((char*)(key.str)));
			if (s == ((void*)0)) {
				return (_option_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			_option_string _t3;
			_option_ok(&(string[]) { cstring_to_vstring(s) }, (_option*)(&_t3), sizeof(string));
			return _t3;
		}
		#endif
	}
	return (_option_string){0};
}

int os__setenv(string name, string value, bool overwrite) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		{ // Unsafe block
			int _t2 = setenv(((char*)(name.str)), ((char*)(value.str)), overwrite);
			return _t2;
		}
	}
	#endif
	return 0;
}

int os__unsetenv(string name) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int _t2 = unsetenv(((char*)(name.str)));
		return _t2;
	}
	#endif
	return 0;
}

Map_string_string os__environ(void) {
	Map_string_string res = new_map(sizeof(string), sizeof(string), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string)
	;
	#if defined(_WIN32)
	{
	}
	#else
	{
		char** start = ((char**)(environ));
		int i = 0;
		for (;;) {
			char* x = start[i];
			if (x == 0) {
				break;
			}
			string eline = cstring_to_vstring(x);
			int eq_index = string_index_u8(eline, '=');
			if (eq_index > 0) {
				map_set(&res, &(string[]){string_substr(eline, 0, eq_index)}, &(string[]) { string_substr(eline, (int)(eq_index + 1), 2147483647) });
			}
			i++;
		}
	}
	#endif
	return res;
}

#if !defined(_WIN32)
#endif
int os__fd_close(int fd) {
	if (fd == -1) {
		int _t1 = 0;
		return _t1;
	}
	int _t2 = close(fd);
	return _t2;
}

void os__fd_write(int fd, string s) {
	if (fd == -1) {
		return;
	}
	u8* sp = s.str;
	int remaining = s.len;
	for (;;) {
		if (!(remaining > 0)) break;
		int written = write(fd, sp, remaining);
		if (written < 0) {
			return;
		}
		remaining = (int)(remaining - written);
		sp = ((voidptr)(sp + written));
	}
}

Array_string os__fd_slurp(int fd) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	if (fd == -1) {
		return res;
	}
	for (;;) {
		multi_return_string_int mr_886 = os__fd_read(fd, 4096);
		string s = mr_886.arg0;
		int b = mr_886.arg1;
		if (b <= 0) {
			break;
		}
		array_push((array*)&res, _MOV((string[]){ string_clone(s) }));
	}
	return res;
}

multi_return_string_int os__fd_read(int fd, int maxbytes) {
	if (fd == -1) {
		return (multi_return_string_int){.arg0=_SLIT(""), .arg1=0};
	}
	{ // Unsafe block
		u8* buf = malloc_noscan((int)(maxbytes + 1));
		int nbytes = read(fd, buf, maxbytes);
		if (nbytes < 0) {
			_v_free(buf);
			return (multi_return_string_int){.arg0=_SLIT(""), .arg1=nbytes};
		}
		buf[nbytes] = 0;
		return (multi_return_string_int){.arg0=tos(buf, nbytes), .arg1=nbytes};
	}
	return (multi_return_string_int){0};
}

bool os__fd_is_pending(int fd) {
	fd_set read_set = ((fd_set){EMPTY_STRUCT_INITIALIZATION});
	FD_ZERO(&read_set);
	FD_SET(fd, &read_set);
	struct timeval ts = ((struct timeval){.tv_sec = 0U,.tv_usec = 0U,});
	int res = select((int)(fd + 1), &read_set, NULL, NULL, &ts);
	if (res > 0) {
		if (FD_ISSET(fd, &read_set) != 0) {
			bool _t1 = true;
			return _t1;
		}
	}
	bool _t2 = false;
	return _t2;
}

VV_LOCAL_SYMBOL string os__NotExpected_msg(os__NotExpected err) {
	string _t1 = err.cause;
	return _t1;
}

VV_LOCAL_SYMBOL int os__NotExpected_code(os__NotExpected err) {
	int _t1 = err.code;
	return _t1;
}

VV_LOCAL_SYMBOL string os__fix_windows_path(string path) {
	string p = path;
	return p;
}

// Attr: [noinline]
__NOINLINE _result_os__File os__open_file(string path, string mode, Array_int options) {
	int flags = 0;
	bool seek_to_end = false;
	for (int _t1 = 0; _t1 < mode.len; ++_t1) {
		u8 m = mode.str[_t1];

		if (m == ('w')) {
			flags |= ((_const_os__o_create | _const_os__o_trunc) | _const_os__o_wronly);
		}
		else if (m == ('a')) {
			flags |= ((_const_os__o_create | _const_os__o_append) | _const_os__o_wronly);
			seek_to_end = true;
		}
		else if (m == ('r')) {
			flags |= _const_os__o_rdonly;
		}
		else if (m == ('b')) {
			flags |= _const_os__o_binary;
		}
		else if (m == ('s')) {
			flags |= _const_os__o_sync;
		}
		else if (m == ('n')) {
			flags |= _const_os__o_nonblock;
		}
		else if (m == ('c')) {
			flags |= _const_os__o_noctty;
		}
		else if (m == ('+')) {
			flags &= ~_const_os__o_wronly;
			flags |= _const_os__o_rdwr;
		}
		else {
		}
	}
	if (string__eq(mode, _SLIT("r+"))) {
		flags = _const_os__o_rdwr;
	}
	int permission = 0666;
	if (options.len > 0) {
		permission = (*(int*)array_get(options, 0));
	}
	string p = os__fix_windows_path(path);
	int _t2;
	#if defined(_WIN32)
	#else
		_t2 = open(((char*)(p.str)), flags, permission);
		;
	#endif
	int fd = _t2;
	if (fd == -1) {
		return (_result_os__File){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	FILE* cfile = fdopen(fd, ((char*)(mode.str)));
	if (isnil(cfile)) {
		return (_result_os__File){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Failed to open or create file \""), 0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (seek_to_end) {
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(cfile, 0U, SEEK_END);
		}
		#endif
	}
	_result_os__File _t6;
	_result_ok(&(os__File[]) { ((os__File){.cfile = cfile,.fd = fd,.is_opened = true,}) }, (_result*)(&_t6), sizeof(os__File));
	return _t6;
}

_result_os__File os__open(string path) {
	_result_FILE_ptr _t1 = os__vfopen(path, _SLIT("rb"));
	if (_t1.is_error) {
		_result_os__File _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	FILE* cfile =  (*(FILE**)_t1.data);
	int fd = os__fileno(cfile);
	_result_os__File _t3;
	_result_ok(&(os__File[]) { ((os__File){.cfile = cfile,.fd = fd,.is_opened = true,}) }, (_result*)(&_t3), sizeof(os__File));
	return _t3;
}

_result_os__File os__create(string path) {
	_result_FILE_ptr _t1 = os__vfopen(path, _SLIT("wb"));
	if (_t1.is_error) {
		_result_os__File _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	FILE* cfile =  (*(FILE**)_t1.data);
	int fd = os__fileno(cfile);
	_result_os__File _t3;
	_result_ok(&(os__File[]) { ((os__File){.cfile = cfile,.fd = fd,.is_opened = true,}) }, (_result*)(&_t3), sizeof(os__File));
	return _t3;
}

os__File os__stdin(void) {
	os__File _t1 = ((os__File){.cfile = stdin,.fd = 0,.is_opened = true,});
	return _t1;
}

os__File os__stdout(void) {
	os__File _t1 = ((os__File){.cfile = stdout,.fd = 1,.is_opened = true,});
	return _t1;
}

os__File os__stderr(void) {
	os__File _t1 = ((os__File){.cfile = stderr,.fd = 2,.is_opened = true,});
	return _t1;
}

bool os__File_eof(os__File* f) {
	FILE* cfile = ((FILE*)(f->cfile));
	bool _t1 = feof(cfile) != 0;
	return _t1;
}

_result_void os__File_reopen(os__File* f, string path, string mode) {
	string p = os__fix_windows_path(path);
	FILE* cfile = ((FILE*)(((void*)0)));
	#if defined(_WIN32)
	{
	}
	#else
	{
		cfile = freopen(((char*)(p.str)), ((char*)(mode.str)), f->cfile);
	}
	#endif
	if (isnil(cfile)) {
		return (_result_void){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Failed to reopen file \""), 0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	f->cfile = cfile;
	return (_result_void){0};
}

_result_int os__File_read(os__File* f, Array_u8* buf) {
	if (buf->len == 0) {
		return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int nbytes = ((int)(fread(buf->data, 1, buf->len, ((FILE*)(f->cfile)))));
	if (nbytes <= 0) {
		if (feof(((FILE*)(f->cfile))) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		if (ferror(((FILE*)(f->cfile))) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__NotExpected_to_Interface_IError(((os__NotExpected*)memdup(&(os__NotExpected){.cause = _SLIT("unexpected error from fread"),.code = -1,}, sizeof(os__NotExpected)))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	_result_int _t4;
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t4), sizeof(int));
	return _t4;
}

_result_int os__File_write(os__File* f, Array_u8 buf) {
	if (!f->is_opened) {
		return (_result_int){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int written = ((int)(fwrite(buf.data, 1, buf.len, f->cfile)));
	if (written == 0 && buf.len != 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("0 bytes written")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t3;
	_result_ok(&(int[]) { written }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

_result_int os__File_writeln(os__File* f, string s) {
	if (!f->is_opened) {
		return (_result_int){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t2 = os__File_write_string(f, s);
	if (_t2.is_error) {
		_result_int _t3;
		memcpy(&_t3, &_t2, sizeof(_result));
		return _t3;
	}
	
 	int written =  (*(int*)_t2.data);
	int x = fputs("\n", f->cfile);
	if (x < 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("could not add newline")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t5;
	_result_ok(&(int[]) { (int)(written + 1) }, (_result*)(&_t5), sizeof(int));
	return _t5;
}

_result_int os__File_write_string(os__File* f, string s) {
		_result_void _t1 = os__File_write_full_buffer(f, s.str, ((usize)(s.len)));
	if (_t1.is_error) {
		_result_int _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	_result_int _t3;
	_result_ok(&(int[]) { s.len }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

_result_int os__File_write_to(os__File* f, u64 pos, Array_u8 buf) {
	if (!f->is_opened) {
		return (_result_int){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(f->cfile, pos, SEEK_SET);
			int res = ((int)(fwrite(buf.data, 1, buf.len, f->cfile)));
			if (res == 0 && buf.len != 0) {
				return (_result_int){ .is_error=true, .err=_v_error(_SLIT("0 bytes written")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			fseeko(f->cfile, 0U, SEEK_END);
			_result_int _t5;
			_result_ok(&(int[]) { res }, (_result*)(&_t5), sizeof(int));
			return _t5;
		}
		#endif
	}
	#endif
	return (_result_int){ .is_error=true, .err=_v_error(_SLIT("Could not write to file")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

// Attr: [unsafe]
int os__File_write_ptr(os__File* f, voidptr data, int size) {
	int _t1 = ((int)(fwrite(data, 1, size, f->cfile)));
	return _t1;
}

// Attr: [unsafe]
_result_void os__File_write_full_buffer(os__File* f, voidptr buffer, usize buffer_len) {
	if (buffer_len <= ((usize)(0))) {
		return (_result_void){0};
	}
	if (!f->is_opened) {
		return (_result_void){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	u8* ptr = ((u8*)(buffer));
	i64 remaining_bytes = ((i64)(buffer_len));
	for (;;) {
		if (!(remaining_bytes > 0)) break;
		{ // Unsafe block
			i64 x = ((i64)(fwrite(ptr, 1, remaining_bytes, f->cfile)));
			ptr += x;
			remaining_bytes -= x;
			if (x <= 0) {
				return (_result_void){ .is_error=true, .err=_v_error(_SLIT("C.fwrite returned 0")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
	}
	return (_result_void){0};
}

// Attr: [unsafe]
int os__File_write_ptr_at(os__File* f, voidptr data, int size, u64 pos) {
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(f->cfile, pos, SEEK_SET);
			int res = ((int)(fwrite(data, 1, size, f->cfile)));
			fseeko(f->cfile, 0U, SEEK_END);
			return res;
		}
		#endif
	}
	#endif
	int _t4 = 0;
	return _t4;
}

VV_LOCAL_SYMBOL _result_int os__fread(voidptr ptr, int item_size, int items, FILE* stream) {
	int nbytes = ((int)(fread(ptr, item_size, items, stream)));
	if (nbytes <= 0) {
		if (feof(stream) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__Eof)))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		if (ferror(stream) != 0) {
			return (_result_int){ .is_error=true, .err=_v_error(_SLIT("file read error")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	_result_int _t3;
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

Array_u8 os__File_read_bytes(os__File* f, int size) {
	Array_u8 _t1 = os__File_read_bytes_at(f, size, 0U);
	return _t1;
}

Array_u8 os__File_read_bytes_at(os__File* f, int size, u64 pos) {
	Array_u8 arr = __new_array_with_default_noscan(size, 0, sizeof(u8), 0);
	_result_int _t1 = os__File_read_bytes_into(f, pos, &/*arr*/arr);
	if (_t1.is_error) {
		IError err = _t1.err;
		Array_u8 _t2 = __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
		return _t2;
	}
	
 	int nreadbytes =  (*(int*)_t1.data);
	Array_u8 _t3 = array_slice(arr, 0, nreadbytes);
	return _t3;
}

// Attr: [deprecated]
// Attr: [deprecated_after]
_result_int os__File_read_bytes_into_newline(os__File* f, Array_u8* buf) {
	_result_int _t1 = os__File_read_bytes_with_newline(f, buf);
	return _t1;
}

_result_int os__File_read_bytes_with_newline(os__File* f, Array_u8* buf) {
	if (buf->len == 0) {
		return (_result_int){ .is_error=true, .err=_v_error(string__plus(_SLIT("read_bytes_with_newline"), _SLIT(": `buf.len` == 0"))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int newline = 10;
	int c = 0;
	int buf_ptr = 0;
	int nbytes = 0;
	FILE* stream = ((FILE*)(f->cfile));
	for (;;) {
		if (!((buf_ptr < buf->len))) break;
		c = getc(stream);

		if (c == (EOF)) {
			if (feof(stream) != 0) {
				_result_int _t2;
				_result_ok(&(int[]) { nbytes }, (_result*)(&_t2), sizeof(int));
				return _t2;
			}
			if (ferror(stream) != 0) {
				return (_result_int){ .is_error=true, .err=_v_error(_SLIT("file read error")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		else if (c == (newline)) {
			array_set(buf, buf_ptr, &(u8[]) { ((u8)(c)) });
			nbytes++;
			_result_int _t4;
			_result_ok(&(int[]) { nbytes }, (_result*)(&_t4), sizeof(int));
			return _t4;
		}
		else {
			array_set(buf, buf_ptr, &(u8[]) { ((u8)(c)) });
			buf_ptr++;
			nbytes++;
		}
	}
	_result_int _t5;
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t5), sizeof(int));
	return _t5;
}

_result_int os__File_read_bytes_into(os__File* f, u64 pos, Array_u8* buf) {
	if (buf->len == 0) {
		return (_result_int){ .is_error=true, .err=_v_error(string__plus(_SLIT("read_bytes_into"), _SLIT(": `buf.len` == 0"))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(f->cfile, pos, SEEK_SET);
			_result_int _t4 = os__fread(buf->data, 1, buf->len, f->cfile);
			if (_t4.is_error) {
				_result_int _t5;
				memcpy(&_t5, &_t4, sizeof(_result));
				return _t5;
			}
			
 			int nbytes =  (*(int*)_t4.data);
			_result_int _t6;
			_result_ok(&(int[]) { nbytes }, (_result*)(&_t6), sizeof(int));
			return _t6;
		}
		#endif
	}
	#endif
	return (_result_int){ .is_error=true, .err=_v_error(_SLIT("Could not read file")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int os__File_read_from(os__File* f, u64 pos, Array_u8* buf) {
	if (buf->len == 0) {
		_result_int _t1;
		_result_ok(&(int[]) { 0 }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			fseeko(f->cfile, pos, SEEK_SET);
		}
		#endif
		_result_int _t4 = os__fread(buf->data, 1, buf->len, f->cfile);
		if (_t4.is_error) {
			_result_int _t5;
			memcpy(&_t5, &_t4, sizeof(_result));
			return _t5;
		}
		
 		int nbytes =  (*(int*)_t4.data);
		_result_int _t6;
		_result_ok(&(int[]) { nbytes }, (_result*)(&_t6), sizeof(int));
		return _t6;
	}
	#endif
	return (_result_int){ .is_error=true, .err=_v_error(_SLIT("Could not read file")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int os__File_read_into_ptr(os__File* f, u8* ptr, int max_size) {
	_result_int _t1 = os__fread(ptr, 1, max_size, f->cfile);
	return _t1;
}

void os__File_flush(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	fflush(f->cfile);
}

string os__FileNotOpenedError_msg(os__FileNotOpenedError err) {
	string _t1 = _SLIT("os: file not opened");
	return _t1;
}

string os__SizeOfTypeIs0Error_msg(os__SizeOfTypeIs0Error err) {
	string _t1 = _SLIT("os: size of type is 0");
	return _t1;
}

VV_LOCAL_SYMBOL IError os__error_file_not_opened(void) {
	IError _t1 = I_os__FileNotOpenedError_to_Interface_IError(((os__FileNotOpenedError*)memdup(&(os__FileNotOpenedError){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__FileNotOpenedError))));
	return _t1;
}

VV_LOCAL_SYMBOL IError os__error_size_of_type_0(void) {
	IError _t1 = I_os__SizeOfTypeIs0Error_to_Interface_IError(((os__SizeOfTypeIs0Error*)memdup(&(os__SizeOfTypeIs0Error){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__SizeOfTypeIs0Error))));
	return _t1;
}

_result_void os__File_seek(os__File* f, i64 pos, os__SeekMode mode) {
	if (!f->is_opened) {
		return (_result_void){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int whence = ((int)(mode));
	int res = 0;
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			res = fseeko(f->cfile, pos, whence);
		}
		#endif
	}
	#endif
	if (res == -1) {
		return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_i64 os__File_tell(os__File* f) {
	if (!f->is_opened) {
		return (_result_i64){ .is_error=true, .err=os__error_file_not_opened(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	isize pos = ((isize)(0));
	#if defined(_WIN32)
	{
	}
	#else
	{
		pos = ftell(f->cfile);
	}
	#endif
	if (pos == -1) {
		return (_result_i64){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_i64 _t4;
	_result_ok(&(i64[]) { pos }, (_result*)(&_t4), sizeof(i64));
	return _t4;
}

// Attr: [unsafe]
int os__File_setvbuf(os__File* f, char* buffer, os__FileBufferMode mode, usize size) {
	int _t1 = setvbuf(f->cfile, buffer, ((int)(mode)), size);
	return _t1;
}

int os__File_set_buffer(os__File* f, Array_u8* buffer, os__FileBufferMode mode) {
	int _t1 = os__File_setvbuf(f, ((char*)(buffer->data)), mode, ((usize)(buffer->len)));
	return _t1;
}

void os__File_set_line_buffered(os__File* f) {
	os__File_setvbuf(f, ((char*)(((void*)0))), os__FileBufferMode__line_buffered, ((usize)(0)));
}

void os__File_set_unbuffered(os__File* f) {
	os__File_setvbuf(f, ((char*)(((void*)0))), os__FileBufferMode__not_buffered, ((usize)(0)));
}

bool os__is_abs_path(string path) {
	if ((path).len == 0) {
		bool _t1 = false;
		return _t1;
	}
	bool _t2 = string_at(path, 0) == _const_os__fslash;
	return _t2;
}

string os__abs_path(string path) {
	string wd = os__getwd();
	if ((path).len == 0) {
		return wd;
	}
	string npath = os__norm_path(path);
	if (string__eq(npath, _const_os__dot_str)) {
		return wd;
	}
	if (!os__is_abs_path(npath)) {
		strings__Builder sb = strings__new_builder(npath.len);
		strings__Builder_write_string(&sb, wd);
		strings__Builder_write_string(&sb, _const_os__path_separator);
		strings__Builder_write_string(&sb, npath);
		string _t3 = os__norm_path(strings__Builder_str(&sb));
		return _t3;
	}
	return npath;
}

// Attr: [direct_array_access]
string os__norm_path(string path) {
	if ((path).len == 0) {
		return _const_os__dot_str;
	}
	bool rooted = os__is_abs_path(path);
	int volume_len = os__win_volume_len(path);
	string volume = string_substr(path, 0, volume_len);
	if (volume_len != 0 && string_contains(volume, _const_os__fslash_str)) {
		volume = string_replace(volume, _const_os__fslash_str, _const_os__path_separator);
	}
	string cpath = os__clean_path(string_substr(path, volume_len, 2147483647));
	if ((cpath).len == 0 && volume_len == 0) {
		return _const_os__dot_str;
	}
	Array_string spath = string_split(cpath, _const_os__path_separator);
	if (!(Array_string_contains(spath, _const_os__dot_dot))) {
		string _t3 = (volume_len != 0 ? (string__plus(volume, cpath)) : (cpath));
		return _t3;
	}
	int spath_len = spath.len;
	strings__Builder sb = strings__new_builder(cpath.len);
	if (rooted) {
		strings__Builder_write_string(&sb, _const_os__path_separator);
	}
	Array_string new_path = __new_array_with_default(0, spath_len, sizeof(string), 0);
	int backlink_count = 0;
	for (int i = (int)(spath_len - 1); i >= 0; i--) {
		string part = ((string*)spath.data)[i];
		if (string__eq(part, _const_os__empty_str)) {
			continue;
		}
		if (string__eq(part, _const_os__dot_dot)) {
			backlink_count++;
			continue;
		}
		if (backlink_count != 0) {
			backlink_count--;
			continue;
		}
		array_prepend(&new_path, &(string[]){part});
	}
	if (backlink_count != 0 && !rooted) {
		for (int i = 0; i < backlink_count; ++i) {
			strings__Builder_write_string(&sb, _const_os__dot_dot);
			if (new_path.len == 0 && i == (int)(backlink_count - 1)) {
				break;
			}
			strings__Builder_write_string(&sb, _const_os__path_separator);
		}
	}
	strings__Builder_write_string(&sb, Array_string_join(new_path, _const_os__path_separator));
	string res = strings__Builder_str(&sb);
	if (res.len == 0) {
		if (volume_len != 0) {
			return volume;
		}
		if (!rooted) {
			return _const_os__dot_str;
		}
		return _const_os__path_separator;
	}
	if (volume_len != 0) {
		string _t7 = string__plus(volume, res);
		return _t7;
	}
	return res;
}

_result_string os__existing_path(string path) {
	IError err = _v_error(_SLIT("path does not exist"));
	if ((path).len == 0) {
		return (_result_string){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (os__exists(path)) {
		_result_string _t2;
		_result_ok(&(string[]) { path }, (_result*)(&_t2), sizeof(string));
		return _t2;
	}
	int volume_len = 0;
	if (volume_len > 0 && os__is_slash(string_at(path, (int)(volume_len - 1)))) {
		volume_len++;
	}
	strings__textscanner__TextScanner sc = strings__textscanner__new(string_substr(path, volume_len, 2147483647));
	string recent_path = string_substr(path, 0, volume_len);
	for (;;) {
		if (!(strings__textscanner__TextScanner_next(&sc) != -1)) break;
		u8 curr = ((u8)(strings__textscanner__TextScanner_current(&sc)));
		int peek = strings__textscanner__TextScanner_peek(&sc);
		int back = strings__textscanner__TextScanner_peek_back(&sc);
		if (os__is_curr_dir_ref(back, curr, peek)) {
			continue;
		}
		int range = (int)((int)(sc.ilen - strings__textscanner__TextScanner_remaining(&sc)) + volume_len);
		if (os__is_slash(curr) && !os__is_slash(((u8)(peek)))) {
			recent_path = string_substr(path, 0, range);
			continue;
		}
		if (!os__is_slash(curr) && (peek == -1 || os__is_slash(((u8)(peek))))) {
			string curr_path = string_substr(path, 0, range);
			if (os__exists(curr_path)) {
				recent_path = curr_path;
				continue;
			}
			if ((recent_path).len == 0) {
				break;
			}
			_result_string _t3;
			_result_ok(&(string[]) { recent_path }, (_result*)(&_t3), sizeof(string));
			return _t3;
		}
	}
	return (_result_string){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL string os__clean_path(string path) {
	if ((path).len == 0) {
		return _const_os__empty_str;
	}
	strings__Builder sb = strings__new_builder(path.len);
	strings__textscanner__TextScanner sc = strings__textscanner__new(path);
	for (;;) {
		if (!(strings__textscanner__TextScanner_next(&sc) != -1)) break;
		u8 curr = ((u8)(strings__textscanner__TextScanner_current(&sc)));
		int back = strings__textscanner__TextScanner_peek_back(&sc);
		int peek = strings__textscanner__TextScanner_peek(&sc);
		if (back != -1 && os__is_slash(((u8)(back))) && os__is_slash(curr)) {
			continue;
		}
		if (os__is_curr_dir_ref(back, curr, peek)) {
			if (peek != -1 && os__is_slash(((u8)(peek)))) {
				strings__textscanner__TextScanner_skip_n(&sc, 1);
			}
			continue;
		}
		strings__Builder_write_u8(&sb, ((u8)(strings__textscanner__TextScanner_current(&sc))));
	}
	string res = strings__Builder_str(&sb);
	if (res.len > 1 && os__is_slash(string_at(res, (int)(res.len - 1)))) {
		string _t2 = string_substr(res, 0, (int)(res.len - 1));
		return _t2;
	}
	return res;
}

string os__to_slash(string path) {
	if (string__eq(_const_os__path_separator, _SLIT("/"))) {
		return path;
	}
	string _t2 = string_replace(path, _const_os__path_separator, _SLIT("/"));
	return _t2;
}

string os__from_slash(string path) {
	if (string__eq(_const_os__path_separator, _SLIT("/"))) {
		return path;
	}
	string _t2 = string_replace(path, _SLIT("/"), _const_os__path_separator);
	return _t2;
}

VV_LOCAL_SYMBOL int os__win_volume_len(string path) {
	#if !defined(_WIN32)
	{
		int _t2 = 0;
		return _t2;
	}
	#endif
	int plen = path.len;
	if (plen < 2) {
		int _t3 = 0;
		return _t3;
	}
	if (os__has_drive_letter(path)) {
		int _t4 = 2;
		return _t4;
	}
	if (plen >= 5 && os__starts_w_slash_slash(path) && !os__is_slash(string_at(path, 2))) {
		for (int i = 3; i < plen; i++) {
			if (os__is_slash(string_at(path, i))) {
				if ((int)(i + 1) >= plen || os__is_slash(string_at(path, (int)(i + 1)))) {
					break;
				}
				i++;
				for (; i < plen; i++) {
					if (os__is_slash(string_at(path, i))) {
						return i;
					}
				}
				return i;
			}
		}
	}
	int _t7 = 0;
	return _t7;
}

VV_LOCAL_SYMBOL bool os__is_slash(u8 b) {
	bool _t1 = b == _const_os__fslash;
	return _t1;
}

VV_LOCAL_SYMBOL bool os__is_unc_path(string path) {
	bool _t1 = os__win_volume_len(path) >= 5 && os__starts_w_slash_slash(path);
	return _t1;
}

VV_LOCAL_SYMBOL bool os__has_drive_letter(string path) {
	bool _t1 = path.len >= 2 && u8_is_letter(string_at(path, 0)) && string_at(path, 1) == ':';
	return _t1;
}

VV_LOCAL_SYMBOL bool os__starts_w_slash_slash(string path) {
	bool _t1 = path.len >= 2 && os__is_slash(string_at(path, 0)) && os__is_slash(string_at(path, 1));
	return _t1;
}

VV_LOCAL_SYMBOL bool os__is_drive_rooted(string path) {
	bool _t1 = path.len >= 3 && os__has_drive_letter(path) && os__is_slash(string_at(path, 2));
	return _t1;
}

VV_LOCAL_SYMBOL bool os__is_normal_path(string path) {
	int plen = path.len;
	if (plen == 0) {
		bool _t1 = false;
		return _t1;
	}
	bool _t2 = (plen == 1 && os__is_slash(string_at(path, 0))) || (plen >= 2 && os__is_slash(string_at(path, 0)) && !os__is_slash(string_at(path, 1)));
	return _t2;
}

VV_LOCAL_SYMBOL bool os__is_curr_dir_ref(int byte_one, int byte_two, int byte_three) {
	if (((u8)(byte_two)) != _const_os__dot) {
		bool _t1 = false;
		return _t1;
	}
	bool _t2 = (byte_one < 0 || os__is_slash(((u8)(byte_one)))) && (byte_three < 0 || os__is_slash(((u8)(byte_three))));
	return _t2;
}

u32 os__FilePermission_bitmask(os__FilePermission p) {
	u32 mask = ((u32)(0U));
	if (p.read) {
		mask |= 4U;
	}
	if (p.write) {
		mask |= 2U;
	}
	if (p.execute) {
		mask |= 1U;
	}
	return mask;
}

u32 os__FileMode_bitmask(os__FileMode m) {
	u32 _t1 = (((os__FilePermission_bitmask(m.owner) << 6U) | (os__FilePermission_bitmask(m.group) << 3U)) | os__FilePermission_bitmask(m.others));
	return _t1;
}

os__FileInfo os__inode(string path) {
	_result_os__Stat _t1 = os__lstat(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		*(os__Stat*) _t1.data = ((os__Stat){.dev = 0,.inode = 0,.mode = 0,.nlink = 0,.uid = 0,.gid = 0,.rdev = 0,.size = 0,.atime = 0,.mtime = 0,.ctime = 0,});
	}
	
 	os__Stat attr =  (*(os__Stat*)_t1.data);
	os__FileMode fm = os__Stat_get_mode(&attr);
	os__FileInfo _t2 = ((os__FileInfo){
		.FileMode = ((os__FileMode){.typ = fm.typ,.owner = fm.owner,.group = fm.group,.others = fm.others,}),
		.size = attr.size,
		.mtime = attr.mtime,
	});
	return _t2;
}

// Attr: [manualfree]
_result_Array_u8 os__read_bytes(string path) {
	bool os__read_bytes_defer_0 = false;
	FILE* fp;
	_result_FILE_ptr _t1 = os__vfopen(path, _SLIT("rb"));
	if (_t1.is_error) {
		_result_Array_u8 _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	fp =  (*(FILE**)_t1.data);
	os__read_bytes_defer_0 = true;
	_result_int _t3 = os__find_cfile_size(fp);
	if (_t3.is_error) {
		// Defer begin
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		// Defer end
		_result_Array_u8 _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	int fsize =  (*(int*)_t3.data);
	if (fsize == 0) {
		_result_strings__Builder _t5 = os__slurp_file_in_builder(fp);
		if (_t5.is_error) {
			// Defer begin
			if (os__read_bytes_defer_0) {
				fclose(fp);
			}
			// Defer end
			_result_Array_u8 _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 		strings__Builder sb =  (*(strings__Builder*)_t5.data);
		_result_Array_u8 _t7;
		_result_ok(&(Array_u8[]) { strings__Builder_reuse_as_plain_u8_array(&sb) }, (_result*)(&_t7), sizeof(Array_u8));
			// Defer begin
			if (os__read_bytes_defer_0) {
				fclose(fp);
			}
			// Defer end
		return _t7;
	}
	Array_u8 res = __new_array_with_default_noscan(fsize, 0, sizeof(u8), 0);
	int nr_read_elements = ((int)(fread(res.data, 1, fsize, fp)));
	if (nr_read_elements == 0 && fsize > 0) {
		_result_Array_u8 _t8 = (_result_Array_u8){ .is_error=true, .err=_v_error(_SLIT("fread failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
			// Defer begin
			if (os__read_bytes_defer_0) {
				fclose(fp);
			}
			// Defer end
		return _t8;
	}
	array_trim(&res, nr_read_elements);
	_result_Array_u8 _t9;
	_result_ok(&(Array_u8[]) { res }, (_result*)(&_t9), sizeof(Array_u8));
		// Defer begin
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		// Defer end
	return _t9;
}

VV_LOCAL_SYMBOL _result_int os__find_cfile_size(FILE* fp) {
	int cseek = fseek(fp, 0, SEEK_END);
	isize raw_fsize = ftell(fp);
	if (raw_fsize != 0 && cseek != 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("fseek failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (cseek != 0 && raw_fsize < 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("ftell failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int len = ((int)(raw_fsize));
	if (((i64)(len)) < raw_fsize) {
		return (_result_int){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("int("), 0xfe09, {.d_i64 = raw_fsize}}, {_SLIT(") cast results in "), 0xfe07, {.d_i32 = len}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	rewind(fp);
	_result_int _t4;
	_result_ok(&(int[]) { len }, (_result*)(&_t4), sizeof(int));
	return _t4;
}

// Attr: [manualfree]
VV_LOCAL_SYMBOL _result_strings__Builder os__slurp_file_in_builder(FILE* fp) {
	Array_fixed_u8_4096 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	strings__Builder sb = strings__new_builder(_const_os__buf_size);
	for (;;) {
		_result_int _t1 = os__fread(&buf[0], 1, _const_os__buf_size, fp);
		if (_t1.is_error) {
			IError err = _t1.err;
			if ((err)._typ == _IError_os__Eof_index) {
				break;
			}
			strings__Builder_free(&sb);
			return (_result_strings__Builder){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 		int read_bytes =  (*(int*)_t1.data);
		strings__Builder_write_ptr(&sb, &buf[0], read_bytes);
	}
	_result_strings__Builder _t3;
	_result_ok(&(strings__Builder[]) { sb }, (_result*)(&_t3), sizeof(strings__Builder));
	return _t3;
}

// Attr: [manualfree]
_result_string os__read_file(string path) {
	bool os__read_file_defer_0 = false;
	FILE* fp;
	string mode = _SLIT("rb");
	_result_FILE_ptr _t1 = os__vfopen(path, mode);
	if (_t1.is_error) {
		_result_string _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	fp =  (*(FILE**)_t1.data);
	os__read_file_defer_0 = true;
	_result_int _t3 = os__find_cfile_size(fp);
	if (_t3.is_error) {
		// Defer begin
		if (os__read_file_defer_0) {
			fclose(fp);
		}
		// Defer end
		_result_string _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	int allocate =  (*(int*)_t3.data);
	if (allocate == 0) {
		_result_strings__Builder _t5 = os__slurp_file_in_builder(fp);
		if (_t5.is_error) {
			// Defer begin
			if (os__read_file_defer_0) {
				fclose(fp);
			}
			// Defer end
			_result_string _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 		strings__Builder sb =  (*(strings__Builder*)_t5.data);
		string res = strings__Builder_str(&sb);
		strings__Builder_free(&sb);
		_result_string _t7;
		_result_ok(&(string[]) { res }, (_result*)(&_t7), sizeof(string));
			// Defer begin
			if (os__read_file_defer_0) {
				fclose(fp);
			}
			// Defer end
		return _t7;
	}
	{ // Unsafe block
		u8* str = malloc_noscan((int)(allocate + 1));
		int nelements = ((int)(fread(str, 1, allocate, fp)));
		int is_eof = ((int)(feof(fp)));
		int is_error = ((int)(ferror(fp)));
		if (is_eof == 0 && is_error != 0) {
			_v_free(str);
			_result_string _t8 = (_result_string){ .is_error=true, .err=_v_error(_SLIT("fread failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
				// Defer begin
				if (os__read_file_defer_0) {
					fclose(fp);
				}
				// Defer end
			return _t8;
		}
		str[nelements] = 0;
		if (nelements == 0) {
			_result_string _t9;
			_result_ok(&(string[]) { u8_vstring(str) }, (_result*)(&_t9), sizeof(string));
				// Defer begin
				if (os__read_file_defer_0) {
					fclose(fp);
				}
				// Defer end
			return _t9;
		}
		_result_string _t10;
		_result_ok(&(string[]) { u8_vstring_with_len(str, nelements) }, (_result*)(&_t10), sizeof(string));
			// Defer begin
			if (os__read_file_defer_0) {
				fclose(fp);
			}
			// Defer end
		return _t10;
	}
	return (_result_string){0};
}

_result_void os__truncate(string path, u64 len) {
	bool os__truncate_defer_0 = false;
	int fp;
	int _t1;
	#if defined(_WIN32)
	#else
		_t1 = open(((char*)(path.str)), (_const_os__o_wronly | _const_os__o_trunc), 0);
		;
	#endif
	fp = _t1;
	if (fp < 0) {
		return (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	os__truncate_defer_0 = true;
	#if defined(_WIN32)
	{
	}
	#else
	{
		if (ftruncate(fp, len) != 0) {
			_result_void _t4 = (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
				// Defer begin
				if (os__truncate_defer_0) {
					close(fp);
				}
				// Defer end
			return _t4;
		}
	}
	#endif
		// Defer begin
		if (os__truncate_defer_0) {
			close(fp);
		}
		// Defer end
	return (_result_void){0};
}

u64 os__file_size(string path) {
	_result_os__Stat _t1 = os__stat(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		eprintln(string__plus(_SLIT("os.file_size() Cannot determine file-size: "), os__posix_get_error_msg(errno)));
		u64 _t2 = 0U;
		return _t2;
	}
	
 	os__Stat attr =  (*(os__Stat*)_t1.data);
	u64 _t3 = attr.size;
	return _t3;
}

_result_void os__rename_dir(string src, string dst) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int ret = rename(((char*)(src.str)), ((char*)(dst.str)));
		if (ret != 0) {
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(3, _MOV((StrIntpData[]){{_SLIT("failed to rename "), 0xfe10, {.d_s = src}}, {_SLIT(" to "), 0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})), ret), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

_result_void os__rename(string src, string dst) {
	string rdst = dst;
	if (os__is_dir(rdst)) {
		rdst = os__join_path_single(string_trim_right(rdst, _const_os__path_separator), os__file_name(string_trim_right(src, _const_os__path_separator)));
	}
	#if defined(_WIN32)
	{
	}
	#else
	{
		int ret = rename(((char*)(src.str)), ((char*)(rdst.str)));
		if (ret != 0) {
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(3, _MOV((StrIntpData[]){{_SLIT("failed to rename "), 0xfe10, {.d_s = src}}, {_SLIT(" to "), 0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})), ret), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

_result_void os__cp(string src, string dst) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int fp_from = open(((char*)(src.str)), O_RDONLY, 0);
		if (fp_from < 0) {
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("cp: failed to open "), 0xfe10, {.d_s = src}}, {_SLIT0, 0, { .d_c = 0 }}})), ((int)(fp_from))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		int fp_to = open(((char*)(dst.str)), ((O_WRONLY | O_CREAT) | O_TRUNC), (S_IWUSR | S_IRUSR));
		if (fp_to < 0) {
			close(fp_from);
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(3, _MOV((StrIntpData[]){{_SLIT("cp (permission): failed to write to "), 0xfe10, {.d_s = dst}}, {_SLIT(" (fp_to: "), 0xfe07, {.d_i32 = fp_to}}, {_SLIT(")"), 0, { .d_c = 0 }}})), ((int)(fp_to))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		Array_fixed_u8_1024 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int count = 0;
		for (;;) {
			count = read(fp_from, &buf[0], sizeof(Array_fixed_u8_1024));
			if (count == 0) {
				break;
			}
			if (write(fp_to, &buf[0], count) < 0) {
				close(fp_to);
				close(fp_from);
				return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("cp: failed to write to "), 0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})), ((int)(-1))), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		_result_os__Stat _t5 = os__stat(src);
		if (_t5.is_error) {
			_result_void _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 		os__Stat from_attr =  (*(os__Stat*)_t5.data);
		if (chmod(((char*)(dst.str)), from_attr.mode) < 0) {
			close(fp_to);
			close(fp_from);
			return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed to set permissions for "), 0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})), ((int)(-1))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		close(fp_to);
		close(fp_from);
	}
	#endif
	return (_result_void){0};
}

_result_FILE_ptr os__vfopen(string path, string mode) {
	if ((path).len == 0) {
		return (_result_FILE_ptr){ .is_error=true, .err=_v_error(_SLIT("vfopen called with \"\"")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	voidptr fp = ((void*)0);
	#if defined(_WIN32)
	{
	}
	#else
	{
		fp = fopen(((char*)(path.str)), ((char*)(mode.str)));
	}
	#endif
	if (isnil(fp)) {
		return (_result_FILE_ptr){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed to open file \""), 0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}})),.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
	} else {
		_result_FILE_ptr _t4;
		_result_ok(&(FILE*[]) { fp }, (_result*)(&_t4), sizeof(FILE*));
		return _t4;
	}
	return (_result_FILE_ptr){0};
}

int os__fileno(voidptr cfile) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		FILE* cfile_casted = ((FILE*)(((void*)0)));
		cfile_casted = cfile;
		int _t2 = fileno(cfile_casted);
		return _t2;
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL voidptr os__vpopen(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		u8* cpath = path.str;
		voidptr _t2 = popen(((char*)(cpath)), "r");
		return _t2;
	}
	#endif
	return 0;
}

VV_LOCAL_SYMBOL multi_return_int_bool os__posix_wait4_to_exit_status(int waitret) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int ret = 0;
		bool is_signaled = true;
		if (WIFEXITED(waitret)) {
			ret = WEXITSTATUS(waitret);
			is_signaled = false;
		} else if (WIFSIGNALED(waitret)) {
			ret = WTERMSIG(waitret);
			is_signaled = true;
		}
		return (multi_return_int_bool){.arg0=ret, .arg1=is_signaled};
	}
	#endif
	return (multi_return_int_bool){0};
}

string os__posix_get_error_msg(int code) {
	char* ptr_text = strerror(code);
	if (ptr_text == 0) {
		string _t1 = _SLIT("");
		return _t1;
	}
	string _t2 = tos3(ptr_text);
	return _t2;
}

VV_LOCAL_SYMBOL int os__vpclose(voidptr f) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		multi_return_int_bool mr_9446 = os__posix_wait4_to_exit_status(pclose(f));
		int ret = mr_9446.arg0;
		return ret;
	}
	#endif
	return 0;
}

int os__system(string cmd) {
	int ret = 0;
	#if defined(_WIN32)
	{
	}
	#else
	{
		#if defined(__TARGET_IOS__)
		{
		}
		#else
		{
			{ // Unsafe block
				ret = system(((char*)(cmd.str)));
			}
		}
		#endif
	}
	#endif
	if (ret == -1) {
		os__print_c_errno();
	}
	#if !defined(_WIN32)
	{
		multi_return_int_bool mr_10490 = os__posix_wait4_to_exit_status(ret);
		int pret = mr_10490.arg0;
		bool is_signaled = mr_10490.arg1;
		ret = pret;
		if (is_signaled) {
			eprintln(string__plus(string__plus( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Terminated by signal "), 0x4fe27, {.d_i32 = pret}}, {_SLIT(" ("), 0, { .d_c = 0 }}})), os__sigint_to_signal_name(pret)), _SLIT(")")));
			ret = (int)(pret + 128);
		}
	}
	#endif
	return ret;
}

bool os__exists(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = access(((char*)(path.str)), _const_os__f_ok) != -1;
		return _t2;
	}
	#endif
	return 0;
}

bool os__is_executable(string path) {
	bool _t1 = access(((char*)(path.str)), _const_os__x_ok) != -1;
	return _t1;
}

// Attr: [manualfree]
bool os__is_writable(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = access(((char*)(path.str)), _const_os__w_ok) != -1;
		return _t2;
	}
	#endif
	return 0;
}

// Attr: [manualfree]
bool os__is_readable(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = access(((char*)(path.str)), _const_os__r_ok) != -1;
		return _t2;
	}
	#endif
	return 0;
}

_result_void os__rm(string path) {
	int rc = 0;
	#if defined(_WIN32)
	{
	}
	#else
	{
		rc = remove(((char*)(path.str)));
	}
	#endif
	if (rc == -1) {
		return (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = string__plus( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Failed to remove \""), 0xfe10, {.d_s = path}}, {_SLIT("\": "), 0, { .d_c = 0 }}})), os__posix_get_error_msg(errno)),.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_void os__rmdir(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int rc = rmdir(((char*)(path.str)));
		if (rc == -1) {
			return (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

VV_LOCAL_SYMBOL void os__print_c_errno(void) {
	int e = errno;
	string se = tos_clone(((u8*)(strerror(e))));
	eprintln( str_intp(3, _MOV((StrIntpData[]){{_SLIT("errno="), 0xfe07, {.d_i32 = e}}, {_SLIT(" err="), 0xfe10, {.d_s = se}}, {_SLIT0, 0, { .d_c = 0 }}})));
}

string os__get_raw_line(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		usize max = ((usize)(0));
		char* buf = ((char*)(0));
		int nr_chars = getline(&buf, &max, stdin);
		string str = tos(((u8*)(buf)), (nr_chars < 0 ? (0) : (nr_chars)));
		string ret = string_clone(str);
		#if !defined(_VAUTOFREE)
		{
			{ // Unsafe block
				if (nr_chars > 0 && buf != 0) {
					free(buf);
				}
			}
		}
		#endif
		return ret;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

Array_u8 os__get_raw_stdin(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		usize max = ((usize)(0));
		char* buf = ((char*)(0));
		int nr_chars = getline(&buf, &max, stdin);
		Array_u8 _t2 = ((array){.data = ((voidptr)(buf)),.offset = 0,.len = (nr_chars < 0 ? (0) : (nr_chars)),.cap = ((int)(max)),.flags = 0,.element_size = 1,});
		return _t2;
	}
	#endif
	return __new_array_noscan(0, 0, sizeof(u8));
}

// Attr: [manualfree]
string os__executable(void) {
	Array_fixed_u8_4096 result = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int count = readlink("/proc/self/exe", ((char*)(&result[0])), _const_os__max_path_len);
	if (count < 0) {
		eprintln(_SLIT("os.executable() failed at reading /proc/self/exe to get exe path"));
		string _t1 = os__executable_fallback();
		return _t1;
	}
	string res = tos_clone(&result[0]);
	return res;
	string _t3 = os__executable_fallback();
	return _t3;
}

_result_void os__chdir(string path) {
	int _t1;
	#if defined(_WIN32)
	#else
		_t1 = chdir(((char*)(path.str)));
		;
	#endif
	int ret = _t1;
	if (ret == -1) {
		return (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

// Attr: [manualfree]
string os__getwd(void) {
	{ // Unsafe block
		Array_fixed_u8_4096 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		#if defined(_WIN32)
		{
		}
		#else
		{
			if (getcwd(((char*)(&buf[0])), _const_os__max_path_len) == 0) {
				string _t2 = _SLIT("");
				return _t2;
			}
			string res = tos_clone(&buf[0]);
			return res;
		}
		#endif
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [manualfree]
string os__real_path(string fpath) {
	Array_fixed_u8_4096 fullpath = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	string res = _SLIT("");
	#if defined(_WIN32)
	{
	}
	#else
	{
		char* ret = ((char*)(realpath(((char*)(fpath.str)), ((char*)(&fullpath[0])))));
		if (ret == 0) {
			string_free(&res);
			string _t2 = string_clone(fpath);
			return _t2;
		}
		string_free(&res);
		res = tos_clone(&fullpath[0]);
	}
	#endif
	os__normalize_drive_letter(res);
	return res;
}

// Attr: [direct_array_access]
// Attr: [manualfree]
// Attr: [unsafe]
VV_LOCAL_SYMBOL void os__normalize_drive_letter(string path) {
	#if !defined(_WIN32)
	{
		return;
	}
	#endif
	if (path.len > 2 && path.str[ 0] >= 'a' && path.str[ 0] <= 'z' && path.str[ 1] == ':' && path.str[ 2] == _const_os__path_separator.str[ 0]) {
		{ // Unsafe block
			u8* x = &path.str[0];
			*x = (u8)(*x - 32);
		}
	}
}

int os__fork(void) {
	int pid = -1;
	#if !defined(_WIN32)
	{
		pid = fork();
	}
	#endif
	return pid;
}

int os__wait(void) {
	int pid = -1;
	#if !defined(_WIN32)
	{
		#if !defined(CUSTOM_DEFINE_emscripten)
		{
			pid = wait(0);
		}
		#endif
	}
	#endif
	return pid;
}

i64 os__file_last_mod_unix(string path) {
	_result_os__Stat _t1;
	if (_t1 = os__stat(path), !_t1.is_error) {
		os__Stat attr = *(os__Stat*)_t1.data;
		i64 _t2 = attr.mtime;
		return _t2;
	}
	i64 _t3 = 0;
	return _t3;
}

void os__flush(void) {
	fflush(stdout);
}

_result_void os__chmod(string path, int mode) {
	if (chmod(((char*)(path.str)), mode) != 0) {
		return (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = string__plus(_SLIT("chmod failed: "), os__posix_get_error_msg(errno)),.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_void os__chown(string path, int owner, int group) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		if (chown(((char*)(path.str)), owner, group) != 0) {
			return (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	return (_result_void){0};
}

_result_os__File os__open_append(string path) {
	os__File file = ((os__File){.cfile = 0,.fd = 0,.is_opened = 0,});
	#if defined(_WIN32)
	{
	}
	#else
	{
		u8* cpath = path.str;
		file = ((os__File){.cfile = fopen(((char*)(cpath)), "ab"),.fd = 0,.is_opened = 0,});
	}
	#endif
	if (isnil(file.cfile)) {
		return (_result_os__File){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed to create(append) file \""), 0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}})),.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	file.is_opened = true;
	_result_os__File _t3;
	_result_ok(&(os__File[]) { file }, (_result*)(&_t3), sizeof(os__File));
	return _t3;
}

_result_void os__execvp(string cmdpath, Array_string cmdargs) {
	Array_char_ptr cargs = __new_array_with_default(0, 0, sizeof(char*), 0);
	array_push((array*)&cargs, _MOV((char*[]){ ((char*)(cmdpath.str)) }));
	for (int i = 0; i < cmdargs.len; ++i) {
		array_push((array*)&cargs, _MOV((char*[]){ ((char*)((*(string*)array_get(cmdargs, i)).str)) }));
	}
	array_push((array*)&cargs, _MOV((char*[]){ ((char*)(0)) }));
	int res = ((int)(0));
	#if defined(_WIN32)
	{
	}
	#else
	{
		res = execvp(((char*)(cmdpath.str)), cargs.data);
	}
	#endif
	if (res == -1) {
		return (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_v_exit(res);
	VUNREACHABLE();
	return (_result_void){0};
}

_result_void os__execve(string cmdpath, Array_string cmdargs, Array_string envs) {
	Array_char_ptr cargv = __new_array_with_default(0, 0, sizeof(char*), 0);
	Array_char_ptr cenvs = __new_array_with_default(0, 0, sizeof(char*), 0);
	array_push((array*)&cargv, _MOV((char*[]){ ((char*)(cmdpath.str)) }));
	for (int i = 0; i < cmdargs.len; ++i) {
		array_push((array*)&cargv, _MOV((char*[]){ ((char*)((*(string*)array_get(cmdargs, i)).str)) }));
	}
	for (int i = 0; i < envs.len; ++i) {
		array_push((array*)&cenvs, _MOV((char*[]){ ((char*)((*(string*)array_get(envs, i)).str)) }));
	}
	array_push((array*)&cargv, _MOV((char*[]){ ((char*)(0)) }));
	array_push((array*)&cenvs, _MOV((char*[]){ ((char*)(0)) }));
	int res = ((int)(0));
	#if defined(_WIN32)
	{
	}
	#else
	{
		res = execve(((char*)(cmdpath.str)), cargv.data, cenvs.data);
	}
	#endif
	if (res == -1) {
		return (_result_void){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

int os__is_atty(int fd) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int _t2 = isatty(fd);
		return _t2;
	}
	#endif
	return 0;
}

_result_void os__write_file_array(string path, array buffer) {
	_result_os__File _t1 = os__create(path);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	os__File f =  (*(os__File*)_t1.data);
		_result_void _t3 = os__File_write_full_buffer(&f, buffer.data, ((usize)((int)(buffer.len * buffer.element_size))));
	if (_t3.is_error) {
		_result_void _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 ;
	os__File_close(&f);
	return (_result_void){0};
}

_result_Array_string os__glob(Array_string patterns) {
	Array_string matches = __new_array_with_default(0, 0, sizeof(string), 0);
	for (int _t1 = 0; _t1 < patterns.len; ++_t1) {
		string pattern = ((string*)patterns.data)[_t1];
		_result_void _t2 = os__native_glob_pattern(pattern, &/*arr*/matches);
		if (_t2.is_error) {
			_result_Array_string _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
 ;
	}
	if (matches.len > 0) { qsort(matches.data, matches.len, matches.element_size, (int (*)(const void *, const void *))&compare_16388169492333377668_string); };
	_result_Array_string _t4;
	_result_ok(&(Array_string[]) { matches }, (_result*)(&_t4), sizeof(Array_string));
	return _t4;
}

IError os__last_error(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int code = errno;
		string msg = os__posix_get_error_msg(code);
		IError _t2 = error_with_code(msg, code);
		return _t2;
	}
	#endif
	return (IError){0};
}

// Attr: [inline]
inline IError os__error_posix(os__SystemError e) {
	int code = (e.code == _const_os__error_code_not_set ? (errno) : (e.code));
	string message = ((e.msg).len == 0 ? (os__posix_get_error_msg(code)) : (e.msg));
	IError _t1 = error_with_code(message, code);
	return _t1;
}

// Attr: [inline]
inline IError os__error_win32(os__SystemError e) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		_v_panic(_SLIT("Win32 API not available on this platform."));
		VUNREACHABLE();
	}
	#endif
	return (IError){0};
}

// Attr: [unsafe]
void os__Result_free(os__Result* result) {
	string_free(&result->output);
}

VV_LOCAL_SYMBOL string os__executable_fallback(void) {
	if (_const_os__args.len == 0) {
		string _t1 = _SLIT("");
		return _t1;
	}
	string exepath = (*(string*)array_get(_const_os__args, 0));
	if (!os__is_abs_path(exepath)) {
		string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
		string rexepath = string_replace(exepath, other_separator, _const_os__path_separator);
		if (string_contains(rexepath, _const_os__path_separator)) {
			exepath = os__join_path_single(_const_os__wd_at_startup, exepath);
		} else {
			_result_string _t2 = os__find_abs_path_of_executable(exepath);
			if (_t2.is_error) {
				IError err = _t2.err;
				*(string*) _t2.data = _SLIT("");
			}
			
 			string foundpath =  (*(string*)_t2.data);
			if ((foundpath).len != 0) {
				exepath = foundpath;
			}
		}
	}
	exepath = os__real_path(exepath);
	return exepath;
}

_result_void os__cp_all(string src, string dst, bool overwrite) {
	string source_path = os__real_path(src);
	string dest_path = os__real_path(dst);
	if (!os__exists(source_path)) {
		return (_result_void){ .is_error=true, .err=_v_error(_SLIT("Source path doesn't exist")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (!os__is_dir(source_path)) {
		string fname = os__file_name(source_path);
		string adjusted_path = (os__is_dir(dest_path) ? (os__join_path_single(dest_path, fname)) : (dest_path));
		if (os__exists(adjusted_path)) {
			if (overwrite) {
				_result_void _t2 = os__rm(adjusted_path);
				if (_t2.is_error) {
					_result_void _t3;
					memcpy(&_t3, &_t2, sizeof(_result));
					return _t3;
				}
				
 ;
			} else {
				return (_result_void){ .is_error=true, .err=_v_error(_SLIT("Destination file path already exist")), .data={EMPTY_STRUCT_INITIALIZATION} };
			}
		}
		_result_void _t5 = os__cp(source_path, adjusted_path);
		if (_t5.is_error) {
			_result_void _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 ;
		return (_result_void){0};
	}
	if (!os__exists(dest_path)) {
		_result_void _t7 = os__mkdir(dest_path, ((os__MkdirParams){.mode = 0777,}));
		if (_t7.is_error) {
			_result_void _t8;
			memcpy(&_t8, &_t7, sizeof(_result));
			return _t8;
		}
		
 ;
	}
	if (!os__is_dir(dest_path)) {
		return (_result_void){ .is_error=true, .err=_v_error(_SLIT("Destination path is not a valid directory")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_Array_string _t10 = os__ls(source_path);
	if (_t10.is_error) {
		_result_void _t11;
		memcpy(&_t11, &_t10, sizeof(_result));
		return _t11;
	}
	
 	Array_string files =  (*(Array_string*)_t10.data);
	for (int _t12 = 0; _t12 < files.len; ++_t12) {
		string file = ((string*)files.data)[_t12];
		string sp = os__join_path_single(source_path, file);
		string dp = os__join_path_single(dest_path, file);
		if (os__is_dir(sp)) {
			if (!os__exists(dp)) {
				_result_void _t13 = os__mkdir(dp, ((os__MkdirParams){.mode = 0777,}));
				if (_t13.is_error) {
					_result_void _t14;
					memcpy(&_t14, &_t13, sizeof(_result));
					return _t14;
				}
				
 ;
			}
		}
		_result_void _t15 = os__cp_all(sp, dp, overwrite);
		if (_t15.is_error) {
			IError err = _t15.err;
			_result_void _t16 = os__rmdir(dp);
			if (_t16.is_error) {
				IError err = _t16.err;
				return (_result_void){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
			}
			
 ;
			return (_result_void){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 ;
	}
	return (_result_void){0};
}

_result_void os__mv_by_cp(string source, string target, os__MvParams opts) {
	_result_void _t1 = os__cp_all(source, target, opts.overwrite);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	if (os__is_dir(source)) {
		_result_void _t3 = os__rmdir_all(source);
		if (_t3.is_error) {
			_result_void _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
 ;
		return (_result_void){0};
	}
	_result_void _t5 = os__rm(source);
	if (_t5.is_error) {
		_result_void _t6;
		memcpy(&_t6, &_t5, sizeof(_result));
		return _t6;
	}
	
 ;
	return (_result_void){0};
}

_result_void os__mv(string source, string target, os__MvParams opts) {
	if (!opts.overwrite && os__exists(target)) {
		return (_result_void){ .is_error=true, .err=_v_error(_SLIT("target path already exist")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_void _t2 = os__rename(source, target);
	if (_t2.is_error) {
		IError err = _t2.err;
		_result_void _t3 = os__mv_by_cp(source, target, opts);
		if (_t3.is_error) {
			_result_void _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
 ;
	;
	}
	
 ;
	return (_result_void){0};
}

// Attr: [manualfree]
_result_Array_string os__read_lines(string path) {
	_result_string _t1 = os__read_file(path);
	if (_t1.is_error) {
		_result_Array_string _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	string buf =  (*(string*)_t1.data);
	Array_string res = string_split_into_lines(buf);
	string_free(&buf);
	_result_Array_string _t3;
	_result_ok(&(Array_string[]) { res }, (_result*)(&_t3), sizeof(Array_string));
	return _t3;
}

_result_void os__write_lines(string path, Array_string lines) {
	bool os__write_lines_defer_0 = false;
	os__File f;
	_result_os__File _t1 = os__create(path);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	f =  (*(os__File*)_t1.data);
	os__write_lines_defer_0 = true;
	for (int _t3 = 0; _t3 < lines.len; ++_t3) {
		string line = ((string*)lines.data)[_t3];
		_result_int _t4 = os__File_writeln(&f, line);
		if (_t4.is_error) {
			// Defer begin
			if (os__write_lines_defer_0) {
				os__File_close(&f);
			}
			// Defer end
			_result_void _t5;
			memcpy(&_t5, &_t4, sizeof(_result));
			return _t5;
		}
		
  (*(int*)_t4.data);
	}
		// Defer begin
		if (os__write_lines_defer_0) {
			os__File_close(&f);
		}
		// Defer end
	return (_result_void){0};
}

string os__sigint_to_signal_name(int si) {
	switch (si) {
		case 1: {
				string _t1 = _SLIT("SIGHUP");
				return _t1;
		}
		case 2: {
				string _t2 = _SLIT("SIGINT");
				return _t2;
		}
		case 3: {
				string _t3 = _SLIT("SIGQUIT");
				return _t3;
		}
		case 4: {
				string _t4 = _SLIT("SIGILL");
				return _t4;
		}
		case 6: {
				string _t5 = _SLIT("SIGABRT");
				return _t5;
		}
		case 8: {
				string _t6 = _SLIT("SIGFPE");
				return _t6;
		}
		case 9: {
				string _t7 = _SLIT("SIGKILL");
				return _t7;
		}
		case 11: {
				string _t8 = _SLIT("SIGSEGV");
				return _t8;
		}
		case 13: {
				string _t9 = _SLIT("SIGPIPE");
				return _t9;
		}
		case 14: {
				string _t10 = _SLIT("SIGALRM");
				return _t10;
		}
		case 15: {
				string _t11 = _SLIT("SIGTERM");
				return _t11;
		}
		default: {
				break;
		}
	}
	
	switch (si) {
		case 10: {
				string _t12 = _SLIT("SIGUSR1");
				return _t12;
		}
		case 12: {
				string _t13 = _SLIT("SIGUSR2");
				return _t13;
		}
		case 17: {
				string _t14 = _SLIT("SIGCHLD");
				return _t14;
		}
		case 18: {
				string _t15 = _SLIT("SIGCONT");
				return _t15;
		}
		case 19: {
				string _t16 = _SLIT("SIGSTOP");
				return _t16;
		}
		case 20: {
				string _t17 = _SLIT("SIGTSTP");
				return _t17;
		}
		case 21: {
				string _t18 = _SLIT("SIGTTIN");
				return _t18;
		}
		case 22: {
				string _t19 = _SLIT("SIGTTOU");
				return _t19;
		}
		case 5: {
				string _t20 = _SLIT("SIGTRAP");
				return _t20;
		}
		case 7: {
				string _t21 = _SLIT("SIGBUS");
				return _t21;
		}
		default: {
				break;
		}
	}
	
	string _t22 = _SLIT("unknown");
	return _t22;
}

_result_void os__rmdir_all(string path) {
	string ret_err = _SLIT("");
	_result_Array_string _t1 = os__ls(path);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	Array_string items =  (*(Array_string*)_t1.data);
	for (int _t3 = 0; _t3 < items.len; ++_t3) {
		string item = ((string*)items.data)[_t3];
		string fullpath = os__join_path_single(path, item);
		if (os__is_dir(fullpath) && !os__is_link(fullpath)) {
			_result_void _t4 = os__rmdir_all(fullpath);
			if (_t4.is_error) {
				IError err = _t4.err;
				ret_err = IError_name_table[err._typ]._method_msg(err._object);
			}
			
 ;
		} else {
			_result_void _t5 = os__rm(fullpath);
			if (_t5.is_error) {
				IError err = _t5.err;
				ret_err = IError_name_table[err._typ]._method_msg(err._object);
			}
			
 ;
		}
	}
	_result_void _t6 = os__rmdir(path);
	if (_t6.is_error) {
		IError err = _t6.err;
		ret_err = IError_name_table[err._typ]._method_msg(err._object);
	}
	
 ;
	if (ret_err.len > 0) {
		return (_result_void){ .is_error=true, .err=_v_error(ret_err), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

// Attr: [manualfree]
bool os__is_dir_empty(string path) {
	_result_Array_string _t1 = os__ls(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		bool _t2 = true;
		return _t2;
	}
	
 	Array_string items =  (*(Array_string*)_t1.data);
	bool res = items.len == 0;
	array_free(&items);
	return res;
}

string os__file_ext(string opath) {
	if (opath.len < 3) {
		string _t1 = _SLIT("");
		return _t1;
	}
	string path = os__file_name(opath);
	int pos = string_index_u8_last(path, '.');
	if (pos == -1) {
		string _t2 = _SLIT("");
		return _t2;
	}
	if ((int)(pos + 1) >= path.len || pos == 0) {
		string _t3 = _SLIT("");
		return _t3;
	}
	string _t4 = string_substr(path, pos, 2147483647);
	return _t4;
}

string os__dir(string opath) {
	if ((opath).len == 0) {
		string _t1 = _SLIT(".");
		return _t1;
	}
	string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	_option_int _t2 = string_last_index(path, _const_os__path_separator);
	if (_t2.state != 0) {
		IError err = _t2.err;
		string _t3 = _SLIT(".");
		return _t3;
	}
	
 	int pos =  (*(int*)_t2.data);
	if (pos == 0 && string__eq(_const_os__path_separator, _SLIT("/"))) {
		string _t4 = _SLIT("/");
		return _t4;
	}
	string _t5 = string_substr(path, 0, pos);
	return _t5;
}

string os__base(string opath) {
	if ((opath).len == 0) {
		string _t1 = _SLIT(".");
		return _t1;
	}
	string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	if (string__eq(path, _const_os__path_separator)) {
		return _const_os__path_separator;
	}
	if (string_ends_with(path, _const_os__path_separator)) {
		string path2 = string_substr(path, 0, (int)(path.len - 1));
		_option_int _t3 = string_last_index(path2, _const_os__path_separator);
		if (_t3.state != 0) {
			IError err = _t3.err;
			string _t4 = string_clone(path2);
			return _t4;
		}
		
 		int pos =  (*(int*)_t3.data);
		string _t5 = string_substr(path2, (int)(pos + 1), 2147483647);
		return _t5;
	}
	_option_int _t6 = string_last_index(path, _const_os__path_separator);
	if (_t6.state != 0) {
		IError err = _t6.err;
		string _t7 = string_clone(path);
		return _t7;
	}
	
 	int pos =  (*(int*)_t6.data);
	string _t8 = string_substr(path, (int)(pos + 1), 2147483647);
	return _t8;
}

string os__file_name(string opath) {
	string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	string _t1 = string_all_after_last(path, _const_os__path_separator);
	return _t1;
}

_option_string os__input_opt(string prompt) {
	print(prompt);
	os__flush();
	string res = os__get_raw_line();
	if (res.len > 0) {
		_option_string _t1;
		_option_ok(&(string[]) { string_trim_right(res, _SLIT("\r\n")) }, (_option*)(&_t1), sizeof(string));
		return _t1;
	}
	return (_option_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
}

string os__input(string prompt) {
	_option_string _t1 = os__input_opt(prompt);
	if (_t1.state != 0) {
		IError err = _t1.err;
		string _t2 = _SLIT("<EOF>");
		return _t2;
	}
	
 	string res =  (*(string*)_t1.data);
	return res;
}

string os__get_line(void) {
	string str = os__get_raw_line();
	string _t1 = string_trim_right(str, _SLIT("\n"));
	return _t1;
}

Array_string os__get_lines(void) {
	string line = _SLIT("");
	Array_string inputstr = __new_array_with_default(0, 0, sizeof(string), 0);
	for (;;) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		array_push((array*)&inputstr, _MOV((string[]){ string_clone(line) }));
	}
	return inputstr;
}

string os__get_lines_joined(void) {
	string line = _SLIT("");
	string inputstr = _SLIT("");
	for (;;) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		inputstr = string__plus(inputstr, line);
	}
	return inputstr;
}

string os__get_raw_lines_joined(void) {
	string line = _SLIT("");
	Array_string lines = __new_array_with_default(0, 0, sizeof(string), 0);
	for (;;) {
		line = os__get_raw_line();
		if (line.len <= 0) {
			break;
		}
		array_push((array*)&lines, _MOV((string[]){ string_clone(line) }));
	}
	string res = Array_string_join(lines, _SLIT(""));
	return res;
}

string os__user_os(void) {
	string _t1 = _SLIT("linux");
	return _t1;
	if ((os__getenv(_SLIT("TERMUX_VERSION"))).len != 0) {
		string _t2 = _SLIT("termux");
		return _t2;
	}
	string _t3 = _SLIT("unknown");
	return _t3;
}

_result_Array_string os__user_names(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		_result_Array_string _t2 = os__read_lines(_SLIT("/etc/passwd"));
		if (_t2.is_error) {
			_result_Array_string _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
 		Array_string lines =  (*(Array_string*)_t2.data);
		Array_string users = __new_array_with_default(0, lines.len, sizeof(string), 0);
		for (int _t4 = 0; _t4 < lines.len; ++_t4) {
			string line = ((string*)lines.data)[_t4];
			_option_int _t5 = string_index(line, _SLIT(":"));
			if (_t5.state != 0) {
				IError err = _t5.err;
				*(int*) _t5.data = line.len;
			}
			
 			int end_name =  (*(int*)_t5.data);
			array_push((array*)&users, _MOV((string[]){ string_clone(string_substr(line, 0, end_name)) }));
		}
		_result_Array_string _t7;
		_result_ok(&(Array_string[]) { users }, (_result*)(&_t7), sizeof(Array_string));
		return _t7;
	}
	#endif
	return (_result_Array_string){0};
}

string os__home_dir(void) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		string _t2 = os__getenv(_SLIT("HOME"));
		return _t2;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

string os__expand_tilde_to_home(string path) {
	if (string__eq(path, _SLIT("~"))) {
		string _t1 = string_trim_right(os__home_dir(), _const_os__path_separator);
		return _t1;
	}
	if (string_starts_with(path, string__plus(_SLIT("~"), _const_os__path_separator))) {
		string _t2 = string_replace_once(path, string__plus(_SLIT("~"), _const_os__path_separator), string__plus(string_trim_right(os__home_dir(), _const_os__path_separator), _const_os__path_separator));
		return _t2;
	}
	return path;
}

_result_void os__write_file(string path, string text) {
	_result_os__File _t1 = os__create(path);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	os__File f =  (*(os__File*)_t1.data);
		_result_void _t3 = os__File_write_full_buffer(&f, text.str, ((usize)(text.len)));
	if (_t3.is_error) {
		_result_void _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 ;
	os__File_close(&f);
	return (_result_void){0};
}

string os__ExecutableNotFoundError_msg(os__ExecutableNotFoundError err) {
	string _t1 = _SLIT("os: failed to find executable");
	return _t1;
}

VV_LOCAL_SYMBOL IError os__error_failed_to_find_executable(void) {
	IError _t1 = I_os__ExecutableNotFoundError_to_Interface_IError(((os__ExecutableNotFoundError*)memdup(&(os__ExecutableNotFoundError){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(os__ExecutableNotFoundError))));
	return _t1;
}

_result_string os__find_abs_path_of_executable(string exe_name) {
	if ((exe_name).len == 0) {
		return (_result_string){ .is_error=true, .err=_v_error(_SLIT("expected non empty `exe_name`")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	for (int _t2 = 0; _t2 < _const_os__executable_suffixes.len; ++_t2) {
		string suffix = ((string*)_const_os__executable_suffixes.data)[_t2];
		string fexepath = string__plus(exe_name, suffix);
		if (os__is_abs_path(fexepath)) {
			_result_string _t3;
			_result_ok(&(string[]) { os__real_path(fexepath) }, (_result*)(&_t3), sizeof(string));
			return _t3;
		}
		string res = _SLIT("");
		string path = os__getenv(_SLIT("PATH"));
		Array_string paths = string_split(path, _const_os__path_delimiter);
		for (int _t4 = 0; _t4 < paths.len; ++_t4) {
			string p = ((string*)paths.data)[_t4];
			string found_abs_path = os__join_path_single(p, fexepath);
			if (os__exists(found_abs_path) && os__is_executable(found_abs_path)) {
				res = found_abs_path;
				break;
			}
		}
		if (res.len > 0) {
			_result_string _t5;
			_result_ok(&(string[]) { os__real_path(res) }, (_result*)(&_t5), sizeof(string));
			return _t5;
		}
	}
	return (_result_string){ .is_error=true, .err=os__error_failed_to_find_executable(), .data={EMPTY_STRUCT_INITIALIZATION} };
}

bool os__exists_in_system_path(string prog) {
	_result_string _t1 = os__find_abs_path_of_executable(prog);
	if (_t1.is_error) {
		IError err = _t1.err;
		bool _t2 = false;
		return _t2;
	}
	
  (*(string*)_t1.data);
	bool _t3 = true;
	return _t3;
}

bool os__is_file(string path) {
	bool _t1 = os__exists(path) && !os__is_dir(path);
	return _t1;
}

// Attr: [manualfree]
string os__join_path(string base, Array_string dirs) {
	bool os__join_path_defer_0 = false;
	strings__Builder sb;
	bool os__join_path_defer_1 = false;
	string sbase;
	sb = strings__new_builder((int)(base.len + (int)(dirs.len * 50)));
	os__join_path_defer_0 = true;
	sbase = string_trim_right(base, _SLIT("\\/"));
	os__join_path_defer_1 = true;
	strings__Builder_write_string(&sb, sbase);
	for (int _t1 = 0; _t1 < dirs.len; ++_t1) {
		string d = ((string*)dirs.data)[_t1];
		if ((d).len != 0) {
			strings__Builder_write_string(&sb, _const_os__path_separator);
			strings__Builder_write_string(&sb, d);
		}
	}
	os__normalize_path_in_builder((voidptr)&/*qq*/sb);
	string res = strings__Builder_str(&sb);
	if ((base).len == 0) {
		res = string_trim_left(res, _const_os__path_separator);
	}
	string _t2 = res;
		// Defer begin
		if (os__join_path_defer_1) {
			string_free(&sbase);
		}
		// Defer end
		// Defer begin
		if (os__join_path_defer_0) {
			strings__Builder_free(&sb);
		}
		// Defer end
	return _t2;
}

// Attr: [manualfree]
string os__join_path_single(string base, string elem) {
	bool os__join_path_single_defer_0 = false;
	strings__Builder sb;
	bool os__join_path_single_defer_1 = false;
	string sbase;
	sb = strings__new_builder((int)((int)(base.len + elem.len) + 1));
	os__join_path_single_defer_0 = true;
	sbase = string_trim_right(base, _SLIT("\\/"));
	os__join_path_single_defer_1 = true;
	strings__Builder_write_string(&sb, sbase);
	if ((elem).len != 0) {
		strings__Builder_write_string(&sb, _const_os__path_separator);
		strings__Builder_write_string(&sb, elem);
	}
	os__normalize_path_in_builder((voidptr)&/*qq*/sb);
	string res = strings__Builder_str(&sb);
	if ((base).len == 0) {
		res = string_trim_left(res, _const_os__path_separator);
	}
	string _t1 = res;
		// Defer begin
		if (os__join_path_single_defer_1) {
			string_free(&sbase);
		}
		// Defer end
		// Defer begin
		if (os__join_path_single_defer_0) {
			strings__Builder_free(&sb);
		}
		// Defer end
	return _t1;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL void os__normalize_path_in_builder(strings__Builder* sb) {
	rune fs = '\\';
	rune rs = '/';
	for (int idx = 0; idx < sb->len; ++idx) {
		{ // Unsafe block
			if (((u8*)sb->data)[idx] == fs) {
				((u8*)sb->data)[idx] = rs;
			}
		}
	}
	for (int idx = 0; idx < (int)(sb->len - 3); ++idx) {
		if (((u8*)sb->data)[idx] == rs && ((u8*)sb->data)[(int_literal)(idx + 1)] == '.' && ((u8*)sb->data)[(int_literal)(idx + 2)] == rs) {
			{ // Unsafe block
				for (int j = (int_literal)(idx + 1); j < (int)(sb->len - 2); j++) {
					((u8*)sb->data)[j] = ((u8*)sb->data)[(int)(j + 2)];
				}
				sb->len -= 2;
			}
		}
		if (((u8*)sb->data)[idx] == rs && ((u8*)sb->data)[(int_literal)(idx + 1)] == rs) {
			{ // Unsafe block
				for (int j = (int_literal)(idx + 1); j < (int)(sb->len - 1); j++) {
					((u8*)sb->data)[j] = ((u8*)sb->data)[(int)(j + 1)];
				}
				sb->len -= 1;
			}
		}
	}
}

Array_string os__walk_ext(string path, string ext) {
	Array_string res = __new_array_with_default(0, 0, sizeof(string), 0);
	os__impl_walk_ext(path, ext, &/*arr*/res);
	return res;
}

VV_LOCAL_SYMBOL void os__impl_walk_ext(string path, string ext, Array_string* out) {
	if (!os__is_dir(path)) {
		return;
	}
	_result_Array_string _t1 = os__ls(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		return;
	}
	
 	Array_string files =  (*(Array_string*)_t1.data);
	string separator = (string_ends_with(path, _const_os__path_separator) ? (_SLIT("")) : (_const_os__path_separator));
	for (int _t2 = 0; _t2 < files.len; ++_t2) {
		string file = ((string*)files.data)[_t2];
		if (string_starts_with(file, _SLIT("."))) {
			continue;
		}
		string p = string__plus(string__plus(path, separator), file);
		if (os__is_dir(p) && !os__is_link(p)) {
			os__impl_walk_ext(p, ext, out);
		} else if (string_ends_with(file, ext)) {
			array_push((array*)out, _MOV((string[]){ string_clone(p) }));
		}
	}
}

void os__walk(string path, void (*f)(string )) {
	if ((path).len == 0) {
		return;
	}
	if (!os__is_dir(path)) {
		return;
	}
	Array_string remaining = __new_array_with_default(0, 1000, sizeof(string), 0);
	string clean_path = string_trim_right(path, _const_os__path_separator);
	#if defined(_WIN32)
	{
	}
	#else
	{
		array_push((array*)&remaining, _MOV((string[]){ string_clone(clean_path) }));
	}
	#endif
	for (;;) {
		if (!(remaining.len > 0)) break;
		string cpath = (*(string*)array_pop(&remaining));
		os__PathKind pkind = os__kind_of_existing_path(cpath);
		if (pkind.is_link || !pkind.is_dir) {
			f(cpath);
			continue;
		}
		_result_Array_string _t3 = os__ls(cpath);
		if (_t3.is_error) {
			IError err = _t3.err;
			continue;
		}
		
 		Array_string files =  (*(Array_string*)_t3.data);
		for (int idx = (int)(files.len - 1); idx >= 0; idx--) {
			array_push((array*)&remaining, _MOV((string[]){ string_clone(string__plus(string__plus(cpath, _const_os__path_separator), (*(string*)array_get(files, idx)))) }));
		}
	}
}

// TypeDecl
void os__walk_with_context(string path, voidptr context, void (*fcb)(voidptr , string )) {
	if ((path).len == 0) {
		return;
	}
	if (!os__is_dir(path)) {
		return;
	}
	Array_string remaining = __new_array_with_default(0, 1000, sizeof(string), 0);
	string clean_path = string_trim_right(path, _const_os__path_separator);
	#if defined(_WIN32)
	{
	}
	#else
	{
		array_push((array*)&remaining, _MOV((string[]){ string_clone(clean_path) }));
	}
	#endif
	int loops = 0;
	for (;;) {
		if (!(remaining.len > 0)) break;
		loops++;
		string cpath = (*(string*)array_pop(&remaining));
		if (loops > 1) {
			fcb(context, cpath);
		}
		os__PathKind pkind = os__kind_of_existing_path(cpath);
		if (pkind.is_link || !pkind.is_dir) {
			continue;
		}
		_result_Array_string _t3 = os__ls(cpath);
		if (_t3.is_error) {
			IError err = _t3.err;
			continue;
		}
		
 		Array_string files =  (*(Array_string*)_t3.data);
		for (int idx = (int)(files.len - 1); idx >= 0; idx--) {
			array_push((array*)&remaining, _MOV((string[]){ string_clone(string__plus(string__plus(cpath, _const_os__path_separator), (*(string*)array_get(files, idx)))) }));
		}
	}
}

void os__log(string s) {
	println(string__plus(_SLIT("os.log: "), s));
}

_result_void os__mkdir_all(string opath, os__MkdirParams params) {
	if (os__exists(opath)) {
		if (os__is_dir(opath)) {
			return (_result_void){0};
		}
		return (_result_void){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("path `"), 0xfe10, {.d_s = opath}}, {_SLIT("` already exists, and is not a folder"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	string other_separator = (string__eq(_const_os__path_separator, _SLIT("/")) ? (_SLIT("\\")) : (_SLIT("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	string p = (string_starts_with(path, _const_os__path_separator) ? (_const_os__path_separator) : (_SLIT("")));
	Array_string path_parts = string_split(string_trim_left(path, _const_os__path_separator), _const_os__path_separator);
	for (int _t2 = 0; _t2 < path_parts.len; ++_t2) {
		string subdir = ((string*)path_parts.data)[_t2];
		p = string__plus(p, string__plus(subdir, _const_os__path_separator));
		if (os__exists(p) && os__is_dir(p)) {
			continue;
		}
		_result_void _t3 = os__mkdir(p, params);
		if (_t3.is_error) {
			IError err = _t3.err;
			return (_result_void){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT("folder: "), 0xfe10, {.d_s = p}}, {_SLIT(", error: "), 0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 ;
	}
	return (_result_void){0};
}

VV_LOCAL_SYMBOL void os__create_folder_when_it_does_not_exist(string path) {
	if (os__is_dir(path) || os__is_link(path)) {
		return;
	}
	_result_void _t1 = os__mkdir_all(path, ((os__MkdirParams){.mode = 0700U,}));
	if (_t1.is_error) {
		IError err = _t1.err;
		if (os__is_dir(path) || os__is_link(path)) {
			return;
		}
		_v_panic(IError_str(err));
		VUNREACHABLE();
	;
	}
	
 ;
}

string os__cache_dir(void) {
	string xdg_cache_home = os__getenv(_SLIT("XDG_CACHE_HOME"));
	string cdir = (xdg_cache_home.len > 0 ? (xdg_cache_home) : (os__join_path_single(os__home_dir(), _SLIT(".cache"))));
	os__create_folder_when_it_does_not_exist(cdir);
	return cdir;
}

string os__temp_dir(void) {
	string path = os__getenv(_SLIT("TMPDIR"));
	if ((path).len == 0) {
		path = _SLIT("/tmp");
	}
	return path;
}

string os__vtmp_dir(void) {
	string vtmp = os__getenv(_SLIT("VTMP"));
	if (vtmp.len > 0) {
		os__create_folder_when_it_does_not_exist(vtmp);
		return vtmp;
	}
	int uid = os__getuid();
	vtmp = os__join_path_single(os__temp_dir(),  str_intp(2, _MOV((StrIntpData[]){{_SLIT("v_"), 0xfe07, {.d_i32 = uid}}, {_SLIT0, 0, { .d_c = 0 }}})));
	os__create_folder_when_it_does_not_exist(vtmp);
	os__setenv(_SLIT("VTMP"), vtmp, true);
	return vtmp;
}

VV_LOCAL_SYMBOL string os__default_vmodules_path(void) {
	string hdir = os__home_dir();
	string res = os__join_path_single(hdir, _SLIT(".vmodules"));
	return res;
}

string os__vmodules_dir(void) {
	Array_string paths = os__vmodules_paths();
	if (paths.len > 0) {
		string _t1 = (*(string*)array_get(paths, 0));
		return _t1;
	}
	string _t2 = os__default_vmodules_path();
	return _t2;
}

Array_string os__vmodules_paths(void) {
	bool os__vmodules_paths_defer_0 = false;
	bool os__vmodules_paths_defer_1 = false;
	string path = os__getenv(_SLIT("VMODULES"));
	if ((path).len == 0) {
		path = os__default_vmodules_path();
	}
	os__vmodules_paths_defer_0 = true;
	Array_string splitted = string_split(path, _const_os__path_delimiter);
	os__vmodules_paths_defer_1 = true;
	Array_string list = __new_array_with_default(0, splitted.len, sizeof(string), 0);
	for (int i = 0; i < splitted.len; ++i) {
		string si = (*(string*)array_get(splitted, i));
		string trimmed = string_trim_right(si, _const_os__path_separator);
		array_push((array*)&list, _MOV((string[]){ string_clone(trimmed) }));
	}
	Array_string _t2 = list;
		// Defer begin
		if (os__vmodules_paths_defer_1) {
		}
		// Defer end
		// Defer begin
		if (os__vmodules_paths_defer_0) {
		}
		// Defer end
	return _t2;
}

// Attr: [manualfree]
string os__resource_abs_path(string path) {
	string exe = os__executable();
	string dexe = os__dir(exe);
	string base_path = os__real_path(dexe);
	string vresource = os__getenv(_SLIT("V_RESOURCE_PATH"));
	if (vresource.len != 0) {
		string_free(&base_path);
		base_path = vresource;
	}
	string fp = os__join_path_single(base_path, path);
	string res = os__real_path(fp);
	{ // Unsafe block
		string_free(&fp);
		string_free(&vresource);
		string_free(&base_path);
		string_free(&dexe);
		string_free(&exe);
	}
	return res;
}

os__Result os__execute_or_panic(string cmd) {
	os__Result res = os__execute(cmd);
	if (res.exit_code != 0) {
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed    cmd: "), 0xfe10, {.d_s = cmd}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed   code: "), 0xfe07, {.d_i32 = res.exit_code}}, {_SLIT0, 0, { .d_c = 0 }}})));
		_v_panic(res.output);
		VUNREACHABLE();
	}
	return res;
}

os__Result os__execute_or_exit(string cmd) {
	os__Result res = os__execute(cmd);
	if (res.exit_code != 0) {
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed    cmd: "), 0xfe10, {.d_s = cmd}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln( str_intp(2, _MOV((StrIntpData[]){{_SLIT("failed   code: "), 0xfe07, {.d_i32 = res.exit_code}}, {_SLIT0, 0, { .d_c = 0 }}})));
		eprintln(res.output);
		_v_exit(1);
		VUNREACHABLE();
	}
	return res;
}

_result_os__Result os__execute_opt(string cmd) {
	os__Result res = os__execute(cmd);
	if (res.exit_code != 0) {
		return (_result_os__Result){ .is_error=true, .err=_v_error(res.output), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_os__Result _t2;
	_result_ok(&(os__Result[]) { res }, (_result*)(&_t2), sizeof(os__Result));
	return _t2;
}

string os__quoted_path(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		string _t2 =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("'"), 0xfe10, {.d_s = path}}, {_SLIT("'"), 0, { .d_c = 0 }}}));
		return _t2;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

_result_string os__config_dir(void) {
	#if defined(_WIN32)
	{
	}
	#elif defined(__APPLE__) || defined(__DARWIN__) || defined(__TARGET_IOS__)
	{
	}
	#else
	{
		string xdg_home = os__getenv(_SLIT("XDG_CONFIG_HOME"));
		if ((xdg_home).len != 0) {
			_result_string _t2;
			_result_ok(&(string[]) { xdg_home }, (_result*)(&_t2), sizeof(string));
			return _t2;
		}
		string home = os__home_dir();
		if ((home).len != 0) {
			_result_string _t3;
			_result_ok(&(string[]) { string__plus(home, _SLIT("/.config")) }, (_result*)(&_t3), sizeof(string));
			return _t3;
		}
	}
	#endif
	return (_result_string){ .is_error=true, .err=_v_error(_SLIT("Cannot find config directory")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL Array_string os__glob_match(string dir, string pattern, string next_pattern, Array_string* matches) {
	Array_string subdirs = __new_array_with_default(0, 0, sizeof(string), 0);
	if (os__is_file(dir)) {
		return subdirs;
	}
	_result_Array_string _t2 = os__ls(dir);
	if (_t2.is_error) {
		IError err = _t2.err;
		return subdirs;
	}
	
 	Array_string files =  (*(Array_string*)_t2.data);
	os__GlobMatch mode = os__GlobMatch__exact;
	string pat = pattern;
	if (string__eq(pat, _SLIT("*"))) {
		mode = os__GlobMatch__any;
		if (!string__eq(next_pattern, pattern) && (next_pattern).len != 0) {
			for (int _t4 = 0; _t4 < files.len; ++_t4) {
				string file = ((string*)files.data)[_t4];
				if (os__is_dir( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = dir}}, {_SLIT("/"), 0xfe10, {.d_s = file}}, {_SLIT0, 0, { .d_c = 0 }}})))) {
					array_push((array*)&subdirs, _MOV((string[]){ string_clone( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = dir}}, {_SLIT("/"), 0xfe10, {.d_s = file}}, {_SLIT0, 0, { .d_c = 0 }}}))) }));
				}
			}
			return subdirs;
		}
	}
	if (string__eq(pat, _SLIT("**"))) {
		files = os__walk_ext(dir, _SLIT(""));
		pat = next_pattern;
	}
	if (string_starts_with(pat, _SLIT("*"))) {
		mode = os__GlobMatch__ends_with;
		pat = string_substr(pat, 1, 2147483647);
	}
	if (string_ends_with(pat, _SLIT("*"))) {
		mode = (mode == os__GlobMatch__ends_with ? (os__GlobMatch__contains) : (os__GlobMatch__starts_with));
		pat = string_substr(pat, 0, (int)(pat.len - 1));
	}
	if (string_contains(pat, _SLIT("*"))) {
		mode = os__GlobMatch__start_and_ends_with;
	}
	for (int _t7 = 0; _t7 < files.len; ++_t7) {
		string file = ((string*)files.data)[_t7];
		string fpath = file;
		string _t8; /* if prepend */
		if (string_contains(file, _const_os__path_separator)) {
			Array_string pathwalk = string_split(file, _const_os__path_separator);
			_t8 = (*(string*)array_get(pathwalk, (int)(pathwalk.len - 1)));
		} else {
			fpath = (string__eq(dir, _SLIT(".")) ? (file) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = dir}}, {_SLIT("/"), 0xfe10, {.d_s = file}}, {_SLIT0, 0, { .d_c = 0 }}}))));
			_t8 = file;
		}
		string f =  _t8;
		if ((string__eq(f, _SLIT(".")) || string__eq(f, _SLIT(".."))) || (f).len == 0) {
			continue;
		}
		bool _t9 = 0;
		
		if (mode == (os__GlobMatch__any)) {
			_t9 = true;
		}
		else if (mode == (os__GlobMatch__exact)) {
			_t9 = string__eq(f, pat);
		}
		else if (mode == (os__GlobMatch__starts_with)) {
			_t9 = string_starts_with(f, pat);
		}
		else if (mode == (os__GlobMatch__ends_with)) {
			_t9 = string_ends_with(f, pat);
		}
		else if (mode == (os__GlobMatch__start_and_ends_with)) {
			Array_string p = string_split(pat, _SLIT("*"));
			_t9 = string_starts_with(f, (*(string*)array_get(p, 0))) && string_ends_with(f, (*(string*)array_get(p, 1)));
		}
		else if (mode == (os__GlobMatch__contains)) {
			_t9 = string_contains(f, pat);
		}bool hit = _t9;
		if (hit) {
			if (os__is_dir(fpath)) {
				array_push((array*)&subdirs, _MOV((string[]){ string_clone(fpath) }));
				if (string__eq(next_pattern, pattern) && (next_pattern).len != 0) {
					array_push((array*)matches, _MOV((string[]){ string_clone( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = fpath}}, {_SLIT0, 0xfe10, {.d_s = _const_os__path_separator}}, {_SLIT0, 0, { .d_c = 0 }}}))) }));
				}
			} else {
				array_push((array*)matches, _MOV((string[]){ string_clone(fpath) }));
			}
		}
	}
	return subdirs;
}

VV_LOCAL_SYMBOL _result_void os__native_glob_pattern(string pattern, Array_string* matches) {
	Array_string steps = string_split(pattern, _const_os__path_separator);
	string cwd = (string_starts_with(pattern, _const_os__path_separator) ? (_const_os__path_separator) : (_SLIT(".")));
	Array_string subdirs = new_array_from_c_array(1, 1, sizeof(string), _MOV((string[1]){string_clone(cwd)}));
	for (int i = 0; i < steps.len; i++) {
		string step = (*(string*)array_get(steps, i));
		string step2 = ((int)(i + 1) == steps.len ? (step) : ((*(string*)array_get(steps, (int)(i + 1)))));
		if ((step).len == 0) {
			continue;
		}
		if (os__is_dir( str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = cwd}}, {_SLIT0, 0xfe10, {.d_s = _const_os__path_separator}}, {_SLIT0, 0xfe10, {.d_s = step}}, {_SLIT0, 0, { .d_c = 0 }}})))) {
			string dd = (string__eq(cwd, _SLIT("/")) ? (step) : ((string__eq(cwd, _SLIT(".")) || (cwd).len == 0 ? (step) : ((string__eq(step, _SLIT(".")) || string__eq(step, _SLIT("/")) ? (cwd) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = cwd}}, {_SLIT("/"), 0xfe10, {.d_s = step}}, {_SLIT0, 0, { .d_c = 0 }}}))))))));
			if ((int)(i + 1) != steps.len) {
				if (!(Array_string_contains(subdirs, dd))) {
					array_push((array*)&subdirs, _MOV((string[]){ string_clone(dd) }));
				}
			}
		}
		Array_string subs = __new_array_with_default(0, 0, sizeof(string), 0);
		for (int _t2 = 0; _t2 < subdirs.len; ++_t2) {
			string sd = ((string*)subdirs.data)[_t2];
			string d = (string__eq(cwd, _SLIT("/")) ? (sd) : ((string__eq(cwd, _SLIT(".")) || (cwd).len == 0 ? (sd) : ((string__eq(sd, _SLIT(".")) || string__eq(sd, _SLIT("/")) ? (cwd) : ( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = cwd}}, {_SLIT("/"), 0xfe10, {.d_s = sd}}, {_SLIT0, 0, { .d_c = 0 }}}))))))));
			_PUSH_MANY(&subs, (os__glob_match(string_replace(d, _SLIT("//"), _SLIT("/")), step, step2, matches)), _t3, Array_string);
		}
		subdirs = array_clone_to_depth(&subs, 0);
	}
	return (_result_void){0};
}

_result_void os__utime(string path, int actime, int modtime) {
	struct utimbuf u = ((struct utimbuf){.actime = actime,.modtime = modtime,});
	if (utime(((char*)(path.str)), &u) != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(errno), errno), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

os__Uname os__uname(void) {
	os__Uname u = ((os__Uname){.sysname = (string){.str=(byteptr)"", .is_lit=1},.nodename = (string){.str=(byteptr)"", .is_lit=1},.release = (string){.str=(byteptr)"", .is_lit=1},.version = (string){.str=(byteptr)"", .is_lit=1},.machine = (string){.str=(byteptr)"", .is_lit=1},});
	{ // Unsafe block
		struct utsname* d = ((struct utsname*)(malloc_noscan(((int)(sizeof(struct utsname))))));
		if (uname(d) == 0) {
			u.sysname = cstring_to_vstring(d->sysname);
			u.nodename = cstring_to_vstring(d->nodename);
			u.release = cstring_to_vstring(d->release);
			u.version = cstring_to_vstring(d->version);
			u.machine = cstring_to_vstring(d->machine);
		}
		_v_free(d);
	}
	return u;
}

_result_string os__hostname(void) {
	string hstnme = _SLIT("");
	int size = 256;
	char* buf = ((char*)(malloc_noscan(size)));
	if (gethostname(buf, size) == 0) {
		hstnme = cstring_to_vstring(buf);
		_v_free(buf);
		_result_string _t1;
		_result_ok(&(string[]) { hstnme }, (_result*)(&_t1), sizeof(string));
		return _t1;
	}
	return (_result_string){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_string os__loginname(void) {
	char* x = getlogin();
	if (!isnil(x)) {
		_result_string _t1;
		_result_ok(&(string[]) { cstring_to_vstring(x) }, (_result*)(&_t1), sizeof(string));
		return _t1;
	}
	return (_result_string){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL Array_string os__init_os_args(int argc, u8** argv) {
	Array_string args_ = __new_array_with_default(argc, 0, sizeof(string), &(string[]){_SLIT("")});
	for (int i = 0; i < argc; ++i) {
		array_set(&args_, i, &(string[]) { tos_clone(argv[i]) });
	}
	return args_;
}

_result_Array_string os__ls(string path) {
	if ((path).len == 0) {
		return (_result_Array_string){ .is_error=true, .err=_v_error(_SLIT("ls() expects a folder, not an empty string")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	Array_string res = __new_array_with_default(0, 50, sizeof(string), 0);
	DIR* dir = opendir(((char*)(path.str)));
	if (isnil(dir)) {
		return (_result_Array_string){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("ls() couldnt open dir \""), 0xfe10, {.d_s = path}}, {_SLIT("\""), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	struct dirent* ent = ((struct dirent*)(((void*)0)));
	for (;;) {
		ent = readdir(dir);
		if (isnil(ent)) {
			break;
		}
		{ // Unsafe block
			u8* bptr = ((u8*)(&ent->d_name[0]));
			if (bptr[0] == 0 || (bptr[0] == '.' && bptr[1] == 0) || (bptr[0] == '.' && bptr[1] == '.' && bptr[2] == 0)) {
				continue;
			}
			array_push((array*)&res, _MOV((string[]){ string_clone(tos_clone(bptr)) }));
		}
	}
	closedir(dir);
	_result_Array_string _t4;
	_result_ok(&(Array_string[]) { res }, (_result*)(&_t4), sizeof(Array_string));
	return _t4;
}

_result_void os__mkdir(string path, os__MkdirParams params) {
	if (string__eq(path, _SLIT("."))) {
		return (_result_void){0};
	}
	string apath = os__real_path(path);
	int r = mkdir(((char*)(apath.str)), params.mode);
	if (r == -1) {
		return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

// Attr: [manualfree]
os__Result os__execute(string cmd) {
	bool os__execute_defer_0 = false;
	string pcmd;
	bool os__execute_defer_1 = false;
	strings__Builder res;
	pcmd =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("exec 2>&1;"), 0xfe10, {.d_s = cmd}}, {_SLIT0, 0, { .d_c = 0 }}}));
	os__execute_defer_0 = true;
	voidptr f = os__vpopen(pcmd);
	if (isnil(f)) {
		os__Result _t1 = ((os__Result){.exit_code = -1,.output =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("exec(\""), 0xfe10, {.d_s = cmd}}, {_SLIT("\") failed"), 0, { .d_c = 0 }}})),});
			// Defer begin
			if (os__execute_defer_0) {
				string_free(&pcmd);
			}
			// Defer end
		return _t1;
	}
	int fd = os__fileno(f);
	res = strings__new_builder(1024);
	os__execute_defer_1 = true;
	Array_fixed_u8_4096 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	{ // Unsafe block
		u8* pbuf = &buf[0];
		for (;;) {
			int len = read(fd, pbuf, 4096);
			if (len == 0) {
				break;
			}
			strings__Builder_write_ptr(&res, pbuf, len);
		}
	}
	string soutput = strings__Builder_str(&res);
	int exit_code = os__vpclose(f);
	os__Result _t2 = ((os__Result){.exit_code = exit_code,.output = soutput,});
		// Defer begin
		if (os__execute_defer_1) {
			strings__Builder_free(&res);
		}
		// Defer end
		// Defer begin
		if (os__execute_defer_0) {
			string_free(&pcmd);
		}
		// Defer end
	return _t2;
}

// Attr: [unsafe]
os__Result os__raw_execute(string cmd) {
	os__Result _t1 = os__execute(cmd);
	return _t1;
}

// Attr: [manualfree]
_result_void os__Command_start(os__Command* c) {
	bool os__Command_start_defer_0 = false;
	string pcmd;
	pcmd = string__plus(c->path, _SLIT(" 2>&1"));
	os__Command_start_defer_0 = true;
	c->f = os__vpopen(pcmd);
	if (isnil(c->f)) {
		_result_void _t1 = (_result_void){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("exec(\""), 0xfe10, {.d_s = c->path}}, {_SLIT("\") failed"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
			// Defer begin
			if (os__Command_start_defer_0) {
				string_free(&pcmd);
			}
			// Defer end
		return _t1;
	}
		// Defer begin
		if (os__Command_start_defer_0) {
			string_free(&pcmd);
		}
		// Defer end
	return (_result_void){0};
}

// Attr: [manualfree]
string os__Command_read_line(os__Command* c) {
	bool os__Command_read_line_defer_0 = false;
	strings__Builder res;
	Array_fixed_u8_4096 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	res = strings__new_builder(1024);
	os__Command_read_line_defer_0 = true;
	{ // Unsafe block
		u8* bufbp = &buf[0];
		for (;;) {
			if (!(fgets(((char*)(bufbp)), 4096, c->f) != 0)) break;
			int len = vstrlen(bufbp);
			for (int i = 0; i < len; ++i) {
				if (bufbp[i] == '\n') {
					strings__Builder_write_ptr(&res, bufbp, i);
					string final = strings__Builder_str(&res);
					string _t1 = final;
						// Defer begin
						if (os__Command_read_line_defer_0) {
							strings__Builder_free(&res);
						}
						// Defer end
					return _t1;
				}
			}
			strings__Builder_write_ptr(&res, bufbp, len);
		}
	}
	c->eof = true;
	string final = strings__Builder_str(&res);
	string _t2 = final;
		// Defer begin
		if (os__Command_read_line_defer_0) {
			strings__Builder_free(&res);
		}
		// Defer end
	return _t2;
}

_result_void os__Command_close(os__Command* c) {
	c->exit_code = os__vpclose(c->f);
	if (c->exit_code == 127) {
		return (_result_void){ .is_error=true, .err=error_with_code(_SLIT("error"), 127), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_void os__symlink(string origin, string target) {
	int res = symlink(((char*)(origin.str)), ((char*)(target.str)));
	if (res == 0) {
		return (_result_void){0};
	}
	return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_void os__link(string origin, string target) {
	int res = link(((char*)(origin.str)), ((char*)(target.str)));
	if (res == 0) {
		return (_result_void){0};
	}
	return (_result_void){ .is_error=true, .err=_v_error(os__posix_get_error_msg(errno)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

string os__get_error_msg(int code) {
	string _t1 = os__posix_get_error_msg(code);
	return _t1;
}

void os__File_close(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	f->is_opened = false;
	fflush(f->cfile);
	fclose(f->cfile);
}

// Attr: [manualfree]
_result_void os__ensure_folder_is_writable(string folder) {
	bool os__ensure_folder_is_writable_defer_0 = false;
	string tmp_perm_check;
	if (!os__exists(folder)) {
		return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("`"), 0xfe10, {.d_s = folder}}, {_SLIT("` does not exist"), 0, { .d_c = 0 }}})), 1), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (!os__is_dir(folder)) {
		return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("`"), 0xfe10, {.d_s = folder}}, {_SLIT("` is not a folder"), 0, { .d_c = 0 }}})), 2), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	tmp_perm_check = os__join_path_single(folder, _SLIT("XXXXXX"));
	os__ensure_folder_is_writable_defer_0 = true;
	{ // Unsafe block
		int x = mkstemp(((char*)(tmp_perm_check.str)));
		if (-1 == x) {
			_result_void _t3 = (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("folder `"), 0xfe10, {.d_s = folder}}, {_SLIT("` is not writable"), 0, { .d_c = 0 }}})), 3), .data={EMPTY_STRUCT_INITIALIZATION} };
				// Defer begin
				if (os__ensure_folder_is_writable_defer_0) {
					string_free(&tmp_perm_check);
				}
				// Defer end
			return _t3;
		}
		close(x);
	}
	_result_void _t4 = os__rm(tmp_perm_check);
	if (_t4.is_error) {
		// Defer begin
		if (os__ensure_folder_is_writable_defer_0) {
			string_free(&tmp_perm_check);
		}
		// Defer end
		_result_void _t5;
		memcpy(&_t5, &_t4, sizeof(_result));
		return _t5;
	}
	
 ;
		// Defer begin
		if (os__ensure_folder_is_writable_defer_0) {
			string_free(&tmp_perm_check);
		}
		// Defer end
	return (_result_void){0};
}

// Attr: [inline]
inline int os__getpid(void) {
	int _t1 = getpid();
	return _t1;
}

// Attr: [inline]
inline int os__getppid(void) {
	int _t1 = getppid();
	return _t1;
}

// Attr: [inline]
inline int os__getuid(void) {
	int _t1 = getuid();
	return _t1;
}

// Attr: [inline]
inline int os__geteuid(void) {
	int _t1 = geteuid();
	return _t1;
}

// Attr: [inline]
inline int os__getgid(void) {
	int _t1 = getgid();
	return _t1;
}

// Attr: [inline]
inline int os__getegid(void) {
	int _t1 = getegid();
	return _t1;
}

void os__posix_set_permission_bit(string path_s, u32 mode, bool enable) {
	u32 new_mode = ((u32)(0U));
	_result_os__Stat _t1;
	if (_t1 = os__stat(path_s), !_t1.is_error) {
		os__Stat s = *(os__Stat*)_t1.data;
		new_mode = s.mode;
	}

	if (enable == (true)) {
		new_mode |= mode;
	}
	else if (enable == (false)) {
		new_mode &= ((u32)(07777 - mode));
	}
	chmod(((char*)(path_s.str)), ((int)(new_mode)));
}

VV_LOCAL_SYMBOL _result_string os__get_long_path(string path) {
	_result_string _t1;
	_result_ok(&(string[]) { path }, (_result*)(&_t1), sizeof(string));
	return _t1;
}

int os__page_size(void) {
	int _t1 = ((int)(sysconf(_SC_PAGESIZE)));
	return _t1;
}

_result_string os__input_password(string prompt) {
	if (os__is_atty(1) <= 0 || string__eq(os__getenv(_SLIT("TERM")), _SLIT("dumb"))) {
		return (_result_string){ .is_error=true, .err=_v_error(_SLIT("Could not obtain password discretely.")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	term__termios__Termios old_state = ((term__termios__Termios){.c_iflag = 0,.c_oflag = 0,.c_cflag = 0,.c_lflag = 0,.c_line = 0,.c_cc = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.c_ispeed = 0,.c_ospeed = 0,});
	if (term__termios__tcgetattr(0, (voidptr)&/*qq*/old_state) != 0) {
		return (_result_string){ .is_error=true, .err=os__last_error(), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	term__termios__Termios new_state = old_state;
	term__termios__Termios_disable_echo(&new_state);
	term__termios__set_state(0, new_state);
	_option_string _t3 = os__input_opt(prompt);
	if (_t3.state != 0) {
		IError err = _t3.err;
		return (_result_string){ .is_error=true, .err=_v_error(_SLIT("Failed to read password")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	string password =  (*(string*)_t3.data);
	term__termios__set_state(0, old_state);
	println(_SLIT(""));
	_result_string _t5;
	_result_ok(&(string[]) { password }, (_result*)(&_t5), sizeof(string));
	return _t5;
}

void os__Process_signal_kill(os__Process* p) {
	if (!(p->status == os__ProcessState__running || p->status == os__ProcessState__stopped)) {
		return;
	}
	os__Process__signal_kill(p);
	p->status = os__ProcessState__aborted;
}

void os__Process_signal_term(os__Process* p) {
	if (!(p->status == os__ProcessState__running || p->status == os__ProcessState__stopped)) {
		return;
	}
	os__Process__signal_term(p);
}

void os__Process_signal_pgkill(os__Process* p) {
	if (!(p->status == os__ProcessState__running || p->status == os__ProcessState__stopped)) {
		return;
	}
	os__Process__signal_pgkill(p);
}

void os__Process_signal_stop(os__Process* p) {
	if (p->status != os__ProcessState__running) {
		return;
	}
	os__Process__signal_stop(p);
	p->status = os__ProcessState__stopped;
}

void os__Process_signal_continue(os__Process* p) {
	if (p->status != os__ProcessState__stopped) {
		return;
	}
	os__Process__signal_continue(p);
	p->status = os__ProcessState__running;
}

void os__Process_wait(os__Process* p) {
	if (p->status == os__ProcessState__not_started) {
		os__Process__spawn(p);
	}
	if (!(p->status == os__ProcessState__running || p->status == os__ProcessState__stopped)) {
		return;
	}
	os__Process__wait(p);
}

void os__Process_close(os__Process* p) {
	if (p->status == os__ProcessState__not_started || p->status == os__ProcessState__closed) {
		return;
	}
	p->status = os__ProcessState__closed;
	#if !defined(_WIN32)
	{
		for (int i = 0; i < 3; ++i) {
			if (p->stdio_fd[v_fixed_index(i, 3)] != 0) {
				os__fd_close(p->stdio_fd[v_fixed_index(i, 3)]);
			}
		}
	}
	#endif
}

// Attr: [unsafe]
void os__Process_free(os__Process* p) {
	os__Process_close(p);
	{ // Unsafe block
		string_free(&p->filename);
		string_free(&p->err);
		array_free(&p->args);
		array_free(&p->env);
	}
}

VV_LOCAL_SYMBOL int os__Process__spawn(os__Process* p) {
	if (!p->env_is_custom) {
		p->env = __new_array_with_default(0, 0, sizeof(string), 0);
		Map_string_string current_environment = os__environ();
		int _t2 = current_environment.key_values.len;
		for (int _t1 = 0; _t1 < _t2; ++_t1 ) {
			int _t3 = current_environment.key_values.len - _t2;
			_t2 = current_environment.key_values.len;
			if (_t3 < 0) {
				_t1 = -1;
				continue;
			}
			if (!DenseArray_has_index(&current_environment.key_values, _t1)) {continue;}
			string k = /*key*/ *(string*)DenseArray_key(&current_environment.key_values, _t1);
			k = string_clone(k);
			string v = (*(string*)DenseArray_value(&current_environment.key_values, _t1));
			array_push((array*)&p->env, _MOV((string[]){ string_clone( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = k}}, {_SLIT("="), 0xfe10, {.d_s = v}}, {_SLIT0, 0, { .d_c = 0 }}}))) }));
		}
	}
	int pid = 0;
	#if defined(_WIN32)
	{
	}
	#else
	{
		pid = os__Process_unix_spawn_process(p);
	}
	#endif
	p->pid = pid;
	p->status = os__ProcessState__running;
	int _t6 = 0;
	return _t6;
}

bool os__Process_is_alive(os__Process* p) {
	bool res = false;
	if (p->status == os__ProcessState__running || p->status == os__ProcessState__stopped) {
		res = os__Process__is_alive(p);
	}
	return res;
}

void os__Process_set_redirect_stdio(os__Process* p) {
	p->use_stdio_ctl = true;
}

void os__Process_stdin_write(os__Process* p, string s) {
	os__Process__check_redirection_call(p, _SLIT("Process.stdin_write"));
	os__Process__write_to(p, os__ChildProcessPipeKind__stdin, s);
}

string os__Process_stdout_slurp(os__Process* p) {
	os__Process__check_redirection_call(p, _SLIT("Process.stdout_slurp"));
	string res = os__Process__slurp_from(p, os__ChildProcessPipeKind__stdout);
	return res;
}

string os__Process_stderr_slurp(os__Process* p) {
	os__Process__check_redirection_call(p, _SLIT("Process.stderr_slurp"));
	string res = os__Process__slurp_from(p, os__ChildProcessPipeKind__stderr);
	return res;
}

string os__Process_stdout_read(os__Process* p) {
	os__Process__check_redirection_call(p, _SLIT("Process.stdout_read"));
	string res = os__Process__read_from(p, os__ChildProcessPipeKind__stdout);
	return res;
}

string os__Process_stderr_read(os__Process* p) {
	os__Process__check_redirection_call(p, _SLIT("Process.stderr_read"));
	string res = os__Process__read_from(p, os__ChildProcessPipeKind__stderr);
	return res;
}

_option_string os__Process_pipe_read(os__Process* p, os__ChildProcessPipeKind pkind) {
	os__Process__check_redirection_call(p, _SLIT("Process.pipe_read"));
	if (!os__Process__is_pending(p, pkind)) {
		return (_option_string){ .state=2, .err=_const_none__, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	string res = os__Process__read_from(p, pkind);
	_option_string _t2;
	_option_ok(&(string[]) { res }, (_option*)(&_t2), sizeof(string));
	return _t2;
}

bool os__Process_is_pending(os__Process* p, os__ChildProcessPipeKind pkind) {
	os__Process__check_redirection_call(p, _SLIT("Process.is_pending"));
	bool res = os__Process__is_pending(p, pkind);
	return res;
}

VV_LOCAL_SYMBOL string os__Process__read_from(os__Process* p, os__ChildProcessPipeKind pkind) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		multi_return_string_int mr_6471 = os__fd_read(p->stdio_fd[v_fixed_index(pkind, 3)], 4096);
		string s = mr_6471.arg0;
		return s;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

VV_LOCAL_SYMBOL string os__Process__slurp_from(os__Process* p, os__ChildProcessPipeKind pkind) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		string _t2 = Array_string_join(os__fd_slurp(p->stdio_fd[v_fixed_index(pkind, 3)]), _SLIT(""));
		return _t2;
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}

VV_LOCAL_SYMBOL void os__Process__write_to(os__Process* p, os__ChildProcessPipeKind pkind, string s) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__fd_write(p->stdio_fd[v_fixed_index(pkind, 3)], s);
	}
	#endif
}

VV_LOCAL_SYMBOL bool os__Process__is_pending(os__Process* p, os__ChildProcessPipeKind pkind) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = os__fd_is_pending(p->stdio_fd[v_fixed_index(pkind, 3)]);
		return _t2;
	}
	#endif
	bool _t3 = false;
	return _t3;
}

VV_LOCAL_SYMBOL void os__Process__check_redirection_call(os__Process* p, string fn_name) {
	if (!p->use_stdio_ctl) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Call p.set_redirect_stdio() before calling p."), 0xfe10, {.d_s = fn_name}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
	if (p->status == os__ProcessState__not_started) {
		_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Call p."), 0xfe10, {.d_s = fn_name}}, {_SLIT("() after you have called p.run()"), 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	}
}

VV_LOCAL_SYMBOL void os__Process__signal_stop(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_stop_process(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__signal_continue(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_resume_process(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__signal_kill(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_kill_process(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__signal_term(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_term_process(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__signal_pgkill(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_kill_pgroup(p);
	}
	#endif
}

VV_LOCAL_SYMBOL void os__Process__wait(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		os__Process_unix_wait(p);
	}
	#endif
}

VV_LOCAL_SYMBOL bool os__Process__is_alive(os__Process* p) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		bool _t2 = os__Process_unix_is_alive(p);
		return _t2;
	}
	#endif
	return 0;
}

void os__Process_run(os__Process* p) {
	if (p->status != os__ProcessState__not_started) {
		return;
	}
	os__Process__spawn(p);
}

os__Process* os__new_process(string filename) {
	os__Process* _t1 = ((os__Process*)memdup(&(os__Process){.filename = filename,.pid = 0,.code = -1,.status = os__ProcessState__not_started,.err = (string){.str=(byteptr)"", .is_lit=1},.args = __new_array(0, 0, sizeof(string)),.work_folder = (string){.str=(byteptr)"", .is_lit=1},.env_is_custom = 0,.env = __new_array(0, 0, sizeof(string)),.use_stdio_ctl = 0,.use_pgroup = 0,.stdio_fd = {-1, -1, -1},.wdata = 0,.create_no_window = 0,}, sizeof(os__Process)));
	return _t1;
}

void os__Process_set_args(os__Process* p, Array_string pargs) {
	if (p->status != os__ProcessState__not_started) {
		return;
	}
	p->args = pargs;
	return;
}

void os__Process_set_work_folder(os__Process* p, string path) {
	if (p->status != os__ProcessState__not_started) {
		return;
	}
	p->work_folder = os__real_path(path);
	return;
}

void os__Process_set_environment(os__Process* p, Map_string_string envs) {
	if (p->status != os__ProcessState__not_started) {
		return;
	}
	p->env_is_custom = true;
	p->env = __new_array_with_default(0, 0, sizeof(string), 0);
	int _t2 = envs.key_values.len;
	for (int _t1 = 0; _t1 < _t2; ++_t1 ) {
		int _t3 = envs.key_values.len - _t2;
		_t2 = envs.key_values.len;
		if (_t3 < 0) {
			_t1 = -1;
			continue;
		}
		if (!DenseArray_has_index(&envs.key_values, _t1)) {continue;}
		string k = /*key*/ *(string*)DenseArray_key(&envs.key_values, _t1);
		k = string_clone(k);
		string v = (*(string*)DenseArray_value(&envs.key_values, _t1));
		array_push((array*)&p->env, _MOV((string[]){ string_clone( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = k}}, {_SLIT("="), 0xfe10, {.d_s = v}}, {_SLIT0, 0, { .d_c = 0 }}}))) }));
	}
	return;
}

VV_LOCAL_SYMBOL int os__Process_unix_spawn_process(os__Process* p) {
	Array_fixed_int_6 pipeset = {0, 0, 0, 0, 0, 0};
	if (p->use_stdio_ctl) {
		int dont_care = pipe(&pipeset[0]);
		dont_care = pipe(&pipeset[2]);
		dont_care = pipe(&pipeset[4]);
		{int _ = dont_care;}
		;
	}
	int pid = os__fork();
	if (pid != 0) {
		if (p->use_stdio_ctl) {
			p->stdio_fd[0] = pipeset[1];
			p->stdio_fd[1] = pipeset[2];
			p->stdio_fd[2] = pipeset[4];
			os__fd_close(pipeset[0]);
			os__fd_close(pipeset[3]);
			os__fd_close(pipeset[5]);
		}
		return pid;
	}
	if (p->use_pgroup) {
		setpgid(0, 0);
	}
	if (p->use_stdio_ctl) {
		os__fd_close(pipeset[1]);
		os__fd_close(pipeset[2]);
		os__fd_close(pipeset[4]);
		dup2(pipeset[0], 0);
		dup2(pipeset[3], 1);
		dup2(pipeset[5], 2);
		os__fd_close(pipeset[0]);
		os__fd_close(pipeset[3]);
		os__fd_close(pipeset[5]);
	}
	if ((p->work_folder).len != 0) {
		if (!os__is_abs_path(p->filename)) {
			p->filename = os__abs_path(p->filename);
		}
		_result_void _t2 = os__chdir(p->work_folder);
		if (_t2.is_error) {
			IError err = _t2.err;
		}
		
 ;
	}
	_result_void _t3 = os__execve(p->filename, p->args, p->env);
	if (_t3.is_error) {
		IError err = _t3.err;
		eprintln(IError_str(err));
		_v_exit(1);
		VUNREACHABLE();
	;
	}
	
 ;
	int _t4 = 0;
	return _t4;
}

VV_LOCAL_SYMBOL void os__Process_unix_stop_process(os__Process* p) {
	kill(p->pid, SIGSTOP);
}

VV_LOCAL_SYMBOL void os__Process_unix_resume_process(os__Process* p) {
	kill(p->pid, SIGCONT);
}

VV_LOCAL_SYMBOL void os__Process_unix_term_process(os__Process* p) {
	kill(p->pid, SIGTERM);
}

VV_LOCAL_SYMBOL void os__Process_unix_kill_process(os__Process* p) {
	kill(p->pid, SIGKILL);
}

VV_LOCAL_SYMBOL void os__Process_unix_kill_pgroup(os__Process* p) {
	kill(-p->pid, SIGKILL);
}

VV_LOCAL_SYMBOL void os__Process_unix_wait(os__Process* p) {
	os__Process_impl_check_pid_status(p, false, 0);
}

VV_LOCAL_SYMBOL bool os__Process_unix_is_alive(os__Process* p) {
	bool _t1 = os__Process_impl_check_pid_status(p, true, WNOHANG);
	return _t1;
}

VV_LOCAL_SYMBOL bool os__Process_impl_check_pid_status(os__Process* p, bool exit_early_on_ret0, int waitpid_options) {
	int cstatus = 0;
	int ret = -1;
	#if !defined(CUSTOM_DEFINE_emscripten)
	{
		ret = waitpid(p->pid, &cstatus, waitpid_options);
	}
	#endif
	p->code = ret;
	if (ret == -1) {
		p->err = os__posix_get_error_msg(errno);
		bool _t2 = false;
		return _t2;
	}
	if (exit_early_on_ret0 && ret == 0) {
		bool _t3 = true;
		return _t3;
	}
	multi_return_int_bool mr_3008 = os__posix_wait4_to_exit_status(cstatus);
	int pret = mr_3008.arg0;
	bool is_signaled = mr_3008.arg1;
	if (is_signaled) {
		p->status = os__ProcessState__aborted;
		p->err =  str_intp(3, _MOV((StrIntpData[]){{_SLIT("Terminated by signal "), 0x4fe27, {.d_i32 = pret}}, {_SLIT(" ("), 0xfe10, {.d_s = os__sigint_to_signal_name(pret)}}, {_SLIT(")"), 0, { .d_c = 0 }}}));
		pret += 128;
	} else {
		p->status = os__ProcessState__exited;
	}
	p->code = pret;
	bool _t4 = false;
	return _t4;
}

VV_LOCAL_SYMBOL int os__Process_win_spawn_process(os__Process* p) {
	int _t1 = 0;
	return _t1;
}

VV_LOCAL_SYMBOL void os__Process_win_stop_process(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_resume_process(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_term_process(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_kill_process(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_kill_pgroup(os__Process* p) {
}

VV_LOCAL_SYMBOL void os__Process_win_wait(os__Process* p) {
}

VV_LOCAL_SYMBOL bool os__Process_win_is_alive(os__Process* p) {
	bool _t1 = false;
	return _t1;
}

VV_LOCAL_SYMBOL void os__Process_win_write_string(os__Process* p, int idx, string s) {
}

VV_LOCAL_SYMBOL multi_return_string_int os__Process_win_read_string(os__Process* p, int idx, int maxbytes) {
	return (multi_return_string_int){.arg0=_SLIT(""), .arg1=0};
}

VV_LOCAL_SYMBOL string os__Process_win_slurp(os__Process* p, int idx) {
	string _t1 = _SLIT("");
	return _t1;
}

_result_anon_fn_os__signal os__signal_opt(os__Signal signum, void (*handler)(os__Signal )) {
	errno = 0;
	voidptr prev_handler = signal(((int)(signum)), (voidptr)handler);
	if (prev_handler == SIG_ERR) {
		return (_result_anon_fn_os__signal){ .is_error=true, .err=error_with_code(os__posix_get_error_msg(EINVAL), EINVAL), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_anon_fn_os__signal _t2;
	_result_ok(&(os__SignalHandler[]) { (voidptr)((os__SignalHandler)(prev_handler)) }, (_result*)(&_t2), sizeof(os__SignalHandler));
	return _t2;
}

VV_LOCAL_SYMBOL void os__ignore_signal_handler(os__Signal signal) {
}

void os__signal_ignore(Array_os__Signal args) {
	if (os__is_main_thread()) {
		#if !defined(_WIN32)
		{
			for (int _t2 = 0; _t2 < args.len; ++_t2) {
				os__Signal arg = ((os__Signal*)args.data)[_t2];
				_result_anon_fn_os__signal _t3 = os__signal_opt(arg, (voidptr)os__ignore_signal_handler);
				if (_t3.is_error) {
					IError err = _t3.err;
				}
				
  (*(os__SignalHandler*)_t3.data);
			}
		}
		#endif
	} else {
		os__signal_ignore_internal(args);
	}
}

// TypeDecl
bool os__is_main_thread(void) {
	bool _t1 = g_main_thread_id == ((u64)(pthread_self()));
	return _t1;
}

VV_LOCAL_SYMBOL void os__signal_ignore_internal(Array_os__Signal args) {
	#if !defined(__ANDROID__) && !defined(__APPLE__) && !defined(__OpenBSD__)
	{
		sigset_t mask1 = ((sigset_t){EMPTY_STRUCT_INITIALIZATION});
		sigemptyset(&mask1);
		for (int _t2 = 0; _t2 < args.len; ++_t2) {
			os__Signal arg = ((os__Signal*)args.data)[_t2];
			sigaddset(&mask1, ((int)(arg)));
		}
		sigprocmask(SIG_BLOCK, &mask1, ((void*)0));
	}
	#endif
}

_result_void os__open_uri(string uri) {
	string vopen_uri_cmd = os__getenv(_SLIT("VOPEN_URI_CMD"));
	if ((vopen_uri_cmd).len == 0) {
		#if defined(__APPLE__)
		{
		}
		#elif defined(__FreeBSD__) || defined(__OpenBSD__)
		{
		}
		#elif defined(__linux__)
		{
			Array_string providers = new_array_from_c_array(5, 5, sizeof(string), _MOV((string[5]){_SLIT("xdg-open"), _SLIT("x-www-browser"), _SLIT("www-browser"), _SLIT("wslview"), _SLIT("exo-open")}));
			for (int _t2 = 0; _t2 < providers.len; ++_t2) {
				string provider = ((string*)providers.data)[_t2];
				if (os__exists_in_system_path(provider)) {
					vopen_uri_cmd = provider;
					break;
				}
			}
		}
		#endif
	}
	if ((vopen_uri_cmd).len == 0) {
		return (_result_void){ .is_error=true, .err=_v_error(_SLIT("unsupported platform")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	os__Result result = os__execute( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = vopen_uri_cmd}}, {_SLIT(" \""), 0xfe10, {.d_s = uri}}, {_SLIT("\""), 0, { .d_c = 0 }}})));
	if (result.exit_code != 0) {
		return (_result_void){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("unable to open url: "), 0xfe10, {.d_s = result.output}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_void){0};
}

_result_os__Stat os__stat(string path) {
	struct stat s;
	{ // Unsafe block
		int res = stat(((char*)(path.str)), &s);
		if (res != 0) {
			return (_result_os__Stat){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		_result_os__Stat _t2;
		_result_ok(&(os__Stat[]) { ((os__Stat){
			.dev = s.st_dev,
			.inode = s.st_ino,
			.mode = s.st_mode,
			.nlink = s.st_nlink,
			.uid = s.st_uid,
			.gid = s.st_gid,
			.rdev = s.st_rdev,
			.size = s.st_size,
			.atime = s.st_atime,
			.mtime = s.st_mtime,
			.ctime = s.st_ctime,
		}) }, (_result*)(&_t2), sizeof(os__Stat));
		return _t2;
	}
	return (_result_os__Stat){0};
}

_result_os__Stat os__lstat(string path) {
	struct stat s;
	{ // Unsafe block
		int res = lstat(((char*)(path.str)), &s);
		if (res != 0) {
			return (_result_os__Stat){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		_result_os__Stat _t2;
		_result_ok(&(os__Stat[]) { ((os__Stat){
			.dev = s.st_dev,
			.inode = s.st_ino,
			.mode = s.st_mode,
			.nlink = s.st_nlink,
			.uid = s.st_uid,
			.gid = s.st_gid,
			.rdev = s.st_rdev,
			.size = s.st_size,
			.atime = s.st_atime,
			.mtime = s.st_mtime,
			.ctime = s.st_ctime,
		}) }, (_result*)(&_t2), sizeof(os__Stat));
		return _t2;
	}
	return (_result_os__Stat){0};
}

os__FileType os__Stat_get_filetype(os__Stat* st) {
	u32 /*A*/ _t1 = (st->mode & ((u32)(S_IFMT)));
	
	if (_t1 == (((u32)(S_IFREG)))) {
		os__FileType _t2 = os__FileType__regular;
		return _t2;
	}
	else if (_t1 == (((u32)(S_IFDIR)))) {
		os__FileType _t3 = os__FileType__directory;
		return _t3;
	}
	else if (_t1 == (((u32)(S_IFCHR)))) {
		os__FileType _t4 = os__FileType__character_device;
		return _t4;
	}
	else if (_t1 == (((u32)(S_IFBLK)))) {
		os__FileType _t5 = os__FileType__block_device;
		return _t5;
	}
	else if (_t1 == (((u32)(S_IFIFO)))) {
		os__FileType _t6 = os__FileType__fifo;
		return _t6;
	}
	else if (_t1 == (((u32)(S_IFLNK)))) {
		os__FileType _t7 = os__FileType__symbolic_link;
		return _t7;
	}
	else if (_t1 == (((u32)(S_IFSOCK)))) {
		os__FileType _t8 = os__FileType__socket;
		return _t8;
	}
	else {
		os__FileType _t9 = os__FileType__unknown;
		return _t9;
	}
	return 0;
}

os__FileMode os__Stat_get_mode(os__Stat* st) {
	os__FileMode _t1 = ((os__FileMode){.typ = os__Stat_get_filetype(st),.owner = ((os__FilePermission){.read = ((st->mode & ((u32)(S_IRUSR)))) != 0U,.write = ((st->mode & ((u32)(S_IWUSR)))) != 0U,.execute = ((st->mode & ((u32)(S_IXUSR)))) != 0U,}),.group = ((os__FilePermission){.read = ((st->mode & ((u32)(S_IRGRP)))) != 0U,.write = ((st->mode & ((u32)(S_IWGRP)))) != 0U,.execute = ((st->mode & ((u32)(S_IXGRP)))) != 0U,}),.others = ((os__FilePermission){.read = ((st->mode & ((u32)(S_IROTH)))) != 0U,.write = ((st->mode & ((u32)(S_IWOTH)))) != 0U,.execute = ((st->mode & ((u32)(S_IXOTH)))) != 0U,}),});
	return _t1;
}

bool os__is_dir(string path) {
	_result_os__Stat _t1 = os__stat(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		bool _t2 = false;
		return _t2;
	}
	
 	os__Stat attr =  (*(os__Stat*)_t1.data);
	bool _t3 = os__Stat_get_filetype(&attr) == os__FileType__directory;
	return _t3;
}

bool os__is_link(string path) {
	_result_os__Stat _t1 = os__lstat(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		bool _t2 = false;
		return _t2;
	}
	
 	os__Stat attr =  (*(os__Stat*)_t1.data);
	bool _t3 = os__Stat_get_filetype(&attr) == os__FileType__symbolic_link;
	return _t3;
}

VV_LOCAL_SYMBOL os__PathKind os__kind_of_existing_path(string path) {
	os__PathKind res = ((os__PathKind){.is_file = 0,.is_dir = 0,.is_link = 0,});
	_result_os__Stat _t1 = os__lstat(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		return res;
	}
	
 	os__Stat attr =  (*(os__Stat*)_t1.data);
	res.is_file = os__Stat_get_filetype(&attr) == os__FileType__regular;
	res.is_dir = os__Stat_get_filetype(&attr) == os__FileType__directory;
	res.is_link = os__Stat_get_filetype(&attr) == os__FileType__symbolic_link;
	return res;
}

// TypeDecl
// Attr: [inline]
inline VV_LOCAL_SYMBOL u32 rand__seed__nr_next(u32 prev) {
	u32 _t1 = (u32)((u32)(prev * 1664525U) + 1013904223U);
	return _t1;
}

Array_u32 rand__seed__time_seed_array(int count) {
	u64 ctime = time__sys_mono_now();
	u32 seed = ((u32)(((ctime >> 32U) ^ ((ctime & 0x00000000FFFFFFFFU)))));
	Array_u32 seed_data = __new_array_with_default_noscan(0, count, sizeof(u32), 0);
	for (int _t1 = 0; _t1 < count; ++_t1) {
		seed = rand__seed__nr_next(seed);
		array_push_noscan((array*)&seed_data, _MOV((u32[]){ rand__seed__nr_next(seed) }));
	}
	return seed_data;
}

// Attr: [manualfree]
u32 rand__seed__time_seed_32(void) {
	Array_u32 sa = rand__seed__time_seed_array(1);
	u32 res = (*(u32*)array_get(sa, 0));
	array_free(&sa);
	return res;
}

// Attr: [manualfree]
u64 rand__seed__time_seed_64(void) {
	Array_u32 seed_data = rand__seed__time_seed_array(2);
	u64 lower = ((u64)((*(u32*)array_get(seed_data, 0))));
	u64 upper = ((u64)((*(u32*)array_get(seed_data, 1))));
	array_free(&seed_data);
	u64 res = (lower | ((upper << 32U)));
	return res;
}

void rand__wyrand__WyRandRNG_seed(rand__wyrand__WyRandRNG* rng, Array_u32 seed_data) {
	if (seed_data.len != 2) {
		eprintln(_SLIT("WyRandRNG needs 2 32-bit unsigned integers as the seed."));
		_v_exit(1);
		VUNREACHABLE();
	}
	rng->state = ((*(u32*)array_get(seed_data, 0)) | ((((u64)((*(u32*)array_get(seed_data, 1)))) << 32U)));
	rng->bytes_left = 0;
	rng->buffer = 0U;
}

// Attr: [inline]
inline u8 rand__wyrand__WyRandRNG_u8(rand__wyrand__WyRandRNG* rng) {
	if (rng->bytes_left >= 1) {
		rng->bytes_left -= 1;
		u8 value = ((u8)(rng->buffer));
		rng->buffer >>= 8U;
		return value;
	}
	rng->buffer = rand__wyrand__WyRandRNG_u64(rng);
	rng->bytes_left = 7;
	u8 value = ((u8)(rng->buffer));
	rng->buffer >>= 8U;
	return value;
}

// Attr: [inline]
inline u16 rand__wyrand__WyRandRNG_u16(rand__wyrand__WyRandRNG* rng) {
	if (rng->bytes_left >= 2) {
		rng->bytes_left -= 2;
		u16 value = ((u16)(rng->buffer));
		rng->buffer >>= 16U;
		return value;
	}
	u64 ans = rand__wyrand__WyRandRNG_u64(rng);
	rng->buffer = (ans >> 16U);
	rng->bytes_left = 6;
	u16 _t2 = ((u16)(ans));
	return _t2;
}

// Attr: [inline]
inline u32 rand__wyrand__WyRandRNG_u32(rand__wyrand__WyRandRNG* rng) {
	if (rng->bytes_left >= 4) {
		rng->bytes_left -= 4;
		u32 value = ((u32)(rng->buffer));
		rng->buffer >>= 32U;
		return value;
	}
	u64 ans = rand__wyrand__WyRandRNG_u64(rng);
	rng->buffer = (ans >> 32U);
	rng->bytes_left = 4;
	u32 _t2 = ((u32)(ans));
	return _t2;
}

// Attr: [inline]
inline u64 rand__wyrand__WyRandRNG_u64(rand__wyrand__WyRandRNG* rng) {
	{ // Unsafe block
		u64 seed1 = rng->state;
		seed1 += _const_rand__wyrand__wyp0;
		rng->state = seed1;
		u64 _t1 = hash__wymum((seed1 ^ _const_rand__wyrand__wyp1), seed1);
		return _t1;
	}
	u64 _t2 = 0U;
	return _t2;
}

// Attr: [inline]
inline int rand__wyrand__WyRandRNG_block_size(rand__wyrand__WyRandRNG* rng) {
	int _t1 = 64;
	return _t1;
}

// Attr: [unsafe]
void rand__wyrand__WyRandRNG_free(rand__wyrand__WyRandRNG* rng) {
	_v_free(rng);
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 rand__msqrt(f64 a) {
	if (a == 0) {
		return a;
	}
	f64 x = a;
	multi_return_f64_int mr_867 = rand__frexp(x);
	f64 z = mr_867.arg0;
	int ex = mr_867.arg1;
	f64 w = x;
	x = (f64)(((f64)(4.173075996388649989089e-1)) + (f64)(((f64)(5.9016206709064458299663e-1)) * z));
	if (((ex & 1)) != 0) {
		x *= _const_rand__sqrt2;
	}
	x = rand__scalbn(x, (ex >> 1));
	x = (f64)(((f64)(0.5)) * ((f64)(x + (f64)(w / x))));
	x = (f64)(((f64)(0.5)) * ((f64)(x + (f64)(w / x))));
	x = (f64)(((f64)(0.5)) * ((f64)(x + (f64)(w / x))));
	return x;
}

VV_LOCAL_SYMBOL f64 rand__mlog(f64 a) {
	f64 ln2_lo = 1.90821492927058770002e-10;
	f64 ln2_hi = 0.693147180369123816490;
	f64 l1 = 0.6666666666666735130;
	f64 l2 = 0.3999999999940941908;
	f64 l3 = 0.2857142874366239149;
	f64 l4 = 0.2222219843214978396;
	f64 l5 = 0.1818357216161805012;
	f64 l6 = 0.1531383769920937332;
	f64 l7 = 0.1479819860511658591;
	f64 x = a;
	multi_return_f64_int mr_1644 = rand__frexp(x);
	f64 f1 = mr_1644.arg0;
	int ki = mr_1644.arg1;
	if (f1 < ((f64)((float_literal)(_const_rand__sqrt2 / 2)))) {
		f1 *= 2;
		ki--;
	}
	f64 f = (f64)(f1 - 1);
	f64 k = ((f64)(ki));
	f64 s = (f64)(f / ((f64)(2 + f)));
	f64 s2 = (f64)(s * s);
	f64 s4 = (f64)(s2 * s2);
	f64 t1 = (f64)(s2 * ((f64)(l1 + (f64)(s4 * ((f64)(l3 + (f64)(s4 * ((f64)(l5 + (f64)(s4 * l7))))))))));
	f64 t2 = (f64)(s4 * ((f64)(l2 + (f64)(s4 * ((f64)(l4 + (f64)(s4 * l6)))))));
	f64 r = (f64)(t1 + t2);
	f64 hfsq = (f64)((f64)(((f64)(0.5)) * f) * f);
	f64 _t1 = (f64)((f64)(k * ln2_hi) - ((f64)(((f64)(hfsq - ((f64)((f64)(s * ((f64)(hfsq + r))) + (f64)(k * ln2_lo))))) - f)));
	return _t1;
}

VV_LOCAL_SYMBOL multi_return_f64_int rand__frexp(f64 x) {
	u64 y = rand__f64_bits(x);
	int ee = ((int)((((y >> 52U)) & 0x7ffU)));
	if (ee == 0) {
		if (x != ((f64)(0.0))) {
			f64 x1p64 = rand__f64_from_bits(((u64)(0x43f0000000000000U)));
			multi_return_f64_int mr_2140 = rand__frexp((f64)(x * x1p64));
			f64 z = mr_2140.arg0;
			int e_ = mr_2140.arg1;
			return (multi_return_f64_int){.arg0=z, .arg1=(int)(e_ - 64)};
		}
		return (multi_return_f64_int){.arg0=x, .arg1=0};
	} else if (ee == 0x7ff) {
		return (multi_return_f64_int){.arg0=x, .arg1=0};
	}
	int e_ = (int)(ee - 0x3fe);
	y &= ((u64)(0x800fffffffffffffU));
	y |= ((u64)(0x3fe0000000000000U));
	return (multi_return_f64_int){.arg0=rand__f64_from_bits(y), .arg1=e_};
}

VV_LOCAL_SYMBOL f64 rand__scalbn(f64 x, int n_) {
	int n = n_;
	f64 x1p1023 = rand__f64_from_bits(((u64)(0x7fe0000000000000U)));
	f64 x1p53 = rand__f64_from_bits(((u64)(0x4340000000000000U)));
	f64 x1p_1022 = rand__f64_from_bits(((u64)(0x0010000000000000U)));
	f64 y = x;
	if (n > 1023) {
		y *= x1p1023;
		n -= 1023;
		if (n > 1023) {
			y *= x1p1023;
			n -= 1023;
			if (n > 1023) {
				n = 1023;
			}
		}
	} else if (n < -1022) {
		y *= (f64)(x1p_1022 * x1p53);
		n += 969;
		if (n < -1022) {
			y *= (f64)(x1p_1022 * x1p53);
			n += 969;
			if (n < -1022) {
				n = -1022;
			}
		}
	}
	f64 _t1 = (f64)(y * rand__f64_from_bits((((u64)(((int)(0x3ff + n)))) << 52U)));
	return _t1;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL f64 rand__f64_from_bits(u64 b) {
	f64 _t1 = *((f64*)(&b));
	return _t1;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL u64 rand__f64_bits(f64 f) {
	u64 _t1 = *((u64*)(&f));
	return _t1;
}

string rand__uuid_v4(void) {
	string _t1 = rand__internal_uuid_v4(default_rng);
	return _t1;
}

VV_LOCAL_SYMBOL string rand__internal_uuid_v4(rand__PRNG* rng) {
	int buflen = 36;
	u8* buf = malloc_noscan(37);
	int i_buf = 0;
	u64 x = ((u64)(0U));
	u8 d = ((u8)(0));
	for (;;) {
		if (!(i_buf < buflen)) break;
		int c = 0;
		x = rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object);
		x &= 0x0F0F0F0F0F0F0F0FU;
		x += 0x3030303030303030U;
		for (;;) {
			if (!(c < 8 && i_buf < buflen)) break;
			d = ((u8)(x));
			{ // Unsafe block
				buf[i_buf] = (d > 0x39 ? ((u8)(d + 0x27)) : (d));
			}
			i_buf++;
			c++;
			x = (x >> 8U);
		}
	}
	x = (x >> 8U);
	d = ((u8)(x));
	{ // Unsafe block
		buf[19] = (*(rune*)array_get(_const_rand__clock_seq_hi_and_reserved_valid_values, (d & 0x03)));
		buf[14] = '4';
		buf[8] = '-';
		buf[13] = '-';
		buf[18] = '-';
		buf[23] = '-';
		buf[buflen] = 0;
		string _t1 = u8_vstring_with_len(buf, buflen);
		return _t1;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

VV_LOCAL_SYMBOL string rand__internal_ulid_at_millisecond(rand__PRNG* rng, u64 unix_time_milli) {
	int buflen = 26;
	u8* buf = malloc_noscan(27);
	u64 t = unix_time_milli;
	int i = 9;
	for (;;) {
		if (!(i >= 0)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (t & 0x1FU));
		}
		t = (t >> 5U);
		i--;
	}
	u64 x = rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object);
	i = 10;
	for (;;) {
		if (!(i < 19)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (x & 0x1FU));
		}
		x = (x >> 5U);
		i++;
	}
	x = rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object);
	for (;;) {
		if (!(i < 26)) break;
		{ // Unsafe block
			buf[i] = string_at(_const_rand__ulid_encoding, (x & 0x1FU));
		}
		x = (x >> 5U);
		i++;
	}
	{ // Unsafe block
		buf[26] = 0;
		string _t1 = u8_vstring_with_len(buf, buflen);
		return _t1;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL string rand__internal_string_from_set(rand__PRNG* rng, string charset, int len) {
	if (len == 0) {
		string _t1 = _SLIT("");
		return _t1;
	}
	u8* buf = malloc_noscan((int)(len + 1));
	for (int i = 0; i < len; ++i) {
		{ // Unsafe block
			buf[i] = charset.str[ (int)(rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object) % charset.len)];
		}
	}
	{ // Unsafe block
		buf[len] = 0;
	}
	string _t2 = u8_vstring_with_len(buf, len);
	return _t2;
}

// Attr: [direct_array_access]
VV_LOCAL_SYMBOL void rand__internal_fill_buffer_from_set(rand__PRNG* rng, string charset, Array_u8* buf) {
	if (buf->len == 0) {
		return;
	}
	int blen = buf->len;
	for (int i = 0; i < blen; ++i) {
		{ // Unsafe block
			((u8*)buf->data)[i] = charset.str[ (int)(rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object) % charset.len)];
		}
	}
}

VV_LOCAL_SYMBOL void rand__deinit(void) {
	{ // Unsafe block
		rand__PRNG_name_table[default_rng->_typ]._method__v_free(default_rng->_object);
		_v_free(default_rng);
	}
}

VV_LOCAL_SYMBOL void rand__init(void) {
	default_rng = rand__new_default(((rand__config__PRNGConfigStruct){.seed_ = rand__seed__time_seed_array(2),}));
	_result_void _t1 = at_exit((voidptr)rand__deinit);
	if (_t1.is_error) {
		IError err = _t1.err;
	}
	
 ;
}

VV_LOCAL_SYMBOL void rand__read_32(rand__PRNG* rng, Array_u8* buf) {
	u32* p32 = ((u32*)(buf->data));
	int u32s = (int)(buf->len / 4);
	for (int i = 0; i < u32s; ++i) {
		{ // Unsafe block
			*(p32 + i) = rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object);
		}
	}
	for (int i = (int)(u32s * 4); i < buf->len; ++i) {
		array_set(buf, i, &(u8[]) { rand__PRNG_name_table[rng->_typ]._method_u8(rng->_object) });
	}
}

VV_LOCAL_SYMBOL void rand__read_64(rand__PRNG* rng, Array_u8* buf) {
	u64* p64 = ((u64*)(buf->data));
	int u64s = (int)(buf->len / 8);
	for (int i = 0; i < u64s; ++i) {
		{ // Unsafe block
			*(p64 + i) = rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object);
		}
	}
	for (int i = (int)(u64s * 8); i < buf->len; ++i) {
		array_set(buf, i, &(u8[]) { rand__PRNG_name_table[rng->_typ]._method_u8(rng->_object) });
	}
}

VV_LOCAL_SYMBOL void rand__read_internal(rand__PRNG* rng, Array_u8* buf) {
	int /*A*/ _t1 = rand__PRNG_name_table[rng->_typ]._method_block_size(rng->_object);
		switch (_t1) {
		case 32: {
				rand__read_32(rng, buf);
				break;
		}
		case 64: {
				rand__read_64(rng, buf);
				break;
		}
		default: {
				for (int i = 0; i < buf->len; ++i) {
					array_set(buf, i, &(u8[]) { rand__PRNG_name_table[rng->_typ]._method_u8(rng->_object) });
				}
				break;
		}
	}
	
}

// Attr: [inline]
inline _result_Array_u8 rand__PRNG_bytes(rand__PRNG* rng, int bytes_needed) {
	if (bytes_needed < 0) {
		return (_result_Array_u8){ .is_error=true, .err=_v_error(_SLIT("can not read < 0 random bytes")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	Array_u8 buffer = __new_array_with_default_noscan(bytes_needed, 0, sizeof(u8), 0);
	rand__read_internal(rng, &/*arr*/buffer);
	_result_Array_u8 _t2;
	_result_ok(&(Array_u8[]) { buffer }, (_result*)(&_t2), sizeof(Array_u8));
	return _t2;
}

void rand__PRNG_read(rand__PRNG* rng, Array_u8* buf) {
	rand__read_internal(rng, buf);
}

// Attr: [inline]
inline _result_u32 rand__PRNG_u32n(rand__PRNG* rng, u32 max) {
	if (max == 0U) {
		return (_result_u32){ .is_error=true, .err=_v_error(_SLIT("max must be positive integer")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int bit_len = math__bits__len_32(max);
	if (_unlikely_(bit_len == 32)) {
		for (;;) {
			u32 value = rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object);
			if (value < max) {
				_result_u32 _t2;
				_result_ok(&(u32[]) { value }, (_result*)(&_t2), sizeof(u32));
				return _t2;
			}
		}
	} else {
		u32 mask = (_unlikely_(bit_len == 31) ? (((u32)(0x7FFFFFFFU))) : ((u32)(((((u32)(1U)) << ((int)(bit_len + 1)))) - 1U)));
		for (;;) {
			u32 value = (rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object) & mask);
			if (value < max) {
				_result_u32 _t3;
				_result_ok(&(u32[]) { value }, (_result*)(&_t3), sizeof(u32));
				return _t3;
			}
		}
	}
	_result_u32 _t4;
	_result_ok(&(u32[]) { ((u32)(0U)) }, (_result*)(&_t4), sizeof(u32));
	return _t4;
}

// Attr: [inline]
inline _result_u64 rand__PRNG_u64n(rand__PRNG* rng, u64 max) {
	if (max == 0U) {
		return (_result_u64){ .is_error=true, .err=_v_error(_SLIT("max must be positive integer")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int bit_len = math__bits__len_64(max);
	if (_unlikely_(bit_len == 64)) {
		for (;;) {
			u64 value = rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object);
			if (value < max) {
				_result_u64 _t2;
				_result_ok(&(u64[]) { value }, (_result*)(&_t2), sizeof(u64));
				return _t2;
			}
		}
	} else {
		u64 mask = (_unlikely_(bit_len == 63) ? (((u64)(0x7FFFFFFFFFFFFFFFU))) : ((u64)(((((u64)(1U)) << ((int)(bit_len + 1)))) - 1U)));
		for (;;) {
			u64 value = (rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object) & mask);
			if (value < max) {
				_result_u64 _t3;
				_result_ok(&(u64[]) { value }, (_result*)(&_t3), sizeof(u64));
				return _t3;
			}
		}
	}
	_result_u64 _t4;
	_result_ok(&(u64[]) { ((u64)(0U)) }, (_result*)(&_t4), sizeof(u64));
	return _t4;
}

// Attr: [inline]
inline _result_u32 rand__PRNG_u32_in_range(rand__PRNG* rng, u32 min, u32 max) {
	if (max <= min) {
		return (_result_u32){ .is_error=true, .err=_v_error(_SLIT("max must be greater than min")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_u32 _t3 = rand__PRNG_u32n(rng, (u32)(max - min));
	if (_t3.is_error) {
		_result_u32 _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	_result_u32 _t2;
	_result_ok(&(u32[]) { (u32)(min +  (*(u32*)_t3.data)) }, (_result*)(&_t2), sizeof(u32));
	return _t2;
}

// Attr: [inline]
inline _result_u64 rand__PRNG_u64_in_range(rand__PRNG* rng, u64 min, u64 max) {
	if (max <= min) {
		return (_result_u64){ .is_error=true, .err=_v_error(_SLIT("max must be greater than min")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_u64 _t3 = rand__PRNG_u64n(rng, (u64)(max - min));
	if (_t3.is_error) {
		_result_u64 _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	_result_u64 _t2;
	_result_ok(&(u64[]) { (u64)(min +  (*(u64*)_t3.data)) }, (_result*)(&_t2), sizeof(u64));
	return _t2;
}

// Attr: [inline]
inline i8 rand__PRNG_i8(rand__PRNG* rng) {
	i8 _t1 = ((i8)(rand__PRNG_name_table[rng->_typ]._method_u8(rng->_object)));
	return _t1;
}

// Attr: [inline]
inline i16 rand__PRNG_i16(rand__PRNG* rng) {
	i16 _t1 = ((i16)(rand__PRNG_name_table[rng->_typ]._method_u16(rng->_object)));
	return _t1;
}

// Attr: [inline]
inline int rand__PRNG_int(rand__PRNG* rng) {
	int _t1 = ((int)(rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object)));
	return _t1;
}

// Attr: [inline]
inline i64 rand__PRNG_i64(rand__PRNG* rng) {
	i64 _t1 = ((i64)(rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object)));
	return _t1;
}

// Attr: [inline]
inline int rand__PRNG_int31(rand__PRNG* rng) {
	int _t1 = ((int)((rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object) & _const_rand__constants__u31_mask)));
	return _t1;
}

// Attr: [inline]
inline i64 rand__PRNG_int63(rand__PRNG* rng) {
	i64 _t1 = ((i64)((rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object) & _const_rand__constants__u63_mask)));
	return _t1;
}

// Attr: [inline]
inline _result_int rand__PRNG_intn(rand__PRNG* rng, int max) {
	if (max <= 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("max has to be positive.")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_u32 _t3 = rand__PRNG_u32n(rng, ((u32)(max)));
	if (_t3.is_error) {
		_result_int _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	_result_int _t2;
	_result_ok(&(int[]) { ((int)( (*(u32*)_t3.data))) }, (_result*)(&_t2), sizeof(int));
	return _t2;
}

// Attr: [inline]
inline _result_i64 rand__PRNG_i64n(rand__PRNG* rng, i64 max) {
	if (max <= 0) {
		return (_result_i64){ .is_error=true, .err=_v_error(_SLIT("max has to be positive.")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_u64 _t3 = rand__PRNG_u64n(rng, ((u64)(max)));
	if (_t3.is_error) {
		_result_i64 _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	_result_i64 _t2;
	_result_ok(&(i64[]) { ((i64)( (*(u64*)_t3.data))) }, (_result*)(&_t2), sizeof(i64));
	return _t2;
}

// Attr: [inline]
inline _result_int rand__PRNG_int_in_range(rand__PRNG* rng, int min, int max) {
	if (max <= min) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("max must be greater than min")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t3 = rand__PRNG_intn(rng, (int)(max - min));
	if (_t3.is_error) {
		_result_int _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	_result_int _t2;
	_result_ok(&(int[]) { (int)(min +  (*(int*)_t3.data)) }, (_result*)(&_t2), sizeof(int));
	return _t2;
}

// Attr: [inline]
inline _result_i64 rand__PRNG_i64_in_range(rand__PRNG* rng, i64 min, i64 max) {
	if (max <= min) {
		return (_result_i64){ .is_error=true, .err=_v_error(_SLIT("max must be greater than min")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_i64 _t3 = rand__PRNG_i64n(rng, (i64)(max - min));
	if (_t3.is_error) {
		_result_i64 _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	_result_i64 _t2;
	_result_ok(&(i64[]) { (i64)(min +  (*(i64*)_t3.data)) }, (_result*)(&_t2), sizeof(i64));
	return _t2;
}

// Attr: [inline]
inline f32 rand__PRNG_f32(rand__PRNG* rng) {
	f32 _t1 = ((f32)((f64)(((rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object) >> 9U)) * _const_rand__constants__reciprocal_2_23rd)));
	return _t1;
}

// Attr: [inline]
inline f32 rand__PRNG_f32cp(rand__PRNG* rng) {
	u32 x = rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object);
	u32 exp = ((u32)(126U));
	u32 mask = (((u32)(1U)) << 31U);
	if (_unlikely_(x == 0U)) {
		x = rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object);
		exp -= 31U;
	}
	for (;;) {
		if ((x & mask) != 0U) {
			mask >>= 1U;
			exp -= 1U;
		} else {
			break;
		}
	}
	if (exp < (118)) {
		x = rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object);
	}
	x = (((exp << 23U)) | (((x >> 8U)) & _const_rand__constants__ieee754_mantissa_f32_mask));
	f32 _t1 = math__bits__f32_from_bits(x);
	return _t1;
}

// Attr: [inline]
inline f64 rand__PRNG_f64(rand__PRNG* rng) {
	f64 _t1 = ((f64)((f64)(((rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object) >> 12U)) * _const_rand__constants__reciprocal_2_52nd)));
	return _t1;
}

// Attr: [inline]
inline f64 rand__PRNG_f64cp(rand__PRNG* rng) {
	u64 x = rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object);
	u64 exp = ((u64)(1022U));
	u64 mask = (((u64)(1U)) << 63U);
	u32 bitcount = ((u32)(0U));
	if (_unlikely_(x == 0U)) {
		x = rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object);
		exp -= 31U;
	}
	for (;;) {
		if ((x & mask) != 0U) {
			mask >>= 1U;
			bitcount += 1U;
		} else {
			break;
		}
	}
	exp -= bitcount;
	if (bitcount > 11U) {
		x = rand__PRNG_name_table[rng->_typ]._method_u64(rng->_object);
	}
	x = (((exp << 52U)) | ((x & _const_rand__constants__ieee754_mantissa_f64_mask)));
	f64 _t1 = math__bits__f64_from_bits(x);
	return _t1;
}

// Attr: [inline]
inline _result_f32 rand__PRNG_f32n(rand__PRNG* rng, f32 max) {
	if (max < 0) {
		return (_result_f32){ .is_error=true, .err=_v_error(_SLIT("max has to be non-negative.")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_f32 _t2;
	_result_ok(&(f32[]) { (f32)(rand__PRNG_f32(rng) * max) }, (_result*)(&_t2), sizeof(f32));
	return _t2;
}

// Attr: [inline]
inline _result_f64 rand__PRNG_f64n(rand__PRNG* rng, f64 max) {
	if (max < 0) {
		return (_result_f64){ .is_error=true, .err=_v_error(_SLIT("max has to be non-negative.")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_f64 _t2;
	_result_ok(&(f64[]) { (f64)(rand__PRNG_f64(rng) * max) }, (_result*)(&_t2), sizeof(f64));
	return _t2;
}

// Attr: [inline]
inline _result_f32 rand__PRNG_f32_in_range(rand__PRNG* rng, f32 min, f32 max) {
	if (max < min) {
		return (_result_f32){ .is_error=true, .err=_v_error(_SLIT("max must be greater than or equal to min")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_f32 _t3 = rand__PRNG_f32n(rng, (f32)(max - min));
	if (_t3.is_error) {
		_result_f32 _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	_result_f32 _t2;
	_result_ok(&(f32[]) { (f32)(min +  (*(f32*)_t3.data)) }, (_result*)(&_t2), sizeof(f32));
	return _t2;
}

// Attr: [inline]
inline _result_f64 rand__PRNG_f64_in_range(rand__PRNG* rng, f64 min, f64 max) {
	if (max < min) {
		return (_result_f64){ .is_error=true, .err=_v_error(_SLIT("max must be greater than or equal to min")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_f64 _t3 = rand__PRNG_f64n(rng, (f64)(max - min));
	if (_t3.is_error) {
		_result_f64 _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 	_result_f64 _t2;
	_result_ok(&(f64[]) { (f64)(min +  (*(f64*)_t3.data)) }, (_result*)(&_t2), sizeof(f64));
	return _t2;
}

string rand__PRNG_ulid(rand__PRNG* rng) {
	string _t1 = rand__internal_ulid_at_millisecond(rng, ((u64)(time__Time_unix_milli(ADDR(time__Time, time__utc())))));
	return _t1;
}

string rand__PRNG_ulid_at_millisecond(rand__PRNG* rng, u64 unix_time_milli) {
	string _t1 = rand__internal_ulid_at_millisecond(rng, unix_time_milli);
	return _t1;
}

string rand__PRNG_string_from_set(rand__PRNG* rng, string charset, int len) {
	string _t1 = rand__internal_string_from_set(rng, charset, len);
	return _t1;
}

string rand__PRNG_string(rand__PRNG* rng, int len) {
	string _t1 = rand__internal_string_from_set(rng, _const_rand__english_letters, len);
	return _t1;
}

string rand__PRNG_hex(rand__PRNG* rng, int len) {
	string _t1 = rand__internal_string_from_set(rng, _const_rand__hex_chars, len);
	return _t1;
}

string rand__PRNG_ascii(rand__PRNG* rng, int len) {
	string _t1 = rand__internal_string_from_set(rng, _const_rand__ascii_chars, len);
	return _t1;
}

// Attr: [inline]
inline void rand__PRNG_fill_buffer_from_set(rand__PRNG* rng, string charset, Array_u8* buf) {
	rand__internal_fill_buffer_from_set(rng, charset, buf);
}

_result_bool rand__PRNG_bernoulli(rand__PRNG* rng, f64 p) {
	if (p < 0 || p > 1) {
		return (_result_bool){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x1fe0f, {.d_f64 = p}}, {_SLIT(" is not a valid probability value."), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_bool _t2;
	_result_ok(&(bool[]) { rand__PRNG_f64(rng) <= p }, (_result*)(&_t2), sizeof(bool));
	return _t2;
}

_result_f64 rand__PRNG_normal(rand__PRNG* rng, rand__config__NormalConfigStruct conf) {
	_result_multi_return_f64_f64 _t1 = rand__PRNG_normal_pair(rng, conf);
	if (_t1.is_error) {
		_result_f64 _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	multi_return_f64_f64 mr_10292 =  (*(multi_return_f64_f64*)_t1.data);
	f64 x = mr_10292.arg0;
	_result_f64 _t3;
	_result_ok(&(f64[]) { x }, (_result*)(&_t3), sizeof(f64));
	return _t3;
}

_result_multi_return_f64_f64 rand__PRNG_normal_pair(rand__PRNG* rng, rand__config__NormalConfigStruct conf) {
	if (conf.sigma <= 0) {
		return (_result_multi_return_f64_f64){ .is_error=true, .err=_v_error(_SLIT("Standard deviation must be positive")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	for (;;) {
		_result_f64 _t2 = rand__PRNG_f64_in_range(rng, -1, 1);
		if (_t2.is_error) {
			IError err = _t2.err;
			*(f64*) _t2.data = 0.0;
		}
		
 		f64 u =  (*(f64*)_t2.data);
		_result_f64 _t3 = rand__PRNG_f64_in_range(rng, -1, 1);
		if (_t3.is_error) {
			IError err = _t3.err;
			*(f64*) _t3.data = 0.0;
		}
		
 		f64 v =  (*(f64*)_t3.data);
		f64 s = (f64)((f64)(u * u) + (f64)(v * v));
		if (s >= 1 || s == 0) {
			continue;
		}
		f64 t = rand__msqrt((f64)((f64)(-2 * rand__mlog(s)) / s));
		f64 x = (f64)(conf.mu + (f64)((f64)(conf.sigma * t) * u));
		f64 y = (f64)(conf.mu + (f64)((f64)(conf.sigma * t) * v));
		_result_multi_return_f64_f64 _t4;
		_result_ok(&(multi_return_f64_f64[]) { (multi_return_f64_f64){.arg0=x, .arg1=y} }, (_result*)(&_t4), sizeof(multi_return_f64_f64));
		return _t4;
	}
	return (_result_multi_return_f64_f64){ .is_error=true, .err=_v_error(_SLIT("Implementation error. Please file an issue.")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int rand__PRNG_binomial(rand__PRNG* rng, int n, f64 p) {
	if (p < 0 || p > 1) {
		return (_result_int){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0x1fe0f, {.d_f64 = p}}, {_SLIT(" is not a valid probability value."), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	int count = 0;
	for (int _t2 = 0; _t2 < n; ++_t2) {
		_result_bool _t3 = rand__PRNG_bernoulli(rng, p);
		if (_t3.is_error) {
			_result_int _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
 		if ( (*(bool*)_t3.data)) {
			count++;
		}
	}
	_result_int _t5;
	_result_ok(&(int[]) { count }, (_result*)(&_t5), sizeof(int));
	return _t5;
}

f64 rand__PRNG_exponential(rand__PRNG* rng, f64 lambda) {
	if (lambda <= 0) {
		_v_panic(_SLIT("The rate (lambda) must be positive."));
		VUNREACHABLE();
	}
	f64 _t1 = (f64)(-rand__mlog(rand__PRNG_f64(rng)) / lambda);
	return _t1;
}

// Attr: [manualfree]
rand__PRNG* rand__new_default(rand__config__PRNGConfigStruct config_) {
	rand__wyrand__WyRandRNG* rng = ((rand__wyrand__WyRandRNG*)memdup(&(rand__wyrand__WyRandRNG){.PRNGBuffer = ((rand__buffer__PRNGBuffer){.bytes_left = 0,.buffer = 0,}),.state = rand__seed__time_seed_64(),.bytes_left = 0,.buffer = 0,}, sizeof(rand__wyrand__WyRandRNG)));
	rand__wyrand__WyRandRNG_seed(rng, config_.seed_);
	array_free(&config_.seed_);
	rand__PRNG* _t1 = HEAP(rand__PRNG, I_rand__wyrand__WyRandRNG_to_Interface_rand__PRNG(rng));
	return _t1;
}

rand__PRNG* rand__get_current_rng(void) {
	return default_rng;
}

void rand__set_rng(rand__PRNG* rng) {
	default_rng = rng;
}

void rand__seed(Array_u32 seed) {
	rand__PRNG_name_table[default_rng->_typ]._method_seed(default_rng->_object, seed);
}

u8 rand__u8(void) {
	u8 _t1 = rand__PRNG_name_table[default_rng->_typ]._method_u8(default_rng->_object);
	return _t1;
}

u16 rand__u16(void) {
	u16 _t1 = rand__PRNG_name_table[default_rng->_typ]._method_u16(default_rng->_object);
	return _t1;
}

u32 rand__u32(void) {
	u32 _t1 = rand__PRNG_name_table[default_rng->_typ]._method_u32(default_rng->_object);
	return _t1;
}

u64 rand__u64(void) {
	u64 _t1 = rand__PRNG_name_table[default_rng->_typ]._method_u64(default_rng->_object);
	return _t1;
}

_result_u32 rand__u32n(u32 max) {
	_result_u32 _t1 = rand__PRNG_u32n(default_rng, max);
	return _t1;
}

_result_u64 rand__u64n(u64 max) {
	_result_u64 _t1 = rand__PRNG_u64n(default_rng, max);
	return _t1;
}

_result_u32 rand__u32_in_range(u32 min, u32 max) {
	_result_u32 _t1 = rand__PRNG_u32_in_range(default_rng, min, max);
	return _t1;
}

_result_u64 rand__u64_in_range(u64 min, u64 max) {
	_result_u64 _t1 = rand__PRNG_u64_in_range(default_rng, min, max);
	return _t1;
}

i16 rand__i16(void) {
	i16 _t1 = rand__PRNG_i16(default_rng);
	return _t1;
}

int rand__int(void) {
	int _t1 = rand__PRNG_int(default_rng);
	return _t1;
}

_result_int rand__intn(int max) {
	_result_int _t1 = rand__PRNG_intn(default_rng, max);
	return _t1;
}

_result_int rand__int_in_range(int min, int max) {
	_result_int _t1 = rand__PRNG_int_in_range(default_rng, min, max);
	return _t1;
}

int rand__int31(void) {
	int _t1 = rand__PRNG_int31(default_rng);
	return _t1;
}

i64 rand__i64(void) {
	i64 _t1 = rand__PRNG_i64(default_rng);
	return _t1;
}

_result_i64 rand__i64n(i64 max) {
	_result_i64 _t1 = rand__PRNG_i64n(default_rng, max);
	return _t1;
}

_result_i64 rand__i64_in_range(i64 min, i64 max) {
	_result_i64 _t1 = rand__PRNG_i64_in_range(default_rng, min, max);
	return _t1;
}

i64 rand__int63(void) {
	i64 _t1 = rand__PRNG_int63(default_rng);
	return _t1;
}

f32 rand__f32(void) {
	f32 _t1 = rand__PRNG_f32(default_rng);
	return _t1;
}

f32 rand__f32cp(void) {
	f32 _t1 = rand__PRNG_f32cp(default_rng);
	return _t1;
}

f64 rand__f64(void) {
	f64 _t1 = rand__PRNG_f64(default_rng);
	return _t1;
}

f64 rand__f64cp(void) {
	f64 _t1 = rand__PRNG_f64cp(default_rng);
	return _t1;
}

_result_f32 rand__f32n(f32 max) {
	_result_f32 _t1 = rand__PRNG_f32n(default_rng, max);
	return _t1;
}

_result_f64 rand__f64n(f64 max) {
	_result_f64 _t1 = rand__PRNG_f64n(default_rng, max);
	return _t1;
}

_result_f32 rand__f32_in_range(f32 min, f32 max) {
	_result_f32 _t1 = rand__PRNG_f32_in_range(default_rng, min, max);
	return _t1;
}

_result_f64 rand__f64_in_range(f64 min, f64 max) {
	_result_f64 _t1 = rand__PRNG_f64_in_range(default_rng, min, max);
	return _t1;
}

_result_Array_u8 rand__bytes(int bytes_needed) {
	_result_Array_u8 _t1 = rand__PRNG_bytes(default_rng, bytes_needed);
	return _t1;
}

void rand__read(Array_u8* buf) {
	rand__read_internal(default_rng, buf);
}

string rand__ulid(void) {
	string _t1 = rand__PRNG_ulid(default_rng);
	return _t1;
}

string rand__ulid_at_millisecond(u64 unix_time_milli) {
	string _t1 = rand__PRNG_ulid_at_millisecond(default_rng, unix_time_milli);
	return _t1;
}

string rand__string_from_set(string charset, int len) {
	string _t1 = rand__PRNG_string_from_set(default_rng, charset, len);
	return _t1;
}

// Attr: [inline]
inline void rand__fill_buffer_from_set(string charset, Array_u8* buf) {
	rand__PRNG_fill_buffer_from_set(default_rng, charset, buf);
}

string rand__string(int len) {
	string _t1 = rand__string_from_set(_const_rand__english_letters, len);
	return _t1;
}

string rand__hex(int len) {
	string _t1 = rand__string_from_set(_const_rand__hex_chars, len);
	return _t1;
}

string rand__ascii(int len) {
	string _t1 = rand__string_from_set(_const_rand__ascii_chars, len);
	return _t1;
}

_result_bool rand__bernoulli(f64 p) {
	_result_bool _t1 = rand__PRNG_bernoulli(default_rng, p);
	return _t1;
}

_result_f64 rand__normal(rand__config__NormalConfigStruct config_) {
	_result_f64 _t1 = rand__PRNG_normal(default_rng, config_);
	return _t1;
}

_result_multi_return_f64_f64 rand__normal_pair(rand__config__NormalConfigStruct config_) {
	_result_multi_return_f64_f64 _t1 = rand__PRNG_normal_pair(default_rng, config_);
	return _t1;
}

_result_int rand__binomial(int n, f64 p) {
	_result_int _t1 = rand__PRNG_binomial(default_rng, n, p);
	return _t1;
}

f64 rand__exponential(f64 lambda) {
	f64 _t1 = rand__PRNG_exponential(default_rng, lambda);
	return _t1;
}

_result_multi_return_os__File_string io__util__temp_file(io__util__TempFileOptions tfo) {
	string d = tfo.path;
	if ((d).len == 0) {
		d = os__temp_dir();
	}
	_result_void _t1 = os__ensure_folder_is_writable(d);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_multi_return_os__File_string){ .is_error=true, .err=_v_error(string__plus(_SLIT("temp_file"),  str_intp(2, _MOV((StrIntpData[]){{_SLIT(" could not create temporary file in \""), 0xfe10, {.d_s = d}}, {_SLIT("\". Please ensure write permissions."), 0, { .d_c = 0 }}})))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 ;
	d = string_trim_right(d, _const_os__path_separator);
	_result_multi_return_string_string _t3 = io__util__prefix_and_suffix(tfo.pattern);
	if (_t3.is_error) {
		IError err = _t3.err;
		return (_result_multi_return_os__File_string){ .is_error=true, .err=_v_error(string__plus(_SLIT("temp_file"),  str_intp(2, _MOV((StrIntpData[]){{_SLIT(" "), 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT0, 0, { .d_c = 0 }}})))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	multi_return_string_string mr_547 =  (*(multi_return_string_string*)_t3.data);
	string prefix = mr_547.arg0;
	string suffix = mr_547.arg1;
	for (int retry = 0; retry < _const_io__util__retries; retry++) {
		string path = os__join_path(d, new_array_from_c_array(1, 1, sizeof(string), _MOV((string[1]){string__plus(string__plus(prefix, io__util__random_number()), suffix)})));
		string mode = _SLIT("rw+");
		_result_os__File _t5 = os__open_file(path, mode, new_array_from_c_array_noscan(1, 1, sizeof(int), _MOV((int[1]){0600})));
		if (_t5.is_error) {
			IError err = _t5.err;
			continue;
		}
		
 		os__File file =  (*(os__File*)_t5.data);
		if (os__exists(path) && os__is_file(path)) {
			_result_multi_return_os__File_string _t6;
			_result_ok(&(multi_return_os__File_string[]) { (multi_return_os__File_string){.arg0=file, .arg1=path} }, (_result*)(&_t6), sizeof(multi_return_os__File_string));
			return _t6;
		}
	}
	return (_result_multi_return_os__File_string){ .is_error=true, .err=_v_error(string__plus(_SLIT("temp_file"),  str_intp(3, _MOV((StrIntpData[]){{_SLIT(" could not create temporary file in \""), 0xfe10, {.d_s = d}}, {_SLIT("\". Retry limit ("), 0xfe07, {.d_i32 = _const_io__util__retries}}, {_SLIT(") exhausted. Please ensure write permissions."), 0, { .d_c = 0 }}})))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL _result_string io__util__error_for_temporary_folder(string fn_name, string d) {
	return (_result_string){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = fn_name}}, {_SLIT(" could not create temporary directory \""), 0xfe10, {.d_s = d}}, {_SLIT("\". Please ensure you have write permissions for it."), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_string io__util__temp_dir(io__util__TempFileOptions tdo) {
	string d = tdo.path;
	if ((d).len == 0) {
		d = os__temp_dir();
	}
	_result_void _t1 = os__ensure_folder_is_writable(d);
	if (_t1.is_error) {
		IError err = _t1.err;
		_result_string _t2 = io__util__error_for_temporary_folder(_SLIT("temp_dir"), d);
		return _t2;
	}
	
 ;
	d = string_trim_right(d, _const_os__path_separator);
	_result_multi_return_string_string _t3 = io__util__prefix_and_suffix(tdo.pattern);
	if (_t3.is_error) {
		IError err = _t3.err;
		return (_result_string){ .is_error=true, .err=_v_error(string__plus(_SLIT("temp_dir"),  str_intp(2, _MOV((StrIntpData[]){{_SLIT(" "), 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT0, 0, { .d_c = 0 }}})))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	multi_return_string_string mr_1655 =  (*(multi_return_string_string*)_t3.data);
	string prefix = mr_1655.arg0;
	string suffix = mr_1655.arg1;
	for (int retry = 0; retry < _const_io__util__retries; retry++) {
		string path = os__join_path(d, new_array_from_c_array(1, 1, sizeof(string), _MOV((string[1]){string__plus(string__plus(prefix, io__util__random_number()), suffix)})));
		_result_void _t5 = os__mkdir_all(path, ((os__MkdirParams){.mode = 0777,}));
		if (_t5.is_error) {
			IError err = _t5.err;
			continue;
		}
		
 ;
		if (os__is_dir(path) && os__exists(path)) {
			_result_void _t6 = os__ensure_folder_is_writable(path);
			if (_t6.is_error) {
				IError err = _t6.err;
				_result_string _t7 = io__util__error_for_temporary_folder(_SLIT("temp_dir"), d);
				return _t7;
			}
			
 ;
			_result_string _t8;
			_result_ok(&(string[]) { path }, (_result*)(&_t8), sizeof(string));
			return _t8;
		}
	}
	return (_result_string){ .is_error=true, .err=_v_error( str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = _SLIT("temp_dir")}}, {_SLIT(" could not create temporary directory \""), 0xfe10, {.d_s = d}}, {_SLIT("\". Retry limit ("), 0xfe07, {.d_i32 = _const_io__util__retries}}, {_SLIT(") exhausted."), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL string io__util__random_number(void) {
	_result_u32 _t1 = rand__u32n(1000000000U);
	if (_t1.is_error) {
		IError err = _t1.err;
		*(u32*) _t1.data = 0U;
	}
	
 	string s = u32_str(((u32)(1000000000 + ((u32)(((u32)(os__getpid())) +  (*(u32*)_t1.data))))));
	string _t2 = string_substr(s, 1, s.len);
	return _t2;
}

VV_LOCAL_SYMBOL _result_multi_return_string_string io__util__prefix_and_suffix(string pattern) {
	if (string_contains(pattern, _const_os__path_separator)) {
		return (_result_multi_return_string_string){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("pattern cannot contain path separators ("), 0xfe10, {.d_s = _const_os__path_separator}}, {_SLIT(")."), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_option_multi_return_string_string _t2 = string_rsplit_once(pattern, _SLIT("*"));
	if (_t2.state != 0) {
		IError err = _t2.err;
		*(multi_return_string_string*) _t2.data = (multi_return_string_string){.arg0=pattern,.arg1=_SLIT("")};
	}
	
 	multi_return_string_string mr_2508 =  (*(multi_return_string_string*)_t2.data);
	string prefix = mr_2508.arg0;
	string suffix = mr_2508.arg1;
	_result_multi_return_string_string _t3;
	_result_ok(&(multi_return_string_string[]) { (multi_return_string_string){.arg0=prefix, .arg1=suffix} }, (_result*)(&_t3), sizeof(multi_return_string_string));
	return _t3;
}

#if defined(_WIN32)
#else
#endif
net__Addr net__new_ip6(u16 port, Array_fixed_u8_16 addr) {
	u16 n_port = net__conv__hton16(port);
	net__Addr a = ((net__Addr){.f = ((u8)(net__AddrFamily__ip6)),.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = n_port,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
	vmemcpy(&a.addr.Ip6.addr[0], &addr[0], 16);
	return a;
}

net__Addr net__new_ip(u16 port, Array_fixed_u8_4 addr) {
	u16 n_port = net__conv__hton16(port);
	net__Addr a = ((net__Addr){.f = ((u8)(net__AddrFamily__ip)),.addr = ((net__AddrData){.Ip = ((net__Ip){.port = n_port,.addr = {0, 0, 0, 0},.sin_pad = {0, 0, 0, 0, 0, 0, 0, 0},}),}),});
	vmemcpy(&a.addr.Ip.addr[0], &addr[0], 4);
	return a;
}

VV_LOCAL_SYMBOL _result_net__Addr net__temp_unix(void) {
	_result_multi_return_os__File_string _t1 = io__util__temp_file(((io__util__TempFileOptions){.path = os__temp_dir(),.pattern = (string){.str=(byteptr)"", .is_lit=1},}));
	if (_t1.is_error) {
		_result_net__Addr _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	multi_return_os__File_string mr_962 =  (*(multi_return_os__File_string*)_t1.data);
	os__File file = mr_962.arg0;
	string filename = mr_962.arg1;
	os__File_close(&file);
	_result_void _t3 = os__rm(filename);
	if (_t3.is_error) {
		_result_net__Addr _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 ;
	_result_Array_net__Addr _t5 = net__resolve_addrs(filename, net__AddrFamily__unix, net__SocketType__udp);
	if (_t5.is_error) {
		_result_net__Addr _t6;
		memcpy(&_t6, &_t5, sizeof(_result));
		return _t6;
	}
	
 	Array_net__Addr addrs =  (*(Array_net__Addr*)_t5.data);
	_result_net__Addr _t7;
	_result_ok(&(net__Addr[]) { (*(net__Addr*)array_get(addrs, 0)) }, (_result*)(&_t7), sizeof(net__Addr));
	return _t7;
}

net__AddrFamily net__Addr_family(net__Addr a) {
	net__AddrFamily _t1 = ((net__AddrFamily)(a.f));
	return _t1;
}

_result_u16 net__Addr_port(net__Addr a) {
	net__AddrFamily /*A*/ _t1 = ((net__AddrFamily)(a.f));
	
	if (_t1 == (net__AddrFamily__ip)) {
		{ // Unsafe block
			_result_u16 _t2;
			_result_ok(&(u16[]) { net__conv__ntoh16(a.addr.Ip.port) }, (_result*)(&_t2), sizeof(u16));
			return _t2;
		}
	}
	else if (_t1 == (net__AddrFamily__ip6)) {
		{ // Unsafe block
			_result_u16 _t3;
			_result_ok(&(u16[]) { net__conv__ntoh16(a.addr.Ip6.port) }, (_result*)(&_t3), sizeof(u16));
			return _t3;
		}
	}
	else if (_t1 == (net__AddrFamily__unix)) {
		return (_result_u16){ .is_error=true, .err=_v_error(_SLIT("unix addr has no port")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	else if (_t1 == (net__AddrFamily__unspec)) {
		return (_result_u16){ .is_error=true, .err=_v_error(_SLIT("cannot find port for unspec addr family")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_u16){0};
}

string net__Ip_str(net__Ip a) {
	Array_fixed_char_24 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	char* res = ((char*)(inet_ntop(net__AddrFamily__ip, &a.addr, &buf[0], 24)));
	if (res == 0) {
		string _t1 = _SLIT("<Unknown>");
		return _t1;
	}
	string saddr = cstring_to_vstring(&buf[0]);
	u16 port = net__conv__ntoh16(a.port);
	string _t2 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = saddr}}, {_SLIT(":"), 0xfe04, {.d_u16 = port}}, {_SLIT0, 0, { .d_c = 0 }}}));
	return _t2;
}

string net__Ip6_str(net__Ip6 a) {
	Array_fixed_char_46 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	char* res = ((char*)(inet_ntop(net__AddrFamily__ip6, &a.addr, &buf[0], 46)));
	if (res == 0) {
		string _t1 = _SLIT("<Unknown>");
		return _t1;
	}
	string saddr = cstring_to_vstring(&buf[0]);
	u16 port = net__conv__ntoh16(a.port);
	string _t2 =  str_intp(3, _MOV((StrIntpData[]){{_SLIT("["), 0xfe10, {.d_s = saddr}}, {_SLIT("]:"), 0xfe04, {.d_u16 = port}}, {_SLIT0, 0, { .d_c = 0 }}}));
	return _t2;
}

u32 net__Addr_len(net__Addr a) {
	net__AddrFamily /*A*/ _t1 = net__Addr_family(a);
	
	if (_t1 == (net__AddrFamily__ip)) {
		u32 _t2 = (u32)(sizeof(net__Ip) + _const_net__aoffset);
		return _t2;
	}
	else if (_t1 == (net__AddrFamily__ip6)) {
		u32 _t3 = (u32)(sizeof(net__Ip6) + _const_net__aoffset);
		return _t3;
	}
	else if (_t1 == (net__AddrFamily__unix)) {
		u32 _t4 = (u32)(sizeof(net__Unix) + _const_net__aoffset);
		return _t4;
	}
	else {
		_v_panic(_SLIT("Unknown address family"));
		VUNREACHABLE();
	}
	return 0;
}

_result_Array_net__Addr net__resolve_addrs(string addr, net__AddrFamily family, net__SocketType type) {

	if (family == (net__AddrFamily__ip) || family == (net__AddrFamily__ip6) || family == (net__AddrFamily__unspec)) {
		_result_Array_net__Addr _t1 = net__resolve_ipaddrs(addr, family, type);
		return _t1;
	}
	else if (family == (net__AddrFamily__unix)) {
		net__Unix resolved = ((net__Unix){.path = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},});
		if (addr.len > _const_net__max_unix_path) {
			return (_result_Array_net__Addr){ .is_error=true, .err=_v_error(_SLIT("net: resolve_addrs Unix socket address is too long")), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		memcpy(&resolved.path, addr.str, addr.len);
		_result_Array_net__Addr _t3;
		_result_ok(&(Array_net__Addr[]) { new_array_from_c_array_noscan(1, 1, sizeof(net__Addr), _MOV((net__Addr[1]){((net__Addr){.f = ((u8)(net__AddrFamily__unix)),.addr = ((net__AddrData){.Unix = resolved,}),})})) }, (_result*)(&_t3), sizeof(Array_net__Addr));
		return _t3;
	}
	return (_result_Array_net__Addr){0};
}

_result_Array_net__Addr net__resolve_addrs_fuzzy(string addr, net__SocketType type) {
	if (addr.len == 0) {
		return (_result_Array_net__Addr){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	if (string_contains(addr, _SLIT(":"))) {
		_result_Array_net__Addr _t2 = net__resolve_addrs(addr, net__AddrFamily__unspec, type);
		return _t2;
	}
	_result_Array_net__Addr _t3 = net__resolve_addrs(addr, net__AddrFamily__unix, type);
	return _t3;
}

_result_Array_net__Addr net__resolve_ipaddrs(string addr, net__AddrFamily family, net__SocketType typ) {
	bool net__resolve_ipaddrs_defer_0 = false;
	struct addrinfo* results;
	_result_multi_return_string_u16 _t1 = net__split_address(addr);
	if (_t1.is_error) {
		_result_Array_net__Addr _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	multi_return_string_u16 mr_3993 =  (*(multi_return_string_u16*)_t1.data);
	string address = mr_3993.arg0;
	u16 port = mr_3993.arg1;
	if (string_at(addr, 0) == ':') {

		if (family == (net__AddrFamily__ip6)) {
			_result_Array_net__Addr _t3;
			_result_ok(&(Array_net__Addr[]) { new_array_from_c_array_noscan(1, 1, sizeof(net__Addr), _MOV((net__Addr[1]){net__new_ip6(port, _const_net__addr_ip6_any)})) }, (_result*)(&_t3), sizeof(Array_net__Addr));
			return _t3;
		}
		else if (family == (net__AddrFamily__ip) || family == (net__AddrFamily__unspec)) {
			_result_Array_net__Addr _t4;
			_result_ok(&(Array_net__Addr[]) { new_array_from_c_array_noscan(1, 1, sizeof(net__Addr), _MOV((net__Addr[1]){net__new_ip(port, _const_net__addr_ip_any)})) }, (_result*)(&_t4), sizeof(Array_net__Addr));
			return _t4;
		}
		else {
		}
	}
	struct addrinfo hints;
	vmemset(&hints, 0, ((int)(sizeof(struct addrinfo))));
	hints.ai_family = ((int)(family));
	hints.ai_socktype = ((int)(typ));
	hints.ai_flags = AI_PASSIVE;
	results = ((struct addrinfo*)(((void*)0)));
	string sport =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe04, {.d_u16 = port}}, {_SLIT0, 0, { .d_c = 0 }}}));
	#if defined(_WIN32)
	{
	}
	#else
	{
		int x = getaddrinfo(((char*)(address.str)), ((char*)(sport.str)), &hints, &results);
		_result_void _t6 = net__wrap_error(x);
		if (_t6.is_error) {
			_result_Array_net__Addr _t7;
			memcpy(&_t7, &_t6, sizeof(_result));
			return _t7;
		}
		
 ;
	}
	#endif
	net__resolve_ipaddrs_defer_0 = true;
	Array_net__Addr addresses = __new_array_with_default_noscan(0, 0, sizeof(net__Addr), 0);
	for (struct addrinfo* result = results; !isnil(result); result = result->ai_next) {
		net__AddrFamily /*A*/ _t8 = ((net__AddrFamily)(result->ai_family));
		
		if (_t8 == (net__AddrFamily__ip)) {
			net__Addr new_addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip = ((net__Ip){.port = 0,.addr = {0, 0, 0, 0},.sin_pad = {0, 0, 0, 0, 0, 0, 0, 0},}),}),});
			memcpy(&new_addr, result->ai_addr, result->ai_addrlen);
			array_push_noscan((array*)&addresses, _MOV((net__Addr[]){ new_addr }));
		}
		else if (_t8 == (net__AddrFamily__ip6)) {
			net__Addr new_addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
			memcpy(&new_addr, result->ai_addr, result->ai_addrlen);
			array_push_noscan((array*)&addresses, _MOV((net__Addr[]){ new_addr }));
		}
		else {
			_v_panic( str_intp(2, _MOV((StrIntpData[]){{_SLIT("Unexpected address family "), 0xfe07, {.d_i32 = result->ai_family}}, {_SLIT0, 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	_result_Array_net__Addr _t11;
	_result_ok(&(Array_net__Addr[]) { addresses }, (_result*)(&_t11), sizeof(Array_net__Addr));
		// Defer begin
		if (net__resolve_ipaddrs_defer_0) {
			freeaddrinfo(results);
		}
		// Defer end
	return _t11;
}

string net__Addr_str(net__Addr a) {
	net__AddrFamily /*A*/ _t1 = ((net__AddrFamily)(a.f));
	
	if (_t1 == (net__AddrFamily__ip)) {
		{ // Unsafe block
			string _t2 = net__Ip_str(a.addr.Ip);
			return _t2;
		}
	}
	else if (_t1 == (net__AddrFamily__ip6)) {
		{ // Unsafe block
			string _t3 = net__Ip6_str(a.addr.Ip6);
			return _t3;
		}
	}
	else if (_t1 == (net__AddrFamily__unix)) {
		{ // Unsafe block
			string _t4 = tos_clone(array_slice(new_array_from_c_array_noscan(108, 108, sizeof(u8), a.addr.Unix.path), 0, _const_net__max_unix_path).data);
			return _t4;
		}
	}
	else if (_t1 == (net__AddrFamily__unspec)) {
		string _t5 = _SLIT("<.unspec>");
		return _t5;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}

net__Addr net__addr_from_socket_handle(int handle) {
	net__Addr addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
	u32 size = sizeof(net__Addr);
	getsockname(handle, ((voidptr)(&addr)), &size);
	return addr;
}

_result_net__Addr net__peer_addr_from_socket_handle(int handle) {
	net__Addr addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
	u32 size = sizeof(net__Addr);
	_result_int _t1 = net__socket_error_message(getpeername(handle, ((voidptr)(&addr)), &size), _SLIT("peer_addr_from_socket_handle failed"));
	if (_t1.is_error) {
		_result_net__Addr _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
  (*(int*)_t1.data);
	_result_net__Addr _t3;
	_result_ok(&(net__Addr[]) { addr }, (_result*)(&_t3), sizeof(net__Addr));
	return _t3;
}

int net__shutdown(int handle, net__ShutdownConfig config) {
	int res = shutdown(handle, ((int)(config.how)));
	#if !defined(CUSTOM_DEFINE_net_nonblocking_sockets)
	{
		return res;
	}
	#else
	{
	}
	#endif
	return 0;
}

_result_void net__close(int handle) {
	int _t1;
	#if defined(_WIN32)
	#else
		_t1 = close(handle);
		;
	#endif
	int res = _t1;
	#if !defined(CUSTOM_DEFINE_net_nonblocking_sockets)
	{
		_result_int _t3 = net__socket_error(res);
		if (_t3.is_error) {
			_result_void _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
  (*(int*)_t3.data);
		return (_result_void){0};
	}
	#else
	{
	}
	#endif
	return (_result_void){0};
}

VV_LOCAL_SYMBOL _result_bool net__select(int handle, net__Select test, time__Duration timeout) {
	fd_set set = ((fd_set){EMPTY_STRUCT_INITIALIZATION});
	FD_ZERO(&set);
	FD_SET(handle, &set);
	i64 seconds = timeout / _const_time__second;
	i64 microseconds = time__Duration_microseconds(((timeout - (seconds * _const_time__second))));
	struct timeval *tt = HEAP(struct timeval, (((struct timeval){.tv_sec = ((u64)(seconds)),.tv_usec = ((u64)(microseconds)),})));
	struct timeval* timeval_timeout = &(*(tt));
	if (time__Duration_alias_eq(timeout, _const_net__infinite_timeout)) {
		timeval_timeout = ((struct timeval*)(((void*)0)));
	}

	if (test == (net__Select__read)) {
		_result_int _t1 = net__socket_error(select((int)(handle + 1), &set, NULL, NULL, timeval_timeout));
		if (_t1.is_error) {
			_result_bool _t2;
			memcpy(&_t2, &_t1, sizeof(_result));
			return _t2;
		}
		
  (*(int*)_t1.data);
	}
	else if (test == (net__Select__write)) {
		_result_int _t3 = net__socket_error(select((int)(handle + 1), NULL, &set, NULL, timeval_timeout));
		if (_t3.is_error) {
			_result_bool _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
  (*(int*)_t3.data);
	}
	else if (test == (net__Select__except)) {
		_result_int _t5 = net__socket_error(select((int)(handle + 1), NULL, NULL, &set, timeval_timeout));
		if (_t5.is_error) {
			_result_bool _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
  (*(int*)_t5.data);
	}
	_result_bool _t7;
	_result_ok(&(bool[]) { FD_ISSET(handle, &set) != 0 }, (_result*)(&_t7), sizeof(bool));
	return _t7;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL _result_bool net__select_deadline(int handle, net__Select test, time__Time deadline) {
	bool infinite = time__Time_unix(&deadline) == 0;
	for (;;) {
		if (!(infinite || !time__Time__lt(deadline, time__now()))) break;
		time__Duration timeout = (infinite ? (_const_net__infinite_timeout) : (time__Time__minus(deadline, time__now())));
		_result_bool _t1 = net__select(handle, test, timeout);
		if (_t1.is_error) {
			IError err = _t1.err;
			if (IError_name_table[err._typ]._method_code(err._object) == EINTR) {
				continue;
			}
			return (_result_bool){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 		bool ready =  (*(bool*)_t1.data);
		_result_bool _t3;
		_result_ok(&(bool[]) { ready }, (_result*)(&_t3), sizeof(bool));
		return _t3;
	}
	return (_result_bool){ .is_error=true, .err=_const_net__err_timed_out, .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL _result_void net__wait_for_common(int handle, time__Time deadline, time__Duration timeout, net__Select test) {
	time__Time _t1; /* if prepend */
	if (time__Duration_alias_eq(timeout, _const_net__infinite_timeout)) {
		_t1 = time__unix(0);
	} else if (timeout == 0) {
		_t1 = deadline;
	} else if (timeout < 0) {
		_v_panic(_SLIT("invalid negative timeout"));
		VUNREACHABLE();
	} else {
		_t1 = time__Time_add(ADDR(time__Time, time__now()), timeout);
	}
	time__Time real_deadline =  _t1;
	_result_bool _t2 = net__select_deadline(handle, test, real_deadline);
	if (_t2.is_error) {
		_result_void _t3;
		memcpy(&_t3, &_t2, sizeof(_result));
		return _t3;
	}
	
 	bool ready =  (*(bool*)_t2.data);
	if (ready) {
		return (_result_void){0};
	}
	return (_result_void){ .is_error=true, .err=_const_net__err_timed_out, .data={EMPTY_STRUCT_INITIALIZATION} };
}

VV_LOCAL_SYMBOL _result_void net__wait_for_write(int handle, time__Time deadline, time__Duration timeout) {
	_result_void _t1 = net__wait_for_common(handle, deadline, timeout, net__Select__write);
	return _t1;
}

VV_LOCAL_SYMBOL _result_void net__wait_for_read(int handle, time__Time deadline, time__Duration timeout) {
	_result_void _t1 = net__wait_for_common(handle, deadline, timeout, net__Select__read);
	return _t1;
}

_result_int net__socket_error_message(int potential_code, string s) {
	_result_int _t2 = net__socket_error(potential_code);
	if (_t2.is_error) {
		IError err = _t2.err;
		return (_result_int){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT("; "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	_result_int _t1;
	_result_ok(&(int[]) {  (*(int*)_t2.data) }, (_result*)(&_t1), sizeof(int));
	return _t1;
}

_result_int net__socket_error(int potential_code) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		if (potential_code < 0) {
			int last_error = net__error_code();
			return (_result_int){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("net: socket error: "), 0xfe07, {.d_i32 = last_error}}, {_SLIT0, 0, { .d_c = 0 }}})), last_error), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
	}
	#endif
	_result_int _t3;
	_result_ok(&(int[]) { potential_code }, (_result*)(&_t3), sizeof(int));
	return _t3;
}

_result_void net__wrap_error(int error_code) {
	if (error_code == 0) {
		return (_result_void){0};
	}
	#if defined(_WIN32)
	{
	}
	#else
	{
		return (_result_void){ .is_error=true, .err=error_with_code( str_intp(2, _MOV((StrIntpData[]){{_SLIT("net: socket error: "), 0xfe07, {.d_i32 = error_code}}, {_SLIT0, 0, { .d_c = 0 }}})), error_code), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	#endif
	return (_result_void){0};
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL _result_int net__wrap_read_result(int result) {
	if (result == 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t2;
	_result_ok(&(int[]) { result }, (_result*)(&_t2), sizeof(int));
	return _t2;
}

// Attr: [inline]
inline VV_LOCAL_SYMBOL _result_int net__wrap_write_result(int result) {
	if (result == 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_int _t2;
	_result_ok(&(int[]) { result }, (_result*)(&_t2), sizeof(int));
	return _t2;
}

int net__error_code(void) {
	return errno;
}

VV_LOCAL_SYMBOL void net__init(void) {
}

_result_net__Addr net__Socket_address(net__Socket* s) {
	_result_net__Addr _t1;
	_result_ok(&(net__Addr[]) { net__addr_from_socket_handle(s->handle) }, (_result*)(&_t1), sizeof(net__Addr));
	return _t1;
}

_result_void net__set_blocking(int handle, bool state) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int flags = fcntl(handle, F_GETFL, 0);
		if (state) {
			flags &= ~O_NONBLOCK;
		} else {
			flags |= O_NONBLOCK;
		}
		_result_int _t2 = net__socket_error(fcntl(handle, F_SETFL, flags));
		if (_t2.is_error) {
			_result_void _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
  (*(int*)_t2.data);
	}
	#endif
	return (_result_void){0};
}

_result_net__TcpConn_ptr net__dial_tcp(string oaddress) {
	string address = oaddress;
	_result_Array_net__Addr _t1 = net__resolve_addrs_fuzzy(address, net__SocketType__tcp);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT("; could not resolve address "), 0xfe10, {.d_s = address}}, {_SLIT(" in dial_tcp"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	Array_net__Addr addrs =  (*(Array_net__Addr*)_t1.data);
	Array_IError errs = __new_array_with_default(0, 0, sizeof(IError), 0);
	for (int _t3 = 0; _t3 < addrs.len; ++_t3) {
		net__Addr addr = ((net__Addr*)addrs.data)[_t3];
		_result_net__TcpSocket _t4 = net__new_tcp_socket(net__Addr_family(addr));
		if (_t4.is_error) {
			IError err = _t4.err;
			return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT("; could not create new tcp socket in dial_tcp"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 		net__TcpSocket s =  (*(net__TcpSocket*)_t4.data);
		_result_void _t6 = net__TcpSocket_connect(&s, addr);
		if (_t6.is_error) {
			IError err = _t6.err;
			array_push((array*)&errs, _MOV((IError[]){ err }));
			_result_void _t8 = net__TcpSocket_close(&s);
			if (_t8.is_error) {
				IError err = _t8.err;
				continue;
			}
			
 ;
			continue;
		}
		
 ;
		net__TcpConn* conn = ((net__TcpConn*)memdup(&(net__TcpConn){.sock = s,.handle = 0,.write_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_timeout = _const_net__tcp_default_read_timeout,.write_timeout = _const_net__tcp_default_write_timeout,.is_blocking = true,}, sizeof(net__TcpConn)));
		_result_net__TcpConn_ptr _t9;
		_result_ok(&(net__TcpConn*[]) { conn }, (_result*)(&_t9), sizeof(net__TcpConn*));
		return _t9;
	}
	strings__Builder err_builder = strings__new_builder(1024);
	strings__Builder_write_string(&err_builder,  str_intp(2, _MOV((StrIntpData[]){{_SLIT("dial_tcp failed for address "), 0xfe10, {.d_s = address}}, {_SLIT("\n"), 0, { .d_c = 0 }}})));
	strings__Builder_write_string(&err_builder, _SLIT("tried addrs:\n"));
	for (int i = 0; i < errs.len; i++) {
		net__Addr addr = (*(net__Addr*)array_get(addrs, i));
		IError why = (*(IError*)array_get(errs, i));
		strings__Builder_write_string(&err_builder,  str_intp(3, _MOV((StrIntpData[]){{_SLIT("\t"), 0xfe10, {.d_s = net__Addr_str(addr)}}, {_SLIT(": "), 0xfe10, {.d_s = IError_str(why)}}, {_SLIT("\n"), 0, { .d_c = 0 }}})));
	}
	return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error(strings__Builder_str(&err_builder)), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_net__TcpConn_ptr net__dial_tcp_with_bind(string saddr, string laddr) {
	_result_Array_net__Addr _t1 = net__resolve_addrs_fuzzy(saddr, net__SocketType__tcp);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT("; could not resolve address "), 0xfe10, {.d_s = saddr}}, {_SLIT(" in dial_tcp_with_bind"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	Array_net__Addr addrs =  (*(Array_net__Addr*)_t1.data);
	for (int _t3 = 0; _t3 < addrs.len; ++_t3) {
		net__Addr addr = ((net__Addr*)addrs.data)[_t3];
		_result_net__TcpSocket _t4 = net__new_tcp_socket(net__Addr_family(addr));
		if (_t4.is_error) {
			IError err = _t4.err;
			return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT("; could not create new tcp socket in dial_tcp_with_bind"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
		}
		
 		net__TcpSocket s =  (*(net__TcpSocket*)_t4.data);
		_result_void _t6 = net__TcpSocket_bind(&s, laddr);
		if (_t6.is_error) {
			IError err = _t6.err;
			_result_void _t7 = net__TcpSocket_close(&s);
			if (_t7.is_error) {
				IError err = _t7.err;
				continue;
			}
			
 ;
			continue;
		}
		
 ;
		_result_void _t8 = net__TcpSocket_connect(&s, addr);
		if (_t8.is_error) {
			IError err = _t8.err;
			_result_void _t9 = net__TcpSocket_close(&s);
			if (_t9.is_error) {
				IError err = _t9.err;
				continue;
			}
			
 ;
			continue;
		}
		
 ;
		net__TcpConn* conn = ((net__TcpConn*)memdup(&(net__TcpConn){.sock = s,.handle = 0,.write_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_timeout = _const_net__tcp_default_read_timeout,.write_timeout = _const_net__tcp_default_write_timeout,.is_blocking = true,}, sizeof(net__TcpConn)));
		_result_net__TcpConn_ptr _t10;
		_result_ok(&(net__TcpConn*[]) { conn }, (_result*)(&_t10), sizeof(net__TcpConn*));
		return _t10;
	}
	return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT("dial_tcp_with_bind failed for address "), 0xfe10, {.d_s = saddr}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_void net__TcpConn_close(net__TcpConn* c) {
	_result_void _t1 = net__TcpSocket_close(&c->sock);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	return (_result_void){0};
}

_result_int net__TcpConn_read_ptr(net__TcpConn _v_toheap_c, u8* buf_ptr, int len) {
net__TcpConn* c = HEAP(net__TcpConn, _v_toheap_c);
	bool should_ewouldblock = false;
	int _t1;
	#if defined(CUSTOM_DEFINE_is_coroutine)
	#else
		{
			bool has_data = true;
			if ((*(c)).is_blocking) {
				_result_bool _t2;
				if (_t2 = net__select((*(c)).sock.Socket.handle, net__Select__read, 1), !_t2.is_error) {
					bool ok = *(bool*)_t2.data;
					has_data = ok;
				} else {
					IError err = _t2.err;
					false;
				}
			}
		int _t3; /* if prepend */
		if (has_data) {
			_t3 = recv((*(c)).sock.Socket.handle, ((voidptr)(buf_ptr)), len, _const_net__msg_dontwait);
		} else {
			should_ewouldblock = true;
			_t3 = -1;
		}
			_t1 =  _t3;
		}
	#endif
	int res = _t1;
	if (res > 0) {
		_result_int _t4;
		_result_ok(&(int[]) { res }, (_result*)(&_t4), sizeof(int));
		return _t4;
	}
	int code = (should_ewouldblock ? (((int)(_const_net__error_ewouldblock))) : (net__error_code()));
	if (code == ((int)(_const_net__error_ewouldblock)) || code == ((int)(_const_net__error_eagain)) || code == EINTR) {
		_result_void _t5 = net__TcpConn_wait_for_read((*(c)));
		if (_t5.is_error) {
			_result_int _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 ;
		int _t7;
		#if defined(CUSTOM_DEFINE_is_coroutine)
		#else
			_t7 = recv((*(c)).sock.Socket.handle, ((voidptr)(buf_ptr)), len, _const_net__msg_dontwait);
			;
		#endif
		res = _t7;
		_result_int _t8 = net__socket_error(res);
		return _t8;
	} else {
		_result_void _t9 = net__wrap_error(code);
		if (_t9.is_error) {
			_result_int _t10;
			memcpy(&_t10, &_t9, sizeof(_result));
			return _t10;
		}
		
 ;
	}
	return (_result_int){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int net__TcpConn_read(net__TcpConn _v_toheap_c, Array_u8* buf) {
net__TcpConn* c = HEAP(net__TcpConn, _v_toheap_c);
	_result_int _t2 = net__TcpConn_read_ptr((*(c)), buf->data, buf->len);
	if (_t2.is_error) {
		_result_int _t3;
		memcpy(&_t3, &_t2, sizeof(_result));
		return _t3;
	}
	
 	_result_int _t1;
	_result_ok(&(int[]) {  (*(int*)_t2.data) }, (_result*)(&_t1), sizeof(int));
	return _t1;
}

_result_time__Time net__TcpConn_read_deadline(net__TcpConn* c) {
	if (time__Time_unix(&c->read_deadline) == 0) {
		_result_time__Time _t1;
		_result_ok(&(time__Time[]) { c->read_deadline }, (_result*)(&_t1), sizeof(time__Time));
		return _t1;
	}
	return (_result_time__Time){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int net__TcpConn_write_ptr(net__TcpConn* c, u8* b, int len) {
	{ // Unsafe block
		u8* ptr_base = ((u8*)(b));
		int total_sent = 0;
		for (;;) {
			if (!(total_sent < len)) break;
			u8* ptr = ptr_base + total_sent;
			int remaining = (int)(len - total_sent);
			int _t1;
			#if defined(CUSTOM_DEFINE_is_coroutine)
			#else
				_t1 = send(c->sock.Socket.handle, ptr, remaining, _const_net__msg_nosignal);
				;
			#endif
			int sent = _t1;
			if (sent < 0) {
				int code = net__error_code();
				if (code == ((int)(_const_net__error_ewouldblock)) || code == ((int)(_const_net__error_eagain)) || code == EINTR) {
					_result_void _t2 = net__TcpConn_wait_for_write(c);
					if (_t2.is_error) {
						_result_int _t3;
						memcpy(&_t3, &_t2, sizeof(_result));
						return _t3;
					}
					
 ;
					continue;
				} else {
					_result_void _t4 = net__wrap_error(code);
					if (_t4.is_error) {
						_result_int _t5;
						memcpy(&_t5, &_t4, sizeof(_result));
						return _t5;
					}
					
 ;
				}
			}
			total_sent += sent;
		}
		_result_int _t6;
		_result_ok(&(int[]) { total_sent }, (_result*)(&_t6), sizeof(int));
		return _t6;
	}
	return (_result_int){0};
}

_result_int net__TcpConn_write(net__TcpConn* c, Array_u8 bytes) {
	_result_int _t1 = net__TcpConn_write_ptr(c, bytes.data, bytes.len);
	return _t1;
}

_result_int net__TcpConn_write_string(net__TcpConn* c, string s) {
	_result_int _t1 = net__TcpConn_write_ptr(c, s.str, s.len);
	return _t1;
}

void net__TcpConn_set_read_deadline(net__TcpConn* c, time__Time deadline) {
	c->read_deadline = deadline;
}

_result_time__Time net__TcpConn_write_deadline(net__TcpConn* c) {
	if (time__Time_unix(&c->write_deadline) == 0) {
		_result_time__Time _t1;
		_result_ok(&(time__Time[]) { c->write_deadline }, (_result*)(&_t1), sizeof(time__Time));
		return _t1;
	}
	return (_result_time__Time){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

void net__TcpConn_set_write_deadline(net__TcpConn* c, time__Time deadline) {
	c->write_deadline = deadline;
}

time__Duration net__TcpConn_read_timeout(net__TcpConn* c) {
	time__Duration _t1 = c->read_timeout;
	return _t1;
}

void net__TcpConn_set_read_timeout(net__TcpConn* c, time__Duration t) {
	c->read_timeout = t;
}

time__Duration net__TcpConn_write_timeout(net__TcpConn* c) {
	time__Duration _t1 = c->write_timeout;
	return _t1;
}

void net__TcpConn_set_write_timeout(net__TcpConn* c, time__Duration t) {
	c->write_timeout = t;
}

// Attr: [inline]
inline _result_void net__TcpConn_wait_for_read(net__TcpConn _v_toheap_c) {
net__TcpConn* c = HEAP(net__TcpConn, _v_toheap_c);
	_result_void _t1 = net__wait_for_read((*(c)).sock.Socket.handle, (*(c)).read_deadline, (*(c)).read_timeout);
	return _t1;
}

// Attr: [inline]
inline _result_void net__TcpConn_wait_for_write(net__TcpConn* c) {
	_result_void _t1 = net__wait_for_write(c->sock.Socket.handle, c->write_deadline, c->write_timeout);
	return _t1;
}

_result_void net__TcpConn_set_sock(net__TcpConn* c) {
	_result_net__TcpSocket _t1 = net__tcp_socket_from_handle(c->handle);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	c->sock =  (*(net__TcpSocket*)_t1.data);
	return (_result_void){0};
}

_result_net__Addr net__TcpConn_peer_addr(net__TcpConn* c) {
	_result_net__Addr _t1 = net__peer_addr_from_socket_handle(c->sock.Socket.handle);
	return _t1;
}

_result_string net__TcpConn_peer_ip(net__TcpConn* c) {
	_result_net__Addr _t2 = net__TcpConn_peer_addr(c);
	if (_t2.is_error) {
		_result_string _t3;
		memcpy(&_t3, &_t2, sizeof(_result));
		return _t3;
	}
	
 	_result_string _t1;
	_result_ok(&(string[]) { net__Addr_str( (*(net__Addr*)_t2.data)) }, (_result*)(&_t1), sizeof(string));
	return _t1;
}

_result_net__Addr net__TcpConn_addr(net__TcpConn* c) {
	_result_net__Addr _t1 = net__Socket_address(&c->sock.Socket);
	return _t1;
}

string net__TcpConn_str(net__TcpConn _v_toheap_c) {
net__TcpConn* c = HEAP(net__TcpConn, _v_toheap_c);
	string s = string_replace(string_replace(net__TcpSocket_str((*(c)).sock), _SLIT("\n"), _SLIT(" ")), _SLIT("  "), _SLIT(" "));
	string _t1 =  str_intp(6, _MOV((StrIntpData[]){{_SLIT("TcpConn{ write_deadline: "), 0xfe10, {.d_s = time__Time_str((*(c)).write_deadline)}}, {_SLIT(", read_deadline: "), 0xfe10, {.d_s = time__Time_str((*(c)).read_deadline)}}, {_SLIT(", read_timeout: "), 0xfe10, {.d_s = time__Duration_str((*(c)).read_timeout)}}, {_SLIT(", write_timeout: "), 0xfe10, {.d_s = time__Duration_str((*(c)).write_timeout)}}, {_SLIT(", sock: "), 0xfe10, {.d_s = s}}, {_SLIT(" }"), 0, { .d_c = 0 }}}));
	return _t1;
}

_result_net__TcpListener_ptr net__listen_tcp(net__AddrFamily family, string saddr, net__ListenOptions options) {
	if (family != net__AddrFamily__ip && family != net__AddrFamily__ip6) {
		return (_result_net__TcpListener_ptr){ .is_error=true, .err=_v_error(_SLIT("listen_tcp only supports ip and ip6")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_net__TcpSocket _t2 = net__new_tcp_socket(family);
	if (_t2.is_error) {
		IError err = _t2.err;
		return (_result_net__TcpListener_ptr){ .is_error=true, .err=_v_error( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT("; could not create new socket"), 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	net__TcpSocket s =  (*(net__TcpSocket*)_t2.data);
	_result_void _t4 = net__TcpSocket_set_dualstack(&s, options.dualstack);
	if (_t4.is_error) {
		IError err = _t4.err;
	}
	
 ;
	_result_Array_net__Addr _t5 = net__resolve_addrs(saddr, family, net__SocketType__tcp);
	if (_t5.is_error) {
		IError err = _t5.err;
		return (_result_net__TcpListener_ptr){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT("; could not resolve address "), 0xfe10, {.d_s = saddr}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	Array_net__Addr addrs =  (*(Array_net__Addr*)_t5.data);
	net__Addr addr = (*(net__Addr*)array_get(addrs, 0));
	u32 alen = net__Addr_len(addr);
	_result_int _t7 = net__socket_error_message(bind(s.Socket.handle, ((voidptr)(&addr)), alen),  str_intp(2, _MOV((StrIntpData[]){{_SLIT("binding to "), 0xfe10, {.d_s = saddr}}, {_SLIT(" failed"), 0, { .d_c = 0 }}})));
	if (_t7.is_error) {
		_result_net__TcpListener_ptr _t8;
		memcpy(&_t8, &_t7, sizeof(_result));
		return _t8;
	}
	
  (*(int*)_t7.data);
	int res = listen(s.Socket.handle, options.backlog);
	if (res == 0) {
		net__TcpListener* listener = ((net__TcpListener*)memdup(&(net__TcpListener){.sock = s,.accept_timeout = _const_net__infinite_timeout,.accept_deadline = _const_net__no_deadline,.is_blocking = true,}, sizeof(net__TcpListener)));
		_result_net__TcpListener_ptr _t9;
		_result_ok(&(net__TcpListener*[]) { listener }, (_result*)(&_t9), sizeof(net__TcpListener*));
		return _t9;
	}
	#if !defined(CUSTOM_DEFINE_net_nonblocking_sockets)
	{
		_result_int _t11 = net__socket_error_message(res,  str_intp(3, _MOV((StrIntpData[]){{_SLIT("listening on "), 0xfe10, {.d_s = saddr}}, {_SLIT(" with maximum backlog pending queue of "), 0xfe07, {.d_i32 = options.backlog}}, {_SLIT(", failed"), 0, { .d_c = 0 }}})));
		if (_t11.is_error) {
			_result_net__TcpListener_ptr _t12;
			memcpy(&_t12, &_t11, sizeof(_result));
			return _t12;
		}
		
  (*(int*)_t11.data);
		_result_net__TcpListener_ptr _t13;
		_result_ok(&(net__TcpListener*[]) { ((net__TcpListener*)(((void*)0))) }, (_result*)(&_t13), sizeof(net__TcpListener*));
		return _t13;
	}
	#else
	{
	}
	#endif
	return (_result_net__TcpListener_ptr){0};
}

_result_net__TcpConn_ptr net__TcpListener_accept(net__TcpListener* l) {
	_result_net__TcpConn_ptr _t1 = net__TcpListener_accept_only(l);
	if (_t1.is_error) {
		_result_net__TcpConn_ptr _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	net__TcpConn* res =  (*(net__TcpConn**)_t1.data);
	_result_void _t3 = net__TcpConn_set_sock(res);
	if (_t3.is_error) {
		_result_net__TcpConn_ptr _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 ;
	_result_net__TcpConn_ptr _t5;
	_result_ok(&(net__TcpConn*[]) { res }, (_result*)(&_t5), sizeof(net__TcpConn*));
	return _t5;
}

_result_net__TcpConn_ptr net__TcpListener_accept_only(net__TcpListener* l) {
	#if !defined(CUSTOM_DEFINE_is_coroutine)
	{
		if (l->is_blocking) {
			_result_void _t2 = net__TcpListener_wait_for_accept(l);
			if (_t2.is_error) {
				_result_net__TcpConn_ptr _t3;
				memcpy(&_t3, &_t2, sizeof(_result));
				return _t3;
			}
			
 ;
		}
	}
	#endif
	int _t4;
	#if defined(CUSTOM_DEFINE_is_coroutine)
	#else
		_t4 = accept(l->sock.Socket.handle, 0, 0);
		;
	#endif
	int new_handle = _t4;
	if (!l->is_blocking && new_handle <= 0) {
		int code = net__error_code();
		if (code == ((int)(_const_net__error_einprogress)) || code == ((int)(_const_net__error_ewouldblock)) || code == ((int)(_const_net__error_eagain)) || code == EINTR) {
			_result_void _t5 = net__TcpListener_wait_for_accept(l);
			if (_t5.is_error) {
				_result_net__TcpConn_ptr _t6;
				memcpy(&_t6, &_t5, sizeof(_result));
				return _t6;
			}
			
 ;
			int _t7;
			#if defined(CUSTOM_DEFINE_is_coroutine)
			#else
				_t7 = accept(l->sock.Socket.handle, 0, 0);
				;
			#endif
			new_handle = _t7;
		}
	}
	if (new_handle <= 0) {
		return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error(_SLIT("accept failed")), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	_result_net__TcpConn_ptr _t9;
	_result_ok(&(net__TcpConn*[]) { ((net__TcpConn*)memdup(&(net__TcpConn){.sock = (net__TcpSocket){.Socket = (net__Socket){.handle = 0,},},.handle = new_handle,.write_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_timeout = _const_net__tcp_default_read_timeout,.write_timeout = _const_net__tcp_default_write_timeout,.is_blocking = l->is_blocking,}, sizeof(net__TcpConn))) }, (_result*)(&_t9), sizeof(net__TcpConn*));
	return _t9;
}

_result_time__Time net__TcpListener_accept_deadline(net__TcpListener* c) {
	if (time__Time_unix(&c->accept_deadline) != 0) {
		_result_time__Time _t1;
		_result_ok(&(time__Time[]) { c->accept_deadline }, (_result*)(&_t1), sizeof(time__Time));
		return _t1;
	}
	return (_result_time__Time){ .is_error=true, .err=_v_error(_SLIT("invalid deadline")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

void net__TcpListener_set_accept_deadline(net__TcpListener* c, time__Time deadline) {
	c->accept_deadline = deadline;
}

time__Duration net__TcpListener_accept_timeout(net__TcpListener* c) {
	time__Duration _t1 = c->accept_timeout;
	return _t1;
}

void net__TcpListener_set_accept_timeout(net__TcpListener* c, time__Duration t) {
	c->accept_timeout = t;
}

_result_void net__TcpListener_wait_for_accept(net__TcpListener* c) {
	_result_void _t1 = net__wait_for_read(c->sock.Socket.handle, c->accept_deadline, c->accept_timeout);
	return _t1;
}

_result_void net__TcpListener_close(net__TcpListener* c) {
	_result_void _t1 = net__TcpSocket_close(&c->sock);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	return (_result_void){0};
}

_result_net__Addr net__TcpListener_addr(net__TcpListener* c) {
	_result_net__Addr _t1 = net__Socket_address(&c->sock.Socket);
	return _t1;
}

// Attr: [noinline]
__NOINLINE VV_LOCAL_SYMBOL _result_net__TcpSocket net__new_tcp_socket(net__AddrFamily family) {
	int _t1;
	#if defined(CUSTOM_DEFINE_is_coroutine)
	#else
_result_int _t2 = net__socket_error(socket(family, net__SocketType__tcp, 0));
		if (_t2.is_error) {
			_result_net__TcpSocket _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
 		_t1 =  (*(int*)_t2.data);
		;
	#endif
	int handle = _t1;
	net__TcpSocket s = ((net__TcpSocket){.Socket = ((net__Socket){.handle = handle,}),});
	_result_void _t4 = net__TcpSocket_set_default_options(&s);
	if (_t4.is_error) {
		_result_net__TcpSocket _t5;
		memcpy(&_t5, &_t4, sizeof(_result));
		return _t5;
	}
	
 ;
	_result_net__TcpSocket _t6;
	_result_ok(&(net__TcpSocket[]) { s }, (_result*)(&_t6), sizeof(net__TcpSocket));
	return _t6;
}

VV_LOCAL_SYMBOL _result_net__TcpSocket net__tcp_socket_from_handle(int sockfd) {
	net__TcpSocket s = ((net__TcpSocket){.Socket = ((net__Socket){.handle = sockfd,}),});
	_result_void _t1 = net__TcpSocket_set_dualstack(&s, true);
	if (_t1.is_error) {
		IError err = _t1.err;
	}
	
 ;
	_result_void _t2 = net__TcpSocket_set_default_options(&s);
	if (_t2.is_error) {
		_result_net__TcpSocket _t3;
		memcpy(&_t3, &_t2, sizeof(_result));
		return _t3;
	}
	
 ;
	_result_net__TcpSocket _t4;
	_result_ok(&(net__TcpSocket[]) { s }, (_result*)(&_t4), sizeof(net__TcpSocket));
	return _t4;
}

net__TcpSocket net__tcp_socket_from_handle_raw(int sockfd) {
	net__TcpSocket s = ((net__TcpSocket){.Socket = ((net__Socket){.handle = sockfd,}),});
	return s;
}

VV_LOCAL_SYMBOL _result_void net__TcpSocket_set_option(net__TcpSocket* s, int level, int opt, int value) {
	_result_int _t1 = net__socket_error(setsockopt(s->Socket.handle, level, opt, &value, sizeof(int)));
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
  (*(int*)_t1.data);
	return (_result_void){0};
}

_result_void net__TcpSocket_set_option_bool(net__TcpSocket* s, net__SocketOption opt, bool value) {
	int x = (int[]){(value)?1:0}[0];
	_result_void _t1 = net__TcpSocket_set_option(s, SOL_SOCKET, ((int)(opt)), *&x);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	return (_result_void){0};
}

_result_void net__TcpSocket_set_option_int(net__TcpSocket* s, net__SocketOption opt, int value) {
	_result_void _t1 = net__TcpSocket_set_option(s, SOL_SOCKET, ((int)(opt)), value);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	return (_result_void){0};
}

_result_void net__TcpSocket_set_dualstack(net__TcpSocket* s, bool on) {
	int x = (int[]){(!on)?1:0}[0];
	_result_void _t1 = net__TcpSocket_set_option(s, IPPROTO_IPV6, ((int)(net__SocketOption__ipv6_only)), *&x);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	return (_result_void){0};
}

VV_LOCAL_SYMBOL _result_void net__TcpSocket_set_default_options(net__TcpSocket* s) {
	_result_void _t1 = net__TcpSocket_set_option_int(s, net__SocketOption__reuse_addr, 1);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	_result_void _t3 = net__TcpSocket_set_option(s, IPPROTO_TCP, TCP_NODELAY, 1);
	if (_t3.is_error) {
		_result_void _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 ;
	return (_result_void){0};
}

_result_void net__TcpSocket_bind(net__TcpSocket* s, string addr) {
	_result_Array_net__Addr _t1 = net__resolve_addrs(addr, net__AddrFamily__ip, net__SocketType__tcp);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_void){ .is_error=true, .err=_v_error( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT("; could not resolve address "), 0xfe10, {.d_s = addr}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	Array_net__Addr addrs =  (*(Array_net__Addr*)_t1.data);
	net__Addr a = (*(net__Addr*)array_get(addrs, 0));
	u32 alen = net__Addr_len(a);
	_result_int _t3 = net__socket_error_message(bind(s->Socket.handle, ((voidptr)(&a)), alen),  str_intp(2, _MOV((StrIntpData[]){{_SLIT("binding to "), 0xfe10, {.d_s = addr}}, {_SLIT(" failed"), 0, { .d_c = 0 }}})));
	if (_t3.is_error) {
		IError err = _t3.err;
		return (_result_void){ .is_error=true, .err=err, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
  (*(int*)_t3.data);
	return (_result_void){0};
}

VV_LOCAL_SYMBOL _result_void net__TcpSocket_close(net__TcpSocket* s) {
	net__shutdown(s->Socket.handle, ((net__ShutdownConfig){.how = net__ShutdownDirection__read_and_write,}));
	_result_void _t1 = net__close(s->Socket.handle);
	return _t1;
}

VV_LOCAL_SYMBOL _result_void net__TcpSocket_connect(net__TcpSocket* s, net__Addr a) {
	#if defined(CUSTOM_DEFINE_net_nonblocking_sockets)
	{
	}
	#else
	{
		int _t2;
		#if defined(CUSTOM_DEFINE_is_coroutine)
		#else
			_t2 = connect(s->Socket.handle, ((voidptr)(&a)), net__Addr_len(a));
			;
		#endif
		int x = _t2;
		_result_int _t3 = net__socket_error(x);
		if (_t3.is_error) {
			_result_void _t4;
			memcpy(&_t4, &_t3, sizeof(_result));
			return _t4;
		}
		
  (*(int*)_t3.data);
	}
	#endif
	return (_result_void){0};
}

bool net__TcpConn_get_blocking(net__TcpConn* con) {
	bool _t1 = con->is_blocking;
	return _t1;
}

_result_void net__TcpConn_set_blocking(net__TcpConn* con, bool state) {
	if (con->is_blocking == state) {
		return (_result_void){0};
	}
	con->is_blocking = state;
	_result_void _t1 = net__set_blocking(con->sock.Socket.handle, state);
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 ;
	return (_result_void){0};
}

string net__TcpConn_read_line(net__TcpConn* con) {
	string _t1 = net__TcpConn_read_line_max(con, _const_net__max_read_line_len);
	return _t1;
}

// Attr: [manualfree]
string net__TcpConn_read_line_max(net__TcpConn* con, int max_line_len) {
	bool net__TcpConn_read_line_max_defer_0 = false;
	strings__Builder res;
	if (!con->is_blocking) {
		_result_void _t1 = net__TcpConn_set_blocking(con, true);
		if (_t1.is_error) {
			IError err = _t1.err;
		}
		
 ;
	}
	Array_fixed_u8_400 buf = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	res = strings__new_builder(_const_net__max_read);
	net__TcpConn_read_line_max_defer_0 = true;
	u8* bstart = &buf[0];
	for (;;) {
		int n = recv(con->sock.Socket.handle, bstart, (int_literal)(_const_net__max_read - 1), (_const_net__msg_peek | _const_net__msg_nosignal));
		if (n <= 0) {
			string _t2 = strings__Builder_str(&res);
				// Defer begin
				if (net__TcpConn_read_line_max_defer_0) {
					strings__Builder_free(&res);
				}
				// Defer end
			return _t2;
		}
		buf[v_fixed_index(n, 400)] = '\0';
		int eol_idx = -1;
		int lend = n;
		for (int i = 0; i < n; ++i) {
			if (buf[v_fixed_index(i, 400)] == '\n') {
				eol_idx = i;
				lend = (int_literal)(i + 1);
				buf[v_fixed_index(lend, 400)] = '\0';
				break;
			}
		}
		if (eol_idx > 0) {
			recv(con->sock.Socket.handle, bstart, lend, _const_net__msg_nosignal);
			strings__Builder_write_ptr(&res, bstart, lend);
			break;
		}
		recv(con->sock.Socket.handle, bstart, n, _const_net__msg_nosignal);
		strings__Builder_write_ptr(&res, bstart, lend);
		if (res.len > max_line_len) {
			break;
		}
	}
	string _t3 = strings__Builder_str(&res);
		// Defer begin
		if (net__TcpConn_read_line_max_defer_0) {
			strings__Builder_free(&res);
		}
		// Defer end
	return _t3;
}

_result_net__UdpConn_ptr net__dial_udp(string raddr) {
	_result_Array_net__Addr _t1 = net__resolve_addrs_fuzzy(raddr, net__SocketType__udp);
	if (_t1.is_error) {
		_result_net__UdpConn_ptr _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	Array_net__Addr addrs =  (*(Array_net__Addr*)_t1.data);
	for (int _t3 = 0; _t3 < addrs.len; ++_t3) {
		net__Addr addr = ((net__Addr*)addrs.data)[_t3];
		_result_net__UdpSocket_ptr _t4;
		if (_t4 = net__new_udp_socket_for_remote(addr), !_t4.is_error) {
			net__UdpSocket* sock = *(net__UdpSocket**)_t4.data;
			_result_net__UdpConn_ptr _t5;
			_result_ok(&(net__UdpConn*[]) { ((net__UdpConn*)memdup(&(net__UdpConn){.sock = *sock,.write_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_timeout = _const_net__udp_default_read_timeout,.write_timeout = _const_net__udp_default_write_timeout,}, sizeof(net__UdpConn))) }, (_result*)(&_t5), sizeof(net__UdpConn*));
			return _t5;
		}
	}
	return (_result_net__UdpConn_ptr){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int net__UdpConn_write_ptr(net__UdpConn* c, u8* b, int len) {
	_result_net__Addr _t1 = net__UdpSocket_remote(&c->sock);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_int){ .is_error=true, .err=_const_net__err_no_udp_remote, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	
 	net__Addr remote =  (*(net__Addr*)_t1.data);
	_result_int _t3 = net__UdpConn_write_to_ptr(c, remote, b, len);
	return _t3;
}

_result_int net__UdpConn_write(net__UdpConn* c, Array_u8 buf) {
	_result_int _t1 = net__UdpConn_write_ptr(c, buf.data, buf.len);
	return _t1;
}

_result_int net__UdpConn_write_string(net__UdpConn* c, string s) {
	_result_int _t1 = net__UdpConn_write_ptr(c, s.str, s.len);
	return _t1;
}

_result_int net__UdpConn_write_to_ptr(net__UdpConn* c, net__Addr addr, u8* b, int len) {
	int res = sendto(c->sock.Socket.handle, b, len, 0, ((voidptr)(&addr)), net__Addr_len(addr));
	if (res >= 0) {
		_result_int _t1;
		_result_ok(&(int[]) { res }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	int code = net__error_code();
	if (code == ((int)(_const_net__error_ewouldblock))) {
		_result_void _t2 = net__UdpConn_wait_for_write(c);
		if (_t2.is_error) {
			_result_int _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
 ;
		_result_int _t4 = net__socket_error(sendto(c->sock.Socket.handle, b, len, 0, ((voidptr)(&addr)), net__Addr_len(addr)));
		if (_t4.is_error) {
			_result_int _t5;
			memcpy(&_t5, &_t4, sizeof(_result));
			return _t5;
		}
		
  (*(int*)_t4.data);
	} else {
		_result_void _t6 = net__wrap_error(code);
		if (_t6.is_error) {
			_result_int _t7;
			memcpy(&_t7, &_t6, sizeof(_result));
			return _t7;
		}
		
 ;
	}
	return (_result_int){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_int net__UdpConn_write_to(net__UdpConn* c, net__Addr addr, Array_u8 buf) {
	_result_int _t1 = net__UdpConn_write_to_ptr(c, addr, buf.data, buf.len);
	return _t1;
}

_result_int net__UdpConn_write_to_string(net__UdpConn* c, net__Addr addr, string s) {
	_result_int _t1 = net__UdpConn_write_to_ptr(c, addr, s.str, s.len);
	return _t1;
}

_result_multi_return_int_net__Addr net__UdpConn_read(net__UdpConn* c, Array_u8* buf) {
	net__Addr addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
	u32 len = sizeof(net__Addr);
	_result_int _t1 = net__wrap_read_result(recvfrom(c->sock.Socket.handle, ((voidptr)(buf->data)), buf->len, 0, ((voidptr)(&addr)), &len));
	if (_t1.is_error) {
		_result_multi_return_int_net__Addr _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	int res =  (*(int*)_t1.data);
	if (res > 0) {
		_result_multi_return_int_net__Addr _t3;
		_result_ok(&(multi_return_int_net__Addr[]) { (multi_return_int_net__Addr){.arg0=res, .arg1=addr} }, (_result*)(&_t3), sizeof(multi_return_int_net__Addr));
		return _t3;
	}
	int code = net__error_code();
	if (code == ((int)(_const_net__error_ewouldblock))) {
		_result_void _t4 = net__UdpConn_wait_for_read(c);
		if (_t4.is_error) {
			_result_multi_return_int_net__Addr _t5;
			memcpy(&_t5, &_t4, sizeof(_result));
			return _t5;
		}
		
 ;
		_result_int _t6 = net__wrap_read_result(recvfrom(c->sock.Socket.handle, ((voidptr)(buf->data)), buf->len, 0, ((voidptr)(&addr)), &len));
		if (_t6.is_error) {
			_result_multi_return_int_net__Addr _t7;
			memcpy(&_t7, &_t6, sizeof(_result));
			return _t7;
		}
		
 		res =  (*(int*)_t6.data);
		_result_int _t8 = net__socket_error(res);
		if (_t8.is_error) {
			_result_multi_return_int_net__Addr _t9;
			memcpy(&_t9, &_t8, sizeof(_result));
			return _t9;
		}
		
 		int res2 =  (*(int*)_t8.data);
		_result_multi_return_int_net__Addr _t10;
		_result_ok(&(multi_return_int_net__Addr[]) { (multi_return_int_net__Addr){.arg0=res2, .arg1=addr} }, (_result*)(&_t10), sizeof(multi_return_int_net__Addr));
		return _t10;
	} else {
		_result_void _t11 = net__wrap_error(code);
		if (_t11.is_error) {
			_result_multi_return_int_net__Addr _t12;
			memcpy(&_t12, &_t11, sizeof(_result));
			return _t12;
		}
		
 ;
	}
	return (_result_multi_return_int_net__Addr){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_time__Time net__UdpConn_read_deadline(net__UdpConn* c) {
	if (time__Time_unix(&c->read_deadline) == 0) {
		_result_time__Time _t1;
		_result_ok(&(time__Time[]) { c->read_deadline }, (_result*)(&_t1), sizeof(time__Time));
		return _t1;
	}
	return (_result_time__Time){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

void net__UdpConn_set_read_deadline(net__UdpConn* c, time__Time deadline) {
	c->read_deadline = deadline;
}

_result_time__Time net__UdpConn_write_deadline(net__UdpConn* c) {
	if (time__Time_unix(&c->write_deadline) == 0) {
		_result_time__Time _t1;
		_result_ok(&(time__Time[]) { c->write_deadline }, (_result*)(&_t1), sizeof(time__Time));
		return _t1;
	}
	return (_result_time__Time){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

void net__UdpConn_set_write_deadline(net__UdpConn* c, time__Time deadline) {
	c->write_deadline = deadline;
}

time__Duration net__UdpConn_read_timeout(net__UdpConn* c) {
	time__Duration _t1 = c->read_timeout;
	return _t1;
}

void net__UdpConn_set_read_timeout(net__UdpConn* c, time__Duration t) {
	c->read_timeout = t;
}

time__Duration net__UdpConn_write_timeout(net__UdpConn* c) {
	time__Duration _t1 = c->write_timeout;
	return _t1;
}

void net__UdpConn_set_write_timeout(net__UdpConn* c, time__Duration t) {
	c->write_timeout = t;
}

// Attr: [inline]
inline _result_void net__UdpConn_wait_for_read(net__UdpConn* c) {
	_result_void _t1 = net__wait_for_read(c->sock.Socket.handle, c->read_deadline, c->read_timeout);
	return _t1;
}

// Attr: [inline]
inline _result_void net__UdpConn_wait_for_write(net__UdpConn* c) {
	_result_void _t1 = net__wait_for_write(c->sock.Socket.handle, c->write_deadline, c->write_timeout);
	return _t1;
}

string net__UdpConn_str(net__UdpConn* c) {
	string _t1 = _SLIT("UdpConn");
	return _t1;
}

_result_void net__UdpConn_close(net__UdpConn* c) {
	_result_void _t1 = net__UdpSocket_close(&c->sock);
	return _t1;
}

_result_net__UdpConn_ptr net__listen_udp(string laddr) {
	_result_Array_net__Addr _t1 = net__resolve_addrs_fuzzy(laddr, net__SocketType__udp);
	if (_t1.is_error) {
		_result_net__UdpConn_ptr _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	Array_net__Addr addrs =  (*(Array_net__Addr*)_t1.data);
	net__Addr addr = (*(net__Addr*)array_get(addrs, 0));
	_result_net__UdpSocket_ptr _t4 = net__new_udp_socket(addr);
	if (_t4.is_error) {
		_result_net__UdpConn_ptr _t5;
		memcpy(&_t5, &_t4, sizeof(_result));
		return _t5;
	}
	
 	_result_net__UdpConn_ptr _t3;
	_result_ok(&(net__UdpConn*[]) { ((net__UdpConn*)memdup(&(net__UdpConn){.sock = * (*(net__UdpSocket**)_t4.data),.write_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_deadline = (time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,.microsecond = 0,},.read_timeout = _const_net__udp_default_read_timeout,.write_timeout = _const_net__udp_default_write_timeout,}, sizeof(net__UdpConn))) }, (_result*)(&_t3), sizeof(net__UdpConn*));
	return _t3;
}

VV_LOCAL_SYMBOL _result_net__UdpSocket_ptr net__new_udp_socket(net__Addr local_addr) {
	net__AddrFamily family = net__Addr_family(local_addr);
	_result_int _t1 = net__socket_error(socket(family, net__SocketType__udp, 0));
	if (_t1.is_error) {
		_result_net__UdpSocket_ptr _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	int sockfd =  (*(int*)_t1.data);
	net__UdpSocket* s = ((net__UdpSocket*)memdup(&(net__UdpSocket){.Socket = ((net__Socket){.handle = sockfd,}),.l = local_addr,.has_r = 0,.r = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),}),}, sizeof(net__UdpSocket)));
	_result_void _t3 = net__UdpSocket_set_option_bool(s, net__SocketOption__reuse_addr, true);
	if (_t3.is_error) {
		_result_net__UdpSocket_ptr _t4;
		memcpy(&_t4, &_t3, sizeof(_result));
		return _t4;
	}
	
 ;
	if (family == net__AddrFamily__ip6) {
		_result_void _t5 = net__UdpSocket_set_dualstack(s, true);
		if (_t5.is_error) {
			_result_net__UdpSocket_ptr _t6;
			memcpy(&_t6, &_t5, sizeof(_result));
			return _t6;
		}
		
 ;
	}
	_result_int _t7 = net__socket_error(bind(s->Socket.handle, ((voidptr)(&local_addr)), net__Addr_len(local_addr)));
	if (_t7.is_error) {
		_result_net__UdpSocket_ptr _t8;
		memcpy(&_t8, &_t7, sizeof(_result));
		return _t8;
	}
	
  (*(int*)_t7.data);
	_result_net__UdpSocket_ptr _t9;
	_result_ok(&(net__UdpSocket*[]) { s }, (_result*)(&_t9), sizeof(net__UdpSocket*));
	return _t9;
}

VV_LOCAL_SYMBOL _result_net__UdpSocket_ptr net__new_udp_socket_for_remote(net__Addr raddr) {
	net__Addr addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
	net__AddrFamily /*A*/ _t1 = net__Addr_family(raddr);
	
	if (_t1 == (net__AddrFamily__ip)) {
		addr = net__new_ip(0U, _const_net__addr_ip_any);
	}
	else if (_t1 == (net__AddrFamily__ip6)) {
		addr = net__new_ip6(0U, _const_net__addr_ip6_any);
	}
	else if (_t1 == (net__AddrFamily__unix)) {
		_result_net__Addr _t2 = net__temp_unix();
		if (_t2.is_error) {
			_result_net__UdpSocket_ptr _t3;
			memcpy(&_t3, &_t2, sizeof(_result));
			return _t3;
		}
		
 		addr =  (*(net__Addr*)_t2.data);
	}
	else {
		_v_panic(_SLIT("Invalid family"));
		VUNREACHABLE();
	}
	_result_net__UdpSocket_ptr _t4 = net__new_udp_socket(addr);
	if (_t4.is_error) {
		_result_net__UdpSocket_ptr _t5;
		memcpy(&_t5, &_t4, sizeof(_result));
		return _t5;
	}
	
 	net__UdpSocket* sock =  (*(net__UdpSocket**)_t4.data);
	sock->has_r = true;
	sock->r = raddr;
	_result_net__UdpSocket_ptr _t6;
	_result_ok(&(net__UdpSocket*[]) { sock }, (_result*)(&_t6), sizeof(net__UdpSocket*));
	return _t6;
}

_result_void net__UdpSocket_set_option_bool(net__UdpSocket* s, net__SocketOption opt, bool value) {
	int x = (int[]){(value)?1:0}[0];
	_result_int _t1 = net__socket_error(setsockopt(s->Socket.handle, SOL_SOCKET, ((int)(opt)), &x, sizeof(int)));
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
  (*(int*)_t1.data);
	return (_result_void){0};
}

_result_void net__UdpSocket_set_dualstack(net__UdpSocket* s, bool on) {
	int x = (int[]){(!on)?1:0}[0];
	_result_int _t1 = net__socket_error(setsockopt(s->Socket.handle, IPPROTO_IPV6, ((int)(net__SocketOption__ipv6_only)), &x, sizeof(int)));
	if (_t1.is_error) {
		_result_void _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
  (*(int*)_t1.data);
	return (_result_void){0};
}

VV_LOCAL_SYMBOL _result_void net__UdpSocket_close(net__UdpSocket* s) {
	net__shutdown(s->Socket.handle, ((net__ShutdownConfig){.how = net__ShutdownDirection__read_and_write,}));
	_result_void _t1 = net__close(s->Socket.handle);
	return _t1;
}

VV_LOCAL_SYMBOL _result_bool net__UdpSocket_select(net__UdpSocket* s, net__Select test, time__Duration timeout) {
	_result_bool _t1 = net__select(s->Socket.handle, test, timeout);
	return _t1;
}

VV_LOCAL_SYMBOL _result_net__Addr net__UdpSocket_remote(net__UdpSocket* s) {
	if (s->has_r) {
		_result_net__Addr _t1;
		_result_ok(&(net__Addr[]) { s->r }, (_result*)(&_t1), sizeof(net__Addr));
		return _t1;
	}
	return (_result_net__Addr){ .is_error=true, .err=_v_error(_SLIT("none")), .data={EMPTY_STRUCT_INITIALIZATION} };
}

_result_u16 net__validate_port(int port) {
	if (port <= _const_net__socket_max_port) {
		_result_u16 _t1;
		_result_ok(&(u16[]) { ((u16)(port)) }, (_result*)(&_t1), sizeof(u16));
		return _t1;
	} else {
		return (_result_u16){ .is_error=true, .err=_const_net__err_port_out_of_range, .data={EMPTY_STRUCT_INITIALIZATION} };
	}
	return (_result_u16){0};
}

_result_multi_return_string_u16 net__split_address(string addr) {
	int port = string_int(string_all_after_last(addr, _SLIT(":")));
	string address = string_all_before_last(addr, _SLIT(":"));
	_result_u16 _t1 = net__validate_port(port);
	if (_t1.is_error) {
		_result_multi_return_string_u16 _t2;
		memcpy(&_t2, &_t1, sizeof(_result));
		return _t2;
	}
	
 	u16 p =  (*(u16*)_t1.data);
	_result_multi_return_string_u16 _t3;
	_result_ok(&(multi_return_string_u16[]) { (multi_return_string_u16){.arg0=address, .arg1=p} }, (_result*)(&_t3), sizeof(multi_return_string_u16));
	return _t3;
}

void client__set_sever(string port, bool keep) {
	_result_net__TcpListener_ptr _t1 = net__listen_tcp(net__AddrFamily__ip6, string__plus(_SLIT(":"), port), ((net__ListenOptions){.dualstack = true,.backlog = 128,}));
	if (_t1.is_error) {
		IError err = _t1.err;
		println( str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = _const_log__false_log}}, {_SLIT("The port: "), 0xfe10, {.d_s = port}}, {_SLIT(" listening failed."), 0, { .d_c = 0 }}})));
		_v_exit(1);
		VUNREACHABLE();
	;
	}
	
 	net__TcpListener* server =  (*(net__TcpListener**)_t1.data);
	if (keep) {
		for (;;) {
			_result_net__TcpConn_ptr _t2 = net__TcpListener_accept(server);
			if (_t2.is_error) {
				IError err = _t2.err;
				_v_exit(1);
				VUNREACHABLE();
			;
			}
			
 			net__TcpConn* socket =  (*(net__TcpConn**)_t2.data);
			// start go
			thread_arg_client__handle_client *arg__t3 = (thread_arg_client__handle_client *) _v_malloc(sizeof(thread_arg_client__handle_client));
			arg__t3->fn = client__handle_client;
			arg__t3->arg1 = socket;
			pthread_t thread__t3;
			pthread_attr_t thread__t3_attributes;
			pthread_attr_init(&thread__t3_attributes);
			pthread_attr_setstacksize(&thread__t3_attributes, 8388608); // fn: client.handle_client
			int _t3_thr_res = pthread_create(&thread__t3, &thread__t3_attributes, (void*)client__handle_client_thread_wrapper, arg__t3);
			if (_t3_thr_res) panic_error_number(tos3("`go client__handle_client()`: "), _t3_thr_res);
			pthread_detach(thread__t3);
			// end go
			;
			// start go
			thread_arg_client__send_message *arg__t5 = (thread_arg_client__send_message *) _v_malloc(sizeof(thread_arg_client__send_message));
			arg__t5->fn = client__send_message;
			arg__t5->arg1 = socket;
			pthread_t thread__t5;
			pthread_attr_t thread__t5_attributes;
			pthread_attr_init(&thread__t5_attributes);
			pthread_attr_setstacksize(&thread__t5_attributes, 8388608); // fn: client.send_message
			int _t5_thr_res = pthread_create(&thread__t5, &thread__t5_attributes, (void*)client__send_message_thread_wrapper, arg__t5);
			if (_t5_thr_res) panic_error_number(tos3("`go client__send_message()`: "), _t5_thr_res);
			pthread_detach(thread__t5);
			// end go
			;
		}
	} else {
		_result_net__TcpConn_ptr _t7 = net__TcpListener_accept(server);
		if (_t7.is_error) {
			IError err = _t7.err;
			_v_exit(1);
			VUNREACHABLE();
		;
		}
		
 		net__TcpConn* socket =  (*(net__TcpConn**)_t7.data);
		// start go
		thread_arg_client__handle_client *arg__t8 = (thread_arg_client__handle_client *) _v_malloc(sizeof(thread_arg_client__handle_client));
		arg__t8->fn = client__handle_client;
		arg__t8->arg1 = socket;
		pthread_t thread__t8;
		pthread_attr_t thread__t8_attributes;
		pthread_attr_init(&thread__t8_attributes);
		pthread_attr_setstacksize(&thread__t8_attributes, 8388608); // fn: client.handle_client
		int _t8_thr_res = pthread_create(&thread__t8, &thread__t8_attributes, (void*)client__handle_client_thread_wrapper, arg__t8);
		if (_t8_thr_res) panic_error_number(tos3("`go client__handle_client()`: "), _t8_thr_res);
		pthread_detach(thread__t8);
		// end go
		;
		client__send_message(socket);
	}
}

VV_LOCAL_SYMBOL void client__handle_client(net__TcpConn* socket) {
	bool client__handle_client_defer_0 = false;
	bool client__handle_client_defer_1 = false;
	io__BufferedReader* reader;
	client__handle_client_defer_0 = true;
	reader = io__new_buffered_reader(((io__BufferedReaderConfig){.reader = I_net__TcpConn_to_Interface_io__Reader(socket),.cap = (int_literal)(128 * 1024),.retries = 2,}));
	client__handle_client_defer_1 = true;
	for (;;) {
		_result_string _t1 = io__BufferedReader_read_line(reader, ((io__BufferedReadLineConfig){.delim = '\n',}));
		if (_t1.is_error) {
			IError err = _t1.err;
			*(string*) _t1.data = _SLIT("");
		}
		
 		string received_line =  (*(string*)_t1.data);
		if ((received_line).len == 0) {
				// Defer begin
				if (client__handle_client_defer_1) {
					io__BufferedReader_free(reader);
				}
				// Defer end
				// Defer begin
				if (client__handle_client_defer_0) {
					_result_void _t2 = net__TcpConn_close(socket);
					if (_t2.is_error) {
						IError err = _t2.err;
						_v_exit(1);
						VUNREACHABLE();
					;
					}
					
 ;
				}
				// Defer end
			return;
		}
		println( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = received_line}}, {_SLIT0, 0, { .d_c = 0 }}})));
	}
	// Defer begin
	if (client__handle_client_defer_1) {
		io__BufferedReader_free(reader);
	}
	// Defer end
	// Defer begin
	if (client__handle_client_defer_0) {
		_result_void _t3 = net__TcpConn_close(socket);
		if (_t3.is_error) {
			IError err = _t3.err;
			_v_exit(1);
			VUNREACHABLE();
		;
		}
		
 ;
	}
	// Defer end
}

void client__send_message(net__TcpConn* socket) {
	bool client__send_message_defer_0 = false;
	string data;
	data = _SLIT("test");
	for (;;) {
		data = string__plus(os__input(_SLIT("")), _SLIT("\n"));
		if (string__eq(data, _SLIT(":q"))) {
			data =  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = _const_log__true_log}}, {_SLIT("closing the socket..."), 0, { .d_c = 0 }}}));
			client__for_free(data, socket);
			_v_exit(1);
			VUNREACHABLE();
		}
		client__send_message_defer_0 = true;
		_result_int _t1 = net__TcpConn_write_string(socket,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = data}}, {_SLIT0, 0, { .d_c = 0 }}})));
		if (_t1.is_error) {
			IError err = _t1.err;
			println( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = _const_log__warn_log}}, {_SLIT("close the socket."), 0, { .d_c = 0 }}})));
			_v_exit(1);
			VUNREACHABLE();
		;
		}
		
  (*(int*)_t1.data);
	}
	// Defer begin
	if (client__send_message_defer_0) {
		println( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = _const_log__true_log}}, {_SLIT("close the socket."), 0, { .d_c = 0 }}})));
		client__for_free(data, socket);
	}
	// Defer end
}

void client__for_free(string data, net__TcpConn* socket) {
	println(data);
	string_free(&data);
	_v_exit(1);
	VUNREACHABLE();
}

VV_LOCAL_SYMBOL void main__main(void) {
	string version = _SLIT("v0.2.0");
	Array_string args = array_clone_to_depth(&_const_os__args, 0);
	if (args.len == 1) {
		string data = string__plus((*(string*)array_get(args, 0)), _SLIT(" "));
		data = string__plus(data, os__input(_SLIT("Cmd line:")));
		args = string_split(data, _SLIT(" "));
	}
	Array_cmd__CmdOption long_options = new_array_from_c_array(4, 4, sizeof(cmd__CmdOption), _MOV((cmd__CmdOption[4]){((cmd__CmdOption){.abbr = _SLIT("-h"),.full = _SLIT("--help"),.vari = _SLIT(""),.defa = _SLIT(""),.desc = _SLIT("display this help and exit."),}), ((cmd__CmdOption){.abbr = _SLIT("-e"),.full = _SLIT("--exec"),.vari = _SLIT("[shell]"),.defa = _SLIT("false"),.desc = _SLIT("program to exec after connect."),}), ((cmd__CmdOption){.abbr = _SLIT("-lp"),.full = _SLIT("--listen_port"),.vari = _SLIT("[int]"),.defa = _SLIT("false"),.desc = _SLIT("listen the local port number."),}), ((cmd__CmdOption){.abbr = _SLIT("-klp"),.full = _SLIT("--keep_listen_port"),.vari = _SLIT("[int]"),.defa = _SLIT("false"),.desc = _SLIT("keep to listen the local port number."),})}));
	if (cmd__set_options(args, (*(cmd__CmdOption*)array_get(long_options, 0)))) {
		main__help(long_options, version);
		_v_exit(1);
		VUNREACHABLE();
	}
	bool connect = true;
	for (int v = 1; v < 4; ++v) {
		if (!string__eq(cmd__options(args, (*(cmd__CmdOption*)array_get(long_options, v))), _SLIT("false"))) {
			connect = false;
			if (string__eq((*(cmd__CmdOption*)array_get(long_options, v)).abbr, _SLIT("-e"))) {
				println( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = _const_log__warn_log}}, {_SLIT("\346\262\241\345\206\231\345\256\214, \347\234\213test\346\226\207\344\273\266\350\207\252\345\267\261\350\241\245\346\210\226\350\200\205\347\255\211\346\233\264\346\226\260\345\220\247"), 0, { .d_c = 0 }}})));
				_v_exit(1);
				VUNREACHABLE();
			}
			if (string__eq((*(cmd__CmdOption*)array_get(long_options, v)).abbr, _SLIT("-lp"))) {
				client__set_sever(cmd__options(args, (*(cmd__CmdOption*)array_get(long_options, v))), false);
			}
			if (string__eq((*(cmd__CmdOption*)array_get(long_options, v)).abbr, _SLIT("-klp"))) {
				client__set_sever(cmd__options(args, (*(cmd__CmdOption*)array_get(long_options, v))), true);
			}
		}
	}
	if (connect) {
		if (args.len < 3) {
			println( str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = _const_log__false_log}}, {_SLIT("Please refer to the help for use."), 0, { .d_c = 0 }}})));
			main__help(long_options, version);
			_v_exit(1);
			VUNREACHABLE();
		}
		string addr = (*(string*)array_get(args, 1));
		string port = (*(string*)array_get(args, 2));
		_result_net__TcpConn_ptr _t1 = net__dial_tcp(string__plus(string__plus(addr, _SLIT(":")), port));
		if (_t1.is_error) {
			IError err = _t1.err;
			println( str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = _const_log__false_log}}, {_SLIT0, 0xfe10, {.d_s = addr}}, {_SLIT(":"), 0xfe10, {.d_s = port}}, {_SLIT(" not found."), 0, { .d_c = 0 }}})));
			_v_exit(1);
			VUNREACHABLE();
		;
		}
		
 		net__TcpConn* socket =  (*(net__TcpConn**)_t1.data);
		// start go
		thread_arg_main__load_data *arg__t2 = (thread_arg_main__load_data *) _v_malloc(sizeof(thread_arg_main__load_data));
		arg__t2->fn = main__load_data;
		arg__t2->arg1 = socket;
		pthread_t thread__t2;
		pthread_attr_t thread__t2_attributes;
		pthread_attr_init(&thread__t2_attributes);
		pthread_attr_setstacksize(&thread__t2_attributes, 8388608); // fn: main.load_data
		int _t2_thr_res = pthread_create(&thread__t2, &thread__t2_attributes, (void*)main__load_data_thread_wrapper, arg__t2);
		if (_t2_thr_res) panic_error_number(tos3("`go main__load_data()`: "), _t2_thr_res);
		pthread_detach(thread__t2);
		// end go
		;
		client__send_message(socket);
	}
}

VV_LOCAL_SYMBOL void main__load_data(net__TcpConn* socket) {
	for (;;) {
		string data = net__TcpConn_read_line(socket);
		print(data);
	}
}

VV_LOCAL_SYMBOL void main__help(Array_cmd__CmdOption long_options, string version) {
	string data =  str_intp(2, _MOV((StrIntpData[]){{_SLIT("VY netcat "), 0xfe10, {.d_s = version}}, {_SLIT(", the network tools suitable for CTF.\nBasic usages:\n connect to somewhere:\011nc [addr] [port]\n listen to somewhere:\011nc -lp [port]\n keep to listen:\011\011nc -klp [port]\nCmdOptions:"), 0, { .d_c = 0 }}}));
	println(data);
	for (int _t1 = 0; _t1 < long_options.len; ++_t1) {
		cmd__CmdOption v = ((cmd__CmdOption*)long_options.data)[_t1];
		data =  str_intp(4, _MOV((StrIntpData[]){{_SLIT(" "), 0xfe10, {.d_s = v.abbr}}, {_SLIT(", "), 0xfe10, {.d_s = v.full}}, {_SLIT(" "), 0xfe10, {.d_s = v.vari}}, {_SLIT0, 0, { .d_c = 0 }}}));
		int data_len = data.len;
		for (int _t2 = 0; _t2 < ((int)(5 - ((int)(data_len / 8)))); ++_t2) {
			data = string__plus(data, _SLIT("\t"));
		}
		if (((int)(data_len % 8)) == 0) {
			data = string__plus(data, _SLIT("\t"));
		}
		data = string__plus(data,  str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = v.desc}}, {_SLIT0, 0, { .d_c = 0 }}})));
		println(data);
	}
}

void _vinit(int ___argc, voidptr ___argv) {
	as_cast_type_indexes = new_array_from_c_array(1, 1, sizeof(VCastTypeIndexName), _MOV((VCastTypeIndexName[1]){(VCastTypeIndexName){.tindex = 0,.tname = _SLIT("unknown")}}));

	// Initializations of consts for module math.bits
	_const_math__bits__overflow_error = _SLIT("Overflow Error");
	_const_math__bits__divide_error = _SLIT("Divide Error");
	// Initializations of consts for module strconv
	_const_strconv__digit_pairs = _SLIT("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_strconv__base_digits = _SLIT("0123456789abcdefghijklmnopqrstuvwxyz");
	// Initializations of consts for module builtin
	_const_digit_pairs = _SLIT("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_si_s_code = _SLIT("0xfe10");
	_const_si_g32_code = _SLIT("0xfe0e");
	_const_si_g64_code = _SLIT("0xfe0f");
	_const_min_i64 = ((i64)((int_literal)(-9223372036854775807 - 1)));
	_const_max_i64 = ((i64)(9223372036854775807));
	_const_none__ = I_None___to_Interface_IError(((None__*)memdup(&(None__){.Error = ((Error){EMPTY_STRUCT_INITIALIZATION}),}, sizeof(None__))));
	// Initializations of consts for module log
	_const_log__false_log = _SLIT("\033[31m[False] \033[0m");
	_const_log__true_log = _SLIT("\033[32m[True] \033[0m");
	_const_log__warn_log = _SLIT("\033[33m[Warn] \033[0m");
	// Initializations of consts for module time
	_const_time__days_string = _SLIT("MonTueWedThuFriSatSun");
	_const_time__months_string = _SLIT("JanFebMarAprMayJunJulAugSepOctNovDec");
	_const_time__nanosecond = ((time__Duration)(1));
	_const_time__infinite = ((((i64)(9223372036854775807))));
	_const_time__tokens_2 = new_array_from_c_array(18, 18, sizeof(string), _MOV((string[18]){
		_SLIT("MM"), _SLIT("Mo"), _SLIT("DD"), _SLIT("Do"), _SLIT("YY"), _SLIT("ss"), _SLIT("kk"), _SLIT("NN"), _SLIT("mm"),
		_SLIT("hh"), _SLIT("HH"), _SLIT("ii"), _SLIT("ZZ"), _SLIT("dd"), _SLIT("Qo"), _SLIT("QQ"), _SLIT("wo"),
		_SLIT("ww")}));
	_const_time__tokens_3 = new_array_from_c_array(4, 4, sizeof(string), _MOV((string[4]){_SLIT("MMM"), _SLIT("DDD"), _SLIT("ZZZ"), _SLIT("ddd")}));
	_const_time__tokens_4 = new_array_from_c_array(5, 5, sizeof(string), _MOV((string[5]){_SLIT("MMMM"), _SLIT("DDDD"), _SLIT("DDDo"), _SLIT("dddd"), _SLIT("YYYY")}));
	_const_time__long_months = new_array_from_c_array(12, 12, sizeof(string), _MOV((string[12]){
		_SLIT("January"), _SLIT("February"), _SLIT("March"), _SLIT("April"), _SLIT("May"), _SLIT("June"), _SLIT("July"), _SLIT("August"), _SLIT("September"),
		_SLIT("October"), _SLIT("November"), _SLIT("December")}));
	_const_time__absolute_zero_year = ((i64)(-292277022399));
	_const_time__microsecond = ((1000 * _const_time__nanosecond));
	_const_time__millisecond = ((1000 * _const_time__microsecond));
	_const_time__second = ((1000 * _const_time__millisecond));
	_const_time__minute = ((60 * _const_time__second));
	_const_time__hour = ((60 * _const_time__minute));
	// Initializations of consts for module rand.constants
	_const_rand__constants__ieee754_mantissa_f32_mask = (u32)(((((u32)(1U)) << 23U)) - 1U);
	_const_rand__constants__reciprocal_2_23rd = (f64)(((f64)(1.0)) / ((f64)((((u32)(1U)) << 23U))));
	_const_rand__constants__reciprocal_2_52nd = (f64)(((f64)(1.0)) / ((f64)((((u64)(1U)) << 52U))));
	// Initializations of consts for module os
	_const_os__fslash_str = _SLIT("/");
	_const_os__dot_dot = _SLIT("..");
	_const_os__empty_str = _SLIT("");
	_const_os__dot_str = _SLIT(".");
	_const_os__path_separator = _SLIT("/");
	_const_os__path_delimiter = _SLIT(":");
	_const_os__path_devnull = _SLIT("/dev/null");
{
	_const_os__o_rdonly = O_RDONLY;
}
{
	_const_os__o_wronly = O_WRONLY;
}
{
	_const_os__o_rdwr = O_RDWR;
}
{
	_const_os__o_create = O_CREAT;
}
{
	_const_os__o_excl = O_EXCL;
}
{
	_const_os__o_noctty = O_NOCTTY;
}
{
	_const_os__o_trunc = O_TRUNC;
}
{
	_const_os__o_append = O_APPEND;
}
{
	_const_os__o_nonblock = O_NONBLOCK;
}
{
	_const_os__o_sync = O_SYNC;
}
	_const_os__args = os__init_os_args(___argc, (byte**)___argv);
	_const_os__wd_at_startup = os__getwd();
	_const_os__executable_suffixes = new_array_from_c_array(1, 1, sizeof(string), _MOV((string[1]){_SLIT("")}));
	g_main_thread_id = ((u64)(pthread_self())); // 3global
	// Initializations of consts for module rand
	_const_rand__ulid_encoding = _SLIT("0123456789ABCDEFGHJKMNPQRSTVWXYZ");
	_const_rand__english_letters = _SLIT("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	_const_rand__hex_chars = _SLIT("abcdef0123456789");
	_const_rand__ascii_chars = _SLIT("!\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ\\^_`abcdefghijklmnopqrstuvwxyz{|}~");
	_const_rand__clock_seq_hi_and_reserved_valid_values = new_array_from_c_array_noscan(4, 4, sizeof(rune), _MOV((rune[4]){'8', '9', 'a', 'b'}));
	default_rng = *(rand__PRNG**)&((rand__PRNG*[]){0}[0]); // global
	// Calling fn init() for module rand
	rand__init();
	// Initializations of consts for module net
	_const_net__crlf = _SLIT("\r\n");
{
	_const_net__aoffset = /*OffsetOf*/ (u32)(__offsetof(net__Addr, addr));
}
	_const_net__no_timeout = ((time__Duration)(0));
{
	_const_net__is_windows = false;
}
{
	_const_net__msg_dontwait = MSG_DONTWAIT;
}
{
	_const_net__error_ewouldblock = EWOULDBLOCK;
}
{
	_const_net__error_einprogress = EINPROGRESS;
}
{
	_const_net__error_eagain = EAGAIN;
}
{
	_const_net__error_eintr = EINTR;
}
	_const_net__opts_bool = new_array_from_c_array_noscan(6, 6, sizeof(net__SocketOption), _MOV((net__SocketOption[6]){net__SocketOption__broadcast, net__SocketOption__debug, net__SocketOption__dont_route, net__SocketOption__error, net__SocketOption__keep_alive, net__SocketOption__oob_inline}));
	_const_net__opts_int = new_array_from_c_array_noscan(6, 6, sizeof(net__SocketOption), _MOV((net__SocketOption[6]){net__SocketOption__receive_buf_size, net__SocketOption__receive_low_size, net__SocketOption__receive_timeout, net__SocketOption__send_buf_size, net__SocketOption__send_low_size, net__SocketOption__send_timeout}));
	_const_net__opts_can_set = new_array_from_c_array_noscan(13, 13, sizeof(net__SocketOption), _MOV((net__SocketOption[13]){
		net__SocketOption__broadcast, net__SocketOption__debug, net__SocketOption__dont_route, net__SocketOption__keep_alive, net__SocketOption__linger, net__SocketOption__oob_inline, net__SocketOption__receive_buf_size, net__SocketOption__receive_low_size, net__SocketOption__receive_timeout,
		net__SocketOption__send_buf_size, net__SocketOption__send_low_size, net__SocketOption__send_timeout, net__SocketOption__ipv6_only}));
	_const_net__no_deadline = time__unix(0);
{
	_const_net__infinite_timeout = _const_time__infinite;
}
	_const_net__err_new_socket_failed = error_with_code(_SLIT("net: new_socket failed to create socket"), (int_literal)(_const_net__errors_base + 1));
	_const_net__err_option_not_settable = error_with_code(_SLIT("net: set_option_xxx option not settable"), (int_literal)(_const_net__errors_base + 2));
	_const_net__err_option_wrong_type = error_with_code(_SLIT("net: set_option_xxx option wrong type"), (int_literal)(_const_net__errors_base + 3));
	_const_net__err_port_out_of_range = error_with_code(_SLIT("net: port out of range"), (int_literal)(_const_net__errors_base + 5));
	_const_net__err_no_udp_remote = error_with_code(_SLIT("net: no udp remote"), (int_literal)(_const_net__errors_base + 6));
	_const_net__err_connect_failed = error_with_code(_SLIT("net: connect failed"), (int_literal)(_const_net__errors_base + 7));
	_const_net__err_connect_timed_out = error_with_code(_SLIT("net: connect timed out"), (int_literal)(_const_net__errors_base + 8));
	_const_net__err_timed_out = error_with_code(_SLIT("net: op timed out"), (int_literal)(_const_net__errors_base + 9));
	_const_net__err_connection_refused = error_with_code(_SLIT("net: connection refused"), (int_literal)(_const_net__errors_base + 10));
	_const_net__tcp_default_read_timeout = 30 * _const_time__second;
	_const_net__tcp_default_write_timeout = 30 * _const_time__second;
	_const_net__connect_timeout = 5 * _const_time__second;
	_const_net__udp_default_read_timeout = _const_time__second / 10;
	_const_net__udp_default_write_timeout = _const_time__second / 10;
	// Calling fn init() for module net
	net__init();
}
void _vcleanup(void) {
}
__attribute__ ((constructor))
void _vinit_caller() {
	static bool once = false; if (once) {return;} once = true;
	_vinit(0,0);
}
__attribute__ ((destructor))
void _vcleanup_caller() {
	static bool once = false; if (once) {return;} once = true;
	_vcleanup();
}

int main(int ___argc, char** ___argv){
	g_main_argc = ___argc;
	g_main_argv = ___argv;
#if defined(_VGCBOEHM)
	GC_set_pages_executable(0);
	GC_INIT();
#endif
	_vinit(___argc, (voidptr)___argv);
	main__main();
	_vcleanup();
	return 0;
}

// THE END.
