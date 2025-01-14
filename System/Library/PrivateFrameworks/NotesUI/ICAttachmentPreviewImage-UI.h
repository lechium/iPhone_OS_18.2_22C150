//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentPreviewImage.h>

@class UIImage;

@interface ICAttachmentPreviewImage (UI)
+ (id)orientedImage:(id)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;	// IMP=0x0020000000016f17
+ (id)imageCache;	// IMP=0x00200000000164fd
- (void)writeOrientedPreviewToDisk;	// IMP=0x0010000000017dd7
@property(readonly, nonatomic) UIImage *image;
- (CDUnknownBlockType)asyncImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001756b
- (id)newImageLoaderForUpdatingImageOnCompletion:(_Bool)arg1 asyncDataLoading:(_Bool)arg2;	// IMP=0x0010000000016f44
- (id)newImageLoaderForUpdatingImageOnCompletion:(_Bool)arg1;	// IMP=0x0010000000016f30
- (id)orientedImageWithBackground:(int)arg1;	// IMP=0x0010000000016e2c
- (id)imageWithBackground:(int)arg1;	// IMP=0x0010000000016d58
- (long long)previewImageOrientation;	// IMP=0x0010000000016cdd
@property(readonly, nonatomic) UIImage *orientedImage;
- (struct CGAffineTransform)orientedImageTransform;	// IMP=0x0010000000016b3d
- (void)clearCachedOrientedImage;	// IMP=0x0010000000016b29
- (void)setCachedOrientedImage:(id)arg1;	// IMP=0x00100000000169f7
- (id)cachedOrientedImage;	// IMP=0x00100000000168e9
- (id)orientedImageID;	// IMP=0x00100000000167e4
- (void)clearCachedImage;	// IMP=0x00100000000167d0
- (_Bool)hasCachedImage;	// IMP=0x001000000001679d
- (void)setCachedImage:(id)arg1;	// IMP=0x001000000001666b
- (id)cachedImage;	// IMP=0x001000000001655e
@end

