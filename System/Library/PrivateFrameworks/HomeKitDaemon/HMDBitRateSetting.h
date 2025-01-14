//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDBitRateSetting : HAPNumberParser
{
    unsigned long long _bitrateSetting;	// 8 = 0x8
}

+ (id)arrayWithSettings:(id)arg1;	// IMP=0x00100000001dd84d
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001dd845
@property(readonly, nonatomic) unsigned long long bitrateSetting; // @synthesize bitrateSetting=_bitrateSetting;
- (id)initWithBitRateSetting:(unsigned long long)arg1;	// IMP=0x00000000001dd7f0
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000001dd799
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001dd6fd
- (id)description;	// IMP=0x00000000001dd689
- (unsigned long long)hash;	// IMP=0x00000000001dd677
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001dd5f4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dd55d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dd4a0

@end

