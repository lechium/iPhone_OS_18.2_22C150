//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber;
@protocol UIFocusItem;

@interface CarFocusOrderItem : NSObject
{
    _Bool _flipForRHD;	// 8 = 0x8
    id <UIFocusItem> _focusItem;	// 16 = 0x10
    NSNumber *_representativeItemTypeNumber;	// 24 = 0x18
}

+ (id)itemWithRepresentativeItemType:(unsigned long long)arg1;	// IMP=0x0040000000bc6ec6
+ (MISSING_TYPE *)itemWithFocusItem: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000bc6e5c
- (void).cxx_destruct;	// IMP=0x0020000000bc70a8
@property(retain, nonatomic) NSNumber *representativeItemTypeNumber; // @synthesize representativeItemTypeNumber=_representativeItemTypeNumber;
@property(nonatomic) _Bool flipForRHD; // @synthesize flipForRHD=_flipForRHD;
@property(retain, nonatomic) id <UIFocusItem> focusItem; // @synthesize focusItem=_focusItem;
- (void)ifFocusItem:(CDUnknownBlockType)arg1 ifRepresentativeItem:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bc6fea
- (id)itemFlippedForRHD;	// IMP=0x0010000000bc6f70
@property(readonly, nonatomic) unsigned long long representativeItemType;

@end

