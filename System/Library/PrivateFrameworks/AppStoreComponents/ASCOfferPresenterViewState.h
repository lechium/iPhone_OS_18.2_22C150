//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCOfferMetadata, ASCOfferTheme;

__attribute__((visibility("hidden")))
@interface ASCOfferPresenterViewState : NSObject
{
    ASCOfferMetadata *_metadata;	// 8 = 0x8
    ASCOfferTheme *_theme;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000060436
@property(readonly, copy, nonatomic) ASCOfferTheme *theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) ASCOfferMetadata *metadata; // @synthesize metadata=_metadata;
- (id)description;	// IMP=0x0000000000060346
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000601a3
- (unsigned long long)hash;	// IMP=0x00000000000600f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000600e6
- (id)initWithMetadata:(id)arg1 theme:(id)arg2;	// IMP=0x000000000006002d

@end

