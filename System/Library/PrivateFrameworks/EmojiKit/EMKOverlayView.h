//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EMKEmojiTokenList;

__attribute__((visibility("hidden")))
@interface EMKOverlayView : UIView
{
    unsigned long long _numEmojiToShow;	// 8 = 0x8
    EMKEmojiTokenList *_emojiTokenList;	// 16 = 0x10
    struct CGRect _overlayRect;	// 24 = 0x18
    unsigned long long _selectedIndex;	// 56 = 0x38
    CDUnknownBlockType _selectionHandler;	// 64 = 0x40
    long long _interfaceStyle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000040ad
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000003f6c
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000003f57
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000003f42
- (void)selectWithEvent:(id)arg1;	// IMP=0x0000000000003e11
- (void)dismiss;	// IMP=0x0000000000003dfd
- (void)dismissWithSelectedEmojiToken:(id)arg1;	// IMP=0x0000000000003dcd
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000003d86
- (void)drawForeground:(struct CGRect)arg1;	// IMP=0x0000000000003b5f
- (void)drawBackground:(struct CGRect)arg1;	// IMP=0x00000000000038bc
- (void)setView:(id)arg1 anchorRect:(struct CGRect)arg2;	// IMP=0x000000000000368a
- (id)initWithView:(id)arg1 anchorRect:(struct CGRect)arg2 emojiTokenList:(id)arg3 selectionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000310a

@end

