//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14ReplicatorCoreP33_586791E780FEDC6114754B28ABA431B16Client : NSObject
{
    MISSING_TYPE *pid;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *lock;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
    MISSING_TYPE *lock_descriptors;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004bc90
- (id)init;	// IMP=0x000000000004bc10
- (id)allowListAndReturnError:(id *)arg1;	// IMP=0x000000000004d620
- (id)isAllowListEnabledAndReturnError:(id *)arg1;	// IMP=0x000000000004d4b0
- (_Bool)removeFromAllowListWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004d360
- (_Bool)addIDToAllowListWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004d120
- (_Bool)setAllowListWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ce90
- (_Bool)enableAllowListWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004cb90
- (_Bool)setEnabledWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ca00
- (id)isEnabledAndReturnError:(id *)arg1;	// IMP=0x000000000004c9c0
- (_Bool)retryStuckRelationshipsAndReturnError:(id *)arg1;	// IMP=0x000000000004c830
- (_Bool)unavailableWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c700
- (_Bool)unpairWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c570
- (void)pairWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c3b0
- (id)pushTokenWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c1e0
- (id)localDeviceAndReturnError:(id *)arg1;	// IMP=0x000000000004c000
- (id)devicesAndReturnError:(id *)arg1;	// IMP=0x000000000004be30

@end
