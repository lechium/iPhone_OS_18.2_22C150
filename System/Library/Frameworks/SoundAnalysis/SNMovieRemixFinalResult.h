//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface SNMovieRemixFinalResult : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005cb5c
- (id)init;	// IMP=0x000000000005cb49
@property(nonatomic, readonly) NSArray *dspParameters;
@property(nonatomic) float recordingLoudness;
@property(nonatomic) float ambienceLoudness;
@property(nonatomic) float dialogueLoudness;
@property(nonatomic) float ambienceGain;
@property(nonatomic) float dialogueGain;
@property(nonatomic) unsigned int algorithmVersion;

@end
