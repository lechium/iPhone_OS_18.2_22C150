//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSArray, NSMutableArray, SKUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SKUITracklistViewElement : SKUIViewElement
{
    NSMutableArray *_sections;	// 8 = 0x8
    NSMutableArray *_tracks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000028a86b
- (long long)pageComponentType;	// IMP=0x000000000028a81d
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000028a724
@property(readonly, nonatomic) NSArray *tracks;
@property(readonly, nonatomic) NSArray *sections;
@property(readonly, nonatomic) SKUIHeaderViewElement *header;
- (void)enumerateTracksUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000028a0ba

@end
