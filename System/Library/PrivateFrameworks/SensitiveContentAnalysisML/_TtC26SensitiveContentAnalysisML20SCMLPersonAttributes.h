//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC26SensitiveContentAnalysisML20SCMLPersonAttributes : NSObject
{
    MISSING_TYPE *specific;	// 8 = 0x8
    MISSING_TYPE *isGroup;	// 9 = 0x9
    MISSING_TYPE *hasAge;	// 10 = 0xa
    MISSING_TYPE *hasGender;	// 11 = 0xb
    MISSING_TYPE *hasEthnicity;	// 12 = 0xc
    MISSING_TYPE *age;	// 16 = 0x10
    MISSING_TYPE *gender;	// 24 = 0x18
    MISSING_TYPE *ethnicity;	// 32 = 0x20
    MISSING_TYPE *hasImplicitCategoryRequiringPersonalization;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005ed20
- (id)init;	// IMP=0x000000000005ecd0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005e090
@property(nonatomic) _Bool hasImplicitCategoryRequiringPersonalization; // @synthesize hasImplicitCategoryRequiringPersonalization;
@property(nonatomic, copy) NSArray *ethnicity;
@property(nonatomic, copy) NSArray *gender;
@property(nonatomic, copy) NSArray *age;
@property(nonatomic) _Bool hasEthnicity; // @synthesize hasEthnicity;
@property(nonatomic) _Bool hasGender; // @synthesize hasGender;
@property(nonatomic) _Bool hasAge; // @synthesize hasAge;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup;
@property(nonatomic) _Bool specific; // @synthesize specific;

@end

