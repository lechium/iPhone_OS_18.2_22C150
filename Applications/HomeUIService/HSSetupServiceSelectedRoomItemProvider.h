//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemProvider.h>

@class HFItemBuilder, HFRoomBuilderItem;
@protocol HFServiceLikeBuilder;

@interface HSSetupServiceSelectedRoomItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;	// 8 = 0x8
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;	// 16 = 0x10
    HFRoomBuilderItem *_roomBuilderItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000f1c1
@property(retain, nonatomic) HFRoomBuilderItem *roomBuilderItem; // @synthesize roomBuilderItem=_roomBuilderItem;
@property(retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // @synthesize serviceLikeBuilder=_serviceLikeBuilder;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)invalidationReasons;	// IMP=0x000000000000f0e0
- (id)items;	// IMP=0x001000000000f07d
- (id)reloadItems;	// IMP=0x001000000000edca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000ed64
- (id)initWithServiceLikeBuilder:(id)arg1;	// IMP=0x001000000000ecfc
- (id)init;	// IMP=0x001000000000ec46

@end
