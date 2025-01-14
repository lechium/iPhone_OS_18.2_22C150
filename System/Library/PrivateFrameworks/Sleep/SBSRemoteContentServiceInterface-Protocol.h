//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject;
@protocol OS_xpc_object;

@protocol SBSRemoteContentServiceInterface
- (void)didDismissForDismissType:(long long)arg1;
- (void)getContentPreferencesWithReplyBlock:(void (^)(SBSRemoteContentPreferences *))arg1;
- (void)configureWithUserInfo:(NSDictionary *)arg1 contentBounds:(NSObject<OS_xpc_object> *)arg2 endpoint:(NSObject<OS_xpc_object> *)arg3;

@optional
- (void)getInlinePresentationContentFrameWithReplyBlock:(void (^)(NSObject<OS_xpc_object> *))arg1;
- (void)didChangeContentBounds;
@end

