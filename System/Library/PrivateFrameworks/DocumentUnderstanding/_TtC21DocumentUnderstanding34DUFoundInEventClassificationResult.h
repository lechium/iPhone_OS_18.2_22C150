//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber;

@interface _TtC21DocumentUnderstanding34DUFoundInEventClassificationResult : NSObject
{
    MISSING_TYPE *isSupportedLocale;	// 8 = 0x8
    MISSING_TYPE *isHumanSender;	// 16 = 0x10
    MISSING_TYPE *isHumanHeaders;	// 24 = 0x18
    MISSING_TYPE *containsDataDetectors;	// 32 = 0x20
    MISSING_TYPE *isClassifiedAsEvent;	// 40 = 0x28
    MISSING_TYPE *textLengthPass;	// 48 = 0x30
    MISSING_TYPE *isEventCandidate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004bdf8
- (id)init;	// IMP=0x000000000004bd9c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004bcd8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004bb44
- (id)serializedData;	// IMP=0x000000000004ba93
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000004b97c
@property(nonatomic, retain) NSNumber *isEventCandidate; // @synthesize isEventCandidate;
@property(nonatomic, retain) NSNumber *textLengthPass; // @synthesize textLengthPass;
@property(nonatomic, retain) NSNumber *isClassifiedAsEvent; // @synthesize isClassifiedAsEvent;
@property(nonatomic, retain) NSNumber *containsDataDetectors; // @synthesize containsDataDetectors;
@property(nonatomic, retain) NSNumber *isHumanHeaders; // @synthesize isHumanHeaders;
@property(nonatomic, retain) NSNumber *isHumanSender; // @synthesize isHumanSender;
@property(nonatomic, retain) NSNumber *isSupportedLocale; // @synthesize isSupportedLocale;

@end

