//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface SUUIReportAConcernDetailsCell : UITableViewCell
{
    NSString *_placeholderText;	// 8 = 0x8
    UITextView *_textView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000174505
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void)updatePlaceholderText:(_Bool)arg1;	// IMP=0x0000000000174294
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000000174280
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x0000000000174269
@property(readonly, copy, nonatomic) NSString *text;
- (void)layoutSubviews;	// IMP=0x0000000000173d9c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000173c7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

