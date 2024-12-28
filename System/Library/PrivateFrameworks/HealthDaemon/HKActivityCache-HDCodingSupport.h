//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKActivityCache.h>

@class NSString;

@interface HKActivityCache (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x0010000000056708
+ (Class)hd_dataEntityClass;	// IMP=0x0010000000029dfe
- (_Bool)addCodableRepresentationToCollectionForSync:(id)arg1;	// IMP=0x001000000024d854
- (_Bool)addCodableRepresentationToCollectionForJournal:(id)arg1;	// IMP=0x0010000000054450
- (id)codableRepresentationForSync;	// IMP=0x00100000000544cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
