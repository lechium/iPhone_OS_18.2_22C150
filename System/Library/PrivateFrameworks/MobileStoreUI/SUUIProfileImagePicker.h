//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SUUIClientContext, UIImagePickerController, UILabel, UIScrollView, UIView;
@protocol SUUIProfileImagePickerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIProfileImagePicker : UIViewController
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    _Bool _firstApperance;	// 32 = 0x20
    UIImagePickerController *_imagePicker;	// 40 = 0x28
    UIScrollView *_scrollView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    id <SUUIProfileImagePickerDelegate> _delegate;	// 64 = 0x40
}

+ (id)_fixCropRect:(id)arg1 forOriginalImage:(id)arg2;	// IMP=0x0010000000102d85
- (void).cxx_destruct;	// IMP=0x00000000001036e3
@property(nonatomic) __weak id <SUUIProfileImagePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showImageSourcePicker;	// IMP=0x0000000000103353
- (void)_showImagePicker;	// IMP=0x0000000000103220
- (void)_presentImagePickerWithSourceType:(long long)arg1;	// IMP=0x0000000000102fe4
- (void)_didCancel;	// IMP=0x0000000000102f5a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000102d33
- (void)loadView;	// IMP=0x0000000000102cad
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0000000000102b62
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0000000000102b2d
- (id)initWithClientContext:(id)arg1;	// IMP=0x0000000000102a9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
