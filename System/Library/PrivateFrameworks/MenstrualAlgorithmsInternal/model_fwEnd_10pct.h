//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface model_fwEnd_10pct : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000058eb5
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000058e27
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000058af9
- (void).cxx_destruct;	// IMP=0x0000000000059ad6
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000597d3
- (id)predictionFromIn:(id)arg1 lstm_1_h_in:(id)arg2 lstm_1_c_in:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000059709
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005947e
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005920a
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000059049
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000058fd3
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000058daf
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000058d37
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000058cb2
- (id)init;	// IMP=0x0000000000058c55
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000058bc3

@end
