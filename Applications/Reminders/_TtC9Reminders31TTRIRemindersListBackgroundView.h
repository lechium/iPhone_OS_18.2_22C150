//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC9Reminders31TTRIRemindersListBackgroundView : UIView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *scribbleInteraction;	// 24 = 0x18
    MISSING_TYPE *scribbleElementIdentifier;	// 32 = 0x20
    MISSING_TYPE *ovalLayer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000004910f0
- (void)tapGestureAction:(id)arg1;	// IMP=0x0010000000490fc0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000490f90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000490e60
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0010000000491160
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000491330
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;	// IMP=0x0010000000491280
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000491180
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;	// IMP=0x00100000004914e0
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;	// IMP=0x00100000004913f0
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;	// IMP=0x00100000004913d0

@end

