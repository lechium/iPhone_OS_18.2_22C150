//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class PDFPageLabelViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLabelView : UIView
{
    PDFPageLabelViewPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008f906
- (void)_startFade;	// IMP=0x000000000008f88f
- (void)updateEffect;	// IMP=0x000000000008f7da
- (void)setCurrentPageNumber:(unsigned long long)arg1 forPageCount:(unsigned long long)arg2;	// IMP=0x000000000008f728
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008f323

@end
