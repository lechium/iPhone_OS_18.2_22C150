//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TPSNetworkPathMonitor : NSObject
{
    MISSING_TYPE *monitor;	// 8 = 0x8
    MISSING_TYPE *serialTasks;	// 16 = 0x10
}

+ (_Bool)isNetworkError:(id)arg1;	// IMP=0x0040000000070aa0
+ (id)sharedMonitor;	// IMP=0x004000000006fdd0
- (void).cxx_destruct;	// IMP=0x0000000000070c30
- (id)init;	// IMP=0x0000000000070bd0
- (void)removeObserverForKey:(id)arg1;	// IMP=0x0000000000070a20
- (void)addObserverForKey:(id)arg1 using:(CDUnknownBlockType)arg2;	// IMP=0x00000000000706d0
- (void)stop;	// IMP=0x0000000000070280
- (void)start;	// IMP=0x00000000000700b0

@end
