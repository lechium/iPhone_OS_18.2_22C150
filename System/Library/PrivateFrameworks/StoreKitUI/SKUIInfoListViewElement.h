//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

__attribute__((visibility("hidden")))
@interface SKUIInfoListViewElement : SKUIViewElement
{
    long long _infoListType;	// 8 = 0x8
}

@property(readonly, nonatomic) long long infoListType; // @synthesize infoListType=_infoListType;
- (long long)pageComponentType;	// IMP=0x00000000001fea76
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fe985
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000001fe8ed
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000001fe7b1

@end
