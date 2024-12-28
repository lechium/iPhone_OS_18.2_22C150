//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDPacketizationMode : HAPNumberParser
{
    unsigned long long _packetizationMode;	// 8 = 0x8
}

+ (id)arrayWithModes:(id)arg1;	// IMP=0x00100000001d91e2
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001d91da
@property(readonly, nonatomic) unsigned long long packetizationMode; // @synthesize packetizationMode=_packetizationMode;
- (id)initWithPacketizationMode:(unsigned long long)arg1;	// IMP=0x00000000001d9185
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000001d912e
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001d9092
- (id)description;	// IMP=0x00000000001d901e
- (unsigned long long)hash;	// IMP=0x00000000001d900c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d8f89
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d8ef2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d8e35

@end
