//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNDocumentCameraViewController.h"

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface VNDocumentCameraViewController_InProcess : VNDocumentCameraViewController
{
    UIViewController *_viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000042142
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)removeSaveActionBlockerForFiles;	// IMP=0x000000000004206b
- (void)_autoDismiss;	// IMP=0x0000000000042027
- (void)remoteDocumentCameraController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000041f6b
- (void)remoteDocumentCameraController:(id)arg1 didFinishWithInfoCollection:(id)arg2;	// IMP=0x0000000000041e3d
- (void)remoteDocumentCameraControllerDidCancel:(id)arg1;	// IMP=0x0000000000041ce8
- (id)scanDataDelegateWithIdentifier:(id)arg1;	// IMP=0x0000000000041ce0
- (void)documentCameraControllerDidCancel:(id)arg1;	// IMP=0x0000000000041b27
- (void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2;	// IMP=0x0000000000041a89
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(_Bool)arg4;	// IMP=0x0000000000041981
- (id)documentCameraControllerCreateDataCryptorIfNecessary;	// IMP=0x0000000000041979
- (_Bool)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;	// IMP=0x0000000000041966
- (long long)preferredContainerBackgroundStyle;	// IMP=0x000000000004195b
- (long long)_preferredModalPresentationStyle;	// IMP=0x0000000000041953
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000041924
- (id)init;	// IMP=0x000000000004177f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
