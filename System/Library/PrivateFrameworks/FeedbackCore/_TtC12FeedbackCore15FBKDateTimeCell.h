//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class FBKAnswer, FBKQuestion, MISSING_TYPE, NSString, UIDatePicker, UILabel;
@protocol FBKBugFormEditorDelegate;

@interface _TtC12FeedbackCore15FBKDateTimeCell : UITableViewCell
{
    MISSING_TYPE *itemIdentifier;	// 8 = 0x8
    MISSING_TYPE *questionLabel;	// 24 = 0x18
    MISSING_TYPE *datePicker;	// 32 = 0x20
    MISSING_TYPE *editorDelegate;	// 40 = 0x28
    MISSING_TYPE *question;	// 48 = 0x30
    MISSING_TYPE *answer;	// 56 = 0x38
}

+ (id)reuseIdentifier;	// IMP=0x00100000000ecb80
- (void).cxx_destruct;	// IMP=0x00000000000edca0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000edc40
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000edb10
- (void)dateDidChange:(id)arg1;	// IMP=0x00000000000ed960
@property(nonatomic, retain) FBKAnswer *answer; // @synthesize answer;
@property(nonatomic, retain) FBKQuestion *question; // @synthesize question;
- (void)awakeFromNib;	// IMP=0x00000000000ecb30
@property(nonatomic) __weak id <FBKBugFormEditorDelegate> editorDelegate; // @synthesize editorDelegate;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker;
@property(nonatomic) __weak UILabel *questionLabel; // @synthesize questionLabel;
@property(nonatomic, copy) NSString *itemIdentifier;

@end
