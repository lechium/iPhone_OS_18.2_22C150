//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Block_byref {
    void *_field1;
    struct Block_byref *_field2;
    int _field3;
    unsigned int _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFArray;

struct __CFData;

struct __CFPasteboard {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __CFString *_field2;
    id _field3;
    struct __CFUUID *_field4;
    struct __CFArray *_field5;
    unsigned char _field6;
    id _field7;
    id _field8;
    _Atomic unsigned long long _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    struct __CFData *_field14;
    struct __CFDictionary *_field15;
    CDUnknownBlockType _field16;
    CDUnknownBlockType _field17;
    double _field18;
};

struct __cfobservers_t {
    id slot;
    struct __cfobservers_t *next;
};

struct edge {
    unsigned long long _field1;
    unsigned long long _field2[2];
    unsigned long long _field3;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vertex {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long *_field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    int _field1;
    long long _field2;
    long long _field3;
} CDStruct_b6748e3c;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    struct __CFBasicHash *set;
    NSMutableArray *array;
} CDStruct_2595eaee;

typedef struct {
    int _field1;
    long long _field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
} CDStruct_9e943ef1;

typedef struct {
    int _field1;
    long long _field2;
    struct __CFArray *_field3;
} CDStruct_6ea78fe2;

typedef struct {
    int _field1;
    long long _field2;
    struct __CFData *_field3;
    unsigned long long _field4;
} CDStruct_55991ab6;

typedef struct {
    id *objs;
    union {
        unsigned long long mutations;
        struct {
            unsigned int muts;
            unsigned int used:26;
            unsigned int szidx:6;
        } ;
    } state;
} CDStruct_af6d7307;

typedef struct {
    id *buffer;
    union {
        struct {
            unsigned long long mutations;
        } ;
        struct {
            unsigned int muts;
            unsigned int other;
        } ;
        struct {
            unsigned int mutbits:31;
            unsigned int copyKeys:1;
            unsigned int used:25;
            unsigned int kvo:1;
            unsigned int szidx:6;
        } ;
    } state;
} CDStruct_bc24fd1e;

typedef struct {
    id *list;
    unsigned int offset;
    unsigned int size;
    union {
        unsigned long long mutations;
        struct {
            unsigned int muts;
            unsigned int used;
        } ;
    } state;
} CDStruct_a6934631;

