//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKEventDetailCell;

__attribute__((visibility("hidden")))
@interface EKEventTextDetailItem
{
    EKEventDetailCell *_cell;	// 48 = 0x30
    _Bool _cellNeedsUpdate;	// 56 = 0x38
}

+ (CDUnknownBlockType)textFromEventBlock;	// IMP=0x00100000002395ee
+ (id)titleForCell;	// IMP=0x00100000002395c7
+ (id)titleForExtendedViewController;	// IMP=0x00100000002395a0
- (void).cxx_destruct;	// IMP=0x000000000000563f
- (void)requestShowCellDetail;	// IMP=0x000000000000550a
- (_Bool)requiresLayoutForSubitemCount;	// IMP=0x0000000000005502
- (id)_createEventDetailCell;	// IMP=0x0000000000005434
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000053ce
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x000000000000534a
- (void)_updateCellIfNeeded;	// IMP=0x000000000000529a
- (unsigned long long)numberOfSubitems;	// IMP=0x000000000000528f
- (void)setCellPosition:(int)arg1;	// IMP=0x0000000000005253
- (void)reset;	// IMP=0x0000000000005232
- (id)textForCopyAction;	// IMP=0x000000000023963c
- (id)textForExtendedViewController;	// IMP=0x0000000000239615

@end
