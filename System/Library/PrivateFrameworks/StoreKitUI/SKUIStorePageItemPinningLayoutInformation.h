//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIStorePageItemPinningLayoutInformation : NSObject
{
    double _afterPinningLocationYAdditions;	// 8 = 0x8
    double _beforePinningLocationYAdditions;	// 16 = 0x10
    struct CGRect _availablePinningFrame;	// 24 = 0x18
    struct CGRect _layoutAttributesFrame;	// 56 = 0x38
}

@property(nonatomic) double beforePinningLocationYAdditions; // @synthesize beforePinningLocationYAdditions=_beforePinningLocationYAdditions;
@property(nonatomic) double afterPinningLocationYAdditions; // @synthesize afterPinningLocationYAdditions=_afterPinningLocationYAdditions;
@property(nonatomic) struct CGRect layoutAttributesFrame; // @synthesize layoutAttributesFrame=_layoutAttributesFrame;
@property(nonatomic) struct CGRect availablePinningFrame; // @synthesize availablePinningFrame=_availablePinningFrame;

@end
