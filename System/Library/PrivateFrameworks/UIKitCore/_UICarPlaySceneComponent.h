//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICarPlayApplicationSceneSettings, UIScene, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UICarPlaySceneComponent : NSObject
{
    UIScene *_scene;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000172aa9b
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
@property(readonly, nonatomic) _Bool blackWallpaperModeEnabled;
@property(readonly, nonatomic) _Bool disableFiveRowKeyboards;
@property(readonly, nonatomic) UICarPlayApplicationSceneSettings *carPlaySceneSettings;
- (void)_invalidateTraitOverrides;	// IMP=0x000000000172a8d5
@property(readonly, nonatomic) UITraitCollection *_traitOverrides;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITraitCollection",?,R,N

- (id)_settingsDiffActionsForScene:(id)arg1;	// IMP=0x000000000172a7e2
- (id)initWithScene:(id)arg1;	// IMP=0x000000000172a77e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
