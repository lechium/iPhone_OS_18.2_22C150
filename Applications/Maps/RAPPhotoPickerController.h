//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, PhotoOptionsPicker, RAPPhoto, UIImagePickerController, UIView, UIViewController;

@interface RAPPhotoPickerController : NSObject
{
    NSMapTable *_observers;	// 8 = 0x8
    UIImagePickerController *_imagePicker;	// 16 = 0x10
    PhotoOptionsPicker *_photoOptionsPicker;	// 24 = 0x18
    _Bool _picking;	// 32 = 0x20
    UIViewController *_presentingViewController;	// 40 = 0x28
    UIView *_anchoringView;	// 48 = 0x30
    RAPPhoto *_photo;	// 56 = 0x38
    long long _overriddenInterfaceStyle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000bd3821
@property(nonatomic) long long overriddenInterfaceStyle; // @synthesize overriddenInterfaceStyle=_overriddenInterfaceStyle;
@property(readonly, nonatomic, getter=isPicking) _Bool picking; // @synthesize picking=_picking;
@property(readonly, nonatomic) RAPPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) UIView *anchoringView; // @synthesize anchoringView=_anchoringView;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)photoOptionsPickerDidCancel:(id)arg1;	// IMP=0x0010000000bd375c
- (void)photoOptionsPickerDidSelectAddFromLibrary:(id)arg1;	// IMP=0x0010000000bd36f2
- (void)photoOptionsPickerDidSelectTakePhoto:(id)arg1;	// IMP=0x0010000000bd3685
- (void)_cancel;	// IMP=0x0010000000bd35ff
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0010000000bd35cd
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0010000000bd35bb
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0010000000bd31c0
- (void)_instrument;	// IMP=0x0010000000bd3101
- (void)_presentViewController:(id)arg1;	// IMP=0x0010000000bd301f
- (void)_endPicking;	// IMP=0x0010000000bd2fea
- (void)_proceedWithSourceType:(long long)arg1;	// IMP=0x0010000000bd2983
- (void)_presentPhotoOptions;	// IMP=0x0010000000bd292a
- (void)startPickingWithSourceType:(long long)arg1;	// IMP=0x0010000000bd28e7
- (void)startPicking;	// IMP=0x0010000000bd28aa
- (void)_clearImagePicker;	// IMP=0x0010000000bd2805
- (void)clearSelectedPhoto;	// IMP=0x0010000000bd27eb
- (void)dealloc;	// IMP=0x0010000000bd27ad
- (id)initWithInitialPhoto:(id)arg1;	// IMP=0x0010000000bd273a
- (id)init;	// IMP=0x0010000000bd2726
- (void)_invokeChangeHandlers;	// IMP=0x0010000000bd25b2
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000bd259c
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bd24e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
