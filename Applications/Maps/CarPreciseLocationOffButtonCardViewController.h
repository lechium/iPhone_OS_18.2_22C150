//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CarPreciseLocationOffButton, NSArray, NSString, UIStackView;
@protocol CarPreciseLocationOffButtonCardViewControllerDelegate;

@interface CarPreciseLocationOffButtonCardViewController : UIViewController
{
    _Bool _transitioning;	// 8 = 0x8
    _Bool _shouldBeVisible;	// 9 = 0x9
    id <CarPreciseLocationOffButtonCardViewControllerDelegate> _delegate;	// 16 = 0x10
    CarPreciseLocationOffButton *_preciseLocationOffButton;	// 24 = 0x18
    UIStackView *_buttonStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000d6250a
@property(retain, nonatomic) UIStackView *buttonStack; // @synthesize buttonStack=_buttonStack;
@property(retain, nonatomic) CarPreciseLocationOffButton *preciseLocationOffButton; // @synthesize preciseLocationOffButton=_preciseLocationOffButton;
@property(nonatomic) __weak id <CarPreciseLocationOffButtonCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldBeVisible; // @synthesize shouldBeVisible=_shouldBeVisible;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisTransitioning,V_transitioning

@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (CDStruct_0af47fae)cornerMaskForCarCardLayout:(CDStruct_035a826d)arg1;	// IMP=0x0010000000d62301
- (id)backgroundViewForCarCardLayout:(CDStruct_035a826d)arg1 scale:(double)arg2 userInterfaceStyle:(long long)arg3;	// IMP=0x0010000000d622df
- (void)locationManagerApprovalDidChange:(id)arg1;	// IMP=0x0010000000d62237
- (void)_buttonTapped:(id)arg1;	// IMP=0x0010000000d621eb
- (void)viewDidLoad;	// IMP=0x0010000000d61d85
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000d61c2e

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

