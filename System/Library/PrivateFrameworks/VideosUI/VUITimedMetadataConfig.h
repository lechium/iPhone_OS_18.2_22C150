//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUITimedMetadataAudioSmoothingConfig, VUITimedMetadataVisualSmoothingConfig;

__attribute__((visibility("hidden")))
@interface VUITimedMetadataConfig : NSObject
{
    VUITimedMetadataVisualSmoothingConfig *_visualSmoothingConfig;	// 8 = 0x8
    VUITimedMetadataAudioSmoothingConfig *_audioSmoothingConfig;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e7be6
@property(retain, nonatomic) VUITimedMetadataAudioSmoothingConfig *audioSmoothingConfig; // @synthesize audioSmoothingConfig=_audioSmoothingConfig;
@property(retain, nonatomic) VUITimedMetadataVisualSmoothingConfig *visualSmoothingConfig; // @synthesize visualSmoothingConfig=_visualSmoothingConfig;
- (id)init;	// IMP=0x00000000001e7b3b

@end
