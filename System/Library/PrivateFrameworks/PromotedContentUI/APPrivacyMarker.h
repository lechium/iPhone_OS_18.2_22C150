//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class MISSING_TYPE;

@interface APPrivacyMarker : UIButton
{
    MISSING_TYPE *markerLabel;	// 8 = 0x8
    MISSING_TYPE *markerView;	// 16 = 0x10
    MISSING_TYPE *privacyMarkerType;	// 24 = 0x18
    MISSING_TYPE *privacyMarkerPosition;	// 32 = 0x20
    MISSING_TYPE *minimumTappableSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a6c00
- (void)sizeCategoryChanged:(id)arg1;	// IMP=0x00000000000a65b0
- (void)systemColorStatusChanged:(id)arg1;	// IMP=0x00000000000a6530
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a5ff0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a5fc0
- (id)init;	// IMP=0x00000000000a5db0
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end
