//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MTRecommendationModuleAttributes, NSString;

@interface MTRecommendationModule : NSObject
{
    MISSING_TYPE *id;	// 8 = 0x8
    MISSING_TYPE *type;	// 24 = 0x18
    MISSING_TYPE *attributes;	// 40 = 0x28
    MISSING_TYPE *categories;	// 48 = 0x30
    MISSING_TYPE *shows;	// 56 = 0x38
    MISSING_TYPE *episodes;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001c4490
@property(nonatomic, readonly) MTRecommendationModuleAttributes *attributes; // @synthesize attributes;
@property(nonatomic, copy) NSString *type;
@property(nonatomic, copy) NSString *id;

@end
