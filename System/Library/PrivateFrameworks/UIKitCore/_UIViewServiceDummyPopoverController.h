//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPopoverController.h"

@protocol _UIViewServiceDummyPopoverControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceDummyPopoverController : UIPopoverController
{
    id <_UIViewServiceDummyPopoverControllerDelegate> _dummyPopoverControllerDelegate;	// 8 = 0x8
}

+ (Class)_popoverViewClass;	// IMP=0x00600000018d9d3e
- (void).cxx_destruct;	// IMP=0x00000000018d9f23
@property(nonatomic) __weak id <_UIViewServiceDummyPopoverControllerDelegate> dummyPopoverControllerDelegate; // @synthesize dummyPopoverControllerDelegate=_dummyPopoverControllerDelegate;
- (void)_super_setPopoverContentSize:(struct CGSize)arg1;	// IMP=0x00000000018d9ec5
- (_Bool)_attemptsToAvoidKeyboard;	// IMP=0x00000000018d9ebd
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;	// IMP=0x00000000018d9e0f
- (void)_popoverView:(id)arg1 didSetUseToolbarShine:(_Bool)arg2;	// IMP=0x00000000018d9d4f

@end

