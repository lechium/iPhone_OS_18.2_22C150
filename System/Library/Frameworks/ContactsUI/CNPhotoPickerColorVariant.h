//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerColorVariant : NSObject
{
    UIColor *_color;	// 8 = 0x8
    NSString *_colorName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001925da
@property(readonly, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001924ab
- (id)initWithColor:(id)arg1 named:(id)arg2;	// IMP=0x0000000000192402

@end

