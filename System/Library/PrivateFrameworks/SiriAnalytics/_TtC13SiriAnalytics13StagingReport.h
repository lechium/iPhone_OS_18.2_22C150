//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13SiriAnalytics13StagingReport : NSObject
{
    MISSING_TYPE *addedCount;	// 8 = 0x8
    MISSING_TYPE *missingTimestampCount;	// 12 = 0xc
    MISSING_TYPE *result;	// 16 = 0x10
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000018dba
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000018d7d
+ (id)terminated;	// IMP=0x0010000000018c95
+ (id)timedOut;	// IMP=0x0010000000018c50
+ (id)failed;	// IMP=0x0010000000018c0b
- (id)init;	// IMP=0x0000000000019174
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019113
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018f19
- (void)missingTimestamp;	// IMP=0x0000000000018d34
- (void)added;	// IMP=0x0000000000018cc9
- (id)initWithResult:(int)arg1;	// IMP=0x0000000000018bd0
@property(nonatomic) int result; // @synthesize result;
@property(nonatomic) int missingTimestampCount; // @synthesize missingTimestampCount;
@property(nonatomic) int addedCount; // @synthesize addedCount;

@end

