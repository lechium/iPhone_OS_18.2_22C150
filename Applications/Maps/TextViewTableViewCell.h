//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UITextView;

@interface TextViewTableViewCell : UITableViewCell
{
    UITextView *_textView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000085464c
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setupConstraints;	// IMP=0x0010000000854216
- (void)configureToolbar;	// IMP=0x00100000008540a5
- (void)doneButtonTapped:(id)arg1;	// IMP=0x0010000000854068
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0010000000854017
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000853f2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
