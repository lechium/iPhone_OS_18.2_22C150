//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EscrowRequestController, NSString;

@interface EscrowRequestServer : NSObject
{
    EscrowRequestController *_controller;	// 8 = 0x8
}

+ (id)request:(id *)arg1;	// IMP=0x00200000000423e4
+ (id)server;	// IMP=0x00100000000423b4
- (void).cxx_destruct;	// IMP=0x0020000000042147
@property(retain) EscrowRequestController *controller; // @synthesize controller=_controller;
- (void)setupAnalytics;	// IMP=0x00100000000420bf
- (void)escrowCompletedWithinLastSeconds:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041dc3
- (void)storePrerecordsInEscrow:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041d03
- (void)resetAllRequests:(CDUnknownBlockType)arg1;	// IMP=0x00100000000418e7
- (void)fetchRequestStatuses:(CDUnknownBlockType)arg1;	// IMP=0x00100000000413ef
- (void)triggerEscrowUpdate:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000412c9
- (void)fetchRequestWaitingOnPasscode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040d9b
- (void)fetchPrerecord:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040ae6
- (void)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000040816
- (_Bool)escrowCompletedWithinLastSeconds:(double)arg1;	// IMP=0x0010000000040718
- (_Bool)pendingEscrowUpload:(id *)arg1;	// IMP=0x0010000000040357
- (id)fetchStatuses:(id *)arg1;	// IMP=0x0010000000040211
- (_Bool)triggerEscrowUpdate:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000400a7
- (_Bool)triggerEscrowUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000040090
- (id)initWithLockStateTracker:(id)arg1;	// IMP=0x001000000004000e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

