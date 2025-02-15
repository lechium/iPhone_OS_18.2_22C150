//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PQLStatement : NSObject
{
    struct sqlite3_stmt *_stmt;	// 8 = 0x8
    PQLStatement *_next;	// 16 = 0x10
    NSMutableArray *_aliveBinds;	// 24 = 0x18
    union {
        unsigned char inlined[8];
        unsigned char *ptr;
    } _specUnion;	// 32 = 0x20
    _Bool _inUse;	// 40 = 0x28
    _Bool _isTraced;	// 41 = 0x29
    short _specLength;	// 42 = 0x2a
}

- (void).cxx_destruct;	// IMP=0x000000000000e48f
- (void)unbindForDB:(id)arg1 returnedRows:(unsigned long long)arg2 executionTime:(unsigned long long)arg3 preparationTime:(unsigned long long)arg4;	// IMP=0x000000000000e29d
- (void)bindArguments:(struct __va_list_tag [1])arg1 db:(id)arg2;	// IMP=0x000000000000da92
- (id)description;	// IMP=0x000000000000da2f
- (void)dealloc;	// IMP=0x000000000000d9e1
- (void)invalidate;	// IMP=0x000000000000d9b5
- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2 db:(id)arg3 cache:(struct cache_s *)arg4 preparationTime:(unsigned long long *)arg5;	// IMP=0x000000000000d3af
- (id)initWithStatement:(id)arg1 forDB:(id)arg2 preparationTime:(unsigned long long *)arg3;	// IMP=0x000000000000d27c
- (_Bool)_prepare:(const char *)arg1 withDB:(id)arg2 preparationTime:(unsigned long long *)arg3;	// IMP=0x000000000000d0d8
- (id)translate:(id)arg1 hasInjections:(_Bool *)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x000000000000c825
- (void)keepBindAlive:(id)arg1;	// IMP=0x000000000000c7b1
@property(readonly, nonatomic) _Bool isTraced;
- (void)bindFromArray:(id)arg1 db:(id)arg2;	// IMP=0x000000000000f186
- (id)initWithQueryBuilder:(CDUnknownBlockType)arg1 db:(id)arg2 cache:(struct cache_s *)arg3 preparationTime:(unsigned long long *)arg4;	// IMP=0x000000000000ec53
- (id)translate:(id)arg1 withBuilder:(id)arg2;	// IMP=0x000000000000eaf7

@end

