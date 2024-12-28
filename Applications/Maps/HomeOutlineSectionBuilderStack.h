//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IdentifierPath, NSArray, NSMutableArray;

@interface HomeOutlineSectionBuilderStack : NSObject
{
    NSMutableArray *_items;	// 8 = 0x8
    NSMutableArray *_identifiers;	// 16 = 0x10
    NSMutableArray *_indices;	// 24 = 0x18
    IdentifierPath *_topIdentifierPath;	// 32 = 0x20
    unsigned long long _depth;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000d7b2b0
@property(readonly, nonatomic) NSArray *indices; // @synthesize indices=_indices;
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) long long topIndex;
@property(readonly, nonatomic) IdentifierPath *topIdentifierPath;
@property(readonly, nonatomic) id parentItem;
- (void)_pop;	// IMP=0x0010000000d7b0f5
- (void)_setTopIdentifier:(id)arg1;	// IMP=0x0010000000d7b0af
- (void)_pushItem:(id)arg1 index:(long long)arg2;	// IMP=0x0010000000d7b013
- (id)initWithSectionIdentifier:(id)arg1 sectionIndex:(long long)arg2;	// IMP=0x0010000000d7ae0c

@end
