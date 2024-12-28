//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol APSUser, APSUserDependencies, APSUserTrackerResponder, OS_xpc_object;

@protocol APSUserTracker <NSObject>
@property(readonly, nonatomic) id <APSUser> defaultUser;
@property(readonly, nonatomic) _Bool usersAreCurrentlyLoading;
@property(readonly, nonatomic) NSArray *sortedLoggedInUsers;
@property(nonatomic) __weak id <APSUserTrackerResponder> responder;
- (id <APSUserDependencies>)dependenciesForUser:(id <APSUser>)arg1;
- (void)manuallyLoginUser:(NSString *)arg1;
- (void)manuallySetupAndLoginUser:(NSString *)arg1;
- (void)prepareForSleep;
- (void)forceProcessingOfAnyPendingUsers;
- (void)checkForNewUsers;
- (id <APSUser>)userForConnection:(NSObject<OS_xpc_object> *)arg1;
- (void)startup;
@end
