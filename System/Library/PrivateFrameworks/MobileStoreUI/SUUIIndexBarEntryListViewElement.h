//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SUUIIndexBarEntryListViewElement : SUUIViewElement
{
    _Bool _indexBarHiddenWhenEmpty;	// 8 = 0x8
    long long _entryListElementType;	// 16 = 0x10
    long long _minimumEntityCount;	// 24 = 0x18
    NSString *_targetIndexBarEntryID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000110041
@property(readonly, copy, nonatomic) NSString *targetIndexBarEntryID; // @synthesize targetIndexBarEntryID=_targetIndexBarEntryID;
@property(readonly, nonatomic) long long minimumEntityCount; // @synthesize minimumEntityCount=_minimumEntityCount;
@property(readonly, nonatomic, getter=isIndexBarHiddenWhenEmpty) _Bool indexBarHiddenWhenEmpty; // @synthesize indexBarHiddenWhenEmpty=_indexBarHiddenWhenEmpty;
@property(readonly, nonatomic) long long entryListElementType; // @synthesize entryListElementType=_entryListElementType;
@property(readonly, copy, nonatomic) NSArray *childIndexBarEntryElements;
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000010fd6f
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000010fbba

@end
