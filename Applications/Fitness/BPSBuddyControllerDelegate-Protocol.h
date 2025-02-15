//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NRDevice, NSDictionary;
@protocol BPSBuddyController;

@protocol BPSBuddyControllerDelegate <NSObject>
- (void)buddyControllerDoneForSignIn:(id <BPSBuddyController>)arg1;
- (void)buddyControllerReleaseHoldAndSkip:(id <BPSBuddyController>)arg1;
- (void)buddyControllerReleaseHold:(id <BPSBuddyController>)arg1;
- (void)buddyControllerDone:(id <BPSBuddyController>)arg1 nextControllerClass:(Class)arg2;
- (void)buddyControllerDone:(id <BPSBuddyController>)arg1;
- (NSDictionary *)setupFlowUserInfo;
- (NRDevice *)activePairingDevice;
@end

