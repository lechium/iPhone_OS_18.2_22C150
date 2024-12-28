//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MNXPCTransactionManager : NSObject
{
    NSObject<OS_os_transaction> *_xpcTransaction;	// 8 = 0x8
    NSHashTable *_requesters;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00600000000ab6ab
- (void).cxx_destruct;	// IMP=0x00000000000abd9e
- (void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2;	// IMP=0x00000000000ab9dd
- (void)addHighMemoryThresholdRequest:(id)arg1;	// IMP=0x00000000000ab700

@end
