//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLItem, QLPreviewItemStore;

@protocol QLPreviewItemStoreDelegate
- (long long)itemStore:(QLPreviewItemStore *)arg1 editingModeForPreviewItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canMachineReadableCodeBeDetectedInPreviewItem:(QLItem *)arg2;
- (unsigned long long)itemStore:(QLPreviewItemStore *)arg1 editedFileBehaviorForItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canHandleEditedCopyOfPreviewItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canEditItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canShareItem:(QLItem *)arg2;
@end
