//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SearchResult;

@interface CustomSearchResultHistoryItem : NSObject
{
    SearchResult *_customSearchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000004fcb0e
@property(readonly, nonatomic) SearchResult *customSearchResult; // @synthesize customSearchResult=_customSearchResult;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004fcaab
@property(readonly, nonatomic) double timestamp;
- (id)initWithSearchResult:(id)arg1;	// IMP=0x00100000004fca17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

