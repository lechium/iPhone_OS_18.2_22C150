//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWindow.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _SUUIClickThroughWindow : UIWindow
{
    UIView *_interactionView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000242e96
@property(retain, nonatomic) UIView *interactionView; // @synthesize interactionView=_interactionView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000242e0b
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000242d07

@end

