//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface MSServerEvaluationStatus
{
    MISSING_TYPE *_arpStatus;	// 0 = 0x0
    MISSING_TYPE *_positionIndex;	// 0 = 0x0
    MISSING_TYPE *_rapStatus;	// 0 = 0x0
    MISSING_TYPE *_reliabilityStatus;	// 0 = 0x0
}

+ (Class)managedClass;	// IMP=0x0040000000084b80
- (id)initWithObject:(id)arg1 store:(id)arg2 lazyLoad:(_Bool)arg3;	// IMP=0x0000000000085890
@property(nonatomic) _Bool reliabilityStatus;
@property(nonatomic) _Bool rapStatus;
@property(nonatomic) long long positionIndex;
@property(nonatomic) _Bool arpStatus;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1 lazyLoad:(_Bool)arg2;	// IMP=0x0000000000084bc0
- (id)initWithStore:(id)arg1 arpStatus:(_Bool)arg2 positionIndex:(long long)arg3 rapStatus:(_Bool)arg4 reliabilityStatus:(_Bool)arg5;	// IMP=0x0000000000084b30
- (id)initWithArpStatus:(_Bool)arg1 positionIndex:(long long)arg2 rapStatus:(_Bool)arg3 reliabilityStatus:(_Bool)arg4;	// IMP=0x0000000000084740

@end

