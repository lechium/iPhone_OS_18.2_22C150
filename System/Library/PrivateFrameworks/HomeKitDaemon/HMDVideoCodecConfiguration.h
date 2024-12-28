//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDVideoCodec, HMDVideoCodecParameters, NSArray, NSData;

__attribute__((visibility("hidden")))
@interface HMDVideoCodecConfiguration : HAPTLVBase
{
    HMDVideoCodec *_videoCodec;	// 8 = 0x8
    HMDVideoCodecParameters *_codecParameters;	// 16 = 0x10
    NSArray *_videoAttributes;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001dcc00
- (void).cxx_destruct;	// IMP=0x00000000001dca87
@property(readonly, copy, nonatomic) NSArray *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters; // @synthesize codecParameters=_codecParameters;
@property(readonly, copy, nonatomic) HMDVideoCodec *videoCodec; // @synthesize videoCodec=_videoCodec;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dc971
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dc70d
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001dc541
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001dc158
- (id)initWithCodec:(id)arg1 codecParameters:(id)arg2 attributes:(id)arg3;	// IMP=0x00000000001dc08e

@end
