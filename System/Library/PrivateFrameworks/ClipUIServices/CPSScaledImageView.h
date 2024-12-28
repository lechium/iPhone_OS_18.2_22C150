//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPSScaledImageView : UIImageView
{
    struct CGSize _scaledImageSize;	// 8 = 0x8
    _Bool _needsUpdateScaledImageSize;	// 24 = 0x18
    NSString *_textStyleForScaling;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000011b51
@property(retain, nonatomic) NSString *textStyleForScaling; // @synthesize textStyleForScaling=_textStyleForScaling;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000119b9
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000000001197d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001188c

@end
