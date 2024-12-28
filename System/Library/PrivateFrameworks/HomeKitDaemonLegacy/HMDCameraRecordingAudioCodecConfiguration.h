//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDCameraRecordingAudioCodec, HMDCameraRecordingAudioCodecParameters, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingAudioCodecConfiguration : HAPTLVBase
{
    HMDCameraRecordingAudioCodec *_codec;	// 8 = 0x8
    HMDCameraRecordingAudioCodecParameters *_parameters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000bff370
- (void).cxx_destruct;	// IMP=0x0000000000bff33f
@property(readonly, copy, nonatomic) HMDCameraRecordingAudioCodecParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) HMDCameraRecordingAudioCodec *codec; // @synthesize codec=_codec;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000bff26f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000bff183
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000bff019
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000bfed17
- (id)initWithAudioCodec:(id)arg1 codecParameters:(id)arg2;	// IMP=0x0000000000bfec75

@end
