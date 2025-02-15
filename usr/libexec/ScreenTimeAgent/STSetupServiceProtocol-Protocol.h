//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCListenerEndpoint, STSetupConfiguration, STUserID;

@protocol STSetupServiceProtocol
- (void)promptForPasscodeFromUserWithEndpoint:(NSXPCListenerEndpoint *)arg1 completionHandler:(void (^)(void))arg2;
- (void)applyUpdatedConfiguration:(STSetupConfiguration *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)currentConfigurationForUser:(STUserID *)arg1 completionHandler:(void (^)(STSetupConfiguration *, NSError *))arg2;
@end

