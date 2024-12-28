//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachment.h>

@class ICDocCamImageQuad, ICNotePasteboardData, LPLinkMetadata, NSObject, NSString, UIImage;
@protocol OS_dispatch_queue;

@interface ICAttachment (PDFGalleryVersion)
+ (id)imageCache;	// IMP=0x00200000001180b1
+ (id)imageLoadingOperationQueue;	// IMP=0x002000000011718b
+ (id)thumbnailOperationQueue;	// IMP=0x00200000001170f9
@property(readonly, nonatomic) long long docCamPDFVersion;
- (id)dataForTypeIdentifier:(id)arg1;	// IMP=0x001000000003e2dc
- (id)fileURLForTypeIdentifier:(id)arg1;	// IMP=0x001000000003dfc3
@property(readonly, nonatomic) LPLinkMetadata *fallbackMapMetadata;
@property(readonly, nonatomic) LPLinkMetadata *fallbackWebMetadata;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mapPreviewGenerationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *webPreviewGenerationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *filePreviewGenerationQueue;
- (id)archiveLinkmetadata:(id)arg1;	// IMP=0x0010000000111e97
- (id)lpImageFromFallbackPDF;	// IMP=0x0010000000111d2e
- (id)lpImageFromPreviewImage:(id)arg1;	// IMP=0x0010000000111a85
- (void)requestFileMetadataIfNecessary;	// IMP=0x001000000011195b
- (id)loadingAttachmentsMetadata;	// IMP=0x00100000001118e0
- (void)requestRemoteMetadata;	// IMP=0x00100000001117bc
- (id)plainURLMetadata;	// IMP=0x0010000000111755
- (id)fallbackRemoteAttachmentMetadata;	// IMP=0x0010000000111707
- (id)fileMetadata;	// IMP=0x00100000001110d0
- (id)scannedDocumentsMetadata;	// IMP=0x0010000000110f01
- (void)addPreviewImageToMetadata:(id)arg1;	// IMP=0x0010000000110e23
- (_Bool)alwaysUsesSmallSize;	// IMP=0x0010000000110de7
- (_Bool)usesLinkPresentation;	// IMP=0x0010000000110d85
- (_Bool)metadataExists;	// IMP=0x0010000000110c15
- (void)persistLinkMetadata:(id)arg1;	// IMP=0x0010000000110af4
- (id)retrieveLinkMetadata;	// IMP=0x0010000000110552
- (void)redactAuthorAttributionsToCurrentUser;	// IMP=0x001000000011945d
- (void)notifyDocCamFrameworkAttachmentWasDeleted;	// IMP=0x0010000000119441
- (_Bool)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7 fallbackBlock:(CDUnknownBlockType)arg8 aboutToLoadHandler:(CDUnknownBlockType)arg9;	// IMP=0x00100000001190af
- (_Bool)thumbnailImage:(id *)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 requireAppearance:(_Bool)arg5 imageScaling:(unsigned long long *)arg6 showAsFileIcon:(_Bool *)arg7 isMovie:(_Bool *)arg8 movieDuration:(CDStruct_198678f7 *)arg9;	// IMP=0x0010000000118e1e
- (_Bool)thumbnailImage:(id *)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 imageScaling:(unsigned long long *)arg4 showAsFileIcon:(_Bool *)arg5 isMovie:(_Bool *)arg6 movieDuration:(CDStruct_198678f7 *)arg7;	// IMP=0x0010000000118def
- (id)updateAttachmentPreviewImageWithImage:(id)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5 sendNotification:(_Bool)arg6;	// IMP=0x0010000000118cd1
- (id)updateAttachmentPreviewImageWithImage:(id)arg1 scale:(double)arg2 scaleWhenDrawing:(_Bool)arg3 metadata:(id)arg4 sendNotification:(_Bool)arg5;	// IMP=0x0010000000118ca7
- (id)deviceInfosWithoutPreviewImagesFromDeviceInfos:(id)arg1;	// IMP=0x0010000000118af7
@property(readonly, nonatomic) NSString *movieDurationForSpeaking;
@property(readonly, nonatomic) NSString *modificationDateForSpeaking;
- (id)activityItems;	// IMP=0x0010000000118787
@property(readonly, nonatomic) ICNotePasteboardData *pasteboardData;
- (id)attributedString;	// IMP=0x00100000001183e7
@property(retain, nonatomic) UIImage *cachedImage;
@property(readonly, nonatomic) NSString *imageCacheKey;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2 forceFullSizeImage:(_Bool)arg3;	// IMP=0x00100000001178e4
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1;	// IMP=0x00100000001178cd
@property(copy, nonatomic) ICDocCamImageQuad *croppingQuad;
@property(readonly, nonatomic) UIImage *unprocessedDocumentImage;
@property(readonly, nonatomic) UIImage *image;
- (id)documentMergeController;	// IMP=0x0010000000117270
@property(readonly, nonatomic) _Bool isUnsupportedOnCurrentPlatform;
- (id)inlineAttachmentWithICTTAttachment:(id)arg1;	// IMP=0x0010000000119c0f
- (id)inlineAttachmentFromObject:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x0010000000119860
- (void)filterInlineAttachmentsInTableColumnTextStorage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00100000001194ca
@end
