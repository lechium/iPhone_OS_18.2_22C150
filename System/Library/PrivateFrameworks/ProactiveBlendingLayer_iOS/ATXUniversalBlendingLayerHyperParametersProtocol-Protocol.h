//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveBlendingLayer_iOS/NSObject-Protocol.h>

@class ATXProactiveSuggestion, NSArray, NSDictionary, NSSet, NSString;

@protocol ATXUniversalBlendingLayerHyperParametersProtocol <NSObject>
- (NSArray *)layoutsToConsiderForConsumerSubType:(unsigned char)arg1;
- (NSSet *)consumerSubTypesToConsiderForClientModelIds:(NSSet *)arg1;
- (NSSet *)clientModelsToConsiderForConsumerSubType:(unsigned char)arg1;
- (NSSet *)executableTypesToConsiderForConsumerSubType:(unsigned char)arg1;
- (_Bool)uiSupportsSuggestion:(ATXProactiveSuggestion *)arg1 consumerSubType:(unsigned char)arg2;
- (long long)minConfidenceCategoryToConsider;
- (NSDictionary *)clientModelsToConsiderForConsumerSubType;
- (NSArray *)clientModelPriorityOrder;
- (double)sessionLogSamplingRate;
- (NSString *)abGroup;
@end

