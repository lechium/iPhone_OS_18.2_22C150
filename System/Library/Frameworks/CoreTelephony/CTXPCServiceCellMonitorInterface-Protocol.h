//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTServiceDescriptor, CTXPCServiceSubscriptionContext;

@protocol CTXPCServiceCellMonitorInterface
- (void)copyLocationAreaCode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)copyPublicCellId:(CTServiceDescriptor *)arg1 completion:(void (^)(CTCellIdInfo *, NSError *))arg2;
- (void)copyCellId:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)copyCellInfo:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTCellInfo *, NSError *))arg2;
- (void)refreshCellMonitor:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
@end

