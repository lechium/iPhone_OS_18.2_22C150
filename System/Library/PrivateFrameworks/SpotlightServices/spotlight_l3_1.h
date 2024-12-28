//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface spotlight_l3_1 : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000005d605
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000005d577
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000005d24a
- (void).cxx_destruct;	// IMP=0x000000000005e0dd
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005de2c
- (id)predictionFromId_features:(id)arg1 dense_features:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005dd80
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005db3b
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d90d
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005d799
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005d723
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005d4ff
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005d487
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005d402
- (id)init;	// IMP=0x000000000005d3a5
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000005d314

@end
