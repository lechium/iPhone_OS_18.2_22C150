//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface CRFormContentTypeModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x00600000001316d6
- (void).cxx_destruct;	// IMP=0x0000000000131dfd
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000131c0e
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000131b58
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000131ae2
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000013195c
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000131886
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001317d4
- (id)init;	// IMP=0x0000000000131777

@end
