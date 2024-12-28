//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, MLModelConfiguration, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NLSentenceEmbeddingHead : NSObject
{
    unsigned long long _inputDimension;	// 8 = 0x8
    unsigned long long _outputDimension;	// 16 = 0x10
    NSURL *_modelURL;	// 24 = 0x18
    MLModelConfiguration *_configuration;	// 32 = 0x20
    MLModel *_model;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000054a97
- (void).cxx_destruct;	// IMP=0x0000000000054b0b
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MLModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property(readonly) unsigned long long outputDimension; // @synthesize outputDimension=_outputDimension;
@property(readonly) unsigned long long inputDimension; // @synthesize inputDimension=_inputDimension;
- (id)getSentenceEmbeddingFromPooledTokenEmbeddings:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000544e0
- (_Bool)isLoaded;	// IMP=0x00000000000544ad
- (_Bool)load;	// IMP=0x0000000000053c5a
- (id)initWithModelURL:(id)arg1;	// IMP=0x0000000000053b8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
