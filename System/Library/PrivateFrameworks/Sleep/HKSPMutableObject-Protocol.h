//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPObject-Protocol.h>

@class HKSPChangeSet, NSDate;
@protocol HKSPObject;

@protocol HKSPMutableObject <HKSPObject>
@property(readonly, nonatomic) id <HKSPObject> originalObject;
@property(readonly, nonatomic) HKSPChangeSet *changeSet;
@property(copy, nonatomic) NSDate *lastModifiedDate;
- (void)revert;
- (void)freeze;
@end
