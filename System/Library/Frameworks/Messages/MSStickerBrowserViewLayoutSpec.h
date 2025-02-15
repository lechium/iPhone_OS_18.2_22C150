//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MSStickerBrowserViewLayoutSpec : NSObject
{
    long long _stickerSize;	// 8 = 0x8
    long long _interfaceOrientation;	// 16 = 0x10
    struct CGSize _itemSize;	// 24 = 0x18
}

+ (id)specWithSizeClass:(long long)arg1 interfaceOrientation:(long long)arg2;	// IMP=0x006000000001cb8f
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) long long stickerSize; // @synthesize stickerSize=_stickerSize;
@property(readonly, nonatomic) struct UIEdgeInsets sectionInset;
@property(readonly, nonatomic) double minimumInteritemSpacing;
@property(readonly, nonatomic) double minimumLineSpacing;
- (id)initWithSize:(long long)arg1 interfaceOrientation:(long long)arg2;	// IMP=0x000000000001cc63

@end

