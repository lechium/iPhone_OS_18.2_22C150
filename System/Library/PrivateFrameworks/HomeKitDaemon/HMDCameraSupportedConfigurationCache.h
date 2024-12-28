//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, HMDSupportedVideoStreamConfiguration;

__attribute__((visibility("hidden")))
@interface HMDCameraSupportedConfigurationCache : HMFObject
{
    HMDSupportedVideoStreamConfiguration *_supportedVideoStreamConfiguration;	// 8 = 0x8
    HMDSupportedAudioStreamConfiguration *_supportedAudioStreamConfiguration;	// 16 = 0x10
    HMDSupportedRTPConfiguration *_supportedRTPConfiguration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000007beeef
@property(retain) HMDSupportedRTPConfiguration *supportedRTPConfiguration; // @synthesize supportedRTPConfiguration=_supportedRTPConfiguration;
@property(retain) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // @synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration;
@property(retain) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // @synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration;
@property(readonly, getter=isValid) _Bool valid;

@end
