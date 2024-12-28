//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardBIUImageGenerator : NSObject
{
    _Bool _useButtonShapes;	// 8 = 0x8
    UIImage *_biuBoldImage;	// 16 = 0x10
    UIImage *_biuItalicImage;	// 24 = 0x18
    UIImage *_biuUnderlineImage;	// 32 = 0x20
    NSMutableDictionary *_imageCache;	// 40 = 0x28
    UIColor *_tintColor;	// 48 = 0x30
    UIColor *_normalColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000001030070
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (id)BIUImageForBold:(_Bool)arg1 italic:(_Bool)arg2 underline:(_Bool)arg3;	// IMP=0x000000000102fe6a
- (void)_drawBIUAtSize:(struct CGSize)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3 underline:(_Bool)arg4;	// IMP=0x000000000102fbb9
- (void)_accessibilitySettingsChanged:(id)arg1;	// IMP=0x000000000102fb81
- (void)_invalidateCache;	// IMP=0x000000000102faa5
- (id)init;	// IMP=0x000000000102f912

@end
