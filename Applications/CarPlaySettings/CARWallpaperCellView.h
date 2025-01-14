//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CARSession, CRSUIWallpaperPreferences, NSString, UIImage;
@protocol CRSUIWallpaper;

@interface CARWallpaperCellView : UIView
{
    _Bool _cellFocused;	// 8 = 0x8
    _Bool cellHighlighted;	// 9 = 0x9
    _Bool cellSelected;	// 10 = 0xa
    CARSession *_carSession;	// 16 = 0x10
    id <CRSUIWallpaper> _wallpaper;	// 24 = 0x18
    CRSUIWallpaperPreferences *_wallpaperPreferences;	// 32 = 0x20
    UIImage *_backgroundImage;	// 40 = 0x28
    UIView *_focusRingView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000014dc4
@property(retain, nonatomic) UIView *focusRingView; // @synthesize focusRingView=_focusRingView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) CRSUIWallpaperPreferences *wallpaperPreferences; // @synthesize wallpaperPreferences=_wallpaperPreferences;
@property(retain, nonatomic) id <CRSUIWallpaper> wallpaper; // @synthesize wallpaper=_wallpaper;
@property(retain, nonatomic) CARSession *carSession; // @synthesize carSession=_carSession;
@property(nonatomic, getter=isCellSelected) _Bool cellSelected; // @synthesize cellSelected;
@property(nonatomic, getter=isCellHighlighted) _Bool cellHighlighted; // @synthesize cellHighlighted;
@property(nonatomic, getter=isCellFocused) _Bool cellFocused; // @synthesize cellFocused=_cellFocused;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000014b63
- (_Bool)canBecomeFocused;	// IMP=0x0010000000014b5b
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00100000000149b3
- (id)initWithWallpaper:(id)arg1 wallpaperPreferences:(id)arg2;	// IMP=0x0010000000013cd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

