//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol GDCIntelligencePlatformComputeServiceProtocol
- (void)stopWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)truncateViewWithName:(NSString *)arg1 fullRebuild:(_Bool)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)clearViewWithName:(NSString *)arg1 fullRebuild:(_Bool)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)updateGroupWithName:(NSString *)arg1 namesAndRequests:(NSArray *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)updateViewWithName:(NSString *)arg1 viewUpdateSourceRequests:(NSArray *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
@end
