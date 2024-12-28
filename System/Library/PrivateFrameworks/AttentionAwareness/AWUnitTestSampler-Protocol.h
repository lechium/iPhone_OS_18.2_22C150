//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AVFoundationUnitTestStreamerCreating;

@protocol AWUnitTestSampler
- (id <AVFoundationUnitTestStreamerCreating>)AVFoundationSession;
- (void)setPearlErrorState:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setPearlErrorState:(_Bool)arg1;
- (void)setCarplayStateChangedCallback:(void (^)(_Bool))arg1;
- (void)setCarPlayConnected:(_Bool)arg1;
- (void)setCarPlayConnected:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setSmartCoverCallback:(void (^)(_Bool))arg1;
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)setDisplayCallback:(void (^)(_Bool))arg1;
- (void)setDisplayState:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setDisplayState:(_Bool)arg1;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;
- (void)setSampleState:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)setSampleState:(_Bool)arg1;
- (void)resetStats;
- (void)getStatsWithBlock:(void (^)(struct))arg1;
@end
