//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SiriTTSProsodyProperties : NSObject
{
    MISSING_TYPE *neuralSentencePitch;	// 8 = 0x8
    MISSING_TYPE *neuralSentencePitchRange;	// 12 = 0xc
    MISSING_TYPE *neuralSentenceDuration;	// 16 = 0x10
    MISSING_TYPE *neuralSentenceEnergy;	// 20 = 0x14
    MISSING_TYPE *neuralSentenceTilt;	// 24 = 0x18
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x00100000000175b8
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001757b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017b1e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000177ec
- (id)init;	// IMP=0x000000000001753c
@property(nonatomic) float neuralSentenceTilt; // @synthesize neuralSentenceTilt;
@property(nonatomic) float neuralSentenceEnergy; // @synthesize neuralSentenceEnergy;
@property(nonatomic) float neuralSentenceDuration; // @synthesize neuralSentenceDuration;
@property(nonatomic) float neuralSentencePitchRange; // @synthesize neuralSentencePitchRange;
@property(nonatomic) float neuralSentencePitch; // @synthesize neuralSentencePitch;

@end

