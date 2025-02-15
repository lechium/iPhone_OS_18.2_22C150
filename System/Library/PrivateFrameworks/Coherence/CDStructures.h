//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct TopoID {
    struct TopoReplica replica;
    unsigned int clock;
};

struct TopoIDRange {
    struct TopoID charID;
    unsigned int length;
};

struct TopoReplica {
    unsigned char uuid[16];
    unsigned int index;
};

struct TopoSubstring;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> {
    struct TopoSubstring **__begin_;
    struct TopoSubstring **__end_;
    struct __compressed_pair<TopoSubstring **, std::allocator<TopoSubstring *>> {
        struct TopoSubstring **__value_;
    } __end_cap_;
};

struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<TopoID, TopoID>*, std::allocator<std::pair<TopoID, TopoID>>> {
        void *__value_;
    } __end_cap_;
};

