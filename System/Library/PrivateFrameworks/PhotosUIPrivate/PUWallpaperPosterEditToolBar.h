//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIButton;
@protocol PUWallpaperPosterEditToolbarDelegate;

__attribute__((visibility("hidden")))
@interface PUWallpaperPosterEditToolBar : UIView
{
    NSArray *_leadingMenuElements;	// 8 = 0x8
    NSArray *_trailingMenuElements;	// 16 = 0x10
    id <PUWallpaperPosterEditToolbarDelegate> _delegate;	// 24 = 0x18
    UIButton *_firstActionButton;	// 32 = 0x20
    UIButton *_secondActionButton;	// 40 = 0x28
    UIButton *_thirdActionButton;	// 48 = 0x30
    UIButton *_fourthActionButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003494d8
@property(retain, nonatomic) UIButton *fourthActionButton; // @synthesize fourthActionButton=_fourthActionButton;
@property(retain, nonatomic) UIButton *thirdActionButton; // @synthesize thirdActionButton=_thirdActionButton;
@property(retain, nonatomic) UIButton *secondActionButton; // @synthesize secondActionButton=_secondActionButton;
@property(retain, nonatomic) UIButton *firstActionButton; // @synthesize firstActionButton=_firstActionButton;
@property(nonatomic) __weak id <PUWallpaperPosterEditToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *trailingMenuElements; // @synthesize trailingMenuElements=_trailingMenuElements;
@property(retain, nonatomic) NSArray *leadingMenuElements; // @synthesize leadingMenuElements=_leadingMenuElements;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000034938c
- (void)_removeMenuElement:(id)arg1 fromButton:(id)arg2;	// IMP=0x00000000003492e5
- (void)_setMenuElement:(id)arg1 onButton:(id)arg2;	// IMP=0x00000000003491da
- (void)_setMenuElements:(id)arg1 oldMenuElements:(id)arg2 onButtonOne:(id)arg3 onButtonTwo:(id)arg4;	// IMP=0x0000000000348fd9
- (id)viewForMenuElementIdentifier:(id)arg1;	// IMP=0x0000000000348d5c
- (id)_createActionButton;	// IMP=0x0000000000348ad2
- (void)_setupView;	// IMP=0x0000000000348353
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003482f6

@end
