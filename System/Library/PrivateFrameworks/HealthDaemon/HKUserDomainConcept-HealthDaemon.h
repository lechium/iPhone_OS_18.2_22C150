//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKUserDomainConcept.h>

@interface HKUserDomainConcept (HealthDaemon)
+ (id)createWithCodableConcept:(id)arg1 profile:(id)arg2;	// IMP=0x00200000004b1368
@property(readonly, nonatomic) long long hd_syncEntityIdentity;
- (id)codableSubclassData;	// IMP=0x00100000004b27c2
- (void)applyCodableSubclassData:(id)arg1 mutableUserDomainConceptProperties:(id)arg2;	// IMP=0x00100000004b279e
- (id)codableRepresentationForSyncWithProfile:(id)arg1;	// IMP=0x00100000004b1f1e
@end
