//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21DocumentUnderstanding20DURequestContentType : NSObject
{
    MISSING_TYPE *rawValue;	// 8 = 0x8
}

+ (id)foundInEventClassification;	// IMP=0x00100000000362f4
+ (id)foundInEvent;	// IMP=0x00100000000362d1
+ (id)posTags;	// IMP=0x0010000000036272
+ (id)poem;	// IMP=0x001000000003624f
+ (id)category;	// IMP=0x00100000000361f0
+ (id)userInterfaceUnderstanding;	// IMP=0x00100000000361cd
+ (id)navigationTitle;	// IMP=0x001000000003616e
+ (id)phoneNumber;	// IMP=0x001000000003610f
+ (id)link;	// IMP=0x00100000000360b0
+ (id)address;	// IMP=0x0010000000036051
+ (id)date;	// IMP=0x0010000000035ff2
+ (id)wikiDataTopic;	// IMP=0x0010000000035f93
+ (id)languageTag;	// IMP=0x0010000000035ef7
- (void)formSymmetricDifference:(id)arg1;	// IMP=0x0000000000036946
- (void)formIntersection:(id)arg1;	// IMP=0x000000000003692c
- (void)formUnion:(id)arg1;	// IMP=0x0000000000036912
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000036855
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000036755
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) _Bool isEmpty;
- (id)initWithAbilitiesToUnion:(id)arg1;	// IMP=0x000000000003660a
- (id)initWithRawValue:(long long)arg1;	// IMP=0x0000000000036455
- (id)init;	// IMP=0x0000000000036400
@property(nonatomic) long long rawValue; // @synthesize rawValue;

@end

