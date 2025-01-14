//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextEffectsWindow.h"

__attribute__((visibility("hidden")))
@interface UITextEffectsWindowHosted : UITextEffectsWindow
{
}

- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x0000000001770de5
- (_Bool)_isTextEffectsWindowNotificationOwner;	// IMP=0x0000000001770d05
- (_Bool)_isTextEffectsWindowHosting;	// IMP=0x0000000001770cfd
- (void)_sceneBoundsDidChange;	// IMP=0x0000000001770a67
- (void)adjustTextEffectsWindowSizeIfNecessary;	// IMP=0x0000000001770912
- (_Bool)_isFullscreen;	// IMP=0x0000000001770807
- (struct CGRect)actualSceneBounds;	// IMP=0x0000000001770788
- (struct CGRect)actualSceneBoundsForLandscape:(_Bool)arg1;	// IMP=0x00000000017706fe
- (long long)_orientationForSceneTransform;	// IMP=0x00000000017706f3
- (long long)_orientationForRootTransform;	// IMP=0x00000000017706e8
- (long long)_orientationForViewTransform;	// IMP=0x00000000017706dd
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x00000000017706d5
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x00000000017706cd

@end

