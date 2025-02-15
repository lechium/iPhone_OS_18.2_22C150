//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol LPComponentViewHost;

__attribute__((visibility("hidden")))
@interface LPComponentView : UIView
{
    id <LPComponentViewHost> _host;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cd8e2
@property(readonly, nonatomic) __weak id <LPComponentViewHost> host; // @synthesize host=_host;
- (id)layoutExclusionsForView:(id)arg1;	// IMP=0x00000000000cd8bc
- (_Bool)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg1;	// IMP=0x00000000000cd8b4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000cd8ae
- (void)componentViewDidMoveToWindow;	// IMP=0x00000000000cd8a8
- (void)layoutComponentView;	// IMP=0x00000000000cd8a2
- (void)didMoveToWindow;	// IMP=0x00000000000cd890
- (void)layoutSubviews;	// IMP=0x00000000000cd7ec
- (_Bool)isFlipped;	// IMP=0x00000000000cd7e4
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000cd73b
- (id)init;	// IMP=0x00000000000cd72d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cd71f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000cd711

@end

