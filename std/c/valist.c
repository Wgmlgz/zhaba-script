#include <stdarg.h>

/** Fake `VA_LIST` type to emulate real va_list */
#define FAKE_VA_LIST(...) __VA_ARGS__
// @zh-type ["bool _", "VA_LIST"]


/** `va` operator definition for all base types */

// @zh-fn ["lop VA_LIST va i8 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l i8 x", "FAKE_VA_LIST"]
// @zh-fn ["lop VA_LIST va i16 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l i16 x", "FAKE_VA_LIST"]
// @zh-fn ["lop VA_LIST va i32 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l i32 x", "FAKE_VA_LIST"]
// @zh-fn ["lop VA_LIST va i64 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l i64 x", "FAKE_VA_LIST"]

// @zh-fn ["lop VA_LIST va u8 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l u8 x", "FAKE_VA_LIST"]
// @zh-fn ["lop VA_LIST va u16 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l u16 x", "FAKE_VA_LIST"]
// @zh-fn ["lop VA_LIST va u32 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l u32 x", "FAKE_VA_LIST"]
// @zh-fn ["lop VA_LIST va u64 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l u64 x", "FAKE_VA_LIST"]

// @zh-fn ["lop VA_LIST va f32 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l f32 x", "FAKE_VA_LIST"]
// @zh-fn ["lop VA_LIST va f64 x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l f64 x", "FAKE_VA_LIST"]

// @zh-fn ["lop VA_LIST va str x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l str x", "FAKE_VA_LIST"]

// @zh-fn ["lop VA_LIST va char x", "FAKE_VA_LIST"]
// @zh-fn ["op 4 VA_LIST va VA_LIST l char x", "FAKE_VA_LIST"]
