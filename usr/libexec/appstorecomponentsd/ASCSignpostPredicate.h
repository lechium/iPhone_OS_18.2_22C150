//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface ASCSignpostPredicate : NSObject
{
    NSSet *_tags;	// 8 = 0x8
    NSArray *_dateRanges;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000025679
- (void).cxx_destruct;	// IMP=0x0020000000025e8e
@property(readonly, copy, nonatomic) NSArray *dateRanges; // @synthesize dateRanges=_dateRanges;
@property(readonly, copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
- (id)predicateByAddingDateRange:(id)arg1;	// IMP=0x0010000000025da3
- (id);	// IMP=0x0010000000025cbc
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)description;	// IMP=0x0010000000025b4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000259aa
- (unsigned long long)hash;	// IMP=0x00100000000258f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000258ed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002583f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025681
- (id)init;	// IMP=0x0010000000025618
- (id)initWithSpans:(id)arg1;	// IMP=0x00100000000252f8
- (id)initWithTags:(id)arg1 dateRanges:(id)arg2;	// IMP=0x0010000000025233

@end
