//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;

@interface CarTaitStyleView : UIView
{
    UILabel *_traitStyleLabel;	// 8 = 0x8
    struct CGSize _contentSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000a95e
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UILabel *traitStyleLabel; // @synthesize traitStyleLabel=_traitStyleLabel;
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000000a8f7
- (void)_refreshStyleText:(unsigned long long)arg1;	// IMP=0x001000000000a7d9
- (void)didMoveToWindow;	// IMP=0x001000000000a7c5
- (_Bool)canBecomeFocused;	// IMP=0x001000000000a7bd
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000000a73a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000000a189

@end
