//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVVideoOutputSettings.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings
{
    NSDictionary *_adaptedVideoCompressionProperties;	// 16 = 0x10
    NSDictionary *_VTPixelAspectRatioDictionary;	// 24 = 0x18
    NSDictionary *_VTCleanApertureDictionary;	// 32 = 0x20
    _Bool _shouldPrepareEncodedSampleBuffersForPaddedWrites;	// 40 = 0x28
}

+ (_Bool)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id *)arg4;	// IMP=0x001000000014cf5e
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x001000000014cf22
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x001000000014ce5c
@property(nonatomic) _Bool shouldPrepareEncodedSampleBuffersForPaddedWrites;
@property(readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property(readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property(readonly, nonatomic) unsigned int videoCodecType;
- (id)cleanApertureDictionary;	// IMP=0x000000000014ea16
- (id)pixelAspectRatioDictionary;	// IMP=0x000000000014ea05
- (int)height;	// IMP=0x000000000014e9b9
- (int)width;	// IMP=0x000000000014e96d
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x000000000014e7c0
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x000000000014e5e6
- (_Bool)willYieldCompressedSamples;	// IMP=0x000000000014e5de
- (void)dealloc;	// IMP=0x000000000014e578
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;	// IMP=0x000000000014e45a
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000014d4a4

@end
