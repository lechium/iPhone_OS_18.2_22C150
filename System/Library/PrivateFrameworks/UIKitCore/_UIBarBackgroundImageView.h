//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundImageView : UIImageView
{
    UIView *_topStripView;	// 160 = 0xa0
    UIImageView *_customImageContainer;	// 168 = 0xa8
    _Bool _translucent;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000041ccd2
@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
- (id)image;	// IMP=0x000000000041cc44
- (void)setImage:(id)arg1;	// IMP=0x000000000041cbea
- (void)removeTopStripView;	// IMP=0x000000000041ca3a
- (void)updateTopStripViewCreateIfNecessary;	// IMP=0x000000000041c759
- (id)topStripView;	// IMP=0x000000000041c744

@end

