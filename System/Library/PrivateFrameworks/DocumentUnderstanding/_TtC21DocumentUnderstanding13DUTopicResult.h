//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, _TtC21DocumentUnderstanding26DUGlobalTopicSetIdentifier;

@interface _TtC21DocumentUnderstanding13DUTopicResult : NSObject
{
    MISSING_TYPE *topicSet;	// 8 = 0x8
    MISSING_TYPE *topicIdentifier;	// 16 = 0x10
    MISSING_TYPE *topicConfidence;	// 32 = 0x20
    MISSING_TYPE *topicNames;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003400f
- (id)init;	// IMP=0x0000000000033fc0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033ed4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033d21
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000033be0
@property(nonatomic, copy) NSArray *topicNames;
@property(nonatomic) double topicConfidence; // @synthesize topicConfidence;
@property(nonatomic, copy) NSString *topicIdentifier;
@property(nonatomic, retain) _TtC21DocumentUnderstanding26DUGlobalTopicSetIdentifier *topicSet; // @synthesize topicSet;

@end

