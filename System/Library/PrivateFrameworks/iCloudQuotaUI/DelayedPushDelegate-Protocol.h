//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudQuotaUI/NSObject-Protocol.h>

@class ACAccount, NSError, RUIObjectModel, RUIPage;
@protocol PreferencesRemoteUIDelegateProtocol;

@protocol DelayedPushDelegate <NSObject>
- (void)loadFailed:(id)arg1 withError:(NSError *)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;

@optional
- (void)remoteUIDelegate:(id <PreferencesRemoteUIDelegateProtocol>)arg1 didCreatePage:(RUIPage *)arg2 forAccount:(ACAccount *)arg3 inObjectModel:(RUIObjectModel *)arg4;
- (void)remoteUIDelegate:(id <PreferencesRemoteUIDelegateProtocol>)arg1 didCreatePage:(RUIPage *)arg2 inObjectModel:(RUIObjectModel *)arg3;
@end
