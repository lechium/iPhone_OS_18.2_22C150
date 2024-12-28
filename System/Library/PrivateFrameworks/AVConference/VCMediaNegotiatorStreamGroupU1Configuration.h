//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSOrderedSet, NSSet, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorStreamGroupU1Configuration : NSObject
{
    unsigned char _supportedDirection;	// 8 = 0x8
    unsigned int _ssrc;	// 12 = 0xc
    _Bool _allowAudioRecording;	// 16 = 0x10
    NSSet *_audioPayloads;	// 24 = 0x18
    NSOrderedSet *_supportedCipherSuites;	// 32 = 0x20
    NSArray *_payloadPreference;	// 40 = 0x28
    unsigned int _screenPixelCount;	// 48 = 0x30
    VCVideoRuleCollections *_videoRuleCollections;	// 56 = 0x38
    NSDictionary *_videoFeatureStrings;	// 64 = 0x40
    NSDictionary *_videoFeatureStringsFixedPosition;	// 72 = 0x48
    NSArray *_videoPayloads;	// 80 = 0x50
    NSArray *_videoParameterSet;	// 88 = 0x58
}

+ (_Bool)ssrcForStreamGroup:(unsigned int)arg1 localConfig:(id)arg2 ssrc:(unsigned int *)arg3;	// IMP=0x001000000015319e
+ (_Bool)updateCommonNegotiatedVideoSettings:(id)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;	// IMP=0x0010000000152e12
+ (void)negotiateFeatureStrings:(id)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;	// IMP=0x0010000000152e0c
+ (id)negotiatedScreenSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;	// IMP=0x0010000000152a92
+ (id)negotiatedVideoSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2 streamGroupID:(unsigned int)arg3;	// IMP=0x00100000001527ca
+ (id)negotiatedVideoSettingsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;	// IMP=0x001000000015272f
+ (id)negotiatedMicrophoneSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;	// IMP=0x0010000000152461
+ (long long)negotiateU1CipherSuiteForStreamGroupID:(unsigned int)arg1 remoteSupportedCipherSuites:(id)arg2;	// IMP=0x00100000001521a6
+ (id)negotiatedSystemAudioSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;	// IMP=0x0010000000151def
+ (id)negotiatedAudioSettingsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;	// IMP=0x0010000000151d53
+ (void)updateBodyDataU1Config:(id)arg1 bodyDataConfiguration:(id)arg2;	// IMP=0x0010000000151782
+ (void)updateFaceTextureU1Config:(id)arg1 faceTextureConfiguration:(id)arg2;	// IMP=0x0010000000151587
+ (void)updateScreenU1Config:(id)arg1 screenConfiguration:(id)arg2;	// IMP=0x00100000001512e3
+ (_Bool)updateVideoPayloadsAndParametersForU1Config:(id)arg1;	// IMP=0x0010000000150fe5
+ (void)updateCameraU1Config:(id)arg1 cameraConfiguration:(id)arg2;	// IMP=0x0010000000150b6b
@property(nonatomic) unsigned int screenPixelCount; // @synthesize screenPixelCount=_screenPixelCount;
@property(retain, nonatomic) NSDictionary *videoFeatureStringsFixedPosition; // @synthesize videoFeatureStringsFixedPosition=_videoFeatureStringsFixedPosition;
@property(retain, nonatomic) NSDictionary *videoFeatureStrings; // @synthesize videoFeatureStrings=_videoFeatureStrings;
@property(retain, nonatomic) VCVideoRuleCollections *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(retain, nonatomic) NSArray *videoParameterSet; // @synthesize videoParameterSet=_videoParameterSet;
@property(retain, nonatomic) NSArray *videoPayloads; // @synthesize videoPayloads=_videoPayloads;
@property(retain, nonatomic) NSArray *payloadPreference; // @synthesize payloadPreference=_payloadPreference;
@property(retain, nonatomic) NSOrderedSet *supportedCipherSuites; // @synthesize supportedCipherSuites=_supportedCipherSuites;
@property(retain, nonatomic) NSSet *audioPayloads; // @synthesize audioPayloads=_audioPayloads;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
@property(nonatomic) unsigned char supportedDirection; // @synthesize supportedDirection=_supportedDirection;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000153224
- (id)initStreamGroupU1ConfigForGroupId:(unsigned int)arg1 withLocalConfig:(id)arg2;	// IMP=0x0000000000151a42
- (void)updateWithAudioConfiguration:(id)arg1 mediaType:(unsigned char)arg2;	// IMP=0x0000000000150ad1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015088f
- (void)dealloc;	// IMP=0x00000000001507f8
- (id)initWithSSRC:(unsigned int)arg1;	// IMP=0x00000000001507d4
- (id)init;	// IMP=0x0000000000150782

@end
