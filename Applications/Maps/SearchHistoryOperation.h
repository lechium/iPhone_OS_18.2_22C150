//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSArray, NSString;
@protocol SearchHistoryOperationDelegate;

@interface SearchHistoryOperation : NSOperation
{
    NSString *_searchQuery;	// 8 = 0x8
    unsigned int _searchMode;	// 16 = 0x10
    NSArray *_history;	// 24 = 0x18
    id <SearchHistoryOperationDelegate> _delegate;	// 32 = 0x20
    AutocompleteContext *_context;	// 40 = 0x28
    _Bool _isExecuting;	// 48 = 0x30
    _Bool _isFinished;	// 49 = 0x31
    struct os_unfair_lock_s _stateLock;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0020000000a8876b
@property(nonatomic) __weak id <SearchHistoryOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setExecuting:(_Bool)arg1;	// IMP=0x0010000000a886cb
- (void)setFinished:(_Bool)arg1;	// IMP=0x0010000000a88658
- (_Bool)isExecuting;	// IMP=0x0010000000a88623
- (_Bool)isFinished;	// IMP=0x0010000000a885ee
- (id)_historyResultsForSearchQuery:(id)arg1 searchMode:(unsigned int)arg2;	// IMP=0x0010000000a87703
- (id)shortAddressForMapItem:(id)arg1;	// IMP=0x0010000000a8767a
- (_Bool)_removeCompletionItemForStringKey:(id)arg1 query:(id)arg2 fromCompletions:(id)arg3;	// IMP=0x0010000000a875b2
- (void)main;	// IMP=0x0010000000a872c5
- (id)initWithSearchQuery:(id)arg1 searchMode:(unsigned int)arg2 history:(id)arg3 context:(id)arg4;	// IMP=0x0010000000a871dd

@end

