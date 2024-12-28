//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexSet, VKTextPosition;

__attribute__((visibility("hidden")))
@interface VKTextRange
{
    NSArray *_nsRangeArray;	// 8 = 0x8
    NSArray *_rangeArray;	// 16 = 0x10
    NSIndexSet *_indexSet;	// 24 = 0x18
    long long _emptyIndex;	// 32 = 0x20
}

+ (id)defaultRange;	// IMP=0x001000000003ce9a
+ (id)emptyRange;	// IMP=0x001000000003ce81
+ (id)rangeWithVKRanges:(id)arg1;	// IMP=0x001000000003cb85
+ (id)rangeWithNSRanges:(id)arg1;	// IMP=0x001000000003c9c9
+ (id)rangeWithNSRange:(struct _NSRange)arg1;	// IMP=0x001000000003c995
+ (id)emptyRangeWithOffset:(unsigned long long)arg1;	// IMP=0x001000000003c964
+ (id)emptyRangeWithPosition:(id)arg1;	// IMP=0x001000000003c918
+ (id)rangeWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;	// IMP=0x001000000003c8e4
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;	// IMP=0x001000000003c876
- (void).cxx_destruct;	// IMP=0x000000000003d642
@property(nonatomic) long long emptyIndex; // @synthesize emptyIndex=_emptyIndex;
@property(retain, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property(retain, nonatomic) NSArray *rangeArray; // @synthesize rangeArray=_rangeArray;
@property(retain, nonatomic) NSArray *nsRangeArray; // @synthesize nsRangeArray=_nsRangeArray;
- (id)description;	// IMP=0x000000000003d5c1
- (id)summaryDescription;	// IMP=0x000000000003d519
- (unsigned long long)hash;	// IMP=0x000000000003d4d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d3c9
- (_Bool)intersectsNSRange:(struct _NSRange)arg1;	// IMP=0x000000000003d373
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) unsigned long long rangeCount;
@property(readonly, nonatomic) unsigned long long totalLength;
@property(readonly, nonatomic) unsigned long long endOffset;
@property(readonly, nonatomic) unsigned long long startOffset;
@property(readonly, nonatomic) _Bool isNSNotFound;
@property(readonly, nonatomic) VKTextPosition *end;
@property(readonly, nonatomic) VKTextPosition *start;
@property(readonly, nonatomic) struct _NSRange nsRange;
@property(readonly, nonatomic) _Bool containsMultipleRanges;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)containsTextPosition:(id)arg1;	// IMP=0x000000000003cdee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003cde3
- (id)initWithIndexSet:(id)arg1;	// IMP=0x000000000003c7fc
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x000000000003c763
- (id)initWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;	// IMP=0x000000000003c68f
- (id)initWithStart:(id)arg1 end:(id)arg2;	// IMP=0x000000000003c61d

@end
