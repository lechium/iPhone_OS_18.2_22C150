//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol RETrainingSimulationServerInterface <NSObject>
- (void)relevanceEngine:(NSString *)arg1 encodedObjectAtPath:(NSArray *)arg2 completion:(void (^)(NSString *))arg3;
- (void)relevanceEngine:(NSString *)arg1 runActionOfElementWithDescription1:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)gatherDiagnosticLogsForRelevanceEngine:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchAllElementsInRelevanceEngine:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)availableRelevanceEngines:(void (^)(NSArray *, NSError *))arg1;
- (void)relevanceEngine:(NSString *)arg1 performCommand:(NSString *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)relevanceEngine:(NSString *)arg1 createElementFromDescription:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
@end
