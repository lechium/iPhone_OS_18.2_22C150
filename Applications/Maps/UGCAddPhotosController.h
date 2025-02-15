//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceQuestionnaire, NSString, PhotoOptionsPicker, UIImagePickerController, UIViewController;
@protocol UGCAddPhotosControllerDelegate;

@interface UGCAddPhotosController : NSObject
{
    UIImagePickerController *_imagePicker;	// 8 = 0x8
    PhotoOptionsPicker *_photoOptionsPicker;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
    long long _initialSourceType;	// 32 = 0x20
    unsigned long long _multipleSelectionLimit;	// 40 = 0x28
    GEOPlaceQuestionnaire *_placeQuestionnaire;	// 48 = 0x30
    id <UGCAddPhotosControllerDelegate> _delegate;	// 56 = 0x38
    unsigned long long _maximumCount;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000009ded67
@property(nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
- (void)_captureUserAction:(int)arg1;	// IMP=0x00100000009ded32
- (void)photoOptionsPickerDidSelectTakePhoto:(id)arg1;	// IMP=0x00100000009deca5
- (void)photoOptionsPickerDidSelectAddFromLibrary:(id)arg1;	// IMP=0x00100000009dec18
- (void)photoOptionsPickerDidCancel:(id)arg1;	// IMP=0x00100000009debab
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000009deab8
- (id)_resizeImageIfNeeded:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00100000009de7c4
- (_Bool)_isValidImageSize:(struct CGSize)arg1;	// IMP=0x00100000009de718
- (void)_imagePickerDidRetake:(id)arg1;	// IMP=0x00100000009de701
- (void)_handleAddFromCameraWithImageData:(id)arg1 mediaInfo:(id)arg2;	// IMP=0x00100000009de3dd
- (void)_handleAddFromLibraryWithEditingInfoList:(id)arg1;	// IMP=0x00100000009ddfcc
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;	// IMP=0x00100000009ddf75
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x00100000009ddd33
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00100000009ddcfd
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x00100000009ddc76
- (void)_presentImagePickerWithSourceType:(long long)arg1;	// IMP=0x00100000009dd996
- (void)present;	// IMP=0x00100000009dd790
- (void)_resolveInitialSourceTypeIfNeeded;	// IMP=0x00100000009dd748
- (id)initWithPresentingViewController:(id)arg1 sourceType:(long long)arg2 multipleSelectionLimit:(unsigned long long)arg3 placeQuestionnaire:(id)arg4 delegate:(id)arg5;	// IMP=0x00100000009dd612

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

