//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol TRIExternalParameterProviding
- (void)unsubscribeAllDataStreams;
- (void)subscribeDataStreamForIdentifier:(NSString *)arg1 eventHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)readLastDataStreamEventForIdentifier:(NSString *)arg1 withFilter:(_Bool (^)(NSDictionary *))arg2 eventHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)readLastDataStreamEventForIdentifier:(NSString *)arg1 eventHandler:(void (^)(NSDictionary *, NSError *))arg2;
@end
