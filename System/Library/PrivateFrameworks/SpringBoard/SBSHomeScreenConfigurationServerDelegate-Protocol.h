//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBHomeScreenConfigurationServer, SBSHomeScreenConfiguration;

@protocol SBSHomeScreenConfigurationServerDelegate <NSObject>
- (void)configurationServerDidEndConfigurationSession:(SBHomeScreenConfigurationServer *)arg1 completion:(void (^)(NSError *))arg2;
- (void)configurationServer:(SBHomeScreenConfigurationServer *)arg1 didReceiveConfiguration:(SBSHomeScreenConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)configurationServerDidBeginConfigurationSession:(SBHomeScreenConfigurationServer *)arg1 completion:(void (^)(NSError *))arg2;
@end

