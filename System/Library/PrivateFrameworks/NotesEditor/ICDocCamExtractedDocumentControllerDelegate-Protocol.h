//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/NSObject-Protocol.h>

@class ICDocCamDocumentInfo, ICDocCamExtractedDocumentViewController, NSData, NSString, NSUndoManager, UIImage, UIView;
@protocol DCScanDataDelegate;

@protocol ICDocCamExtractedDocumentControllerDelegate <NSObject>
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1;
- (void)extractedDocumentControllerDidTapRetake:(unsigned long long)arg1;

@optional
- (NSUndoManager *)extractedDocumentControllerUndoManager;
- (void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(ICDocCamDocumentInfo *)arg1;
- (NSData *)extractedDocumentControllerMarkupModelDataForDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerLoadThumbnailForDocument:(ICDocCamDocumentInfo *)arg1 size:(struct CGSize)arg2 completionBlock:(void (^)(UIImage *))arg3;
- (UIImage *)extractedDocumentControllerUncroppedImageForDocument:(ICDocCamDocumentInfo *)arg1;
- (UIImage *)extractedDocumentControllerImageForDocument:(ICDocCamDocumentInfo *)arg1;
- (struct CGSize)extractedDocumentControllerImageSizeForDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(ICDocCamDocumentInfo *)arg1 sourceRect:(struct CGRect)arg2 sourceView:(UIView *)arg3;
- (void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerDidMovePageFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 forDocument:(ICDocCamDocumentInfo *)arg3;
- (void)extractedDocumentControllerDidApplyFilter:(short)arg1 forDocument:(ICDocCamDocumentInfo *)arg2;
- (void)extractedDocumentControllerDidDeleteDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerDidRotateDocument:(ICDocCamDocumentInfo *)arg1;
- (void)extractedDocumentControllerDidChangeTitle:(NSString *)arg1;
- (void)extractedDocumentController:(ICDocCamExtractedDocumentViewController *)arg1 shareDocument:(ICDocCamDocumentInfo *)arg2 sender:(id)arg3;
- (void)extractedDocumentController:(ICDocCamExtractedDocumentViewController *)arg1 didTapRecrop:(ICDocCamDocumentInfo *)arg2 index:(long long)arg3;
- (NSString *)extractedDocumentControllerTitle;
- (void)extractedDocumentController:(ICDocCamExtractedDocumentViewController *)arg1 startMarkupOnDocument:(ICDocCamDocumentInfo *)arg2 inkStyle:(unsigned long long)arg3 startPresentBlock:(void (^)(void (^)(void)))arg4 dismissCompletionBlock:(void (^)(void))arg5;
- (void)extractedDocumentControllerDidTapAddImage;
- (void)extractedDocumentControllerDidDismiss;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1 scanDataDelegate:(id <DCScanDataDelegate>)arg2;
@end

