//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@class QLItem, QLListCell;
@protocol QLListCellDataGenerationOperationDelegate;

__attribute__((visibility("hidden")))
@interface QLListCellDataGenerationOperation : QLAsynchronousOperation
{
    _Bool _didGenerateThumbnail;	// 10 = 0xa
    _Bool _didGenerateSubtitleInformation;	// 11 = 0xb
    unsigned long long _index;	// 16 = 0x10
    QLListCell *_cell;	// 24 = 0x18
    QLItem *_item;	// 32 = 0x20
    id <QLListCellDataGenerationOperationDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003954e
@property(nonatomic) __weak id <QLListCellDataGenerationOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QLItem *item; // @synthesize item=_item;
@property(nonatomic) __weak QLListCell *cell; // @synthesize cell=_cell;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)_didDetermineFileSize:(id)arg1 fileTypeString:(id)arg2;	// IMP=0x00000000000393d0
- (void)_didGenerateThumbnail:(id)arg1;	// IMP=0x0000000000039312
- (void)_finishIfNeeded;	// IMP=0x00000000000392e4
- (void)main;	// IMP=0x00000000000390a7
- (id)initWithListCell:(id)arg1 index:(unsigned long long)arg2 item:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000038fc2

@end

