//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMReceiverContact.h>

@class NSString;

@interface SMReceiverContact (RTCoreDataTransformable)
+ (id)createWithReceiverContactMO:(id)arg1;	// IMP=0x001000000059382c
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x00100000005936ae
- (void)updateManagedObject:(id)arg1;	// IMP=0x0010000000593e58
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x0010000000593dbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
