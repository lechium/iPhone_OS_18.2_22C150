//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDSupportedAudioStreamConfiguration : HAPTLVBase
{
    NSNumber *_supportsComfortNoise;	// 8 = 0x8
    NSDictionary *_codecConfigurations;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001e0555
- (void).cxx_destruct;	// IMP=0x00000000001e04d7
@property(readonly, copy, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
@property(readonly, copy, nonatomic) NSNumber *supportsComfortNoise; // @synthesize supportsComfortNoise=_supportsComfortNoise;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e0407
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e0234
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001e00d5
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001dfb4a
- (id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2;	// IMP=0x00000000001dfa95

@end

