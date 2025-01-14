//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SUUIToolbarButtonsController, SUUIToolbarViewElement;
@protocol SUUIToolbarControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIToolbarController : NSObject
{
    SUUIToolbarButtonsController *_buttonsController;	// 8 = 0x8
    SUUIToolbarViewElement *_viewElement;	// 16 = 0x10
    NSArray *_toolbarItems;	// 24 = 0x18
    id <SUUIToolbarControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001eec70
@property(nonatomic) __weak id <SUUIToolbarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(readonly, nonatomic) SUUIToolbarViewElement *toolbarViewElement; // @synthesize toolbarViewElement=_viewElement;
- (id)_barButtonItemWithButtonElement:(id)arg1;	// IMP=0x00000000001eebb4
- (id)_barButtonItemWithElement:(id)arg1;	// IMP=0x00000000001eeb4a
- (_Bool)toolbarButtonsController:(id)arg1 shouldDispatchEventForButton:(id)arg2;	// IMP=0x00000000001eea85
- (void)detachFromNavigationController:(id)arg1;	// IMP=0x00000000001eea05
- (void)updateToolbarForNavigationController:(id)arg1;	// IMP=0x00000000001ee876
- (void)dealloc;	// IMP=0x00000000001ee834
- (id)initWithToolbarViewElement:(id)arg1;	// IMP=0x00000000001ee7c9

@end

