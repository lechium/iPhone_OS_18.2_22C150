//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrintASpeechModelInput : NSObject
{
    MLMultiArray *_input1;	// 8 = 0x8
    MLMultiArray *_stateIn;	// 16 = 0x10
    MLMultiArray *_detectedHistoryIn;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022d01b
@property(retain, nonatomic) MLMultiArray *detectedHistoryIn; // @synthesize detectedHistoryIn=_detectedHistoryIn;
@property(retain, nonatomic) MLMultiArray *stateIn; // @synthesize stateIn=_stateIn;
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000022ce72
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3;	// IMP=0x000000000022cd9a
- (id)initWithInput1:(id)arg1;	// IMP=0x000000000022cd83

@end
