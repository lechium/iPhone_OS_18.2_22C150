//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSMutableArray, geo_isolater;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _GEOConfigDBOperationQueue : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    geo_isolater *_isolator;	// 16 = 0x10
    NSMutableArray *_operations;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a0271
- (void)flushOnDBQueue;	// IMP=0x000000000019fec8
- (void)flush;	// IMP=0x000000000019fe5f
- (void)cancelTimer;	// IMP=0x000000000019fe41
- (void)scheduleTimer;	// IMP=0x000000000019fe0e
- (void)enqueueOperation:(id)arg1;	// IMP=0x000000000019fcbc
- (void)dealloc;	// IMP=0x000000000019fc75
- (id)init:(id)arg1;	// IMP=0x000000000019fae6

@end

