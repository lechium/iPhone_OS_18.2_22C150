//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class AXMVisionResult, AXMVoiceOverVisionEngine, AXSBImageExplorerData, NSMutableArray, NSObject, NSString, VOTImageExplorerViewController;
@protocol OS_dispatch_queue;

@interface VOTImageExplorerViewServiceAdaptorViewController : SBUIRemoteAlertServiceViewController
{
    VOTImageExplorerViewController *_imageExplorerViewController;	// 8 = 0x8
    AXMVisionResult *_visionResult;	// 16 = 0x10
    AXSBImageExplorerData *_elementInfo;	// 24 = 0x18
    NSString *_hostAppName;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_axVisionQueue;	// 40 = 0x28
    AXMVoiceOverVisionEngine *_visionEngine;	// 48 = 0x30
    NSMutableArray *_detailData;	// 56 = 0x38
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x002000000000741e
- (void).cxx_destruct;	// IMP=0x0020000000009aa2
@property(retain, nonatomic) NSMutableArray *detailData; // @synthesize detailData=_detailData;
@property(retain, nonatomic) AXMVoiceOverVisionEngine *visionEngine; // @synthesize visionEngine=_visionEngine;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *axVisionQueue; // @synthesize axVisionQueue=_axVisionQueue;
@property(retain, nonatomic) NSString *hostAppName; // @synthesize hostAppName=_hostAppName;
@property(retain, nonatomic) AXSBImageExplorerData *elementInfo; // @synthesize elementInfo=_elementInfo;
@property(retain, nonatomic) AXMVisionResult *visionResult; // @synthesize visionResult=_visionResult;
@property(retain, nonatomic) VOTImageExplorerViewController *imageExplorerViewController; // @synthesize imageExplorerViewController=_imageExplorerViewController;
- (id)_visionFeatureDescriptionOptions;	// IMP=0x0010000000009892
- (void)_populateCaptionAndMetadata;	// IMP=0x0010000000008e12
- (void)_reloadImageViewIfNeeded;	// IMP=0x00100000000083e3
- (id)_explorerImage;	// IMP=0x001000000000808e
- (id)_photoAssetDataWithNetWorkAccess:(_Bool)arg1;	// IMP=0x0010000000007fed
- (id)_photoLibraryURL;	// IMP=0x0010000000007f4c
- (id)_imageURL;	// IMP=0x0010000000007eab
- (id)_screenGrabImage;	// IMP=0x0010000000007e21
- (id)_assetLocalIdentifier;	// IMP=0x0010000000007d80
- (_Bool)_isAssetLocallyAvailable;	// IMP=0x0010000000007ceb
- (void)_dismiss;	// IMP=0x0010000000007c1d
- (void)_setupRemoteProxy;	// IMP=0x0010000000007b91
- (void)imageExplorerViewControllerWillDisappear;	// IMP=0x0010000000007b7f
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000074b2
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007426
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000007416
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000073d5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000007044
- (void)viewDidLoad;	// IMP=0x0010000000006efa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
