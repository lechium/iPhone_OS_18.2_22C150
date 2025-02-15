//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class LPAudio, LPLinkMetadata, LPLinkView, NSArray, NSURL, UIContextMenuConfiguration;
@protocol LPAudioPlayer;

@protocol LPLinkViewDelegate <NSObject>

@optional
- (_Bool)_wantsContextMenuPreviewForLinkView:(LPLinkView *)arg1;
- (NSArray *)_contextMenuActionsForLinkView:(LPLinkView *)arg1;
- (UIContextMenuConfiguration *)_linkView:(LPLinkView *)arg1 contextMenuConfigurationForSuggestedConfiguration:(UIContextMenuConfiguration *)arg2;
- (id <LPAudioPlayer>)_linkView:(LPLinkView *)arg1 playerForAudio:(LPAudio *)arg2;
- (NSURL *)_linkView:(LPLinkView *)arg1 overrideURLForOpeningURL:(NSURL *)arg2;
- (void)_linkView:(LPLinkView *)arg1 willOpenURL:(NSURL *)arg2;
- (void)_linkView:(LPLinkView *)arg1 didTapCaptionButtonWithType:(long long)arg2;
- (void)_linkViewMetadataDidBecomeComplete:(LPLinkView *)arg1;
- (void)linkView:(LPLinkView *)arg1 didFetchMetadata:(LPLinkMetadata *)arg2;
- (void)linkViewNeedsResize:(LPLinkView *)arg1;
@end

