//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChronoCore/UISceneDelegate-Protocol.h>

@class CKShareMetadata, UIApplicationShortcutItem, UITraitCollection, UIWindow, UIWindowScene;
@protocol UICoordinateSpace;

@protocol UIWindowSceneDelegate <UISceneDelegate>

@optional
@property(retain, nonatomic) UIWindow *window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N

- (void)windowScene:(UIWindowScene *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
- (void)windowScene:(UIWindowScene *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)windowScene:(UIWindowScene *)arg1 didUpdateCoordinateSpace:(id <UICoordinateSpace>)arg2 interfaceOrientation:(long long)arg3 traitCollection:(UITraitCollection *)arg4;
@end
