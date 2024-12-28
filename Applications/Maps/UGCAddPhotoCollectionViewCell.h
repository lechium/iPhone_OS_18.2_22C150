//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MUPhotoOptionsMenuButton, NSString, UIImageView, UILabel, UIView;
@protocol MUPhotoOptionsMenuButtonDelegate;

@interface UGCAddPhotoCollectionViewCell : UICollectionViewCell
{
    UIImageView *_cameraGlyphView;	// 8 = 0x8
    UILabel *_cameraLabel;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UIView *_maskView;	// 32 = 0x20
    MUPhotoOptionsMenuButton *_menuButton;	// 40 = 0x28
    _Bool _dimmed;	// 48 = 0x30
    _Bool _prefersMenu;	// 49 = 0x31
    id <MUPhotoOptionsMenuButtonDelegate> _delegate;	// 56 = 0x38
}

+ (id)reuseIdentifier;	// IMP=0x0020000000cae7d2
- (void).cxx_destruct;	// IMP=0x0020000000cae894
@property(nonatomic) __weak id <MUPhotoOptionsMenuButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool prefersMenu; // @synthesize prefersMenu=_prefersMenu;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (void)photoOptionsMenuButtonDidSelectAddFromLibrary;	// IMP=0x0010000000cae813
- (void)photoOptionsMenuButtonDidSelectTakePhoto;	// IMP=0x0010000000cae7df
- (void)_contentSizeDidChange;	// IMP=0x0010000000cae6cf
- (void)_setupConstraints;	// IMP=0x0010000000cad988
- (void)_setupSubviews;	// IMP=0x0010000000cad480
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000cad3c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
