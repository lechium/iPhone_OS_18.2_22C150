//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray;
@protocol RestorePodcastItemsOperationDelegate;

@interface RestorePodcastItemsOperation : ISOperation
{
    NSArray *_downloadItems;	// 96 = 0x60
    NSMutableArray *_responses;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000001a1f70
- (id)_newURLOperationForItem:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001a1da8
- (id)_newResponseWithItems:(id)arg1 error:(id)arg2;	// IMP=0x00100000001a1d20
- (id)_addResponseForItem:(id)arg1 operation:(id)arg2;	// IMP=0x00100000001a1a36
- (void)_addResponse:(id)arg1;	// IMP=0x00100000001a1956
- (void)run;	// IMP=0x00100000001a10aa
@property(readonly) NSArray *responses;
@property(readonly) NSArray *downloadItems;
- (id)initWithDownloadItems:(id)arg1;	// IMP=0x00100000001a0fc6

// Remaining properties
@property __weak id <RestorePodcastItemsOperationDelegate> delegate; // @dynamic delegate;

@end

