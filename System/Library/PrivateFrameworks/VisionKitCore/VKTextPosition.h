//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKTextPosition
{
    long long _offset;	// 8 = 0x8
}

+ (id)zeroPosition;	// IMP=0x004000000003c4ff
+ (id)positionWithOffset:(long long)arg1;	// IMP=0x004000000003c470
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (id)description;	// IMP=0x000000000003c5e9
- (id)summaryDescription;	// IMP=0x000000000003c5aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003c513
- (id)positionByAddingOffset:(long long)arg1;	// IMP=0x000000000003c4a6
- (id)initWithOffset:(long long)arg1;	// IMP=0x000000000003c42c

@end

