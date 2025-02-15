//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SiriTTSNeuralUtils : NSObject
{
}

+ (_Bool)compileANEModel:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000fdce4
+ (_Bool)isANEModelCompiled:(id)arg1;	// IMP=0x00800000000fdbc4
+ (float)currentSampleRate:(id)arg1;	// IMP=0x00800000000fda9b
+ (_Bool)shouldUseNeuralVoice:(id)arg1;	// IMP=0x00800000000fd97b
+ (_Bool)isNeuralVoiceReady:(id)arg1;	// IMP=0x00800000000fd85b
+ (_Bool)isH12Platform;	// IMP=0x00800000000fd851
+ (_Bool)isNaturalPlatform;	// IMP=0x00800000000fd847
+ (_Bool)isNeuralPlatform;	// IMP=0x00800000000fd83d
+ (_Bool)isANEOnly;	// IMP=0x00800000000fd833
+ (_Bool)hasANE;	// IMP=0x00800000000fd829
+ (_Bool)hasAMX;	// IMP=0x00800000000fd81f

@end

