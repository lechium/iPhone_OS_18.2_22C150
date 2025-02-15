//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CollectionHandler, MacCollectionEditViewController, NSString, UIAlertController, UIImagePickerController, UIView, UIViewController;

@interface MacCollectionEditCoordinator : NSObject
{
    MacCollectionEditViewController *_editViewController;	// 8 = 0x8
    UIAlertController *_confirmDeleteViewController;	// 16 = 0x10
    UIImagePickerController *_imagePickerController;	// 24 = 0x18
    _Bool _finished;	// 32 = 0x20
    CollectionHandler *_collection;	// 40 = 0x28
    UIViewController *_presentingViewController;	// 48 = 0x30
    UIView *_sourceView;	// 56 = 0x38
    CDUnknownBlockType _completion;	// 64 = 0x40
    struct CGRect _sourceRect;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000008f5091
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) CollectionHandler *collection; // @synthesize collection=_collection;
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x00100000008f5027
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x00100000008f4f70
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x00100000008f4efb
- (void)macCollectionEditViewControllerDelete:(id)arg1;	// IMP=0x00100000008f4ecd
- (void)macCollectionEditViewControllerPickPhoto:(id)arg1;	// IMP=0x00100000008f4e9f
- (void)macCollectionEditViewControllerDismiss:(id)arg1;	// IMP=0x00100000008f4e8d
- (void)_deleteCollection;	// IMP=0x00100000008f4dc5
- (void)_save;	// IMP=0x00100000008f4cfd
- (void)_updateTitle;	// IMP=0x00100000008f4c68
- (void)_dismissPhotoPicker;	// IMP=0x00100000008f4bd9
- (void)_presentPhotoPicker;	// IMP=0x00100000008f4a49
- (void)_dismissDeleteConfirmation;	// IMP=0x00100000008f49ba
- (void)_presentDeleteConfirmation;	// IMP=0x00100000008f47d3
- (void)_dismissEditor;	// IMP=0x00100000008f472a
- (void)_presentEditor;	// IMP=0x00100000008f459b
- (void)_finish;	// IMP=0x00100000008f4547
- (void)dismiss;	// IMP=0x00100000008f4535
- (void)present;	// IMP=0x00100000008f4523
- (id)initWithCollection:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000008f4428

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

