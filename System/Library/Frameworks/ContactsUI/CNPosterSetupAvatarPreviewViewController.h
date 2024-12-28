//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNAvatarEditingManager, CNContact, CNContactImage, CNPhotoPickerVariantsManager, CNVisualIdentityImagePickerController, NSData, NSString, UIColor, UIImagePickerController, _TtC10ContactsUI37CNPosterSetupAvatarPreviewViewWrapper;
@protocol CNPosterSetupAvatarPreviewViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPosterSetupAvatarPreviewViewController : UIViewController
{
    _Bool _hideSkipOption;	// 8 = 0x8
    _Bool _shouldShowCancelButton;	// 9 = 0x9
    NSData *_imageData;	// 16 = 0x10
    id <CNPosterSetupAvatarPreviewViewControllerDelegate> _delegate;	// 24 = 0x18
    _TtC10ContactsUI37CNPosterSetupAvatarPreviewViewWrapper *_avatarPreviewView;	// 32 = 0x20
    CNVisualIdentityImagePickerController *_imagePicker;	// 40 = 0x28
    UIColor *_imagePickerCustomBackgroundColor;	// 48 = 0x30
    CNContact *_editingContact;	// 56 = 0x38
    NSString *_wallpaperType;	// 64 = 0x40
    unsigned long long _imageType;	// 72 = 0x48
    CNContactImage *_contactImage;	// 80 = 0x50
    CNAvatarEditingManager *_memojiEditingManager;	// 88 = 0x58
    CNPhotoPickerVariantsManager *_variantsManager;	// 96 = 0x60
    UIImagePickerController *_memojiImagePickerController;	// 104 = 0x68
    struct CGRect _cropRect;	// 112 = 0x70
}

+ (double)twentyFourPointFivePercentOfHeight:(double)arg1;	// IMP=0x001000000028cb13
+ (struct CGSize)defaultItemSize;	// IMP=0x001000000028cafa
+ (unsigned long long)defaultImageTypeForWallpaperType:(id)arg1;	// IMP=0x001000000028ca89
- (void).cxx_destruct;	// IMP=0x000000000028c206
@property(retain, nonatomic) UIImagePickerController *memojiImagePickerController; // @synthesize memojiImagePickerController=_memojiImagePickerController;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) CNAvatarEditingManager *memojiEditingManager; // @synthesize memojiEditingManager=_memojiEditingManager;
@property(retain, nonatomic) CNContactImage *contactImage; // @synthesize contactImage=_contactImage;
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(readonly, nonatomic) NSString *wallpaperType; // @synthesize wallpaperType=_wallpaperType;
@property(retain, nonatomic) CNContact *editingContact; // @synthesize editingContact=_editingContact;
@property(retain, nonatomic) UIColor *imagePickerCustomBackgroundColor; // @synthesize imagePickerCustomBackgroundColor=_imagePickerCustomBackgroundColor;
@property(retain, nonatomic) CNVisualIdentityImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(retain, nonatomic) _TtC10ContactsUI37CNPosterSetupAvatarPreviewViewWrapper *avatarPreviewView; // @synthesize avatarPreviewView=_avatarPreviewView;
@property(nonatomic) _Bool shouldShowCancelButton; // @synthesize shouldShowCancelButton=_shouldShowCancelButton;
@property(nonatomic) _Bool hideSkipOption; // @synthesize hideSkipOption=_hideSkipOption;
@property(nonatomic) __weak id <CNPosterSetupAvatarPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void)avatarEditingManager:(id)arg1 didFinishWithProviderItem:(id)arg2;	// IMP=0x000000000028bf50
- (void)visualIdentityEditorController:(id)arg1 didFinishWithProviderItem:(id)arg2;	// IMP=0x000000000028beeb
- (void)visualIdentityEditorControllerDidCancel:(id)arg1;	// IMP=0x000000000028becf
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000000028beb3
- (void)imagePickerController:(id)arg1 didFinishWithProviderItem:(id)arg2;	// IMP=0x000000000028bdeb
- (id)editorViewControllerForProviderItem:(id)arg1;	// IMP=0x000000000028bcf9
- (void)presentPhotoFilterEditorForProviderItem:(id)arg1;	// IMP=0x000000000028bc7b
- (void)avatarPreviewViewDidSelectCustomizePhoto;	// IMP=0x000000000028bc2f
- (void)avatarPreviewViewDidSelectChangeScale;	// IMP=0x000000000028b9c4
- (void)avatarPreviewViewDidFinishWithImageData:(id)arg1 cropRect:(struct CGRect)arg2;	// IMP=0x000000000028b953
- (id)closestColor:(id)arg1 inColors:(id)arg2;	// IMP=0x000000000028b6ad
- (id)monogramProviderItemForInitials:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x000000000028b4a9
- (id)providerItemForRandomColoredMonogram;	// IMP=0x000000000028b3d6
- (id)animojiProviderItemForAvatarImageData:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x000000000028b0f0
- (id)animojiProviderItem:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x000000000028afb6
- (id)providerItemWithSnapshotImage:(id)arg1;	// IMP=0x000000000028ae2a
- (void)photoProviderItemForSnapshotFromPosterConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000028ab38
- (void)photoProviderItemFromPosterConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000028aa4f
- (id)photoProviderItemForFullImageFromPosterConfiguration:(id)arg1;	// IMP=0x000000000028a8c3
- (void)photoPickerProviderItemFromPosterConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000028a46f
- (void)didTapCancel;	// IMP=0x000000000028a40f
- (void)skipStep;	// IMP=0x000000000028a3c3
- (void)viewDidLoad;	// IMP=0x0000000000289c4d
- (void)updateWithProviderItem:(id)arg1;	// IMP=0x0000000000289b4f
- (id)initWithContactImage:(id)arg1 imageType:(unsigned long long)arg2 forEditingContact:(id)arg3;	// IMP=0x00000000002898d6
- (id)initWithPosterConfiguration:(id)arg1 forEditingContact:(id)arg2;	// IMP=0x000000000028971f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
