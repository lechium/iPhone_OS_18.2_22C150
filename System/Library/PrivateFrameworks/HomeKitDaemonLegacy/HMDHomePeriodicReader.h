//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomePeriodicReader : HMFObject
{
    NSString *_timerID;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000609a33
- (void).cxx_destruct;	// IMP=0x00000000006098b0
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
- (void)_startTimer;	// IMP=0x00000000006093de
- (void)_issueCharacteristicRequests:(id)arg1;	// IMP=0x000000000060911e
- (void)_checkToIssueRead;	// IMP=0x0000000000608f53
- (void)checkToIssueRead;	// IMP=0x0000000000608deb
- (void)startReadTimer;	// IMP=0x0000000000608c83
- (id)_characteristicsToRead;	// IMP=0x0000000000608379
- (void)residentUpdated;	// IMP=0x0000000000608288
- (void)handleTimerFiredNotification:(id)arg1;	// IMP=0x00000000006080f3
- (void)handleCharacteristicBasedEventAdded:(id)arg1;	// IMP=0x0000000000607feb
- (id)logIdentifier;	// IMP=0x0000000000607f0f
- (void)dealloc;	// IMP=0x0000000000607e9a
- (void)configure:(id)arg1;	// IMP=0x0000000000607d35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
