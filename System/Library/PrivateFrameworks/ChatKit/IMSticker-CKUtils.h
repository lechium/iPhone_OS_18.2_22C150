//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMSticker.h>

@class UIImage;

@interface IMSticker (CKUtils)
+ (_Bool)dropSessionIsRepositioningSticker:(id)arg1;	// IMP=0x00200000001bbea4
+ (_Bool)dragItemIsRepositioningSticker:(id)arg1;	// IMP=0x00200000001bbd79
+ (_Bool)dragItemIsSticker:(id)arg1;	// IMP=0x00200000001bbcc9
+ (struct CGSize)calculatedRecentsItemWidthFromStickersUltraExtensionForStickerChatItem:(id)arg1 collectionViewWidth:(double)arg2;	// IMP=0x00200000001bb1ef
+ (double)calculatePreviewScaleWithTargetSize:(struct CGSize)arg1 imageData:(id)arg2;	// IMP=0x00200000001baf3c
+ (id)stickerWithMSMessageMediaPayload:(id)arg1;	// IMP=0x00200000001ba864
- (void)stickerEffectViewSnapshotForStickerChatItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bba53
- (id)stickerEffectViewForStickerChatItem:(id)arg1;	// IMP=0x00100000001bb7ca
- (void)stickerViewForStickerChatItem:(id)arg1 snapshotEffectView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bb59d
- (double)calculatePreviewScaleWithTargetSize:(struct CGSize)arg1;	// IMP=0x00100000001bb52b
- (id)imageData;	// IMP=0x00100000001bad8b
@property(readonly, copy, nonatomic) UIImage *image;
- (id)uiSticker;	// IMP=0x00100000001ba578
- (id)initWithUISticker:(id)arg1 adaptiveImageGlyph:(id)arg2;	// IMP=0x00100000001ba108
- (_Bool)prepareToSend;	// IMP=0x00100000003a9de7
@end

