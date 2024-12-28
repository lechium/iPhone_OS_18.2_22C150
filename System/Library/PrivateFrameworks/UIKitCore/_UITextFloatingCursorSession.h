//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIStandardTextCursorView, UITextSelectionDisplayInteraction;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface _UITextFloatingCursorSession : NSObject
{
    _Bool _isValid;	// 8 = 0x8
    id <UITextCursorAssertion> _ghostCursorAssertion;	// 16 = 0x10
    UITextSelectionDisplayInteraction *_manager;	// 24 = 0x18
    UIStandardTextCursorView *_floatingCursorView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000980359
@property(readonly, nonatomic) UIStandardTextCursorView *floatingCursorView; // @synthesize floatingCursorView=_floatingCursorView;
@property(readonly, nonatomic) __weak UITextSelectionDisplayInteraction *manager; // @synthesize manager=_manager;
- (struct CGPoint)floatingCursorPositionForPoint:(struct CGPoint)arg1 lineSnapping:(_Bool)arg2;	// IMP=0x000000000097fe76
- (id)_selectionContainerView;	// IMP=0x000000000097fe33
- (void)_updateCursorFadedHiddenForFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000097fd28
- (id)_springAnimation;	// IMP=0x000000000097fcff
- (void)dealloc;	// IMP=0x000000000097fcb6
- (void)_invalidate;	// IMP=0x000000000097fc9f
- (void)_invalidateAnimated:(_Bool)arg1;	// IMP=0x000000000097f988
- (void)updateWithPoint:(struct CGPoint)arg1 inContainer:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000097f782
- (id)initWithCursorView:(id)arg1 selectionManager:(id)arg2;	// IMP=0x000000000097f5df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
