//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateInterval, NSMutableSet, NSSet;

@interface ASCSignpostSpan : NSObject
{
    unsigned long long _primaryTag;	// 8 = 0x8
    NSMutableSet *_mutableSupplementaryTags;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000025f21
- (void).cxx_destruct;	// IMP=0x0020000000026773
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSMutableSet *mutableSupplementaryTags; // @synthesize mutableSupplementaryTags=_mutableSupplementaryTags;
@property(readonly, nonatomic) unsigned long long primaryTag; // @synthesize primaryTag=_primaryTag;
- (id)description;	// IMP=0x00100000000265f8
- (void)endEmitting;	// IMP=0x00100000000264e8
- (void)beginEmitting;	// IMP=0x0010000000026427
- (void)addSupplementaryTag:(unsigned long long)arg1;	// IMP=0x00100000000263b0
@property(readonly, copy, nonatomic) NSDateInterval *dateRange;
@property(readonly, copy, nonatomic) NSSet *supplementaryTags;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000260fa
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025f29
- (id)init;	// IMP=0x0010000000025eb6

@end

