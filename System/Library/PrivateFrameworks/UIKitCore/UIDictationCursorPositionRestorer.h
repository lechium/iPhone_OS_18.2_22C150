//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationCursorPositionRestorer : NSObject
{
    unsigned long long __selectionStartOffsetFromBeginningPriorToOperation;	// 8 = 0x8
    unsigned long long __selectionEndOffsetFromEndPriorToOperation;	// 16 = 0x10
    unsigned long long __selectionLengthPriorToOperation;	// 24 = 0x18
}

@property(nonatomic) unsigned long long _selectionLengthPriorToOperation; // @synthesize _selectionLengthPriorToOperation=__selectionLengthPriorToOperation;
@property(nonatomic) unsigned long long _selectionEndOffsetFromEndPriorToOperation; // @synthesize _selectionEndOffsetFromEndPriorToOperation=__selectionEndOffsetFromEndPriorToOperation;
@property(nonatomic) unsigned long long _selectionStartOffsetFromBeginningPriorToOperation; // @synthesize _selectionStartOffsetFromBeginningPriorToOperation=__selectionStartOffsetFromBeginningPriorToOperation;
- (void)_restoreCursorLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000010a4a54
- (void)_withCurrentSelectionOffsets:(CDUnknownBlockType)arg1;	// IMP=0x00000000010a4658
- (void)saveCursorLocationAndRestoreAfterPerforming:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000010a4451

@end

