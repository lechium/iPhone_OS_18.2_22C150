//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/RTVisit.h>

@class NSString;

@interface RTVisit (RTCoreDataTransformable)
+ (id)createWithVisitMO:(id)arg1;	// IMP=0x0010000000070b0e
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x0010000000070997
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x00100000000712a6
- (id)initWithDefaultsDictionanry:(id)arg1;	// IMP=0x0010000000416608
- (id)initWithLearnedVisit:(id)arg1;	// IMP=0x00100000004ed897

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

