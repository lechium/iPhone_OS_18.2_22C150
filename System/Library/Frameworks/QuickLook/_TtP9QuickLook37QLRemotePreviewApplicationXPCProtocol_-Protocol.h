//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, NSUUID;

@protocol _TtP9QuickLook37QLRemotePreviewApplicationXPCProtocol_
- (void)bringToFrontWithSessionUUID:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateContentsWithSessionUUID:(NSUUID *)arg1 items:(NSArray *)arg2 selectedIndex:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)performActionWithSessionUUID:(NSUUID *)arg1 action:(long long)arg2 itemIndex:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)closeWithSessionUUID:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)openWithSessionUUID:(NSUUID *)arg1 items:(NSArray *)arg2 selectedIndex:(long long)arg3 bundleID:(NSString *)arg4 configuration:(NSDictionary *)arg5 completionHandler:(void (^)(NSError *))arg6;
@end
