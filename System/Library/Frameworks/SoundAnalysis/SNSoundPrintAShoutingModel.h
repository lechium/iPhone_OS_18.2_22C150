//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

@interface SNSoundPrintAShoutingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000022c030
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000022bfa2
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000022bc4a
- (void).cxx_destruct;	// IMP=0x000000000022cd73
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022ca0a
- (id)predictionFromInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 error:(id *)arg4;	// IMP=0x000000000022c940
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000022c678
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c3c7
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022c1c4
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022c14e
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022bf2a
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022beb2
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022be2d
- (id)init;	// IMP=0x000000000022bdd0
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000022bd3e

@end
