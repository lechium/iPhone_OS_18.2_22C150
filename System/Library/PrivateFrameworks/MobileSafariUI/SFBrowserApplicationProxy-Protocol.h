//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSString, NSUUID, UIScene, WBTabGroupManager, WebBookmarkCollection;

@protocol SFBrowserApplicationProxy <NSObject>
@property(readonly, nonatomic) WebBookmarkCollection *bookmarkCollection;
@property(readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property(readonly, nonatomic) UIScene *currentScene;
- (UIScene *)sceneForTabGroupWithUUIDString:(NSString *)arg1;
- (void)sceneForTabWithUUID:(NSUUID *)arg1 completionHandler:(void (^)(UIScene *))arg2;
@end
