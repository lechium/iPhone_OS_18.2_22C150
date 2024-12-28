//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItem, AVQueuePlayer, UIImageView, UIView;

@interface COSAnimatedInsigniaWatchView
{
    _Bool _assetsLoaded;	// 8 = 0x8
    UIView *_deviceInsignia;	// 16 = 0x10
    AVQueuePlayer *_player;	// 24 = 0x18
    AVPlayerItem *_magicCodeOutro;	// 32 = 0x20
    AVPlayerItem *_magicCodeOutroPerMaterial;	// 40 = 0x28
    UIImageView *_overlay;	// 48 = 0x30
    UIImageView *_genericMask;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000066b04
@property(retain, nonatomic) UIImageView *genericMask; // @synthesize genericMask=_genericMask;
@property(retain, nonatomic) UIImageView *overlay; // @synthesize overlay=_overlay;
@property(nonatomic) _Bool assetsLoaded; // @synthesize assetsLoaded=_assetsLoaded;
@property(retain, nonatomic) AVPlayerItem *magicCodeOutroPerMaterial; // @synthesize magicCodeOutroPerMaterial=_magicCodeOutroPerMaterial;
@property(retain, nonatomic) AVPlayerItem *magicCodeOutro; // @synthesize magicCodeOutro=_magicCodeOutro;
@property(retain, nonatomic) AVQueuePlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *deviceInsignia; // @synthesize deviceInsignia=_deviceInsignia;
- (void)moveOutroToInsignia;	// IMP=0x00100000000667a7
- (void)playerItemDidReachEnd:(id)arg1;	// IMP=0x0010000000066575
- (void)_maybePresentInsignia;	// IMP=0x0010000000066406
- (void)addItemWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000661d2
- (void)layoutSubviews;	// IMP=0x0010000000066144
- (void)loadInsigniaAsset;	// IMP=0x0010000000065553
- (_Bool)_verboseMALogging;	// IMP=0x00100000000654d7
- (void)setupInsigniaLayer;	// IMP=0x0010000000065029
- (id)init;	// IMP=0x0010000000064fd8

@end
