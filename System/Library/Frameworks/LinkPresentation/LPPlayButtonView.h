//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPAudioPlayButtonStyle, LPInlineMediaPlaybackInformation, LPPlayButtonControl, LPPlayButtonPresentationProperties;

__attribute__((visibility("hidden")))
@interface LPPlayButtonView
{
    LPPlayButtonControl *_button;	// 8 = 0x8
    LPInlineMediaPlaybackInformation *_playbackInformation;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    LPAudioPlayButtonStyle *_style;	// 56 = 0x38
    _Bool _hasBuilt;	// 64 = 0x40
    LPPlayButtonPresentationProperties *_properties;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000b10fd
- (id)playable;	// IMP=0x00000000000b10e0
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000b10c2
- (void)layoutComponentView;	// IMP=0x00000000000b101d
- (void)updateButton;	// IMP=0x00000000000b0fc2
- (void)updateButtonForAudioFile;	// IMP=0x00000000000b0f5b
- (void)installAudioButton;	// IMP=0x00000000000b0d77
- (void)updateButtonForPodcast;	// IMP=0x00000000000b0c7a
- (void)updateButtonForAudioBook;	// IMP=0x00000000000b0b9b
- (void)updateButtonForRadio;	// IMP=0x00000000000b0ac2
- (void)updateButtonForSongOrAlbum;	// IMP=0x00000000000b098c
- (void)installPreviewButton;	// IMP=0x00000000000b0754
- (void)installDisablediTunesButton;	// IMP=0x00000000000b06e5
- (void)installiTunesButton;	// IMP=0x00000000000b04bb
- (void)installPlaceholderButton;	// IMP=0x00000000000b03ec
- (id)theme;	// IMP=0x00000000000b00d8
- (_Bool)isLyricStyle;	// IMP=0x00000000000b006c
- (void)dealloc;	// IMP=0x00000000000affbc
- (void)buildSubviewsIfNeeded;	// IMP=0x00000000000afe11
- (id)initWithHost:(id)arg1 playbackInformation:(id)arg2 style:(id)arg3 properties:(id)arg4;	// IMP=0x00000000000afd0a
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000afcfc

@end
