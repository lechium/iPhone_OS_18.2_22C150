//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSScene.h>

@class _UIHomeAffordanceClientSceneComponent;

@interface FBSScene (UIApp)
- (_Bool)isPersistable;	// IMP=0x0030000000ba329e
- (void)updateUIClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0030000000ba3095
- (void)updateUIClientSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0030000000ba2ea5
- (id)uiClientSettings;	// IMP=0x0030000000ba2df7
- (id)uiSettings;	// IMP=0x0030000000ba2d49
- (_Bool)uiAlwaysSupportsAllInterfaceOrientations;	// IMP=0x0030000000ba2ce9
- (_Bool)uiCanReceiveDeviceOrientationEvents;	// IMP=0x0030000000ba2c8e
@property(readonly, nonatomic) _UIHomeAffordanceClientSceneComponent *_homeAffordanceClientSceneComponent;
- (id)traitCollectionModificationComponent;	// IMP=0x0030000001537515
- (id)renderingEnvironment;	// IMP=0x003000000199f915
@end
