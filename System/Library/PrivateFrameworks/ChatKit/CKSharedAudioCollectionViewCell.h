//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAudioProgressView, UIDateLabel;

__attribute__((visibility("hidden")))
@interface CKSharedAudioCollectionViewCell
{
    CKAudioProgressView *_audioPlaybackView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x0060000000510ad2
- (void).cxx_destruct;	// IMP=0x0000000000510ff8
@property(retain, nonatomic) CKAudioProgressView *audioPlaybackView; // @synthesize audioPlaybackView=_audioPlaybackView;
- (void)layoutSubviews;	// IMP=0x0000000000510e05
- (id)formattedCreatedDateTextFromDate:(id)arg1;	// IMP=0x0000000000510d45
- (id)formattedDurationTextForAsset:(id)arg1;	// IMP=0x0000000000510c7f
- (void)configureWithAttachmentItem:(id)arg1;	// IMP=0x0000000000510adf

// Remaining properties
@property(retain, nonatomic) UIDateLabel *previewTitleLabel; // @dynamic previewTitleLabel;

@end
