//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSArray, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WFCameraFlashButton : UIControl
{
    _Bool _expanded;	// 8 = 0x8
    _Bool _needsHiding;	// 9 = 0x9
    NSArray *_labels;	// 16 = 0x10
    UILabel *_selectedLabel;	// 24 = 0x18
    UIImageView *_flashView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000031ce9
@property(nonatomic) _Bool needsHiding; // @synthesize needsHiding=_needsHiding;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak UIImageView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) long long flashMode;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000319a1
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000316b0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000031640
- (void)didMoveToWindow;	// IMP=0x00000000000315cd
- (void)layoutSubviews;	// IMP=0x000000000003153e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003108b

@end
