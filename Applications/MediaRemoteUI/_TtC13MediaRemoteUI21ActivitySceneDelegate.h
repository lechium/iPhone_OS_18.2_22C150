//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13MediaRemoteUI21ActivitySceneDelegate : NSObject
{
    MISSING_TYPE *coversheetWindow;	// 8 = 0x8
    MISSING_TYPE *routeRecommendationWindow;	// 16 = 0x10
    MISSING_TYPE *nowPlayingElementProvider;	// 24 = 0x18
    MISSING_TYPE *mirroringElementProvider;	// 32 = 0x20
    MISSING_TYPE *nowPlayingScene;	// 40 = 0x28
    MISSING_TYPE *screenMirroringScene;	// 48 = 0x30
    MISSING_TYPE *nowPlayingBannerScene;	// 56 = 0x38
    MISSING_TYPE *nowPlayingBannerWindow;	// 64 = 0x40
    MISSING_TYPE *nowPlayingBannerViewController;	// 72 = 0x48
    MISSING_TYPE *coversheetScene;	// 80 = 0x50
    MISSING_TYPE *routeRecommendationScene;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000013da0
- (id)init;	// IMP=0x0010000000013d50
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000013c10
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000013020
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000012f90
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000012b10
- (void)lockscreenViewController:(id)arg1 didUpdateRestrictedRects:(id)arg2;	// IMP=0x0010000000014470
- (void)lockscreenViewController:(id)arg1 didUpdatePreferredContentSize:(struct CGSize)arg2;	// IMP=0x0010000000014050
- (_Bool)lockscreenViewController:(id)arg1 didSelectArtworkView:(id)arg2;	// IMP=0x0010000000013e80

@end
