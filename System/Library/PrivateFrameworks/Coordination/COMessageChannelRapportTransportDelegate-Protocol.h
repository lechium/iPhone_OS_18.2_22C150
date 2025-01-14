//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Coordination/NSObject-Protocol.h>

@class COClusterMember, COMessageChannelRequest;

@protocol COMessageChannelRapportTransportDelegate <NSObject>

@optional
- (void)didReceiveRequest:(COMessageChannelRequest *)arg1 from:(COClusterMember *)arg2 withCompletionHandler:(void (^)(COMessageChannelResponse *, NSError *))arg3;
- (void)didLoseMember:(COClusterMember *)arg1;
- (void)didFindMember:(COClusterMember *)arg1;
@end

