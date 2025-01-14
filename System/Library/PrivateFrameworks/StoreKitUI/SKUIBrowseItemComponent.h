//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSString, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemComponent : SKUIPageComponent
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    long long _index;	// 24 = 0x18
    SKUIImageViewElement *_decorationImage;	// 32 = 0x20
    _Bool _showTopBorder;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000022ae26
@property(readonly, nonatomic) SKUIImageViewElement *decorationImage; // @synthesize decorationImage=_decorationImage;
@property(nonatomic) _Bool showTopBorder; // @synthesize showTopBorder=_showTopBorder;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (long long)componentType;	// IMP=0x000000000022ada6
- (id)initWithViewElement:(id)arg1;	// IMP=0x000000000022ab92

@end

