//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMCache.h>

@class NSString;

@interface SMCache (RTCoreDataTransformable)
+ (id)_getOrCreateManagedLocationsFromLocations:(id)arg1;	// IMP=0x00100000001eb9fd
+ (id)createWithSMCacheMO:(id)arg1;	// IMP=0x00100000001eb4a4
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x00100000001eb37c
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x00100000001ebbcb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

