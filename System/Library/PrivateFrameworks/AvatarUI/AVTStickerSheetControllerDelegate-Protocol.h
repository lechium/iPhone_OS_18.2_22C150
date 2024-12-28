//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTUIStickerItem, MSSticker, NSString, NSURL, UIScrollView;
@protocol AVTAvatarRecord, AVTStickerSheetController;

@protocol AVTStickerSheetControllerDelegate <NSObject>
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didFinishRenderingStickersForRecord:(id <AVTAvatarRecord>)arg2;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didInteractWithStickerItem:(AVTUIStickerItem *)arg2 atIndex:(long long)arg3 byPeeling:(_Bool)arg4;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 scrollView:(UIScrollView *)arg2 willEndDraggingWithTargetContentOffset:(inout struct CGPoint *)arg3;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didScrollToContentOffset:(struct CGPoint)arg2;

@optional
- (MSSticker *)stickerSheetController:(id <AVTStickerSheetController>)arg1 requestsStickerForFileURL:(NSURL *)arg2 localizedDescription:(NSString *)arg3 forItemWithIdentifier:(NSString *)arg4;
@end
