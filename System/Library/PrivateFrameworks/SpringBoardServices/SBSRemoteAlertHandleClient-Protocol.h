//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSArray, SBSRemoteAlertActivationContext, SBSRemoteAlertConfigurationContext, SBSRemoteAlertDefinition, SBSRemoteAlertHandle;

@protocol SBSRemoteAlertHandleClient <NSObject>
- (void)invalidateRemoteAlertHandle:(SBSRemoteAlertHandle *)arg1;
- (void)activateRemoteAlertHandle:(SBSRemoteAlertHandle *)arg1 withContext:(SBSRemoteAlertActivationContext *)arg2;
- (SBSRemoteAlertHandle *)createRemoteAlertHandleWithDefinition:(SBSRemoteAlertDefinition *)arg1 configurationContext:(SBSRemoteAlertConfigurationContext *)arg2;
- (NSArray *)remoteAlertHandlesForDefinition:(SBSRemoteAlertDefinition *)arg1 allowsCreation:(_Bool)arg2 configurationContext:(SBSRemoteAlertConfigurationContext *)arg3;
@end
