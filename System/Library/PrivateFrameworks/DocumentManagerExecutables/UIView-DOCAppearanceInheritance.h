//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class DOCAppearance, NSString;

@interface UIView (DOCAppearanceInheritance)
+ (void)load;	// IMP=0x001000000000f3ff
- (id)_owningViewController;	// IMP=0x001000000000f886
- (void)effectiveAppearanceDidChange:(id)arg1;	// IMP=0x001000000000f880
@property(readonly) DOCAppearance *effectiveAppearance;
- (id)_appearance;	// IMP=0x001000000000f7ce
- (id)_inheritedAppearance;	// IMP=0x001000000000f72d
- (void)_notifyAppearanceChange:(id)arg1;	// IMP=0x001000000000f4a5
- (void)doc_didMoveToSuperview;	// IMP=0x001000000000f41f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

