//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString;

@interface UIView (NCTextSupportingAdditions)
+ (CDUnknownBlockType)nc_applyHighFrameRate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000111d14
- (id)_interactionForClass:(Class)arg1;	// IMP=0x00100000000c6848
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000000c67ff
@property(nonatomic, getter=nc_isMenuEnabled, setter=nc_setMenuEnabled:) _Bool nc_menuEnabled;
- (void)nc_performCrossFadeForDeferredActions;	// IMP=0x0010000000111ac0
- (void)nc_performDeferredActionsIfNeeded;	// IMP=0x001000000011192e
- (void)nc_setHasDeferredActions;	// IMP=0x00100000001118dc
- (_Bool)nc_hasDeferredActions;	// IMP=0x0010000000111890
- (void)_nc_setSubviewHasDeferredActions;	// IMP=0x0010000000111879
- (void)_nc_setSubviewHasDeferredActions:(_Bool)arg1;	// IMP=0x00100000001117c6
- (_Bool)_nc_subviewHasDeferredActions;	// IMP=0x001000000011177a
- (void)_nc_setHasDeferredActions:(_Bool)arg1;	// IMP=0x001000000011172d
@property(nonatomic, getter=nc_isPlatterSubordinateIconShadowEnabled, setter=nc_setPlatterSubordinateIconShadowEnabled:) _Bool nc_platterSubordinateIconShadowEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

