//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMDeviceStatus.h>

@class NSString;

@interface SMDeviceStatus (RTCoreDataTransformable)
+ (id)createWithDeviceStatus:(id)arg1;	// IMP=0x001000000058f35a
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x001000000058f1dc
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x001000000058f60a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

