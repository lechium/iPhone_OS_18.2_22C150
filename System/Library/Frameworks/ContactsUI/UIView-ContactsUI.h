//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CNContactStyle;

@interface UIView (ContactsUI)
- (void)annotateWithContact:(id)arg1 isPrimary:(_Bool)arg2 isEditing:(_Bool)arg3;	// IMP=0x00300000000111e0
- (void)annotateWithContact:(id)arg1;	// IMP=0x0030000000011170
- (void)addBackgroundVisualEffectView:(id)arg1 withCornerRadius:(double)arg2;	// IMP=0x0030000000125179
- (id)constrainViewToEdgesConstraints:(id)arg1;	// IMP=0x00300000001a5662
- (void)_cnui_applyContactStyle;	// IMP=0x0030000000217f34
@property(readonly, nonatomic) CNContactStyle *_cnui_contactStyle;
- (id)tintColorOverrideDarkened;	// IMP=0x003000000034cca4
- (id)tintColorOverride;	// IMP=0x003000000034cc21
- (void)abSetLayoutDebuggingColor:(id)arg1;	// IMP=0x003000000034caf5
@end

