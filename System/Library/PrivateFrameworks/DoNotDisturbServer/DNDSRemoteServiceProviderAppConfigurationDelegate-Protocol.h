//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDAppAction, DNDApplicationIdentifier, DNDSRemoteServiceProvider, DNDSystemAction, NSDictionary, NSPredicate, NSSet, NSString;

@protocol DNDSRemoteServiceProviderAppConfigurationDelegate <NSObject>
- (NSSet *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getSystemActionsForModeIdentifier:(NSString *)arg2 withError:(id *)arg3;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 clearSystemActionWithIdentifier:(NSString *)arg2 forModeIdentifier:(NSString *)arg3 withError:(id *)arg4;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setSystemAction:(DNDSystemAction *)arg2 forModeIdentifier:(NSString *)arg3 withError:(id *)arg4;
- (NSDictionary *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAppActionsForModeIdentifier:(NSString *)arg2 withError:(id *)arg3;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 clearAppActionWithIdentifier:(NSString *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4 withError:(id *)arg5;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setAppAction:(DNDAppAction *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4 withError:(id *)arg5;
- (NSDictionary *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(NSString *)arg2 withError:(id *)arg3;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setAppConfigurationTargetContentIdentifierPrefix:(NSString *)arg2 forActionIdentifier:(NSString *)arg3 forApplicationIdentifier:(DNDApplicationIdentifier *)arg4 modeIdentifier:(NSString *)arg5 withError:(id *)arg6;
- (NSPredicate *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAppConfigurationPredicateForActionIdentifier:(NSString *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4 withError:(id *)arg5;
- (_Bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setAppConfigurationPredicate:(NSPredicate *)arg2 forActionIdentifier:(NSString *)arg3 forApplicationIdentifier:(DNDApplicationIdentifier *)arg4 modeIdentifier:(NSString *)arg5 withError:(id *)arg6;
@end

