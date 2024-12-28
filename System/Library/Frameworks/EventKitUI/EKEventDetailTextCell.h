//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class EKEventDetailTextCellHeader, NSString, UITextView;
@protocol EKEventDetailTextCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailTextCell : EKEventDetailCell
{
    CDUnknownBlockType _textFromEventBlock;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    EKEventDetailTextCellHeader *_headerView;	// 40 = 0x28
    UITextView *_sizingTextView;	// 48 = 0x30
    UITextView *_textView;	// 56 = 0x38
    _Bool _isTruncatingText;	// 64 = 0x40
    id <EKEventDetailTextCellDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001c5133
@property(nonatomic) __weak id <EKEventDetailTextCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isTruncatingText; // @synthesize isTruncatingText=_isTruncatingText;
- (void)cellHeaderTapped;	// IMP=0x00000000001c50b9
- (void)layoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x00000000001c4fa3
- (struct CGSize)_sizeForTextViewGivenWidth:(double)arg1 outTruncatingText:(_Bool *)arg2;	// IMP=0x00000000001c4ca7
- (double)_layoutForWidth:(double)arg1;	// IMP=0x00000000001c4966
- (void)layoutSubviews;	// IMP=0x00000000001c4905
- (void)setIsTruncatingText:(_Bool)arg1;	// IMP=0x00000000001c4828
- (id)_headerView;	// IMP=0x00000000001c476f
- (id)_sizingTextView;	// IMP=0x00000000001c4722
- (id)_textView;	// IMP=0x00000000001c468d
- (id)_createNewTextView;	// IMP=0x00000000001c4523
- (_Bool)update;	// IMP=0x00000000001c4282
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 title:(id)arg3 textFromEventBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c417f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
