//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface MSHistoryEvDirectionsItem
{
    MISSING_TYPE *_requiredCharge;	// 0 = 0x0
    MISSING_TYPE *_vehicleIdentifier;	// 0 = 0x0
}

+ (Class)managedClass;	// IMP=0x00400000000f5720
- (void).cxx_destruct;	// IMP=0x00000000000f6460
- (id)initWithObject:(id)arg1 store:(id)arg2 lazyLoad:(_Bool)arg3;	// IMP=0x00000000000f6340
@property(nonatomic, copy) NSString *vehicleIdentifier;
@property(nonatomic) double requiredCharge;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1 lazyLoad:(_Bool)arg2;	// IMP=0x00000000000f5820
- (id)initWithStore:(id)arg1 requiredCharge:(double)arg2 vehicleIdentifier:(id)arg3;	// IMP=0x00000000000f56b0
- (id)initWithRequiredCharge:(double)arg1 vehicleIdentifier:(id)arg2;	// IMP=0x00000000000f54b0

@end
