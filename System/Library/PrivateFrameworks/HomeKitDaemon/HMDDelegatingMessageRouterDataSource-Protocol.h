//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDelegatingMessageRouter, HMFMessage;
@protocol HMDMessageRouter;

@protocol HMDDelegatingMessageRouterDataSource <NSObject>
- (_Bool)router:(HMDDelegatingMessageRouter *)arg1 shouldHandleMessage:(HMFMessage *)arg2 usingRouter:(id <HMDMessageRouter>)arg3;
@end
