//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _bmFMDatabaseQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _bmFMDatabase *_db;	// 16 = 0x10
    int _openFlags;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_vfsName;	// 40 = 0x28
}

+ (Class)databaseClass;	// IMP=0x006000000001348b
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0060000000013426
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x00600000000133d0
+ (id)databaseQueueWithURL:(id)arg1;	// IMP=0x006000000001336e
+ (id)databaseQueueWithPath:(id)arg1;	// IMP=0x0060000000013325
- (void).cxx_destruct;	// IMP=0x0000000000014315
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x0000000000014114
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000140ef
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000140c8
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013d53
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013d39
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013d22
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013d08
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013cf1
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013af6
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013992
- (id)database;	// IMP=0x00000000000138c9
- (void)interrupt;	// IMP=0x000000000001388c
- (void)close;	// IMP=0x0000000000013807
- (void)dealloc;	// IMP=0x00000000000137bf
- (id)init;	// IMP=0x00000000000137ab
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000013791
- (id)initWithURL:(id)arg1;	// IMP=0x000000000001373b
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000136df
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000136ca
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x000000000001351a
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x000000000001349c

@end
