//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError, NSObject;
@protocol OS_dispatch_data, SNSessionObject><SNThunking;

@protocol SNConnectionProtocol
- (void)barrier:(void (^)(_Bool))arg1;
- (void)probeConnection;
- (void)getSNConnectionAnalysisInfo:(void (^)(SNConnectionAnalysisInfo *))arg1;
- (void)getSNConnectionMetrics:(_Bool)arg1 completion:(void (^)(SNConnectionMetrics *))arg2;
- (void)cancelSynchronously:(_Bool)arg1 isOnConnectionQueue:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)setSendPings:(_Bool)arg1;
- (void)sendCommands:(NSArray *)arg1 completion:(void (^)(id <SNSessionObject>, NSError *))arg2;
- (void)sendCommand:(id <SNSessionObject><SNThunking>)arg1 completion:(void (^)(NSError *))arg2;
- (void)sendData:(NSObject<OS_dispatch_data> *)arg1 completion:(void (^)(NSError *))arg2;
- (NSError *)start;
@end

