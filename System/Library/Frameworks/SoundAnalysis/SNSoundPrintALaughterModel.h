//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

@interface SNSoundPrintALaughterModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000022fd9d
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000022fd0f
+ (id)URLOfModelInThisBundle;	// IMP=0x000000000022f9b7
- (void).cxx_destruct;	// IMP=0x0000000000230ae0
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000230777
- (id)predictionFromInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002306ad
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002303e5
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000230134
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022ff31
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022febb
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022fc97
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022fc1f
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022fb9a
- (id)init;	// IMP=0x000000000022fb3d
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000022faab

@end

