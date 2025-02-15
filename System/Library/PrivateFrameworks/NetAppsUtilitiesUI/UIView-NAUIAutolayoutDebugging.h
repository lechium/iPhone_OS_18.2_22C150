//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NAUITextStyleDescriptor;

@interface UIView (NAUIAutolayoutDebugging)
+ (void)_naui_beginDebuggingAutolayout;	// IMP=0x00200000000067b6
+ (void)naui_prepareToAutolayoutProperDescendantsOfView:(id)arg1 inConstraints:(id)arg2;	// IMP=0x00200000000093e7
+ (void)naui_performAnimateableChangesWithAnimationDuration:(double)arg1 setupBlock:(CDUnknownBlockType)arg2 animatablesBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000008fac
+ (void)naui_endDisablingAnimations;	// IMP=0x0020000000008f83
+ (void)naui_beginDisablingAnimations;	// IMP=0x0020000000008f4f
- (id)naui_descendantsWithAmbiguousLayout;	// IMP=0x0010000000006be7
- (void)naui_removeNamedConstraints;	// IMP=0x0010000000009ad5
- (void)naui_removeConstraintsNamed:(id)arg1;	// IMP=0x00100000000099d4
- (void)naui_setNamedConstraints:(id)arg1 forName:(id)arg2;	// IMP=0x0010000000009884
- (id)_naui_constraintsNamed:(id)arg1;	// IMP=0x0010000000009808
- (id)_naui_constraintsByNameDictionary:(_Bool)arg1;	// IMP=0x001000000000978f
- (_Bool)naui_replaceConstraints:(id)arg1 withConstraints:(id)arg2;	// IMP=0x00100000000096f1
- (_Bool)naui_replaceConstraint:(id)arg1 withConstraints:(id)arg2;	// IMP=0x001000000000965a
- (void)naui_addConstraints:(id)arg1;	// IMP=0x0010000000009641
- (void)naui_addConstraint:(id)arg1;	// IMP=0x0010000000009628
- (void)naui_removeConstraints:(id)arg1;	// IMP=0x001000000000960f
- (void)naui_removeConstraint:(id)arg1;	// IMP=0x00100000000095f6
- (void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1;	// IMP=0x0010000000009571
- (_Bool)naui_isProperDescendantOfView:(id)arg1;	// IMP=0x00100000000093cc
- (void)naui_addAutoLayoutSubviews:(id)arg1;	// IMP=0x00100000000092a2
- (void)naui_addAutoLayoutSubview:(id)arg1;	// IMP=0x001000000000924e
- (void)naui_performAnimateableConstraintChanges:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009081
- (_Bool)naui_canAnimate;	// IMP=0x0010000000008efa
@property(retain, nonatomic, setter=naui_setDynamicFontTextStyleDescriptor:) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;
- (void)naui_showAllViewBoundsRecursively:(_Bool)arg1;	// IMP=0x0010000000008b7e
@end

