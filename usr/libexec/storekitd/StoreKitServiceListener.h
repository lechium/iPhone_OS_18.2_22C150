//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SSEventMonitor;

@interface StoreKitServiceListener : NSObject
{
    SSEventMonitor *_eventMonitor;	// 8 = 0x8
}

+ (void)start;	// IMP=0x002000000006a988
- (void).cxx_destruct;	// IMP=0x002000000006c460
- (void)_invalidateUnfinishedTransactionsForBundleID:(id)arg1 logKey:(id)arg2;	// IMP=0x001000000006c1d8
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x001000000006b87b
- (void)eventMonitor:(id)arg1 receivedEventWithName:(id)arg2 userInfo:(id)arg3;	// IMP=0x001000000006ab77
- (id)init;	// IMP=0x001000000006ab0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
