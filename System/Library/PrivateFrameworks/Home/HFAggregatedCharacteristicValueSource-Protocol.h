//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFCharacteristicValueOperationBatching-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFServiceDescriptor, HFServiceStateRecipe, HMCharacteristicMetadata, NAFuture, NSDictionary, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching, NAIdentifiable, NSCopying>
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property(readonly, nonatomic) HFServiceDescriptor *primaryServiceDescriptor;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
- (NSSet *)allServices;
- (NSSet *)allCharacteristicsForCharacteristicType:(NSString *)arg1;
- (NAFuture *)writeValuesForCharacteristicRecipes:(NSDictionary *)arg1;
- (NAFuture *)readValuesForServiceStateRecipe:(HFServiceStateRecipe *)arg1;
- (HMCharacteristicMetadata *)metadataForCharacteristicType:(NSString *)arg1;
- (NAFuture *)writeValuesForCharacteristicTypes:(NSDictionary *)arg1;
- (NAFuture *)readValuesForCharacteristicTypes:(NSSet *)arg1;
@end

