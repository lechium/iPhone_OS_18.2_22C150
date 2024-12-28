//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDAppAction, DNDApplicationIdentifier, DNDRequestDetails, DNDSystemAction, NSPredicate, NSString;

@protocol DNDRemoteServiceAppConfigurationProtocol <NSObject>
- (void)getSystemActionsForModeIdentifier:(NSString *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(NSArray<__DNDSystemAction__> *, NSError *))arg3;
- (void)clearSystemActionWithIdentifier:(NSString *)arg1 forModeIdentifier:(NSString *)arg2 withRequestDetails:(DNDRequestDetails *)arg3 completionHandler:(void (^)(NSNumber *, NSError *))arg4;
- (void)setSystemAction:(DNDSystemAction *)arg1 forModeIdentifier:(NSString *)arg2 withRequestDetails:(DNDRequestDetails *)arg3 completionHandler:(void (^)(NSNumber *, NSError *))arg4;
- (void)getAppActionsForModeIdentifier:(NSString *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(DNDAppActionsBox *, NSError *))arg3;
- (void)clearAppActionWithIdentifier:(NSString *)arg1 forApplicationIdentifier:(DNDApplicationIdentifier *)arg2 modeIdentifier:(NSString *)arg3 withRequestDetails:(DNDRequestDetails *)arg4 completionHandler:(void (^)(NSNumber *, NSError *))arg5;
- (void)setAppAction:(DNDAppAction *)arg1 forApplicationIdentifier:(DNDApplicationIdentifier *)arg2 modeIdentifier:(NSString *)arg3 withRequestDetails:(DNDRequestDetails *)arg4 completionHandler:(void (^)(NSNumber *, NSError *))arg5;
- (void)getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(NSString *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(DNDAppConfigurationTargetContentIdentifierPrefixesBox *, NSError *))arg3;
- (void)setAppConfigurationTargetContentIdentifierPrefix:(NSString *)arg1 forActionIdentifier:(NSString *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4 withRequestDetails:(DNDRequestDetails *)arg5 completionHandler:(void (^)(NSNumber *, NSError *))arg6;
- (void)getAppConfigurationPredicateForActionIdentifier:(NSString *)arg1 forApplicationIdentifier:(DNDApplicationIdentifier *)arg2 modeIdentifier:(NSString *)arg3 withRequestDetails:(DNDRequestDetails *)arg4 completionHandler:(void (^)(NSPredicate *, NSError *))arg5;
- (void)setAppConfigurationPredicate:(NSPredicate *)arg1 forActionIdentifier:(NSString *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4 withRequestDetails:(DNDRequestDetails *)arg5 completionHandler:(void (^)(NSNumber *, NSError *))arg6;
@end
