//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MapsBannerContent, UIStackView;

@interface MapsBannerContentView : UIView
{
    UIStackView *_vStack;	// 8 = 0x8
    _Bool _centerBodyContent;	// 16 = 0x10
    MapsBannerContent *_content;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a14ac2
@property(retain, nonatomic) MapsBannerContent *content; // @synthesize content=_content;
@property(nonatomic) _Bool centerBodyContent; // @synthesize centerBodyContent=_centerBodyContent;
- (id)accessibilityIdentifier;	// IMP=0x0010000000a14a8f
- (id)_topView:(id)arg1;	// IMP=0x0010000000a14942
- (id)_bodyContentView:(id)arg1;	// IMP=0x0010000000a1474e
- (id)_bodyView:(id)arg1;	// IMP=0x0010000000a13ea2
- (void)_updateContent;	// IMP=0x0010000000a13e85

@end

