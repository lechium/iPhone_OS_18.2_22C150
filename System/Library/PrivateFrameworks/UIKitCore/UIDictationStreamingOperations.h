//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIDictationStreamingOperations : NSObject
{
    double _timeAfterInsertion;	// 8 = 0x8
    double _timeAfterSelectRange;	// 16 = 0x10
    id <UITextInput> _document;	// 24 = 0x18
    NSMutableArray *_operations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000f48ba7
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (unsigned long long)selectionChangeDelta;	// IMP=0x0000000000f48a49
- (_Bool)isNotEmpty;	// IMP=0x0000000000f48a01
- (_Bool)isEmpty;	// IMP=0x0000000000f489b9
- (void)willEndEditingInInputDelegate:(id)arg1;	// IMP=0x0000000000f48892
- (void)pushReplaceSelectionWithText:(id)arg1;	// IMP=0x0000000000f4868f
- (void)_performReplaceSelectedText:(id)arg1;	// IMP=0x0000000000f48532
- (void)pushInsertTextForSpeech:(id)arg1;	// IMP=0x0000000000f4834e
- (void)pushSelectRangeForSpeech:(struct _NSRange)arg1;	// IMP=0x0000000000f4817d
- (void)dictationWillBeginInDocument:(id)arg1;	// IMP=0x0000000000f4816b
- (void)setDocument:(id)arg1;	// IMP=0x0000000000f48118
- (void)performSelectRangeForSpeech:(struct _NSRange)arg1;	// IMP=0x0000000000f4801b
- (void)pushSpeechOperationWithSelectionChangeDelta:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f47f72
- (void)pushSpeechOperation:(id)arg1;	// IMP=0x0000000000f47f09
- (void)popAndInvoke;	// IMP=0x0000000000f47e5e
- (double)delayAfterSelector:(SEL)arg1;	// IMP=0x0000000000f47d92
- (id)pop;	// IMP=0x0000000000f47cbf
- (_Bool)hasOperations;	// IMP=0x0000000000f47c77
- (void)clearOperations;	// IMP=0x0000000000f47c0e
- (id)init;	// IMP=0x0000000000f47b71

@end
