//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class AKCalloutBar;

@interface AKCalloutButton : UIButton
{
    int _position;	// 8 = 0x8
    AKCalloutBar *_bar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002aee
@property(nonatomic) __weak AKCalloutBar *bar; // @synthesize bar=_bar;
@property(nonatomic) int position; // @synthesize position=_position;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000002a28
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000029a4

@end

