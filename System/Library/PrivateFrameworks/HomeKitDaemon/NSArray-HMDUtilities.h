//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NAFuture, NSSet, NSString;

@interface NSArray (HMDUtilities)
- (id)arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x0020000000693201
@property(readonly) NAFuture *combineAllFutures;
@property(readonly) NSSet *asSet;
- (id)hmd_residentDeviceForMeshNode:(id)arg1;	// IMP=0x002000000099eb44
- (id)hmd_residentWithIdentifier:(id)arg1;	// IMP=0x0020000000e99de3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
