//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AutocompleteQueryString, NSMapTable, NSString;
@protocol AutocompleteContextDelegate, OS_dispatch_queue;

@interface AutocompleteContext : NSObject
{
    NSMapTable *_matchInfos;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lock;	// 16 = 0x10
    _Bool _isCJK;	// 24 = 0x18
    NSString *_queryString;	// 32 = 0x20
    AutocompleteQueryString *_query;	// 40 = 0x28
    id <AutocompleteContextDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000007f4aee
@property(nonatomic) __weak id <AutocompleteContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isCJK; // @synthesize isCJK=_isCJK;
@property(readonly, nonatomic) AutocompleteQueryString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)autocompleteMatchInfoDidUpdate:(id)arg1;	// IMP=0x00100000007f4a3f
- (void)setMatchInfo:(id)arg1 forObject:(id)arg2;	// IMP=0x00100000007f48db
- (id)matchInfoForObject:(id)arg1;	// IMP=0x00100000007f4768
- (id)initWithQueryString:(id)arg1;	// IMP=0x00100000007f45f4
- (id)init;	// IMP=0x00100000007f45c9

@end

