//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIKeyboardFeedbackDescriptor : NSObject
{
    float _hapticIntensity;	// 8 = 0x8
    float _hapticSharpness;	// 12 = 0xc
    float _audioVolume;	// 16 = 0x10
    NSString *_audioFile;	// 24 = 0x18
}

+ (id)descriptorWithIntensity:(float)arg1 sharpness:(float)arg2 audio:(id)arg3 volume:(float)arg4;	// IMP=0x0060000000a72f36
- (void).cxx_destruct;	// IMP=0x0000000000a73033
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(copy, nonatomic) NSString *audioFile; // @synthesize audioFile=_audioFile;
@property(nonatomic) float hapticSharpness; // @synthesize hapticSharpness=_hapticSharpness;
@property(nonatomic) float hapticIntensity; // @synthesize hapticIntensity=_hapticIntensity;

@end

