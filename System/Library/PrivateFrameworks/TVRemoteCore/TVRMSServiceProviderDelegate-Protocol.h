//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVRemoteCore/NSObject-Protocol.h>

@class TVRMSService;
@protocol TVRMSServiceProvider;

@protocol TVRMSServiceProviderDelegate <NSObject>
- (void)serviceProvider:(id <TVRMSServiceProvider>)arg1 serviceDidBecomeUnavailable:(TVRMSService *)arg2;
- (void)serviceProvider:(id <TVRMSServiceProvider>)arg1 serviceDidBecomeAvailable:(TVRMSService *)arg2;
@end
