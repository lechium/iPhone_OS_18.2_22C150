//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol PKSharingChannelServiceExportedInterface_Client
- (void)didReceiveUpdatedTransportIdentifier:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)didReceiveMessages:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)invalidateFromRemoteWithReply:(void (^)(void))arg1;
@end
