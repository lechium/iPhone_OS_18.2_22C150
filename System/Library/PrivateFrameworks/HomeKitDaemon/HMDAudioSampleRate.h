//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDAudioSampleRate : HAPNumberParser
{
    unsigned long long _sampleRate;	// 8 = 0x8
}

+ (id)arrayWithRates:(id)arg1;	// IMP=0x00100000001dde03
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001dddfb
@property(readonly, nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)initWithSampleRate:(unsigned long long)arg1;	// IMP=0x00000000001ddda6
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000001ddd4f
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001ddcb3
- (id)description;	// IMP=0x00000000001ddc3f
- (unsigned long long)hash;	// IMP=0x00000000001ddc2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ddbaa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ddb13
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dda56

@end
