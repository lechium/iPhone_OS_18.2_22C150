//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCListenerEndpoint, STSetupConfiguration, STUserID;

@protocol STSetupServiceProtocol
- (void)promptForPasscodeFromUserWithEndpoint:(NSXPCListenerEndpoint *)arg1 completionHandler:(void (^)(void))arg2;
- (void)applyUpdatedConfiguration:(STSetupConfiguration *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)currentConfigurationForUser:(STUserID *)arg1 completionHandler:(void (^)(STSetupConfiguration *, NSError *))arg2;
@end
