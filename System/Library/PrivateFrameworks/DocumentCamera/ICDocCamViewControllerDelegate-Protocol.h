//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentCamera/NSObject-Protocol.h>

@class ICDocCamDocumentInfoCollection, ICDocCamImageCache, ICDocCamViewController, NSData;
@protocol DCDataCryptorDelegate, DCScanDataDelegate;

@protocol ICDocCamViewControllerDelegate <NSObject>
- (id <DCScanDataDelegate>)scanDataDelegateWithIdentifier:(id)arg1;
- (id <DCDataCryptorDelegate>)documentCameraControllerCreateDataCryptorIfNecessary;
- (_Bool)documentCameraController:(ICDocCamViewController *)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraControllerDidCancel:(ICDocCamViewController *)arg1;

@optional
- (void)documentCameraControllerDidRetake:(ICDocCamViewController *)arg1 pageCount:(unsigned long long)arg2;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(_Bool)arg4 closeViewController:(_Bool)arg5;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(_Bool)arg4;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithImage:(NSData *)arg2;
@end
